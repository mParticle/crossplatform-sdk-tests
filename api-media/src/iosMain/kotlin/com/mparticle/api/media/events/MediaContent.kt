package com.mparticle.api.media.events

actual class MediaContent (
    actual var name: String?,
    actual var contentId: String?,
    actual var duration: Long?,
    actual var contentType: ContentType?,
    actual var streamType: StreamType?
) {
    actual constructor() : this(null, null, null, null, null)
}