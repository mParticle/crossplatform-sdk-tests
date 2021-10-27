package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("e")
class MPEventMessage: BaseEvent() {

    override val messageType: String = "e"

    @SerialName("n")
    var name: String? = null

    @SerialName("et")
    var eventType: String? = null

    @SerialName("el")
    var eventDuration: Double? = null

}