package com.mparticle.api.events

import com.mparticle.MParticle

actual enum class EventType(val eventTypeAndroid: MParticle.EventType) {
    Navigation(MParticle.EventType.Navigation),
    Location(MParticle.EventType.Location),
    Search(MParticle.EventType.Search),
    Transaction(MParticle.EventType.Transaction),
    UserContent(MParticle.EventType.UserContent),
    UserPreference(MParticle.EventType.UserPreference),
    Social(MParticle.EventType.Social),
    Other(MParticle.EventType.Other),
    Media(MParticle.EventType.Media);

    companion object {
        fun forEventType(eventTypeAndroid: MParticle.EventType): EventType {
            return values().first{ it.eventTypeAndroid == eventTypeAndroid }
        }
    }
}