package com.mparticle.api.media.events

import com.mparticle.media.events.StreamType as StreamTypeAndroid

actual enum class StreamType(val streamType: String) {
    LiveStream(StreamTypeAndroid.LIVE_STEAM),
    OnDemand(StreamTypeAndroid.ON_DEMAND);

    companion object {
        fun forStreamType(streamType: String): StreamType? {
            return values().firstOrNull { it.streamType == streamType}
        }
    }
}