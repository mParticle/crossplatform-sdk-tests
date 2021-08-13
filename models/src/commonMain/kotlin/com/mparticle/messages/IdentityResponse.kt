package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlin.jvm.JvmOverloads

@Serializable
class IdentityResponseMessage @JvmOverloads constructor(
    @SerialName("mpid") val mpid: Long? = null,
    @SerialName("context") val context: String? = null,
    @SerialName("errors") val errors: List<Error>? = null,
    @SerialName("is_logged_in") val isLoggedIn: Boolean? = null,
) {
    constructor(mpid: String): this(mpid.toLong())
}

@Serializable
data class Error (
    @SerialName("code") val code: String? = null,
    @SerialName("message") val message: String? = null
)