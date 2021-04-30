package com.mparticle.api.media

import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.media.events.*

expect class MediaEvent(
    session: MediaSession,
    options: Options?,
    eventName: MediaEventName,
    timeStamp: Long = Platforms().currentTimeMillis(),
    id: String = Platforms().randomUuid()
): BaseEvent {
    val eventName: MediaEventName
    var sessionId: String?
    val mediaContent: MediaContent
    var playheadPosition: Long?

    var qos: MediaQoS?
    var mediaAd: MediaAd?
    var segment: MediaSegment?
    var adBreak: MediaAdBreak?
    var seekPosition: Long?
    var bufferDuration: Long?
    var bufferPercent: Double?
    var bufferPosition: Long?

    fun toMPEvent(): MPEvent

    override fun toString(): String
}