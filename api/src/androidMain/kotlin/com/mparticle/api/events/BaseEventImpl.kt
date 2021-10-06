package com.mparticle.api.events

import com.mparticle.api.commerce.CommerceEvent
import com.mparticle.api.events.*
import com.mparticle.BaseEvent as BaseEventAndroid
import com.mparticle.MPEvent as MPEventAndroid
import com.mparticle.MParticle.EventType as EventTypeAndroid


fun getEvent(baseEvent: BaseEvent): BaseEventAndroid {
    return when (baseEvent) {
        is MPEvent -> getMPEvent(baseEvent)
        is CommerceEvent -> baseEvent.event()
        else -> { throw RuntimeException("wtf mate")
        }
    }
}

fun getMPEvent(event: MPEvent): MPEventAndroid {
    val builder = MPEventAndroid.Builder(event.eventName, event.eventType.toEventType())
    event.apply {
        category?.let { builder.category(it) }
        customAttributes?.let { builder.customAttributes(it) }
        customFlags.forEach { builder.addCustomFlag(it.key, it.value.joinToString(",")) }
        length?.let { builder.duration(it) }
    }
    return builder.build()
}



fun EventType.toEventType(): EventTypeAndroid {
    return EventTypeAndroid.values().first { it.name.equals(this.name, ignoreCase = true) }
}



