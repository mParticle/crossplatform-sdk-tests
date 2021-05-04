package com.mparticle.api.media.events

import com.mparticle.api.media.toNSNumber
import cocoapods.mParticle_Apple_Media_SDK.MPMediaAdBreak as MediaAdBreakApple

actual class MediaAdBreak(val mediaAdBreakApple: MediaAdBreakApple) {
    actual constructor(id: String, title: String): this(MediaAdBreakApple(title = title, id = id))
    actual var id: String?
        get() = mediaAdBreakApple.id()
        set(value) { mediaAdBreakApple.setId(value!!)}
    actual var title: String?
        get() = mediaAdBreakApple.title()
        set(value) { mediaAdBreakApple.setTitle(value!!)}
    actual var duration: Long?
        get() = mediaAdBreakApple.duration()?.longLongValue
        set(value) { mediaAdBreakApple.setDuration(value.toNSNumber())}

}