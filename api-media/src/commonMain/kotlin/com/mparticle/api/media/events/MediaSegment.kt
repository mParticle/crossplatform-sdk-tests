package com.mparticle.api.media.events

import com.mparticle.api.media.toEntry

expect class MediaSegment(title: String, index: Int, duration: Long) {
    var title: String?
    var index: Int?
    var duration: Long?
}

fun MediaSegment.toMap(): Map<String, Any?> {
    return mapOf(
        this::title.toEntry(),
        this::index.toEntry(),
        this::duration.toEntry(),
    )
}

fun MediaSegment(title: String, index: Int, duration: Long, initializer: MediaSegment.() -> Unit) = MediaSegment(title, index, duration).apply(initializer)