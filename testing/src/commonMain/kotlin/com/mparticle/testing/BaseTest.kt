package com.mparticle.testing

import com.mparticle.api.*
import com.mparticle.messages.*
import com.mparticle.api.identity.*
import com.mparticle.testing.mockserver.*
import com.mparticle.testing.mockserver.SuccessResponse
import com.mparticle.testing.mockserver.utils.Mutable
import kotlin.random.Random
import kotlin.test.*
import kotlin.test.BeforeTest


open class BaseTest() {
    var mStartingMpid = Random.nextLong()
    internal lateinit var platforms: Platforms
    lateinit var clientPlatform: ClientPlatform

    fun beforeAll(awaiter: Awaiter) {
        setAwaiter(awaiter)
        beforeAll()
    }

    @BeforeTest
    fun beforeAll() {
        platforms = Platforms()
        platforms.prepareThread()
        clientPlatform = getClientPlatform()
        MParticle.reset(clientPlatform)

        beforeTest()

        mStartingMpid = Random.nextLong()
        Logger.info("Starting MockSerrver...")
        Server.start(platforms)
        Logger.info("MockServer started")
        Server
            .endpoint(EndpointType.Identity_Identify)
            .nextResponse {
                SuccessResponse(IdentityResponseMessage(mStartingMpid))
            }
        afterBeforeAll()
    }

    open fun afterBeforeAll() {}

    fun startMParticle(options: MParticleOptions = MParticleOptions("apiKey", "apiSecret", clientPlatform).apply { environment = Environment.Development }
    , defaultConfigResponse: ConfigResponseMessage? = null) {
        MParticle.clearInstance()
        val latch = FailureLatch("Initial Identity Request")
        var identityTask = options.identifyTask
        val called = Mutable(false)
        if (identityTask == null) {
            identityTask = IdentityResponse()
        }
        identityTask
            .addFailureListener { result ->
                Logger.error("Identity Failure")
                fail(result.toString())
            }
            .addSuccessListener { newUser, previousUser ->
                called.value = true
                latch.countDown()
            }

        options.identifyTask = identityTask
        options.identifyRequest = IdentityApiRequest(null)
        MParticle.start(options)
        defaultConfigResponse?.let { platforms.setCachedConfig(it) }
        latch.await()
        assertTrue(called.value)
    }

    fun initialConfigResponse(configResponse: ConfigResponseMessage) {
        platforms.setCachedConfig(configResponse)

    }
}

expect fun beforeTest()
expect fun getClientPlatform(): ClientPlatform
expect fun setAwaiter(awaiter: Awaiter)

interface Awaiter {
    fun initializeExpectation(description: String)
    fun await(description: String, timeout: Double)
    fun countdown(description: String)
}