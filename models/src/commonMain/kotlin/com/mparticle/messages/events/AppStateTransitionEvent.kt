package com.mparticle.messages.events

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
@SerialName("ast")
class AppStateTransitionEvent: BaseEvent() {

    @SerialName("t")
    var stateTransitionType: String? = null

    @SerialName("ifr")
    var isFirstRun: Boolean? = null

    @SerialName("iu")
    var isAppUpgrade: Boolean? = null

}