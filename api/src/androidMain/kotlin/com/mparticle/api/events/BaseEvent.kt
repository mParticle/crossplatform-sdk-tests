package com.mparticle.api.events

import com.mparticle.BaseEventAndroidInit
import com.mparticle.api.GenericDelegate
import com.mparticle.api.NullableDelegate
import com.mparticle.commerce.CommerceEvent
import com.mparticle.setCustomFlags
import kotlin.properties.Delegates
import com.mparticle.BaseEvent as BaseEventAndroid
import com.mparticle.MPEvent as MPEventAndroid

actual open class BaseEvent(type: () -> MessageType, customAttributes: (Map<String, String?>) -> Unit, customFlags: (Map<String, List<String>>) -> Unit, val event: () -> BaseEventAndroid) {
    constructor(baseEvent: BaseEventAndroid): this({MessageType.forMessageType(baseEvent.type)}, { customAttributes: Map<String, String?> -> baseEvent.customAttributes = customAttributes}, { customFlags: Map<String, List<String>> -> customFlags.forEach { baseEvent.customFlags?.set(it.key, it.value) }}, { baseEvent })
    constructor(commerceEvent: CommerceEvent.Builder): this({MessageType.CommerceEvent}, { customAttributes: Map<String, String?> -> commerceEvent.customAttributes(customAttributes)}, { customFlags: Map<String, List<String>> -> commerceEvent.customFlags(customFlags) }, {commerceEvent.build()})
    constructor(mpEvent: MPEventAndroid.Builder): this({MessageType.CommerceEvent}, { customAttributes: Map<String, String?> -> mpEvent.customAttributes(customAttributes)}, { customFlags: Map<String, List<String>> -> mpEvent.customFlags(customFlags) }, {mpEvent.build()})
    actual constructor(type: MessageType): this(BaseEventAndroidInit(type.androidMessageType))

    actual val type: MessageType = type()
    actual var customFlags: Map<String, List<String>> by GenericDelegate(mapOf()) { customFlags(it) }
    actual var customAttributes: Map<String, String?> by GenericDelegate(mapOf()) { customAttributes(it)}
    actual var shouldStartSession: Boolean = false
}