package com.mparticle.api.media.events

import com.mparticle.api.media.toEntry

expect class MediaAdBreak(id: String, title: String) {
    var id: String?
    var title: String?
    var duration: Long?
}
fun MediaAdBreak.toMap(): Map<String, Any?> {
    return mapOf(
        this::title.toEntry(),
        this::id.toEntry(),
        this::duration.toEntry()
    )
}