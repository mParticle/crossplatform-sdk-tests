package com.mparticle.identity

import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse
import com.mparticle.api.identity.IdentityType
import com.mparticle.api.mParticle
import com.mparticle.messages.IdentityRequestMessage
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.mockserver.EndpointType
import com.mparticle.mockserver.MockServerWrapper
import com.mparticle.mockserver.SuccessResponse
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.FailureLatch
import kotlin.random.Random
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertNull
import kotlin.test.assertTrue

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
    enum class IdentityEndpoint(val endpointType: EndpointType<IdentityRequestMessage, IdentityResponseMessage>, val makeRequest: (IdentityApiRequest?) -> IdentityResponse) {
        Identify(EndpointType.Identity_Identify, { mParticle.identity.identify(it) }),
        Login(EndpointType.Identity_Login, { mParticle.identity.login(it) }),
        Logout(EndpointType.Identity_Logout, { mParticle.identity.logout(it) })
    }
        //with an empty request
        override fun testNullRequest() {
            mParticle.identity.identify_login_logout(null)
            MockServerWrapper.endpoint(identify_login_logoutEndpoint).onRequestFinishedBlocking {
                //assertNull(it.body.previousMpid)
                //TODO  why not null?
                true
            }
        }

        //with a null request


        override fun testIdentityApiRequestWithNullUser() {
            val currentMPID = mParticle.identity.currentUser?.mpid
            mParticle.identity.identify_login_logout(IdentityApiRequest(null))
            MockServerWrapper.endpoint(identify_login_logoutEndpoint).onRequestFinishedBlocking {
                assertEquals(currentMPID, it.body.previousMpid)
                true
            }
        }

        //with current user
        override fun testIdentityApiRequestWithCurrentUser() {
            mParticle.identity.identify_login_logout(IdentityApiRequest(mParticle.identity.currentUser))
            MockServerWrapper.endpoint(identify_login_logoutEndpoint).onRequestFinishedBlocking {
                assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                true
            }
        }

        //with current user (with Ids)
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
                mParticle.identity.apply {
                    identify_login_logout(IdentityApiRequest(currentUser))
                    MockServerWrapper.endpoint(identify_login_logoutEndpoint).onRequestFinishedBlocking {
                        assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                        assertEquals(modifyRequest.identities[IdentityType.Facebook], it.body.knownIdentities?.get(IdentityType.Facebook.name.toLowerCase()))
                        assertEquals(modifyRequest.identities[IdentityType.Microsoft], it.body.knownIdentities?.get(IdentityType.Microsoft.name.toLowerCase()))
                        assertEquals(modifyRequest.identities[IdentityType.Other4], it.body.knownIdentities?.get(IdentityType.Other4.name.toLowerCase()))
                        true
                    }
                    latch.countDown()
                }
            }
            latch.await()
        }

        //change Ids
        override fun testIdentityRequestChangesIds() {
            mParticle.identity.apply {
                identify(IdentityApiRequest(currentUser))
            }
            MockServerWrapper.endpoint(EndpointType.Identity_Identify).onRequestFinishedBlocking {
                assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                true
            }
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
            mParticle.identity.apply {
                modify(modifyRequest).addSuccessListener { _, _ ->
                    identify_login_logout(identityRequest)
                    MockServerWrapper.endpoint(identify_login_logoutEndpoint).onRequestFinishedBlocking {
                        assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                        assertEquals(0, it.body.identityChanges?.size  ?: 0)
                        assertEquals(identityRequest.identities[IdentityType.Other4], it.body.knownIdentities?.get(IdentityType.Other4.name.toLowerCase()))
                        assertEquals(identityRequest.identities[IdentityType.Google], it.body.knownIdentities?.get(IdentityType.Google.name.toLowerCase()))
                        assertEquals(identityRequest.identities[IdentityType.Microsoft], it.body.knownIdentities?.get(IdentityType.Microsoft.name.toLowerCase()))
                        true
                    }
                    latch.countDown()
                }
            }
            latch.await()
        }

        //process changing existing Ids
        //send proper change existing Ids
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
            mParticle.identity.apply {
                modify(modifyRequest).addSuccessListener { _, _ ->
                    identify(IdentityApiRequest(currentUser) {
                        identities = identifyIdentities
                    })
                    MockServerWrapper.endpoint(EndpointType.Identity_Identify).onRequestFinishedBlocking {
                        assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                        assertEquals(
                            identifyIdentities[IdentityType.Other4],
                            it.body.knownIdentities?.get(IdentityType.Other4.name.toLowerCase())
                        )
                        assertEquals(
                            identifyIdentities[IdentityType.Google],
                            it.body.knownIdentities?.get(IdentityType.Google.name.toLowerCase())
                        )
                        assertEquals(
                            identifyIdentities[IdentityType.Microsoft],
                            it.body.knownIdentities?.get(IdentityType.Microsoft.name.toLowerCase())
                        )
                        assertEquals(
                            modifyRequest.identities[IdentityType.Facebook],
                            it.body.knownIdentities?.get(IdentityType.Facebook.name.toLowerCase())
                        )
                        true
                    }
                    latch.countDown()
                }
            }
            latch.await()
        }


        //pre-create request with current user
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
            mParticle.identity.apply {
                modify(modifyRequest).addSuccessListener { _, _ ->
                    identify_login_logout(identityRequest)
                    MockServerWrapper.endpoint(identify_login_logoutEndpoint).onRequestFinishedBlocking {
                        assertEquals(mParticle.identity.currentUser!!.mpid, it.body.previousMpid)
                        true
                    }
                    latch.countDown()
                }
            }
            latch.await()
        }

        //pre-create request with previous user (after previous user's Id's change, oc
        /**
         * mpid 1
         * add Id
         * -> mpid2
         * create request with mpid1
         * -> mpid1
         * -> change identity
         * -> make request -> check match identities
         */


        //(TEST SUccessListeners/test response)


        //test Identitfy NEW (actually works)
        override fun testUpdateToNewMpid() {
            val latch = FailureLatch("Modify Latch 5")
            val nextMpid = Random.Default.nextLong()
            MockServerWrapper.endpoint(identify_login_logoutEndpoint).nextResponse {
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

        //test Identify Existing (actually worrks)
        override fun testKeepExistingMpid() {
            val currentMPID = mParticle.identity.currentUser?.mpid
            val latch = FailureLatch("Modify Latch 6")
            MockServerWrapper.endpoint(identify_login_logoutEndpoint).nextResponse { request ->
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