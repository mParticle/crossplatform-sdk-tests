package com.mparticle

fun BaseEventAndroidInit(type: BaseEvent.MessageType): BaseEvent = BaseEvent(type)

fun BaseEvent.setCustomFlags(map: Map<String, List<String>>?) {
    customFlags = map
}