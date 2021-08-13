package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("se")
class SessionEnd: BaseEvent() {
    override val messageType: String = "se"
}