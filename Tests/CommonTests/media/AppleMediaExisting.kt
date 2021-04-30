package com.mparticle.media

import com.mparticle.api.MParticle
import com.mparticle.api.media.MediaEvent
import com.mparticle.api.media.MediaSession
import com.mparticle.api.Logger
import com.mparticle.api.media.events.*
import com.mparticle.testing.BaseTest
import com.mparticle.testing.FailureLatch
import kotlin.test.*

class AppleMediaExisting: BaseTest() {

    var mediaSession: MediaSession? = null

    private var latch = FailureLatch()
    private var _mediaEventListener: ((MediaEvent) -> Unit)? = null
    var mediaEventListener: ((MediaEvent) -> Unit)?
        set(value) {
            Logger().error("Adding MediaEventListener")
            if (value == null) {
                Logger().error("Remove Listener")
                mediaSession?.setMediaEventListener({})
                _mediaEventListener = null
            } else {
                if (_mediaEventListener != null) {
                    fail("Previously added mediaEventListener has not been triggered")
                }
                _mediaEventListener = value
                mediaSession?.apply {
                    latch = FailureLatch()
                    Logger().error("Applying MediaEventListener")
                    setMediaEventListener { event: MediaEvent ->
                        Logger().error("INVOKE Listener, eventType=${event.eventName}")
                        value(event)
                        _mediaEventListener = null
                        latch.countDown()
                    }
                } ?: Logger().error("media Session is NULL")
            }
        }
        get() = _mediaEventListener


    @BeforeTest
    override fun beforeTest() {
        mediaSession = MediaSession(
            mparticle = MParticle.getInstance(),
            title = "some title",
            mediaContentId = "contentId",
            duration = 100,
            streamType = StreamType.LiveStream,
            contentType = ContentType.Audio,
            logMediaEvents = true,
            logMPEvents = false
        )
    }

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
        val adBreak = MediaAdBreak(title = "foo adbreak title", id = "12345")
        mediaEventListener = { event ->
            assertEquals(event.eventName, MediaEventName.AdBreakStart)
            assertEquals(event.adBreak?.toMap(), adBreak.toMap())
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

    private fun updatePlayheadPosition(playheadPosition: Long) {
        mediaEventListener = {
            assertEquals(it.eventName, MediaEventName.UpdatePlayheadPosition)
            assertEquals(it.playheadPosition, playheadPosition)
        }
        mediaSession?.logPlayheadPosition(playheadPosition)
        await()
    }

    private fun await() {
        latch.await()
    }
}