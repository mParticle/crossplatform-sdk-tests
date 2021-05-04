package com.mparticle.api.media.events

import com.mparticle.media.events.MediaQoS
import com.mparticle.media.events.MediaSegment as MediaSegmentAndroid

actual class MediaSegment(val mediaSegmentAndroid: MediaSegmentAndroid) {
    actual constructor(title: String, index: Int, duration: Long): this(MediaSegmentAndroid(title = title, index = index, duration = duration))

    actual var title: String? by mediaSegmentAndroid::title
    actual var index: Int? by mediaSegmentAndroid::index
    actual var duration: Long? by mediaSegmentAndroid::duration
}