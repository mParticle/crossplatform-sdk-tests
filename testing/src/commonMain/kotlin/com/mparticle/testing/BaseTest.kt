package com.mparticle.testing

import com.mparticle.api.ClientPlatform
import com.mparticle.messages.*
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import com.mparticle.api.identity.*
import com.mparticle.api.Logger
import com.mparticle.mockserver.*
import com.mparticle.mockserver.utils.Mutable
import kotlin.random.Random
import kotlin.test.*
import kotlin.test.BeforeTest
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking



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
        Logger().error("Starting MockSerrver...")
        MockServerAccessor.start(platforms)
        Logger().error("MockServer started")
        MockServerAccessor.run {
            Logger().error("Setting Identity endpoint")
            getEndpoint(EndpointType.Identity_Identify).addRequestResponseLogic(null) {
                SuccessResponse(IdentityResponseMessage(mStartingMpid))
            }
        }
    }

    fun startMParticle(options: MParticleOptions = MParticleOptions("apiKey", "apiSecret", clientPlatform)
    , defaultConfigResponse: ConfigResponseMessage? = null) {
        MParticle.clearInstance()
        val latch = FailureLatch("Initial Identity Request")
        var identityTask = options.identifyTask
        val called = Mutable(false)
        if (identityTask == null) {
            identityTask = BaseIdentityTask()
        }
//        if (strict) {
            identityTask.addFailureListener { result ->
                Logger().error("Identity FAILURE")
                fail(result.toString())
            }
                .addSuccessListener { newUser, previousUser ->
                    Logger().error("Identity OnSuccess")
                    Logger().error("New MPID = ${newUser.getId()}, old MPID = ${previousUser?.getId()}")
                    called.value = true
                    latch.countDown()
                }
//        }

        options.identifyTask = identityTask
        options.identifyRequest = IdentityApiRequest(null)
        Logger().error("Starrting MParticle")
        MParticle.start(options)
        defaultConfigResponse?.let { platforms.setCachedConfig(it) }
        if (strict) {
            latch.await()
            Logger().error("MParticle start successfully completed :) :) :)")
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
expect fun setAwaiter(awaiter: Awaiter)

interface Awaiter {
    fun initializeExpectation(description: String)
    fun await(description: String, timeout: Double)
    fun countdown(description: String)
}