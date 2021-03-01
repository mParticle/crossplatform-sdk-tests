package com.mparticle.testing

import com.mparticle.api.ClientPlatform
import com.mparticle.mockserver.Platforms
import com.mparticle.mockserver.MockServer2
import com.mparticle.mockserver.EndpointType
import com.mparticle.messages.*
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import com.mparticle.api.identity.*
import com.mparticle.mockserver.utils.Mutable
import kotlin.random.Random
import kotlin.test.*
import kotlin.test.BeforeTest


open class BaseTest() {
    var mStartingMpid = Random.nextLong()
    lateinit var mServer: MockServer2
    internal lateinit var platforms: Platforms
    lateinit var clientPlatform: ClientPlatform

    @BeforeTest
    fun beforeAll() {
        clientPlatform = getClientPlatform()
        MParticle.reset(clientPlatform)
        beforeTest()
        platforms = Platforms()
        mStartingMpid = Random.nextLong()
        mServer = MockServer2(platforms)

        mServer.getEndpoint(EndpointType.Identity_Identify).addRequestResponseLogic(null) {
            MockServer2.SuccessResponse(IdentityResponseMessage(mStartingMpid))
        }
    }

    fun startMParticle(options: MParticleOptions = MParticleOptions("apiKey", "apiSecret", clientPlatform)
    , defaultConfigResponse: ConfigResponseMessage? = null) {
        MParticle.clearInstance()
        val latch = FailureLatch()
        var identityTask = options.identifyTask
        val called = Mutable(false)
        if (identityTask == null) {
            identityTask = BaseIdentityTask()
        }
        if (strict) {
            identityTask.addFailureListener { result -> fail(result.toString()) }.addSuccessListener { _, _ ->
                called.value = true
                latch.countDown()
            }
        }

        options.identifyTask = identityTask
        MParticle.start(options)
        defaultConfigResponse?.let { platforms.setCachedConfig(it) }
        if (strict) {
            latch.await()
            assertTrue(called.value)
        }
    }

    fun initialConfigResponse(configResponse: ConfigResponseMessage) {
        platforms.setCachedConfig(configResponse)

    }
}

expect val strict: Boolean
expect fun beforeTest()
expect fun getClientPlatform(): ClientPlatform