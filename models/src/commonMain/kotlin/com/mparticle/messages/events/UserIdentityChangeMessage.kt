package com.mparticle.messages.events

import com.mparticle.messages.DTO
import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject

//"dt":"uac","ct":1658429266062,"sid":"6DC1B2FF-C181-4489-B4DD-242C15EC6E80","sct":1658429266058,"n":"foo","nv":"bar","ov":null,"d":false,"na":true,"cs":{"fds":5276753920,"efds":5276753920,"amt":27664528,"ama":23154136,"amm":201326592,"sma":1243095040,"tsm":2063716352,"bl":1,"tss":1402,"dct":"offline","so":1,"sbo":1,"sml":false,"smt":226492416},"id":"a9e23bce-fb79-4dab-805d-1d12cda30a73"}
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