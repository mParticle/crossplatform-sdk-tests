package com.mparticle.messages.events

import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("pr")
class PushRegistrationMessage: BaseEvent() {
    override val messageType = "pr"
}