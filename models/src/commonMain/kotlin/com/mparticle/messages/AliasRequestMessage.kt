package com.mparticle.messages

import kotlinx.serialization.Serializable
import kotlinx.serialization.SerialName

@Serializable
class AliasRequestMessage (
        @SerialName("start_unixtime_ms") val startTime: Long?,
        @SerialName("end_unixtime_ms") val endTime: Long?,
        @SerialName("data") val data: AliasDataMessage,
        @SerialName("request_type") val requestType: String?,
        @SerialName("request_id") val requestId: String?,
        @SerialName("environment") val aliasEnvironment: String?,
        @SerialName("api_key") val apiKey: String
): ServerMessageObject()

@Serializable
class AliasDataMessage (
        @SerialName("source_mpid") val sourceMpid: Long?,
        @SerialName("destination_mpid") val destinationMpid: Long?,
        @SerialName("device_application_stamp")val deviceApplicationStamp: String?
): ServerMessageObject()