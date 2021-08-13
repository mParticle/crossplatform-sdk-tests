package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json

@Serializable
class IdentityRequestMessage (
    @SerialName("client_sdk") val clientSdk: ClientSdkMessage? = null,
    @SerialName("context") val context: String? = null,
    @SerialName("environment") val environment: String? = null,
    @SerialName("request_id") val requestId: String? = null,
    @SerialName("request_timestamp_ms") val requestTimestamp: Long? = null,
    @SerialName("previous_mpid") val previousMpid: Long? = null,
    @SerialName("known_identities") val knownIdentities: Map<String, String>? = null,
    @SerialName("identity_changes") val identityChanges: List<IdentityChange>? = null
) {
    companion object {
        val parser: (String) -> IdentityRequestMessage = {
            fromString(it)
        }

        fun fromString(message: String): IdentityRequestMessage {
            return Json.decodeFromString(serializer(), message)
        }
    }
}

@Serializable
class ClientSdkMessage(
        @SerialName("platform") val platform: String?,
        @SerialName("sdk_vendor") val sdkVendor: String?,
        @SerialName("sdk_version") val sdkVersion: String?
)

@Serializable
class IdentityChange(
        @SerialName("new_value") val newValue: String?,
        @SerialName("old_value") val oldValue: String?,
        @SerialName("identity_type") val identityType: String?
)