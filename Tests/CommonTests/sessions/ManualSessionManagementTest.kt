package com.mparticle.sessions

import com.mparticle.api.*
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.mockserver.EndpointType
import com.mparticle.mockserver.Platforms
import com.mparticle.mockserver.Server
import com.mparticle.utils.Mutable
import com.mparticle.testing.BaseTest
import com.mparticle.testing.FailureLatch
import kotlin.test.*

class ManualSessionManagementTest: BaseTest() {

    @Test
    fun testOnSessionStartManualShouldntStart() {
        val latch = FailureLatch()

        MParticle.onSessionStart {
            Logger.error("SESSION STARTED IN CALLBACK")
            Logger.error("session: $it")
            latch.countDown()
        }
        MParticleOptions(clientPlatform = clientPlatform) {
            automaticSessionTracking = false
            shouldBeginSession = false
        }.let {
            startMParticle(it)
        }
        latch.await()
    }

    @Test
    fun testOnSessionStartManualShouldStart() {
        val latch = FailureLatch()

        MParticle.onSessionStart {
            Logger.error("SESSION STARTED IN CALLBACK")
            Logger.error("session: $it")
            latch.countDown()
        }
        MParticleOptions(clientPlatform = clientPlatform) {
            automaticSessionTracking = false
            shouldBeginSession = false
        }.let {
            startMParticle(it)
        }
        Logger.error("should start session...")
        mParticle.startSession()
        Logger.error("after should start session...")
        latch.await()
    }

    @Test
    fun testSessionDoesNotAutomaticallyStart() {
        MParticleOptions(clientPlatform = clientPlatform) {
            automaticSessionTracking = false
            shouldBeginSession = false
        }.let {
            startMParticle(it)
        }

        assertFalse(mParticle.automaticSessionTracking)
        MParticle.onSessionStart {
            Logger.error(it.toString())
            fail(it.toString())
        }
        mParticle.logEvent(MPEvent("this", EventType.Other))

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { true }
            .blockUntilFinished()
    }

    @Test
    fun testSessionManuallyStarts() {
        val started = Mutable(false)
        val latch = FailureLatch("manually starts")
        MParticle.onSessionStart {
            started.value = true
            latch.countDown()
        }

        MParticleOptions(clientPlatform = clientPlatform) {
            automaticSessionTracking = false
            shouldBeginSession = false
        }.let {
            startMParticle(it)
        }

        assertFalse(mParticle.automaticSessionTracking)
        assertFalse { started.value }
        mParticle.startSession()
        latch.await()
        assertTrue { started.value }

    }

    @Test
    fun testSessionManuallyEnds() {
        MParticleOptions(clientPlatform = clientPlatform) {
            automaticSessionTracking = false
            shouldBeginSession = false
        }.let {
            startMParticle(it)
        }

        assertFalse(mParticle.automaticSessionTracking)
        val ended = Mutable(false)
        MParticle.onSessionEnd {
            ended.value = true
        }
        mParticle.startSession()
        mParticle.endSession()

        Platforms().sleep(100)
        Platforms().sleep(100)
        Platforms().sleep(100)
        Platforms().sleep(100)

        assertTrue { ended.value }

    }
}