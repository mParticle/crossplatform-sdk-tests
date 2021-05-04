package com.mparticle.api.events

import cocoapods.mParticle_Apple_SDK.MPEventTypeNavigation as NavigationApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeLocation as LocationApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeSearch as SearchApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeTransaction as TransactionApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeUserContent as UserContentApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeUserPreference as UserPreferenceApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeSocial as SocialApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeOther as OtherApple
import cocoapods.mParticle_Apple_SDK.MPEventTypeMedia as MediaApple

actual enum class EventType(val eventTypeApple: ULong) {
    Navigation(NavigationApple),
    Location(LocationApple),
    Search(SearchApple),
    Transaction(TransactionApple),
    UserContent(UserContentApple),
    UserPreference(UserPreferenceApple),
    Social(SocialApple),
    Other(OtherApple),
    Media(MediaApple);

    companion object {
        fun forEventType(eventTypeApple: ULong): EventType {
            return values().first { it.eventTypeApple == eventTypeApple }
        }
    }
}