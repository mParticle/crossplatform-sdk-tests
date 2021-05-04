package com.mparticle.api.media.events

import com.mparticle.media.events.MediaAd as MediaAdAndroid


actual class MediaAd(val mediaAdAndroid: MediaAdAndroid) {
    actual constructor(title: kotlin.String, id: kotlin.String): this(MediaAdAndroid(title = title, id = id))

    actual var title: String
        get() = mediaAdAndroid.title!!
        set(value) { mediaAdAndroid.title = value }
    actual var id: String
        get() = mediaAdAndroid.id!!
        set(value) { mediaAdAndroid.id = value }
    actual var duration: Long? by mediaAdAndroid::duration
    actual var advertiser: String? by mediaAdAndroid::advertiser
    actual var campaign: String? by mediaAdAndroid::campaign
    actual var creative: String? by mediaAdAndroid::creative
    actual var placement: String? by mediaAdAndroid::placement
    actual var position: Int? by mediaAdAndroid::position
    actual var siteId: String? by mediaAdAndroid::siteId
}