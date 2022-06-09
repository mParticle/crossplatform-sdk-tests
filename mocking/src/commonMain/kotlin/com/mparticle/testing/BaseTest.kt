package com.mparticle.testing

import com.mparticle.api.ClientPlatform
import com.mparticle.api.Environment
import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.testing.mockserver.EndpointType
import com.mparticle.testing.mockserver.Platforms
import com.mparticle.testing.mockserver.Server
import com.mparticle.testing.mockserver.SuccessResponse
import kotlin.random.Random
import kotlin.test.BeforeTest
import kotlin.test.assertTrue
import kotlin.test.fail


open class BaseTest(val keepSdkInstance: Boolean = false) {
    var mStartingMpid = Random.nextLong()
    internal val platforms by lazy { Platforms() }
    internal val mockingPlatforms by lazy { com.mparticle.testing.Platforms() }
    val clientPlatform: ClientPlatform by lazy { getClientPlatform() }

    // iOS "@Before" hook
    fun beforeAll(awaiter: Awaiter) {
        MParticle.clearInstance()
        setAwaiter(awaiter)
        beforeAll()
    }

    // manual hook for inializing MockServer (i.e if MParticle is started in Application onCreate() as a part of
    // test setup, and need to start Mockserver for initial identity request
    fun initializeTestServer() {
        mockingPlatforms.prepareThread()
        Logger.info("Starting MockServer...")
        Server.start(platforms)
        Logger.info("MockServer started")
        Server
            .endpoint(EndpointType.Identity_Identify)
            .nextResponse {
                SuccessResponse(IdentityResponseMessage(mStartingMpid))
            }
    }

    @BeforeTest
    fun beforeAll() {
        mStartingMpid = Random.nextLong()
        if (MParticle.getInstance() == null || !keepSdkInstance) {
            MParticle.reset(clientPlatform)
        }
        initializeTestServer()
        beforeTest()
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
        defaultConfigResponse?.let { mockingPlatforms.setCachedConfig(it) }
        latch.await()
        assertTrue(called.value)
    }

    fun initialConfigResponse(configResponse: ConfigResponseMessage) {
        mockingPlatforms.setCachedConfig(configResponse)

    }
}

expect fun beforeTest()
expect fun getClientPlatform(): ClientPlatform