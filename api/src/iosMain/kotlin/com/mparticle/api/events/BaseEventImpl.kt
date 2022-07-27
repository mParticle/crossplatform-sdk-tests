package com.mparticle.api.events

import com.mparticle.api.commerce.CommerceEvent
import platform.Foundation.NSMutableDictionary
import platform.Foundation.addEntriesFromDictionary
import kotlin.native.concurrent.freeze
import cocoapods.mParticle_Apple_SDK.MPBaseEvent as BaseEventIOS
import cocoapods.mParticle_Apple_SDK.MPEvent as MPEventIOS

fun BaseEvent.toBaseEvent(): BaseEventIOS {
    val event = when (this) {
        is CommerceEvent -> {
            this.commerceEvent.freeze()
        }
        is MPEvent -> {
            this.getEvent()
        }
        else -> {

        }
    }
    return event as BaseEventIOS
}

fun MPEvent.getEvent(): MPEventIOS {
    return MPEventIOS().also {
        it.category = category
        it.customAttributes = customAttributes.entries.associate { it.key to it.value }
        it.name = eventName
        it.type = eventType.ordinal.toULong()
    }
}

fun <K:Any?, V: Any?> Map<K, V>.toMutableDictionary(): NSMutableDictionary {
    return NSMutableDictionary()?.also {
        it.addEntriesFromDictionary(this as Map<Any?, *>)
    }
}