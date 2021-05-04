package com.mparticle.api.media.events

import com.mparticle.media.events.ContentType as ContentTypeAndroid
actual enum class ContentType(val contentType: String) {
    Video(ContentTypeAndroid.VIDEO),
    Audio(ContentTypeAndroid.AUDIO);

    companion object {
        fun forContentType(contentType: String): ContentType? {
            return values().firstOrNull {  it.contentType == contentType }
        }
    }
}