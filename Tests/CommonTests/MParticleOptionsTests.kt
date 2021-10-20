package com.mparticle

import com.mparticle.api.*
import com.mparticle.api.MParticleOptions
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.mockserver.EndpointType
import com.mparticle.mockserver.Server
import com.mparticle.testing.BaseTest
import com.mparticle.testing.assertPlatformDifference
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class MParticleOptionsTests: BaseTest() {

    fun DefaultMParticleOptions(initializer: MParticleOptions.() -> Unit): MParticleOptions {
        return MParticleOptions("defaultApiKey", "defaultSecret", clientPlatform, initializer)
    }

    @Test
    fun testApiKey() {
        val testApiKey = "myApiKey"
        startMParticle(MParticleOptions(testApiKey, "secret", clientPlatform))

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                { request.url.contains(testApiKey) }
                true
            }
            .after {
                mParticle.logEvent(MPEvent("some event", EventType.Location))
                mParticle.upload()
            }
            .blockUntilFinished()
    }

    @Test
    fun testUploadIntervalDevelopment() {
        val testUploadInterval = 123L
        startMParticle(DefaultMParticleOptions {
            uploadInterval = testUploadInterval.toInt()
            environment = Environment.Development
        })
        assertPlatformDifference(testUploadInterval, "uploadInterval in Development") {
            when (it) {
                Platform.Android -> 123L
                Platform.iOS -> 123L
            }
        }
    }

    @Test
    fun testUploadIntervalProduction() {
        val testUploadInterval = 123L
        startMParticle(DefaultMParticleOptions {
            uploadInterval = testUploadInterval.toInt()
            environment = Environment.Production
        })
        assertPlatformDifference(mParticle.uploadInterval, "uploadInterval in Development") {
            when (it) {
                Platform.Android -> 123000L
                Platform.iOS -> 123L
            }
        }
    }

    @Test
    fun testSetProductionEnvironment() {
        startMParticle(DefaultMParticleOptions {
            environment = Environment.Production
        }
        )
        assertEquals(Environment.Production, mParticle.environment)
    }

    @Test
    fun testLogLevel() {
        startMParticle(DefaultMParticleOptions {
            logLevel = LogLevel.Warning
        })
        assertEquals(LogLevel.Warning, mParticle.logLevel)
    }

    @Test
    fun testDataPlanId() {
        val testApiKey = "myApiKey"
        val options = MParticleOptions(testApiKey, "secret", clientPlatform)
        options.dataplanId = "freddy_s_plan"
        options.dataplanVersion = 1
        startMParticle(options)


        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { it.body.dataplanContext?.dataplan?.dataplanId == "freddy_s_plan" }
            .after {
                mParticle.logEvent(MPEvent("some event", EventType.Location))
                mParticle.upload()
            }
            .blockUntilFinished()
    }

    @Test
    fun testDataPlanVersion() {
        val testApiKey = "myApiKey"
        val options = MParticleOptions(testApiKey, "secret", clientPlatform)
        options.dataplanId = "freddy_s_plan"
        options.dataplanVersion = 1
        startMParticle(options)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { it.body.dataplanContext?.dataplan?.dataplanVersion == 1 }
            .after {
                mParticle.logEvent(MPEvent("some event", EventType.Location))
                mParticle.upload()
            }
            .blockUntilFinished()
    }

    @Test
    fun testDeviceApplicationStamp() {
        val testApiKey = "myApiKey"
        val options = MParticleOptions(testApiKey, "secret", clientPlatform)
        startMParticle(options)


        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                assertTrue { request.body.deviceApplicationStamp != null }
                true
            }
            .after {
                mParticle.logEvent(MPEvent("some event", EventType.Location))
                mParticle.upload()
            }
            .blockUntilFinished()
    }

    @Test
    fun testOptOutDefault() {
        val testApiKey = "myApiKey"
        val options = MParticleOptions(testApiKey, "secret", clientPlatform)
        startMParticle(options)
        mParticle.logEvent(MPEvent("some event", EventType.Location))
        mParticle.upload()

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                assertTrue { request.body.optOutHeader == false }
                true
            }
            .after {
                mParticle.logEvent(MPEvent("some event", EventType.Location))
                mParticle.upload()
            }
            .blockUntilFinished()
    }

}