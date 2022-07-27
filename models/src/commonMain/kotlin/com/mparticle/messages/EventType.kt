package com.mparticle.messages

import kotlinx.serialization.Serializable

@Serializable
enum class EventType {
    Unknown,
    Navigation,
    Location,
    Search,
    Transaction,
    UserContent,
    UserPreference,
    Social,
    Other,
    Media
}