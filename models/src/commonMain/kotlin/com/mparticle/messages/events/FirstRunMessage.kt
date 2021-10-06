package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("fr")
class FirstRunMessage: BaseEvent() {
    override val messageType: String = "fr"
}