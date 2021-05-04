package com.mparticle.media

import com.mparticle.api.media.MediaSession
import com.mparticle.api.media.events.*
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertNull


class SimpleMediaTests: BaseMediaSessionStartedTest() {

    @Test
    fun testLogMediaSessionStart() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SessionStart)
        }
        mediaSession?.logMediaSessionStart()
        await()
    }

    @Test
    fun testLogMediaSessionStartWithOptions() {
        val option = Options()
        val customAtt = mapOf(
            "testKey" to "testValue"
        )
        option.customAttributes = customAtt
        option.currentPlayheadPosition = 6000
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SessionStart)
            assertEquals(event.customAttributes?.get("testKey"), customAtt["testKey"])
            assertEquals(event.playheadPosition, 6000)
        }
        mediaSession?.logMediaSessionStart(options = option)
        await()
    }

    @Test
    fun testLogMediaSessionStartAlternet() {
        mediaSession = MediaSession(
            mediaContentId = "12345",
            title = "foo title",
            duration = 90000,
            contentType = ContentType.Video,
            streamType = StreamType.OnDemand,
            logMPEvents = false,
            logMediaEvents = false,
            mediaContentCompleteLimit = 90
        )

        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SessionStart)
        }
        mediaSession?.logMediaSessionStart()
        await()
    }

    @Test
    fun testLogMediaSessionEnd() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SessionEnd)
        }
        mediaSession?.logMediaSessionEnd()
        await()
    }

    @Test
    fun testLogMediaContentEnd() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.ContentEnd)
        }
        mediaSession?.logMediaContentEnd()
        await()
    }

    @Test
    fun testLogPlay() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.Play)
        }
        mediaSession?.logPlay()
        await()
    }

    @Test
    fun testLogPlayWithExistingPlayhead() {
        updatePlayheadPosition(1400)
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.Play)
            assertEquals(event.playheadPosition, 1400)
        }
        mediaSession?.logPlay()
        await()
    }

    @Test
    fun testLogPlayWithOptions() {
        updatePlayheadPosition(40)

        val options = Options()
        options.currentPlayheadPosition = 45000

        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.Play)
            assertEquals(event.playheadPosition, 45000)
        }
        mediaSession?.logPlay(options = options)
        await()
    }

    @Test
    fun testLogPause() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.Pause)
        }
        mediaSession?.logPause()
        await()
    }

    @Test
    fun testLogPauseWithOptions() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.Pause)
            assertEquals(event.playheadPosition, 48000)
            assertEquals(event.customAttributes?.get("test"), "tester")
        }
        val options = Options()
        options.currentPlayheadPosition = 48000
        options.customAttributes = HashMap<String, String>().apply {
            put("test", "tester")
        }
        mediaSession?.logPause(options = options)
        await()
    }

    @Test
    fun testLogSeekStart() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SeekStart)
            assertEquals(event.seekPosition, 20000)
        }
        mediaSession?.logSeekStart(position = 20000)
        await()
    }

    @Test
    fun testLogSeekEnd() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SeekEnd)
            assertEquals(event.seekPosition, 30000)
        }
        mediaSession?.logSeekEnd(position = 30000)
        await()
    }

    @Test
    fun testLogAdStart() {
        val adContent = MediaAd(title = "foo ad title", id = "12345")
        adContent.placement = "first"
        adContent.position = 0
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdStart)
            assertEquals(event.mediaAd?.toMap(), adContent?.toMap())
        }
        mediaSession?.logAdStart(ad = adContent)
        await()
    }

    @Test
    fun testLogAdEnd() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdEnd)
        }
        mediaSession?.logAdEnd()
        await()
    }

    @Test
    fun testLogAdClick() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdClick)
        }
        mediaSession?.logAdClick()
        await()
    }

    @Test
    fun testLogAdSkip() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdSkip)
        }
        mediaSession?.logAdSkip()
        await()
    }

    @Test
    fun testLogAdBreakStart() {
        val adBreak = MediaAdBreak(title = "foo adbreak title", id = "12345").apply {
            duration = 3050
        }
        val adBreakMap = adBreak.toMap()
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdBreakStart)
            assertEquals(event.adBreak?.toMap(), adBreakMap)
        }
        mediaSession?.logAdBreakStart(adBreak = adBreak)
        await()
    }

    @Test
    fun testLogAdBreakEnd() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdBreakEnd)
        }
        mediaSession?.logAdBreakEnd()
        await()
    }

    @Test
    fun testLogSegmentStart() {
        val segment = MediaSegment(title = "foo segment title", index = 3, duration = 30000)
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SegmentStart)
            assertEquals(event.segment?.toMap(), segment.toMap())
        }
        mediaSession?.logSegmentStart(segment = segment)
        await()
    }

    @Test
    fun testLogSegmentEnd() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SegmentEnd)
        }
        mediaSession?.logSegmentEnd()
        await()
    }

    @Test
    fun testLogSegmentSkip() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.SegmentSkip)
        }
        mediaSession?.logSegmentSkip()
        await()
    }

    @Test
    fun testLogPlayheadPosition() {

        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.UpdatePlayheadPosition)
            assertEquals(event.playheadPosition, 45000)
        }
        mediaSession?.logPlayheadPosition(45000)
        await()
    }

    @Test
    fun testLogQoS() {
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.UpdateQoS)
            assertEquals(event.qos?.bitRate, 80)
            assertEquals(event.qos?.droppedFrames, 7)
            assertEquals(event.qos?.fps, 60)
            assertEquals(event.qos?.startupTime, 2000)
        }
        val qos = MediaQoS {
            bitRate = 80
            droppedFrames = 7
            fps = 60
            startupTime = 2000
        }
        mediaSession?.logQos(qos)
        await()
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

    private fun updatePlayheadPosition(playheadPosition: Long) {
        mediaEventListener = {
            assertEquals(it.eventName, MediaEventName.UpdatePlayheadPosition)
            assertEquals(it.playheadPosition, playheadPosition)
        }
        mediaSession?.logPlayheadPosition(playheadPosition)
        await()
    }
}