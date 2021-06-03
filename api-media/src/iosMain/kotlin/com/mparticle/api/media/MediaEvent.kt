package com.mparticle.api.media

import cocoapods.mParticle_Apple_Media_SDK.MPMediaEvent
import cocoapods.mParticle_Apple_SDK.MPBaseEvent
import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.media.events.*

actual class MediaEvent(val mediaEventApple: MPMediaEvent): BaseEvent(mediaEventApple as MPBaseEvent) {

    actual constructor(
        session: MediaSession,
        options: Options?,
        eventName: MediaEventName,
        timeStamp: Long,
        id: String,
    ) : this(MPMediaEvent(eventName.eventNameApple, session.mediaSessionApple, options?.optionsApple))

    actual val eventName: MediaEventName = MediaEventName.forEventName(mediaEventApple.mediaEventName())

    actual var sessionId: String?
        get() = mediaEventApple.mediaSessionId()
        set(value) {
            mediaEventApple.setMediaSessionId(value!!)
        }
    actual val mediaContent: MediaContent
        get() = MediaContent().apply {
            name = mediaEventApple.mediaContentTitle()
            contentId = mediaEventApple.mediaContentId()
            duration = mediaEventApple.duration()?.longLongValue
            contentType = ContentType.forContentType(mediaEventApple.contentType())
            streamType = StreamType.forStreamType(mediaEventApple.streamType())
        }
    actual var playheadPosition: Long?
        get() = mediaEventApple.playheadPosition()?.longLongValue
        set(value) {
            mediaEventApple.setPlayheadPosition(value.toNSNumber())
        }
    actual var qos: MediaQoS?
        get() = mediaEventApple.qos()?.let { MediaQoS((it)) }
        set(value) {
            mediaEventApple.setQos(qos?.mediaQoSApple)
        }
    actual var mediaAd: MediaAd?
        get() = mediaEventApple.adContent()?.let { MediaAd(it) }
        set(value) {
            mediaEventApple.setAdContent(value?.mediaAdApple)
        }
    actual var segment: MediaSegment?
        get() = mediaEventApple.segment()?.let { MediaSegment(it) }
        set(value) {
            mediaEventApple.setSegment(value?.mediaSegmentApple)
        }
    actual var adBreak: MediaAdBreak?
        get() = mediaEventApple.adBreak()?.let { MediaAdBreak(it) }
        set(value) {
            mediaEventApple.setAdBreak(value?.mediaAdBreakApple)
        }
    actual var seekPosition: Long?
        get() = mediaEventApple.seekPosition()?.longLongValue
        set(value) {
            mediaEventApple.setSeekPosition(value.toNSNumber())
        }
    actual var bufferDuration: Long?
        get() = mediaEventApple.bufferDuration()?.longLongValue
        set(value) {
            mediaEventApple.setBufferDuration(value.toNSNumber())
        }
    actual var bufferPercent: Double?
        get() = mediaEventApple.bufferPercent()?.doubleValue
        set(value) {
            mediaEventApple.setBufferPercent(value.toNSNumber())
        }
    actual var bufferPosition: Long?
        get() = mediaEventApple.bufferPosition()?.longLongValue
        set(value) {
            mediaEventApple.setBufferPosition(value.toNSNumber())
        }

    actual fun toMPEvent(): MPEvent {
        return MPEvent(mediaEventApple.toMPEvent())
    }
}