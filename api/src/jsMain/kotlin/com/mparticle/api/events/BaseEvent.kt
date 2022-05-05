package com.mparticle.api.events

actual open class BaseEvent actual constructor(type: MessageType) {
    actual val type: MessageType
        get() = TODO("Not yet implemented")
    actual var customFlags: Map<String, List<String>>
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var customAttributes: Map<String, String?>
        get() = TODO("Not yet implemented")
        set(value) {}
}