package com.mparticle.api.media

import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.media.events.*
import com.mparticle.media.events.MediaEvent as MediaEventAndroid



actual class MediaEvent(val mediaEventAndroid: MediaEventAndroid): BaseEvent(mediaEvent = mediaEventAndroid) {
    actual constructor(
        session: MediaSession,
        options: Options?,
        eventName: MediaEventName,
        timeStamp: Long,
        id: String,
    ) : this(
        mediaEventAndroid = MediaEventAndroid(
            session = session.mediaSessionAndroid,
            eventName = eventName.eventName,
            options = options?.optionsAndroid,
            timeStamp = timeStamp,
            id = id
        )
    )

    actual val eventName: MediaEventName = MediaEventName.forEventName(mediaEventAndroid.eventName)
    actual var sessionId: String? by mediaEventAndroid::sessionId
    actual var playheadPosition: Long? by mediaEventAndroid::playheadPosition
    actual var seekPosition: Long? by mediaEventAndroid::seekPosition
    actual var bufferDuration: Long? by mediaEventAndroid::bufferDuration
    actual var bufferPercent: Double? by mediaEventAndroid::bufferPercent
    actual var bufferPosition: Long? by mediaEventAndroid::bufferPosition

    actual var qos: MediaQoS?
        get() = mediaEventAndroid.qos?.let { MediaQoS(it) }
        set(value) {
            mediaEventAndroid.qos = value?.mediaQoSAndroid
        }
    actual var mediaAd: MediaAd?
        get() = mediaEventAndroid.mediaAd?.let { MediaAd(it) }
        set(value) {
            mediaEventAndroid.mediaAd = value?.mediaAdAndroid
        }
    actual var segment: MediaSegment?
        get() = mediaEventAndroid.segment?.let { MediaSegment(it) }
        set(value) {
            mediaEventAndroid.segment = value?.mediaSegmentAndroid
        }
    actual var adBreak: MediaAdBreak?
        get() = mediaEventAndroid.adBreak?.let { MediaAdBreak(it) }
        set(value) {
            mediaEventAndroid.adBreak = value?.mediaAdBreakAndroid
        }
    actual val mediaContent: MediaContent
        get() = mediaEventAndroid.mediaContent?.let { MediaContent(it) }


    actual fun toMPEvent(): MPEvent {
        return MPEvent(mediaEventAndroid.toMPEvent())
    }

    actual override fun toString(): String {
        return mediaEventAndroid.toString()
    }
}