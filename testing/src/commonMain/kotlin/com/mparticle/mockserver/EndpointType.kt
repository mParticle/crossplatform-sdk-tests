package com.mparticle.mockserver

import com.mparticle.messages.*
import com.mparticle.mockserver.model.RawConnection
import kotlinx.serialization.KSerializer
import kotlinx.serialization.json.Json
import kotlin.jvm.JvmField


class EndpointType<T, R> private constructor(val name: String,
                                                           internal val requestSerializer: KSerializer<T>,
                                                           internal val responseSerializer: KSerializer<R>,
                                                           internal val urlMatch: (String) -> Boolean) {
    init {
        values.add(this)
    }

    internal fun onReceive(mockServer: MockServer2, connection: RawConnection): Boolean {
        val request = parse(mockServer, connection)
        if (request != null) {
            mockServer.getEndpoint(this).onReceive(request, connection)
        }
        return request != null
    }

    internal fun parse(mockServer: MockServer2, connection: RawConnection): T? {
        try {
            val json = connection.getBody()
            return Json.decodeFromString(requestSerializer, json)
        } catch (e: Exception) {
            mockServer.failHard(e)
            return null
        }
    }

    companion object {
        internal val values = mutableSetOf<EndpointType<*, *>>()

        @JvmField
        val Config = EndpointType("Config", Empty.serializer(), ConfigResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("config") } }
        @JvmField
        val Events = EndpointType("Events", BatchMessage.serializer(), Empty.serializer()) { it.split("/").let { it[it.size - 1].startsWith("events") }}
        @JvmField
        val Alias = EndpointType("Alias", AliasRequestMessage.serializer(), Empty.serializer()) { it.split("/").let { it[it.size - 1].startsWith("alias") }}
        @JvmField
        val Identity_Identify = EndpointType("Identity_Identify", IdentityRequestMessage.serializer(), IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("identify") }}
        @JvmField
        val Identity_Login = EndpointType("Identity_Login",  IdentityRequestMessage.serializer(), IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("login") }}
        @JvmField
        val Identity_Logout = EndpointType("Identity_Logout",  IdentityRequestMessage.serializer(), IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("logout") }}
        @JvmField
        val Identity_Modify = EndpointType("Identity_Modify",  IdentityRequestMessage.serializer(), IdentityResponseMessage.serializer()) { it.split("/").let { it[it.size - 1].startsWith("modify") }}
    }

    override fun equals(other: Any?): Boolean {
        return (other as? EndpointType<*, *>)?.name?.equals(name) ?: false
    }

    override fun hashCode(): Int {
        return name.hashCode()
    }
}