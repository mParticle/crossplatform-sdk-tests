package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
class UserIdentities (
    @SerialName("i") var value: String? = null,
    @SerialName("n") var identityType: Int? = null
)