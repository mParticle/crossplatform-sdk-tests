package com.mparticle.messages.events

import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("e")
class MPEventMessage(
    @SerialName("n") var name: String? = null,
    @SerialName("el") var eventDuration: Double? = null
): BaseEvent() {
    override val messageType: String = "e"
}