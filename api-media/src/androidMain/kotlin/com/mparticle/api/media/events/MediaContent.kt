package com.mparticle.api.media.events

import com.mparticle.media.events.MediaContent as MediaContentAndroid

actual class MediaContent(val mediaContentAndroid: MediaContentAndroid) {
    actual constructor(): this(MediaContentAndroid())
    actual var name: String? by mediaContentAndroid::name
    actual var contentId: String? by mediaContentAndroid::contentId
    actual var duration: Long? by mediaContentAndroid::duration
    actual var contentType: ContentType?
        get() = ContentType.forContentType(mediaContentAndroid.contentType!!)
        set(value) {
            mediaContentAndroid.contentType = value?.contentType
        }
    actual var streamType: StreamType?
        get() = StreamType.forStreamType(mediaContentAndroid.streamType!!)
        set(value) {
            mediaContentAndroid.streamType = value?.streamType
        }
}