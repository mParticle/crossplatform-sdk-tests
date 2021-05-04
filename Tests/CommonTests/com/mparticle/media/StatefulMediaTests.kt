package com.mparticle.media

import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.media.MediaSession
import com.mparticle.api.media.events.*
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.FailureLatch
import kotlin.random.Random
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertNull

class StatefulMediaTests: BaseMediaSessionStartedTest() {

    @Test
    @Throws(Throwable::class)
    fun testLogAdBreakEnd() {
        val latch = FailureLatch()
        val mediaSession = MediaSession(
            mediaContentId = "123456",
            title = "Funny Internet cat video",
            duration = 120000,
            contentType = ContentType.Video,
            streamType = StreamType.OnDemand,
            logMPEvents = true,
            logMediaEvents = true,
            mediaContentCompleteLimit = 100
        )

        mediaSession.setMediaEventListener {
            if (it.eventName == MediaEventName.AdBreakEnd) {
                latch.countDown()
            }
        }

        val mediaAdBreak = MediaAdBreak(
            title = "pre-roll",
            id = "123456",
        )

        mediaAdBreak.duration = 1000

        mediaSession.logAdBreakStart(mediaAdBreak)
        mediaSession.logAdClick()
        mediaSession.logAdBreakEnd()

        MediaAd("some title", "123") {
            campaign = "some campaign"
        }
    }

    @Test
    @Throws(Throwable::class)
    fun testQos() {
        val adBreak = MediaAdBreak("this", "some title")
        mediaSession?.logAdBreakStart(adBreak)

        var qos: MediaQoS? = null
        mediaSession?.setMediaEventListener { qos = it.qos }

        //test empty QoS, should remain all null
        mediaSession?.logQos(MediaQoS())

        assertNotNull(qos)
        assertNull(qos?.startupTime)
        assertNull(qos?.bitRate)
        assertNull(qos?.fps)
        assertNull(qos?.droppedFrames)
        qos = null

        //test single QoS value, all others should remain null since they've never been set
        val singleTestQos = MediaQoS {
            fps = 5
        }
        mediaSession?.logQos(singleTestQos)
        assertNotNull(qos)
        assertNull(qos?.startupTime)
        assertNull(qos?.bitRate)
        assertNotNull(singleTestQos.fps)
        assertEquals(qos?.fps, singleTestQos.fps)
        assertNull(qos?.droppedFrames)

        //test update whole object, overwrite everything
        val fullTestQos = MediaQoS {
            startupTime = 1
            bitRate = 2
            fps = 3
            droppedFrames = 4
        }
        qos = null
        mediaSession?.logQos(fullTestQos)

        assertNotNull(qos)
        assertEquals(qos?.startupTime, fullTestQos.startupTime)
        assertEquals(qos?.bitRate, fullTestQos.bitRate)
        assertEquals(qos?.fps, fullTestQos.fps)
        assertEquals(qos?.droppedFrames, fullTestQos.droppedFrames)
        qos = null

        //test empty object when all fields are already set, should send all existing values
        mediaSession?.logQos(MediaQoS())

        assertNotNull(qos)
        assertEquals(qos?.startupTime, fullTestQos.startupTime)
        assertEquals(qos?.bitRate, fullTestQos.bitRate)
        assertEquals(qos?.fps, fullTestQos.fps)
        assertEquals(qos?.droppedFrames, fullTestQos.droppedFrames)
        qos = null

        //test partial object when all fields are already set, should update fields included and send existing values for the rest
        val partialTestQos = MediaQoS() {
            startupTime = 5
            fps = 6
        }
        mediaSession?.logQos(partialTestQos)
        assertNotNull(qos)
        assertEquals(qos?.startupTime, partialTestQos.startupTime)
        assertEquals(qos?.bitRate, fullTestQos.bitRate)
        assertEquals(qos?.fps, partialTestQos.fps)
        assertEquals(qos?.droppedFrames, fullTestQos.droppedFrames)
    }
}