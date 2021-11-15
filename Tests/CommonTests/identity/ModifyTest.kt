package com.mparticle.identity

import com.mparticle.api.Logger
import com.mparticle.api.Platform
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityType
import com.mparticle.api.mParticle
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.mockserver.*
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.FailureLatch
import com.mparticle.testing.assertPlatformDifference
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
                assertEquals(it.value, newUser.getUserIdentities()[it.key], "Identity not found: ${it.key}")
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
        var newMpid: Long? = null
        mParticle.identity.modify(modifyRequest).addSuccessListener { newUser, _ ->
            newMpid = newUser.mpid
            latch.countDown()
        }
        latch.await()

        //sanity check, make sure the newUser was set to current
        assertEquals(newMpid, mParticle.identity.currentUser?.mpid)

        Server
            .endpoint(EndpointType.Identity_Modify)
            .assertWillReceive {
                assertEquals(newMpid!!, it.modifyMpid())
                assertEquals(3, it.body.identityChanges?.size ?: 0)
                it.body.identityChanges.let { identityChanges ->
                    assertNotNull(identityChanges)
                    identityChanges
                        .first {
                            it.identityType == IdentityType.Other4.name.toLowerCase()
                        }
                        .let {
                            assertEquals(
                                modifyRequest.identities[IdentityType.Other4],
                                it.oldValue
                            )
                            assertEquals(
                                identifyIdentities[IdentityType.Other4],
                                it.newValue
                            )
                        }
                    identityChanges
                        .first {
                            it.identityType == IdentityType.Microsoft.name.toLowerCase()
                        }
                        .let {
                            assertEquals(
                                modifyRequest.identities[IdentityType.Microsoft],
                                it.oldValue
                            )
                            assertNull(it.newValue)
                        }
                    true
                }
            }
            .after {
                mParticle.identity.apply {
                    modify(IdentityApiRequest(currentUser) {
                        identities = identifyIdentities
                    })
                }
            }
            .blockUntilFinished()
    }

    @Test
    fun testModifyUpdatesIdChangeForNonCurrentUser() {
        val latch = FailureLatch()
        Server
            .endpoint(EndpointType.Identity_Identify)
            .nextResponse {
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

        mParticle.identity.identify().addSuccessListener { newUser, previousUser ->
            assertEquals(1, newUser.mpid)
            latch.countDown()
            true
        }
        latch.await()

        Server
            .endpoint(EndpointType.Identity_Modify)
            .assertWillReceive {
                assertPlatformDifference(it.modifyMpid(), "PreviousUser's MPID did not match modify request") {
                    when (it) {
                        Platform.Android -> mStartingMpid
                        Platform.iOS -> 1
                    }
                }
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
            .after {
                mParticle.identity.apply {
                    modify(IdentityApiRequest(getUser(mStartingMpid)) {
                        identities = modifyIdentities
                    })
                }
            }
            .blockUntilFinished()
    }
}