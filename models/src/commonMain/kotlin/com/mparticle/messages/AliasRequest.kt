package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json

@Serializable
class AliasRequestMessage (
        @SerialName("start_unixtime_ms") val startTime: Long?,
        @SerialName("end_unixtime_ms") val endTime: Long?,
        @SerialName("data") val data: AliasDataMessage,
        @SerialName("request_type") val requestType: String?,
        @SerialName("request_id") val requestId: String?,
        @SerialName("environment") val aliasEnvironment: String?,
        @SerialName("api_key") val apiKey: String
) {
        companion object {
                val parser: (String) -> AliasRequestMessage = { fromString(it)}

                fun fromString(message: String): AliasRequestMessage {
                        return Json.decodeFromString(serializer(), message)
                }
        }
}

@Serializable
class AliasDataMessage (
        @SerialName("source_mpid") val sourceMpid: Long?,
        @SerialName("destination_mpid") val destinationMpid: Long?,
        @SerialName("device_application_stamp") val deviceApplicationStamp: String?
)