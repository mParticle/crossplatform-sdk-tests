package com.mparticle

import com.mparticle.api.*
import com.mparticle.api.MParticleOptions
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.mockserver.EndpointType
import com.mparticle.mockserver.MockServerWrapper
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
        startMParticle(MParticleOptions(testApiKey, "secrert", clientPlatform))
        mParticle.logEvent(MPEvent("some event", EventType.Location))
        mParticle.upload()

        MockServerWrapper.endpoint(EndpointType.Events)
            .onRequestFinishedBlocking(requestFilter = { request ->
                assertTrue { request.url.contains(testApiKey) }
                true
            }
            )
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
        assertPlatformDifference(testUploadInterval, "uploadInterval in Development") {
            when (it) {
                Platform.Android -> 123L
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
}