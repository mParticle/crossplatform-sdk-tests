package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("v")
class ScreenViewMessage: BaseEvent() {
    override val messageType: String = "v"
}