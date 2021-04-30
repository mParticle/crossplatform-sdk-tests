package com.mparticle.api.media.events

import com.mparticle.media.events.MediaAdBreak as MediaAdBreakAndroid

actual class MediaAdBreak(val mediaAdBreakAndroid: MediaAdBreakAndroid) {
    actual constructor(id: String, title: String): this(MediaAdBreakAndroid(id = id, title = title))
    actual var id: String? by mediaAdBreakAndroid::id
    actual var title: String? by mediaAdBreakAndroid::title
    actual var duration: Long? by mediaAdBreakAndroid::duration

}