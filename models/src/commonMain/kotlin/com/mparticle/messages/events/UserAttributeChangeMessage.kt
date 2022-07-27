package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject

@Serializable
@SerialName("uac")
class UserAttributeChangeMessage(
    @SerialName("n") val attributeName: String? = null,
    @SerialName("nv") val newValue: String? = null,
    @SerialName("ov") val oldValue: String? = null
): BaseEvent(){
    override val messageType: String = "uac"
}