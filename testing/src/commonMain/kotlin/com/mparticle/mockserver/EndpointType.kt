package com.mparticle.mockserver

import com.mparticle.api.Logger
import com.mparticle.messages.*
import com.mparticle.messages.events.BatchMessage
import com.mparticle.mockserver.model.RawConnection
import kotlinx.serialization.KSerializer
import kotlinx.serialization.json.Json
import kotlin.jvm.JvmField


class EndpointType<T, R> private constructor(val name: String,
                                                           internal val requestDeserializer: (String) -> T,
                                                           internal val responseSerializer: KSerializer<R>,
                                                           internal val urlMatch: (String) -> Boolean) {
    init {
        values.add(this)
    }

    internal fun onReceive(mockServer: MockServer2, connection: RawConnection): RawConnection? {
        val request = parse(mockServer, connection)
        return if (request != null) {
            mockServer.getEndpoint(this).onReceive(request, connection)
        } else {
            null
        }
    }

    internal fun parse(mockServer: MockServer2, connection: RawConnection): T? {
        try {
            Logger().error("Handling Request in $name Endpoint")

            val json = connection.getRequestBody()
            if (json == null || json.isEmpty() || json == "null") {
                return Empty() as T
            }
            Logger().error("Decoding request: $json")
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
        val Events = EndpointType("Events", BatchMessage.parser, Empty.serializer()) { it.split("/").let { it[it.size - 1].startsWith("events") }}
        @JvmField
        val Alias = EndpointType("Alias", AliasRequestMessage.parser, Empty.serializer()) { it.split("/").let { it[it.size - 1].startsWith("alias") }}
        @JvmField
        val Identity_Identify = EndpointType("Identity_Identify", IdentityRequestMessage.parser, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("identify") }}
        @JvmField
        val Identity_Login = EndpointType("Identity_Login",  IdentityRequestMessage.parser, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("login") }}
        @JvmField
        val Identity_Logout = EndpointType("Identity_Logout",  IdentityRequestMessage.parser, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("logout") }}
        @JvmField
        val Identity_Modify = EndpointType("Identity_Modify",  IdentityRequestMessage.parser, IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("modify") }}
    }

    override fun equals(other: Any?): Boolean {
        return (other as? EndpointType<*, *>)?.name?.equals(name) ?: false
    }

    override fun hashCode(): Int {
        return name.hashCode()
    }
}