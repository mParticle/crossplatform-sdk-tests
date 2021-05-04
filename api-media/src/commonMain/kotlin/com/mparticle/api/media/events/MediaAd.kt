package com.mparticle.api.media.events

import com.mparticle.api.media.toEntry

expect class MediaAd(title: String, id: String) {
    var title: String
    var id: String
    var duration: Long?
    var advertiser: String?
    var campaign: String?
    var creative: String?
    var placement: String?
    var position: Int?
    var siteId: String?
}

fun MediaAd.toMap(): Map<String, Any?> {
   return mapOf(
       this::title.toEntry(),
       this::id.toEntry(),
       this::duration.toEntry(),
       this::advertiser.toEntry(),
       this::campaign.toEntry(),
       this::creative.toEntry(),
       this::placement.toEntry(),
       this::position.toEntry(),
       this::siteId.toEntry(),
       this::siteId.toEntry()
   )
}

fun MediaAd(title: String, id: String, initializer: MediaAd.() -> Unit) = MediaAd(title, id).apply(initializer)