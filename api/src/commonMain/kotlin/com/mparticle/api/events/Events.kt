package com.mparticle.api.events

import com.mparticle.api.commerce.Impression
import com.mparticle.api.commerce.Product
import com.mparticle.api.commerce.Promotion
import com.mparticle.api.commerce.TransactionAttributes

expect open class BaseEvent(type: MessageType) {
    val type: MessageType
    var customFlags: Map<String, List<String>>
    var customAttributes: Map<String, String?>
    var shouldStartSession: Boolean
}

open class CustomEvent protected constructor(var eventName: String, var eventType: EventType, type: MessageType): BaseEvent(type) {
    open val isScreenEvent: Boolean = false
    var category: String? = null
    var length: Double? = null
}

class MPEvent(eventName: String, eventType: EventType): CustomEvent(eventName, eventType, MessageType.Event) {
    override val isScreenEvent: Boolean = false
}

class ScreenEvent(screenName: String): CustomEvent(screenName, EventType.Other, MessageType.ScreenView) {
    override val isScreenEvent: Boolean = true
}


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
