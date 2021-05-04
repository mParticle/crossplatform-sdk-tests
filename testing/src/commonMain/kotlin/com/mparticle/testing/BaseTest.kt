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


expect open class BasePlatformTest() {
    val strict: Boolean
    fun beforeTestPlatform()
    open fun beforeTest()
    protected fun clientPlatform(): ClientPlatform
}

open class BaseTest(): BasePlatformTest() {
    var mStartingMpid = Random.nextLong()
    lateinit var mServer: MockServer2
    internal lateinit var platforms: Platforms
    var clientPlatform: ClientPlatform = clientPlatform()

    @BeforeTest
    open fun beforeAll() {
        clientPlatform = clientPlatform()
        MParticle.reset(clientPlatform)
        beforeTestPlatform()
        platforms = Platforms()
        mStartingMpid = Random.nextLong()
        mServer = MockServer2(platforms)

        mServer.getEndpoint(EndpointType.Identity_Identify).addRequestResponseLogic(null) {
            MockServer2.SuccessResponse(IdentityResponseMessage(mStartingMpid))
        }
        beforeTest()
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