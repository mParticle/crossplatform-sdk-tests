package com.mparticle.api.media.events

import cocoapods.mParticle_Apple_Media_SDK.MPMediaContentTypeAudio
import cocoapods.mParticle_Apple_Media_SDK.MPMediaContentTypeVideo

actual enum class ContentType(val contentType: Long) {
    Video(MPMediaContentTypeVideo),
    Audio(MPMediaContentTypeAudio);

    companion object {
        fun forContentType(contentType: Long): ContentType? {
            return values().firstOrNull { it.contentType == contentType }
        }
    }
}