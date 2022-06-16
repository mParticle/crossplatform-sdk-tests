package com.mparticle.testing.mockserver

import com.mparticle.api.Logger
import com.mparticle.messages.*
import com.mparticle.messages.events.BatchMessage
import com.mparticle.testing.mockserver.model.RawConnection
import kotlinx.serialization.KSerializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonObject
import kotlin.jvm.JvmField


class EndpointType<T, R> private constructor(val name: String,
                                                           internal val requestDeserializer: (String) -> T,
                                                           internal val responseSerializer: KSerializer<R>,
                                                           internal val urlMatch: (String) -> Boolean) {
    init {
        values.add(this)
    }

    internal fun onReceive(mockServer: MockServer, connection: RawConnection): RawConnection? {
        val request = parse(mockServer, connection)
        return if (request != null) {
            mockServer.getEndpoint(this).onReceive(request, connection)
        } else {
            null
        }
    }

    internal fun parse(mockServer: MockServer, connection: RawConnection): T? {
        try {
            Logger.info("Handling Request in $name Endpoint")

            val json = connection.getRequestBody()
            if (json == null || json.isEmpty() || json == "null") {
                return Empty() as T
            }

            Logger.info("Decoding request: $json")
            json.split("{")
                .flatMap { "{$it".split("}").map { "$it}"} }
                .fold(StringBuilder()) { builder, item -> builder.append("\n$item")}
                .let { //Logger.error("Decoding request(fancy): $it")
                     }
            Json.parseToJsonElement(json).let {
                if (it is JsonObject) {
                    it.keys.filter { key -> key != "msgs" }
                        .joinToString("\n,") { key -> "\"$key\": ${it[key]}" }
                        .let { jsonString ->
                            Logger.error("Message without events: \n{\n$jsonString\n}")
                        }
                    it["msgs"]?.let { msgs ->
                        if (msgs is JsonArray) {
                            msgs.forEach {
//                                Logger.error("Event: ${it.toString()}")
                            }
                        } else {
                            //Logger.error("\"msgs\" is not a JsonArray")
                        }

                    } //?: Logger.error("no \"msgs\" entry")
                } else {
                    //Logger.error("not a JsonObject")
                }
            }
            return requestDeserializer(json)
        } catch (e: Exception) {
            mockServer.failHard(e)
            return null
        }
    }

    companion object {
        internal val values = mutableSetOf<EndpointType<*, *>>()

        @JvmField
        val Config = EndpointType("Config", { Empty() }, ConfigResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("config") } }
        @JvmField
        val Events = EndpointType("Events", { DTO.from<BatchMessage>(it) }, Empty.serializer()) { it.split("/").let { it[it.size - 1].startsWith("events") }}
        @JvmField
        val Alias = EndpointType("Alias", { DTO.from<AliasRequestMessage>(it) }, Empty.serializer()) { it.split("/").let { it[it.size - 1].startsWith("alias") }}
        @JvmField
        val Identity_Identify = EndpointType("Identity_Identify", { DTO.from<IdentityRequestMessage>(it) }, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("identify") }}
        @JvmField
        val Identity_Login = EndpointType("Identity_Login", { DTO.from<IdentityRequestMessage>(it) }, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("login") }}
        @JvmField
        val Identity_Logout = EndpointType("Identity_Logout", { DTO.from<IdentityRequestMessage>(it) }, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("logout") }}
        @JvmField
        val Identity_Modify = EndpointType("Identity_Modify", { DTO.from<IdentityRequestMessage>(it) }, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("modify") }}
    }

    override fun equals(other: Any?): Boolean {
        return (other as? EndpointType<*, *>)?.name?.equals(name) ?: false
    }

    override fun hashCode(): Int {
        return name.hashCode()
    }
}