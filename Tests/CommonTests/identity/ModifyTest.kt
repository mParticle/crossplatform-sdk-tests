package com.mparticle.identity

import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityType
import com.mparticle.api.mParticle
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.mockserver.EndpointType
import com.mparticle.mockserver.MockServerWrapper
import com.mparticle.mockserver.SuccessResponse
import com.mparticle.mockserver.modifyMpid
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.FailureLatch
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertNull

class ModifyTest: BaseStartedTest() {

    @Test
    fun testModifyRequestAddNewIds() {
        val latch = FailureLatch()
        val modifyRequest = IdentityApiRequest {
            identities = mapOf(
                IdentityType.Facebook to "my fb",
                IdentityType.Microsoft to "hotmailUser",
                IdentityType.Other4 to "foo bar"

            )
        }
        mParticle.identity.modify(modifyRequest).addSuccessListener { newUser, previousUser ->
            assertEquals(modifyRequest.identities.size, newUser.getUserIdentities().size)
            modifyRequest.identities.forEach {
                assertEquals(it.value, newUser.getUserIdentities()[it.key])
            }
            latch.countDown()
        }
        latch.await()
    }

    @Test
    fun testModifyRequestWithCurrentUserChangeExistingIds() {
        val latch = FailureLatch()
        assertEquals(mStartingMpid, mParticle.identity.currentUser?.mpid)
        val modifyRequest = IdentityApiRequest {
            identities = mapOf(
                IdentityType.Other4 to "foo bar",
                IdentityType.Facebook to "my fb",
                IdentityType.Microsoft to "hotmailUser"
            )
        }
        val identifyIdentities = mapOf(
            IdentityType.Other4 to "fuzz baz",
            IdentityType.Google to "me@gmail.com",
            IdentityType.Microsoft to null
        )
        mParticle.identity.apply {
            modify(modifyRequest).addSuccessListener { newUser, _ ->
                modify(IdentityApiRequest(newUser) {
                    identities = identifyIdentities
                })
                MockServerWrapper.endpoint(EndpointType.Identity_Modify).onRequestFinishedBlocking {
                    assertEquals(newUser.mpid, it.modifyMpid())
                    assertEquals(3, it.body.identityChanges?.size ?: 0)
                    it.body.identityChanges.let { identityChanges ->
                        assertNotNull(identityChanges)
                        identityChanges
                            .first {
                                it.identityType == IdentityType.Other4.name.toLowerCase()
                            }
                            .let {
                                assertEquals(modifyRequest.identities[IdentityType.Other4], it.oldValue)
                                assertEquals(identifyIdentities[IdentityType.Other4], it.newValue)
                            }
                        identityChanges
                            .first {
                                it.identityType == IdentityType.Microsoft.name.toLowerCase()
                            }
                            .let {
                                assertEquals(modifyRequest.identities[IdentityType.Microsoft], it.oldValue)
                                assertNull(it.newValue)
                            }
                        true
                    }
                }
                latch.countDown()
            }
        }
        latch.await()
    }

//    @Test
    fun generateUIC() {
        mParticle.identity.modify(
            IdentityApiRequest {
                identities  = mapOf(IdentityType.Google to "me@gmail.com")
            }
        )
            .addSuccessListener { newUser, previousUser ->
                mParticle.upload()
                MockServerWrapper.endpoint(EndpointType.Events).onRequestFinishedBlocking {
                    true
                }
            }
    }

    @Test
    fun testModifyUpdatesIdChangeForNonCurrentUser() {
        val latch = FailureLatch()
        MockServerWrapper.endpoint(EndpointType.Identity_Identify).nextResponse {
            SuccessResponse {
                httpCode = 200
                responseObject = IdentityResponseMessage {
                    mpid = 1
                }
            }
        }

        val modifyIdentities = mapOf(
                IdentityType.Other10 to "foo",
                IdentityType.CustomerId to "1234"
            )

        mParticle.identity.apply {
           identify().addSuccessListener { newUser, previousUser ->
               assertEquals(1, newUser.mpid)
               modify(IdentityApiRequest(getUser(mStartingMpid)) {
                   identities = modifyIdentities
               })
               MockServerWrapper.endpoint(EndpointType.Identity_Modify).onRequestFinishedBlocking {
                    assertEquals(mStartingMpid, it.modifyMpid())
                   it.body.identityChanges.let { identityChanges ->
                       assertNotNull(identityChanges)
                       assertEquals(2, identityChanges.size)
                       modifyIdentities.forEach { (identityType, value) ->
                           identityChanges
                               .first { it.identityType == identityType.name.toLowerCase() }
                               .let { identityChange ->
                                   assertEquals(value, identityChange.newValue)
                                   assertNull(identityChange.oldValue)
                               }

                       }
                   }
                   true
               }
               latch.countDown()
               true
           }
        }
        latch.await()
    }
}