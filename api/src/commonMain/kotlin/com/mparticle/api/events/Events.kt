package com.mparticle.api.events

expect open class BaseEvent(type: MessageType) {
    val type: MessageType
    var customFlags: Map<String, List<String>>
    var customAttributes: Map<String, String?>
}

expect abstract class CustomEvent: BaseEvent {
    abstract val isScreenEvent: Boolean

    val eventName: String
    val eventType: EventType
    val length: Double?

    var category: String?
    var duration: Double?

}

class MPEvent(eventName: String, eventType: EventType): CustomEvent(eventName, eventType, MessageType.Event) {
    override val isScreenEvent: Boolean = false
}

class ScreenEvent(screenName: String): CustomEvent(screenName, EventType.Other, MessageType.ScreenView) {
    override val isScreenEvent: Boolean = true
}


expect enum class EventType {
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