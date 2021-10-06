package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("ss")
class SessionStartMessage: BaseEvent() {
    override val messageType: String = "ss"
}