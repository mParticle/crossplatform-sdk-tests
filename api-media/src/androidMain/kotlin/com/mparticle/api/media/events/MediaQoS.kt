package com.mparticle.api.media.events;

import com.mparticle.media.events.MediaQoS as MediaQoSAndroid

actual class MediaQoS constructor(val mediaQoSAndroid: MediaQoSAndroid) {
    actual constructor(): this(MediaQoSAndroid())

    actual var startupTime: Long? by mediaQoSAndroid::startupTime
    actual var droppedFrames: Int? by mediaQoSAndroid::droppedFrames
    actual var bitRate: Int? by mediaQoSAndroid::bitRate
    actual var fps: Int? by mediaQoSAndroid::fps
}
