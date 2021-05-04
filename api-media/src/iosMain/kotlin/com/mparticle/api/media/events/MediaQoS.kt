package com.mparticle.api.media.events

import com.mparticle.api.media.toNSNumber
import cocoapods.mParticle_Apple_Media_SDK.MPMediaQoS as MediaQoSApple

actual class MediaQoS(val mediaQoSApple: MediaQoSApple) {
    actual constructor(): this(MediaQoSApple())

    actual var startupTime: Long?
        get() = mediaQoSApple.startupTime()?.longLongValue
        set(value) { mediaQoSApple.setStartupTime(value.toNSNumber()!!) }
    actual var droppedFrames: Int?
        get() = mediaQoSApple.droppedFrames()?.intValue
        set(value) { mediaQoSApple.setDroppedFrames(value.toNSNumber()!!)}
    actual var bitRate: Int?
        get() = mediaQoSApple.bitRate()?.intValue
        set(value) { mediaQoSApple.setBitRate(value.toNSNumber()!!)}
    actual var fps: Int?
        get() = mediaQoSApple.fps()?.intValue
        set(value) { mediaQoSApple.setFps(value.toNSNumber()!!)}
}