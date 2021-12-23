package com.mparticle.mockserver.model

import com.mparticle.api.Logger
import com.mparticle.mockserver.Response
import kotlin.random.Random
import kotlinx.serialization.KSerializer
import kotlinx.serialization.json.Json

interface RawConnection {
    fun getUrl(): String?
    fun getRequestBody(): String
    fun getHeaderFields(): Map<String, List<String?>?>

    fun getResponseCode(): Int
    fun getResponseBody(): String?
    fun getResponseHeaders(): Map<Any?, Any?>
    fun getError(): String?

    fun setResponseCode(responseCode: Int)
    fun setResponseBody(responseBody: String?)
    fun setError(responseError: String?)
}

class SimpleRawConnection(private val url: String?,
                          private val requestBody: () -> String?,
                          private val responseCode: Int? = null,
                          private val error: String? = null,
                          private val responseBody: String? = null,
                          private val responseHeaders: Map<Any?, Any?> = mapOf()
): RawConnection {
    constructor(url: String?, requestBody: String?): this(url, {requestBody})

//    constructor(connection: RawConnection, response: Response<out Any>): this(
//        connection.getUrl(),
//        { connection.getRequestBody() },
//        response.httpCode,
//        response.isError,
//        response.errorMessage,
//        responseBody = if (response.responseObject != null) {
//            Json.encodeToString(endpointType.responseSerializer, response.responseObject)
//        } else {
//            null
//        })

    private val uuid = Random.nextInt() % 10000

    override fun setResponseCode(responseCode: Int) {
        TODO("Not yet implemented")
    }

    override fun setResponseBody(responseBody: String?) {
        TODO("Not yet implemented")
    }

    override fun setError(responseError: String?) {
        TODO("Not yet implemented")
    }
    override fun getUrl() = url
    override fun getRequestBody() = requestBody() ?: ""
    override fun getResponseCode() = responseCode ?: -1
    override fun getResponseBody() = responseBody
    override fun getError() = error

    override fun getHeaderFields(): Map<String, List<String?>?> {
        return mapOf()
    }

    override fun getResponseHeaders(): Map<Any?, Any?> {
        return responseHeaders
    }

    override fun toString(): String {
        return """
            uuid: $uuid
            
            url: ${getUrl()}
            message: ${getRequestBody()}
            error: ${getError()}
            
            responseCode: $responseCode
            response: $responseBody
            responseHeaders: {
                ${responseHeaders.entries.joinToString(",\n") { "${it.key}: ${it.value}" }}
             }
        """
    }

}