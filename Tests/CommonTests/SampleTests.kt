package com.mparticle

import com.mparticle.api.Environment
import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import com.mparticle.api.media.MediaSession
import com.mparticle.api.media.events.ContentType
import com.mparticle.api.media.events.StreamType
import com.mparticle.testing.BaseTest
import com.mparticle.testing.FailureLatch
import kotlin.test.*

class SampleTests: BaseTest() {

    @Test
    @Throws(Throwable::class)
    fun testStarted() {
        startMParticle()
        assertNotNull(MParticle.getInstance())
    }

    @Test
    @Throws(Throwable::class)
    fun testDefaultEnvironment() {
        startMParticle()
        val environment = MParticle.getInstance()?.getEnvironment()
        assertNotNull(environment)
    }

    @Test
    @Throws(Throwable::class)
    fun testSetEnvironment() {
        startMParticle(MParticleOptions("apiKey", "apiSecret", clientPlatform, {}).apply {
            environment = Environment.Development
        })
        val environment = MParticle.getInstance()?.getEnvironment()
        assertEquals(Environment.Development, environment)
    }

    @Test
    @Throws(Throwable::class)
    fun testMediaSession() {
        startMParticle()
        val mediaSession = MediaSession(
            mparticle = MParticle.getInstance(),
            title = "some title",
            mediaContentId = "contentId",
            duration = 100,
            streamType = StreamType.LiveStream,
            contentType = ContentType.Audio,
            logMediaEvents = true,
            logMPEvents = false
        )
        val latch = FailureLatch()
//        {"type":"Play","id":"eb2c805f-591f-4d8a-9e86-8c8d41b9f0db","Media Content":{"name":"some title","id":"contentId","duration":100,"stream type":"LiveStream","content type":"Audio"},"timestamp":1617117107169}
        mediaSession.setMediaEventListener { event ->
            Logger().error("MEDIA EVENT= ${event.toMPEvent().toString()}")
            latch.countDown()
        }
        mediaSession.logPlay()
        latch.await()
    }
}