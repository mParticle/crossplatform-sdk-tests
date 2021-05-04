package com.mparticle.api.media

import com.mparticle.api.MParticle
import com.mparticle.api.MParticleImpl
import com.mparticle.api.events.MPEvent
import com.mparticle.api.media.events.*
import java.util.stream.Stream
import com.mparticle.media.events.MediaEvent as MediaEventAndroid
import com.mparticle.media.MediaEventListener as MediaEventListenerAndroid
import com.mparticle.media.MediaSession as MediaSessionAndroid
import com.mparticle.MPEvent as MPEventAndroid

actual class MediaSession actual constructor(
    actual val mparticle: MParticle?,
    title: String,
    mediaContentId: String,
    duration: Long,
    streamType: StreamType,
    contentType: ContentType,
    actual val logMediaEvents: Boolean,
    actual val logMPEvents: Boolean,
    actual val mediaContentCompleteLimit: Int
) {

    val mediaSessionAndroid: MediaSessionAndroid = com.mparticle.media.MediaSession.builder((mparticle as? MParticleImpl)?.mparticle)
        .title(title)
        .mediaContentId(mediaContentId)
        .duration(duration)
        .streamType(streamType.streamType)
        .contentType(contentType.contentType)
        .logMediaEvents(logMediaEvents)
        .logMPEvents(logMPEvents)
        .mediaContentCompleteLimit(mediaContentCompleteLimit)
        .build()


    actual val mediaContent: MediaContent = MediaContent()?.apply {
        mediaSessionAndroid.title
        mediaSessionAndroid.mediaContentId
        mediaSessionAndroid.duration
        ContentType.forContentType(mediaSessionAndroid.contentType)
        StreamType.forStreamType(mediaSessionAndroid.streamType)
    }

    actual fun logMediaSessionStart(options: Options?) = mediaSessionAndroid.logMediaSessionStart(options?.optionsAndroid)
    actual fun logMediaSessionEnd(options: Options?) = mediaSessionAndroid.logMediaSessionEnd(options?.optionsAndroid)
    actual fun logMediaContentEnd(options: Options?) = mediaSessionAndroid.logMediaContentEnd(options?.optionsAndroid)
    actual fun logPlay(options: Options?) = mediaSessionAndroid.logPlay(options?.optionsAndroid)
    actual fun logPause(options: Options?) = mediaSessionAndroid.logPause(options?.optionsAndroid)
    actual fun logSeekStart(position: Long, options: Options?) = mediaSessionAndroid.logSeekStart(position, options?.optionsAndroid)
    actual fun logSeekEnd(position: Long, options: Options?) = mediaSessionAndroid.logSeekEnd(position, options?.optionsAndroid)
    actual fun logBufferStart(duration: Long, bufferPercent: Double, position: Long, options: Options?) = mediaSessionAndroid.logBufferStart(duration, bufferPercent, position, options?.optionsAndroid)
    actual fun logBufferEnd(duration: Long, bufferPercent: Double, position: Long, options: Options?) = mediaSessionAndroid.logBufferEnd(duration, bufferPercent, position, options?.optionsAndroid)
    actual fun logAdBreakStart(adBreak: MediaAdBreak, options: Options?) = mediaSessionAndroid.logAdBreakStart(adBreak.mediaAdBreakAndroid, options?.optionsAndroid)
    actual fun logAdBreakEnd(options: Options?) = mediaSessionAndroid.logAdBreakEnd(options?.optionsAndroid)
    actual fun logAdStart(ad: MediaAd, options: Options?) = mediaSessionAndroid.logAdStart(ad.mediaAdAndroid, options?.optionsAndroid)
    actual fun logAdClick(options: Options?) = mediaSessionAndroid.logAdClick(options?.optionsAndroid)
    actual fun logAdEnd(options: Options?) = mediaSessionAndroid.logAdEnd(options?.optionsAndroid)
    actual fun logAdSkip(options: Options?) = mediaSessionAndroid.logAdSkip(options?.optionsAndroid)
    actual fun logSegmentStart(segment: MediaSegment, options: Options?) = mediaSessionAndroid.logSegmentStart(segment.mediaSegmentAndroid, options?.optionsAndroid)
    actual fun logSegmentSkip(options: Options?) = mediaSessionAndroid.logSegmentSkip(options?.optionsAndroid)
    actual fun logSegmentEnd(options: Options?) = mediaSessionAndroid.logSegmentEnd(options?.optionsAndroid)
    actual fun logPlayheadPosition(playheadPosition: Long) = mediaSessionAndroid.logPlayheadPosition(playheadPosition)
    actual fun logQos(qos: MediaQoS, options: Options?) = mediaSessionAndroid.logQos(qos.mediaQoSAndroid, options?.optionsAndroid)
    actual fun buildMPEvent(eventName: String, customAttributes: Map<String, String>?): MPEvent = MPEvent(MPEventAndroid.Builder(mediaSessionAndroid.buildMPEvent(eventName, customAttributes)))

    actual fun setMediaEventListener(listener: (MediaEvent) -> Unit) {
        mediaSessionAndroid.setMediaEventListener(object: MediaEventListenerAndroid {
            override fun onLogMediaEvent(mediaEvent: MediaEventAndroid) {
                listener(MediaEvent(mediaEvent))
            }
        })
    }
}