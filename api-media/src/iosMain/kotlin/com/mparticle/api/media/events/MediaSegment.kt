package com.mparticle.api.media.events

import com.mparticle.api.media.toNSNumber
import cocoapods.mParticle_Apple_Media_SDK.MPMediaSegment as MediaSegmentApple

actual class MediaSegment(val mediaSegmentApple: MediaSegmentApple) {
    actual constructor(title: String, index: Int, duration: Long): this(MediaSegmentApple(title, index.toLong(), duration.toNSNumber()!!))
    actual var title: String?
        get() = mediaSegmentApple.title()
        set(value) { mediaSegmentApple.setTitle(value!!)}
    actual var index: Int?
        get() = mediaSegmentApple.index().toInt()
        set(value) { mediaSegmentApple.setIndex(value!!.toLong())}
    actual var duration: Long?
        get() = mediaSegmentApple.duration().longLongValue
        set(value) { mediaSegmentApple.setDuration(value.toNSNumber()!!)}
}