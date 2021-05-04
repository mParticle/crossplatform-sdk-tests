package com.mparticle.media

import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.media.MediaEvent
import com.mparticle.api.media.MediaSession
import com.mparticle.api.media.events.ContentType
import com.mparticle.api.media.events.StreamType
import com.mparticle.testing.BaseTest
import com.mparticle.testing.FailureLatch
import kotlin.test.BeforeTest
import kotlin.test.fail

open class BaseMediaSessionStartedTest: BaseTest() {
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

    protected fun await() {
        latch.await()
    }
}