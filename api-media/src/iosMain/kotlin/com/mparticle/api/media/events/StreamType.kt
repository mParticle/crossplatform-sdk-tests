package com.mparticle.api.media.events

import cocoapods.mParticle_Apple_Media_SDK.MPMediaStreamTypeLiveStream
import cocoapods.mParticle_Apple_Media_SDK.MPMediaStreamTypeOnDemand

actual enum class StreamType(val streamType: Long) {
    LiveStream(MPMediaStreamTypeLiveStream),
    OnDemand(MPMediaStreamTypeOnDemand);

    companion object {
        fun forStreamType(streamType: Long): StreamType? {
            return values().firstOrNull { it.streamType == streamType }
        }
    }
}