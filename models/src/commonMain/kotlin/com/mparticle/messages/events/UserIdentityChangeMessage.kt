package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("uic")
class UserIdentityChangeMessage: BaseEvent(){
    override val messageType: String = "uic"
}