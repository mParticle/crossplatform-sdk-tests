package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlin.jvm.JvmOverloads

@Serializable
class IdentityResponseMessage @JvmOverloads constructor(
    @SerialName("mpid")
    var mpid: Long? = null,

    @SerialName("context")
    var context: String? = null,

    @SerialName("errors")
    var errors: List<Error>? = null,

    @SerialName("is_logged_in")
    var isLoggedIn: Boolean? = null,
): ServerMessageObject()

@Serializable
class Error: ServerMessageObject()  {
    @SerialName("code")
    var code: String? = null

    @SerialName("message")
    var message: String? = null
}