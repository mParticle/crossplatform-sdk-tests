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

    class Builder {
        var mpid: Long? = null
        var context: String? = null
        var errors: List<Error>? = null
        var isLoggedIn: Boolean? = null

        fun build():IdentityResponseMessage = IdentityResponseMessage(mpid, context, errors, isLoggedIn)
    }
}

fun IdentityResponseMessage(intializer: IdentityResponseMessage.Builder.() -> Unit) = IdentityResponseMessage.Builder().apply(intializer).build()

@Serializable
data class Error (
    @SerialName("code") val code: String? = null,
    @SerialName("message") val message: String? = null
)

fun Error(initializer: Error.() -> Unit) = Error().apply(initializer)