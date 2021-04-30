package com.mparticle.api.media.events

import cocoapods.mParticle_Apple_Media_SDK.MPMediaAdContent as MediaAdContentApple

import com.mparticle.api.media.toNSNumber

actual class MediaAd (val mediaAdApple: MediaAdContentApple){
    actual constructor(title: kotlin.String, id: kotlin.String): this(MediaAdContentApple(title = title, id = id))
    actual var title: String
        get() = mediaAdApple.title()
        set(value) { mediaAdApple.setTitle(value)}
    actual var duration: Long?
        get() = mediaAdApple.duration()?.longLongValue
        set(value) { mediaAdApple.setDuration(value.toNSNumber()) }
    actual var id: String
        get() = mediaAdApple.id()
        set(value) {mediaAdApple.setId(value)}
    actual var advertiser: String?
        get() = mediaAdApple.advertiser()
        set(value) { mediaAdApple.setAdvertiser(value)}
    actual var campaign: String?
        get() = mediaAdApple.campaign()
        set(value) { mediaAdApple.setCampaign(value)}
    actual var creative: String?
        get() = mediaAdApple.creative()
        set(value) { mediaAdApple.setCampaign(value)}
    actual var placement: String?
        get() = mediaAdApple.placement()
        set(value) { mediaAdApple.setPlacement(value)}
    actual var position: Int?
        get() = mediaAdApple.position()?.intValue
        set(value) { mediaAdApple.setPosition(value.toNSNumber()) }
    actual var siteId: String?
        get() = mediaAdApple.siteId()
        set(value) { mediaAdApple.setSiteId(value)}
}