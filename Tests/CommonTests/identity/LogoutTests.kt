package com.mparticle.identity

import com.mparticle.testing.mockserver.EndpointType
import com.mparticle.testing.BaseStartedTest
import kotlin.test.Test

class LogoutTests(): BaseStartedTest(), IdentityTester {

    val identityTester: IdentityTests = IdentityTests(
        identify_login_logout = { logout(it) },
        identify_login_logoutEndpoint = EndpointType.Identity_Logout
    )

    @Test
    override fun testNullRequest() {
        identityTester.testNullRequest()
    }

    @Test
    override fun testIdentityApiRequestWithNullUser() {
        identityTester.testIdentityApiRequestWithNullUser()
    }

    @Test
    override fun testIdentityApiRequestWithCurrentUser() {
        identityTester.testIdentityApiRequestWithCurrentUser()
    }

    @Test
    override fun testIdentityApiRequestWithCurrentUserWithIds() {
        identityTester.testIdentityApiRequestWithCurrentUserWithIds()
    }

    @Test
    override fun testIdentityRequestWithIdsWhileCurrentUserWithIds() {
        identityTester.testIdentityRequestWithIdsWhileCurrentUserWithIds()
    }

    @Test
    override fun testIdentityRequestChangesIds() {
        identityTester.testIdentityRequestChangesIds()
    }

    @Test
    override fun testIdentityRequestWithIdsWithCurrentUserWithIds() {
        identityTester.testIdentityRequestWithIdsWithCurrentUserWithIds()
    }

    @Test
    override fun createIdentityRequestBeforeAnotherRequestIsMade() {
        identityTester.createIdentityRequestBeforeAnotherRequestIsMade()
    }

    @Test
    override fun testUpdateToNewMpid() {
        identityTester.testUpdateToNewMpid()
    }

    @Test
    override fun testKeepExistingMpid() {
        identityTester.testKeepExistingMpid()
    }
}