package com.mparticle.api.media

import com.mparticle.api.MParticle
import com.mparticle.api.events.MPEvent
import com.mparticle.api.media.events.*

import cocoapods.mParticle_Apple_Media_SDK.MPMediaSession

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
    val mediaSessionApple = MPMediaSession(
        coreSDK = null,
        mediaContentId = mediaContentId,
        title = title,
        duration = duration.toNSNumber(),
        contentType = contentType.contentType,
        streamType = streamType.streamType
    )

    actual val mediaContent: MediaContent
        get() = MediaContent(
            name = mediaSessionApple.title(),
            contentId = mediaSessionApple.mediaContentId(),
            duration = mediaSessionApple.duration()?.longLongValue,
            contentType = ContentType.forContentType(mediaSessionApple.contentType()),
            streamType = StreamType.forStreamType(mediaSessionApple.streamType())
        )


    actual fun logMediaSessionStart(options: Options?) = mediaSessionApple.logMediaSessionStartWithOptions(options?.optionsApple)

    actual fun logMediaSessionEnd(options: Options?) = mediaSessionApple.logMediaSessionEndWithOptions(options?.optionsApple)
    actual fun logMediaContentEnd(options: Options?) = mediaSessionApple.logMediaContentEndWithOptions(options?.optionsApple)
    actual fun logPlay(options: Options?) = mediaSessionApple.logPlayWithOptions(options?.optionsApple)
    actual fun logPause(options: Options?) = mediaSessionApple.logPauseWithOptions(options?.optionsApple)
    actual fun logSeekStart(position: Long, options: Options?) = mediaSessionApple.logSeekStartWithPosition(position.toNSNumber()!!, options?.optionsApple)
    actual fun logSeekEnd(position: Long, options: Options?) = mediaSessionApple.logSeekEndWithPosition(position.toNSNumber()!!, options?.optionsApple)
    actual fun logBufferStart(duration: Long, bufferPercent: Double, position: Long, options: Options?) = mediaSessionApple.logBufferStartWithDuration(duration.toNSNumber()!!, bufferPercent.toNSNumber()!!, position.toNSNumber()!!, options?.optionsApple)
    actual fun logBufferEnd(duration: Long, bufferPercent: Double, position: Long, options: Options?) = mediaSessionApple.logBufferEndWithDuration(duration.toNSNumber()!!, bufferPercent.toNSNumber()!!, position.toNSNumber()!!, options?.optionsApple)
    actual fun logAdBreakStart(adBreak: MediaAdBreak, options: Options?) = mediaSessionApple.logAdBreakStartWithAdBreak(adBreak.mediaAdBreakApple, options?.optionsApple)
    actual fun logAdBreakEnd(options: Options?) = mediaSessionApple.logAdBreakEndWithOptions(options?.optionsApple)
    actual fun logAdStart(ad: MediaAd, options: Options?) = mediaSessionApple.logAdStartWithAdContent(ad.mediaAdApple, options?.optionsApple)
    actual fun logAdEnd(options: Options?) = mediaSessionApple.logAdEndWithOptions(options?.optionsApple)
    actual fun logAdSkip(options: Options?) = mediaSessionApple.logAdSkipWithOptions(options?.optionsApple)
    actual fun logAdClick(options: Options?) = mediaSessionApple.logAdClickWithOptions(options?.optionsApple)
    actual fun logSegmentStart(segment: MediaSegment, options: Options?) = mediaSessionApple.logSegmentStartWithSegment(segment.mediaSegmentApple, options?.optionsApple)
    actual fun logSegmentSkip(options: Options?) = mediaSessionApple.logSegmentSkipWithOptions(options?.optionsApple)
    actual fun logSegmentEnd(options: Options?) = mediaSessionApple.logSegmentEndWithOptions(options?.optionsApple)
    actual fun logPlayheadPosition(playheadPosition: Long) = mediaSessionApple.logPlayheadPositionWithPosition(playheadPosition.toNSNumber()!!)
    actual fun logQos(qos: MediaQoS, options: Options?) = mediaSessionApple.logQoSWithMetadata(qos.mediaQoSApple, options?.optionsApple)
    actual fun buildMPEvent(eventName: String, customAttributes: Map<String, String>?): MPEvent {
        return mediaSessionApple.buildMPEventWithName(eventName, null).apply {
            setCustomAttributes(customAttributes?.toMap())
        }.let {
            MPEvent(it)
        }
    }

    actual fun setMediaEventListener(listener: (MediaEvent) -> Unit) {
        mediaSessionApple.setMediaEventListener { listener(MediaEvent(it!!)) }
    }
}