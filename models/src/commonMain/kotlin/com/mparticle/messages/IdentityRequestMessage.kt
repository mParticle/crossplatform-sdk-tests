package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
class IdentityRequestMessage: ServerMessageObject()  {
    @SerialName("client_sdk")
    val clientSdk: ClientSdkMessage? = null

    @SerialName("context")
    val context: String? = null

    @SerialName("environment")
    val environment: String? = null

    @SerialName("request_id")
    val requestId: String? = null

    @SerialName("request_timestamp_ms")
    val requestTimestamp: Long? = null

    @SerialName("previous_mpid")
    val previousMpid: Long? = null

    @SerialName("known_identities")
    val knownIdentities: Map<String, String>? = null

    @SerialName("identity_changes")
    val identityChanges: List<IdentityChange>? = null
}

@Serializable
class ClientSdkMessage(
        @SerialName("platform")val platform: String?,
        @SerialName("sdk_vendor")val sdkVendor: String?,
        @SerialName("sdk_version")val sdkVersion: String?
)

@Serializable
class IdentityChange(
        @SerialName("new_value") var newValue: String?,
        @SerialName("old_value") var oldValue: String?,
        @SerialName("identity_type") var identityType: String?
)