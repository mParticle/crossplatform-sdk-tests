package com.mparticle.api.media.events

import com.mparticle.api.media.toEntry
import kotlin.jvm.JvmStatic
import kotlin.jvm.JvmSynthetic

expect class MediaQoS() {
    var startupTime: Long?
    var droppedFrames: Int?
    var bitRate: Int?
    var fps: Int?
}

fun MediaQoS.toMap(): Map<String, Any?> {
    return mapOf(
        this::startupTime.toEntry(),
        this::droppedFrames.toEntry(),
        this::bitRate.toEntry(),
        this::fps.toEntry()
    )
}

fun MediaQoS(initializer: MediaQoS.() -> Unit) = MediaQoS().apply(initializer)