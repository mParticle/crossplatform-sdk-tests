package com.mparticle.messages.events

import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("ast")
class AppStateTransitionEvent(
    @SerialName("t") var stateTransitionType: String? = null,
    @SerialName("ifr") var isFirstRun: Boolean? = null,
    @SerialName("iu") var isAppUpgrade: Boolean? = null,
    @SerialName("nsi") var interruptions: Int? = null
): BaseEvent() {
    override val messageType: String = "ast"
}