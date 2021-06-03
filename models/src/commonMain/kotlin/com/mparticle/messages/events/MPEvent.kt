package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("e")
class MPEvent: BaseEvent() {

    @SerialName("n")
    var name: String? = null

    @SerialName("el")
    var eventDuration: Double? = null

}