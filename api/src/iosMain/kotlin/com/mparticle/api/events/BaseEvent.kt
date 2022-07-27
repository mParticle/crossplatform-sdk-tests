package com.mparticle.api.events

import cocoapods.mParticle_Apple_SDK.MPBaseEvent
import com.mparticle.api.Logger
import com.mparticle.api.TransformDelegate
import com.mparticle.api.commerce.mapTransformer
import com.mparticle.api.commerce.messageTypeTransformer
import com.mparticle.messages.EventType
import platform.Foundation.NSDictionary
import platform.Foundation.allKeys
import platform.Foundation.dictionaryWithValuesForKeys
import platform.Foundation.valueForKey
import cocoapods.mParticle_Apple_SDK.MPEvent as MPEventIos

actual open class BaseEvent(val baseEvent: MPBaseEvent)  {
    actual constructor(type: MessageType): this(MPBaseEvent())
    actual val type: MessageType by TransformDelegate(baseEvent::type, messageTypeTransformer)

    actual var customAttributes: Map<String, Any?> by TransformDelegate(baseEvent::customAttributes, mapTransformer)
    actual var customFlags: Map<String, List<String>>
        get() = baseEvent.customFlags?.run {
            allKeys.associate { it.toString() to listOf(valueForKey(it.toString()).toString()) }
        } ?: mapOf()
        set(value) {
            value.entries.forEach { baseEvent.addCustomFlag(it.value.joinToString(), it.key) }
        }
}

fun MPEvent(event: MPEventIos): MPEvent {
    return MPEvent(event.name,  event.type.toEventType()).apply {
        length = event.endTime?.let {start -> event.endTime?.let { end -> end.timeIntervalSinceReferenceDate - start.timeIntervalSinceReferenceDate}}
        customFlags = event.customFlags?.let { it.dictionaryWithValuesForKeys(it.allKeys) }
            ?.map { it.key?.let { key -> key.toString() to it.value} }
            ?.filterNotNull()
            ?.associate { it.first to it.second as List<String> } ?: mapOf()
        customAttributes = event.customAttributes?.toMap()
            ?.map{ it.key?.let { key -> key.toString() to it.value}}
            ?.filterNotNull()
            ?.associate { it.first to it.second?.toString() } ?: mapOf()
        category = event.category
    }
}

fun NSDictionary.toMap(): Map<*, *> {
    return dictionaryWithValuesForKeys(allKeys)
}

fun Any.toEventType(): EventType {
    Logger.info("translating iOS IdentityType of: $this")
    return EventType.values().first {
        it.ordinal == (this as? Number)?.toInt()
    }
}