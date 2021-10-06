package com.mparticle.api.events

import cocoapods.mParticle_Apple_SDK.MPBaseEvent
import com.mparticle.api.TransformDelegate
import com.mparticle.api.commerce.mapTransformer
import com.mparticle.api.commerce.messageTypeTransformer
import platform.Foundation.allKeys
import platform.Foundation.valueForKey

actual open class BaseEvent(val baseEvent: MPBaseEvent)  {
    actual constructor(type: MessageType): this(MPBaseEvent())
    actual val type: MessageType by TransformDelegate(baseEvent::type, messageTypeTransformer)

    actual var customAttributes: Map<String, String?> by TransformDelegate(baseEvent::customAttributes, mapTransformer)
    actual var customFlags: Map<String, List<String>>
        get() = baseEvent.customFlags?.run {
            allKeys?.associate { it.toString() to listOf(valueForKey(it.toString()).toString()) }
        } ?: mapOf()
        set(value) {
            value?.entries?.forEach { baseEvent.addCustomFlag(it.value.joinToString(), it.key) }
        }
}