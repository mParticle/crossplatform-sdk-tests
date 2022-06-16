package com.mparticle.messages.events

import com.mparticle.messages.DTO
import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject


@Serializable
@SerialName("uic")
class UserIdentityChangeMessage(
    @SerialName("ni") val newIdentity: NewIdentity? = null,
    @SerialName("oi") val oldIdentity: OldIdentity? = null
): BaseEvent(){
    override val messageType: String = "uic"
}

@Serializable
class NewIdentity (
    @SerialName("dfs") var dateFirstSeen: Long? = null,
    @SerialName("i") var identityValue: String? = null,
    @SerialName("n") var identityType: Int? = null,
    @SerialName("f") var firstTimeSet: Boolean? = null
): DTO()

        @Serializable
class OldIdentity(
    @SerialName("i") var identityValue: String? = null,
    @SerialName("n") var identityType: Int? = null
): DTO()