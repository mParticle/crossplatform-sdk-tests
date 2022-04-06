package com.mparticle.identity

import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse
import com.mparticle.api.identity.IdentityType
import com.mparticle.api.mParticle
import com.mparticle.messages.IdentityRequestMessage
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.testing.mockserver.EndpointType
import com.mparticle.testing.mockserver.Server
import com.mparticle.testing.mockserver.SuccessResponse
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.FailureLatch
import kotlin.random.Random
import kotlin.test.assertEquals

interface IdentityTester {
    fun testNullRequest()
    fun testIdentityApiRequestWithNullUser()
    fun testIdentityApiRequestWithCurrentUser()
    fun testIdentityApiRequestWithCurrentUserWithIds()
    fun testIdentityRequestChangesIds()
    fun testIdentityRequestWithIdsWhileCurrentUserWithIds()
    fun testIdentityRequestWithIdsWithCurrentUserWithIds()
    fun createIdentityRequestBeforeAnotherRequestIsMade()
    fun testUpdateToNewMpid()
    fun testKeepExistingMpid()
}

open class IdentityTests(val identify_login_logout: (IdentityApi.(IdentityApiRequest?) -> IdentityResponse), val identify_login_logoutEndpoint: EndpointType<IdentityRequestMessage, IdentityResponseMessage>): BaseStartedTest(), IdentityTester {

        override fun testNullRequest() {
            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive { true }
                .after { mParticle.identity.identify_login_logout(null) }
                .blockUntilFinished()
        }

        override fun testIdentityApiRequestWithNullUser() {
            val currentMPID = mParticle.identity.currentUser?.mpid

            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive {
                    assertEquals(currentMPID, it.body.previousMpid)
                    true
                }
                .after {
                    mParticle.identity.identify_login_logout(IdentityApiRequest(null))
                }
                .blockUntilFinished()
        }

        override fun testIdentityApiRequestWithCurrentUser() {
            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive {
                    assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                    true
                }
                .after {
                    mParticle.identity.identify_login_logout(IdentityApiRequest(mParticle.identity.currentUser))
                }
                .blockUntilFinished()
        }

        override fun testIdentityApiRequestWithCurrentUserWithIds() {
            val latch = FailureLatch("Modify Latch 1")
            val modifyRequest = IdentityApiRequest {
                identities = mapOf(
                    IdentityType.Facebook to "my fb",
                    IdentityType.Microsoft to "hotmailUser",
                    IdentityType.Other4 to "foo bar"

                )
            }
            mParticle.identity.modify(modifyRequest).addSuccessListener { _, _ ->
                latch.countDown()
            }
            latch.await()

            mParticle.identity.apply {
                Server
                    .endpoint(identify_login_logoutEndpoint)
                    .assertWillReceive {
                        assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                        assertEquals(
                            modifyRequest.identities[IdentityType.Facebook],
                            it.body.knownIdentities?.get(IdentityType.Facebook.name.toLowerCase())
                        )
                        assertEquals(
                            modifyRequest.identities[IdentityType.Microsoft],
                            it.body.knownIdentities?.get(IdentityType.Microsoft.name.toLowerCase())
                        )
                        assertEquals(
                            modifyRequest.identities[IdentityType.Other4],
                            it.body.knownIdentities?.get(IdentityType.Other4.name.toLowerCase())
                        )
                        true
                    }
                    .after {
                        identify_login_logout(IdentityApiRequest(currentUser))
                    }
                    .blockUntilFinished()
            }
        }

        override fun testIdentityRequestChangesIds() {
            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive {
                    assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                    true
                }
                .after {
                    mParticle.identity.apply {
                        identify_login_logout(IdentityApiRequest(currentUser))
                    }
                }
                .blockUntilFinished()
        }

        override fun testIdentityRequestWithIdsWhileCurrentUserWithIds() {
            val latch = FailureLatch("Modify Latch 2")
            val modifyRequest = IdentityApiRequest {
                identities = mapOf(
                    IdentityType.Other4 to "foo bar",
                    IdentityType.Facebook to "my fb",
                    IdentityType.Microsoft to "hotmailUser"
                )
            }
            val identityRequest = IdentityApiRequest {
                identities = mapOf(
                    IdentityType.Other4 to "fuzz baz",
                    IdentityType.Google to "me@gmail.com",
                    IdentityType.Microsoft to null
                )
            }
            mParticle.identity.modify(modifyRequest).addSuccessListener { _, _ ->
                latch.countDown()
            }
            latch.await()

            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive { request ->
                    if (request.body.previousMpid == mParticle.identity.currentUser!!.mpid) {
                        assertEquals(mParticle.identity.currentUser!!.mpid, request.body.previousMpid)
                        assertEquals(0, request.body.identityChanges?.size  ?: 0)
                        assertEquals(identityRequest.identities[IdentityType.Other4], request.body.knownIdentities?.get(IdentityType.Other4.name.toLowerCase()))
                        assertEquals(identityRequest.identities[IdentityType.Google], request.body.knownIdentities?.get(IdentityType.Google.name.toLowerCase()))
                        assertEquals(identityRequest.identities[IdentityType.Microsoft], request.body.knownIdentities?.get(IdentityType.Microsoft.name.toLowerCase()))
                        true
                    } else {
                        false
                    }
                }
                .after {
                    mParticle.identity.identify_login_logout(identityRequest)
                }
                .blockUntilFinished()
        }

        override fun testIdentityRequestWithIdsWithCurrentUserWithIds() {
            val latch = FailureLatch("Modify Latch 3")
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
            mParticle.identity.modify(modifyRequest).addSuccessListener { _, _ ->
                latch.countDown()
            }
            latch.await()

            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive {
                    assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                    assertEquals(identifyIdentities[IdentityType.Other4], it.body.knownIdentities?.get(IdentityType.Other4.name.toLowerCase()))
                    assertEquals(identifyIdentities[IdentityType.Google], it.body.knownIdentities?.get(IdentityType.Google.name.toLowerCase()))
                    assertEquals(identifyIdentities[IdentityType.Microsoft], it.body.knownIdentities?.get(IdentityType.Microsoft.name.toLowerCase()))
                    assertEquals(modifyRequest.identities[IdentityType.Facebook], it.body.knownIdentities?.get(IdentityType.Facebook.name.toLowerCase()))
                    true
                }
                .after {
                    mParticle.identity.apply {
                        identify_login_logout(IdentityApiRequest(currentUser) {
                            identities = identifyIdentities
                        })
                    }
                }
                .blockUntilFinished()
        }


        override fun createIdentityRequestBeforeAnotherRequestIsMade() {
            val latch = FailureLatch("Mofify Latch 4")
            val modifyRequest = IdentityApiRequest {
                identities = mapOf(
                    IdentityType.Other4 to "foo bar",
                    IdentityType.Facebook to "my fb",
                    IdentityType.Microsoft to "hotmailUser"
                )
            }
            val identityRequest = IdentityApiRequest(mParticle.identity.currentUser) {
                identities = mapOf(
                    IdentityType.Other4 to "fuzz baz",
                    IdentityType.Google to "me@gmail.com",
                    IdentityType.Microsoft to null
                )
            }
            mParticle.identity.modify(modifyRequest).addSuccessListener { _, _ ->
                latch.countDown()
            }
            latch.await()

            Server
                .endpoint(identify_login_logoutEndpoint)
                .assertWillReceive {
                    assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                    true
                }
                .after {
                    mParticle.identity.apply {
                        identify_login_logout(identityRequest)
                    }
                }
                .blockUntilFinished()
        }

        override fun testUpdateToNewMpid() {
            val latch = FailureLatch("Modify Latch 5")
            val nextMpid = Random.Default.nextLong()
            Server
                .endpoint(identify_login_logoutEndpoint)
                .nextResponse {
                    SuccessResponse {
                        responseObject = IdentityResponseMessage {
                            mpid = nextMpid
                        }
                    }
                }
            mParticle.identity.identify_login_logout(null)
                .addSuccessListener { newUser, previousUser ->
                    assertEquals(nextMpid, newUser.mpid)
                    latch.countDown()
                }
            latch.await()
        }

        override fun testKeepExistingMpid() {
            val currentMPID = mParticle.identity.currentUser?.mpid
            val latch = FailureLatch("Modify Latch 6")
            Server
                .endpoint(identify_login_logoutEndpoint)
                .nextResponse { request ->
                    SuccessResponse {
                        responseObject = IdentityResponseMessage {
                            mpid = request.body.previousMpid
                        }
                    }
                }
            mParticle.identity.identify_login_logout(null)
                .addSuccessListener { newUser, previousUser ->
                    assertEquals(currentMPID, newUser.mpid)
                    latch.countDown()
                }
            latch.await()
        }
}