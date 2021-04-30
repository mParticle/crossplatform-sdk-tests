package com.mparticle.api.media.events

expect class MediaContent() {
    var name: String?
    var contentId: String?
    var duration: Long?
    var contentType: ContentType?
    var streamType: StreamType?
}

fun MediaContent(initializer: MediaContent.() -> Unit) = MediaContent().apply(initializer)