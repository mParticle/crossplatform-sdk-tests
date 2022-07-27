package com.mparticle.testing.mockserver.model

import kotlin.random.Random

interface RawConnection {
    fun getUrl(): String
    fun getRequestBody(): String
    fun getHeaderFields(): Map<String, String?>

    fun getResponseCode(): Int
    fun getResponseBody(): String?
    fun getResponseHeaders(): Map<Any?, Any?>
    fun getError(): String?

    fun setResponseCode(responseCode: Int)
    fun setResponseBody(responseBody: String?)
    fun setError(responseError: String?)
}

class SimpleRawConnection(private var url: String,
                          private var requestBody: () -> String?,
                          private var requestHeaders: () -> Map<String, String?>,
                          private var responseCode: Int? = null,
                          private var error: String? = null,
                          private var responseBody: String? = null,
                          private var responseHeaders: Map<Any?, Any?> = mapOf()
): RawConnection {
    constructor(url: String, requestBody: String?, requestHeaders: Map<String, String?>): this(url, {requestBody},  { requestHeaders })

    private val uuid = Random.nextInt() % 10000

    override fun setResponseCode(responseCode: Int) {
        this.responseCode = responseCode
    }

    override fun setResponseBody(responseBody: String?) {
        this.responseBody = responseBody
    }

    override fun setError(responseError: String?) {
        this.error = responseError
    }
    override fun getUrl() = url
    override fun getRequestBody() = requestBody() ?: ""
    override fun getResponseCode() = responseCode ?: -1
    override fun getResponseBody() = responseBody
    override fun getError() = error

    override fun getHeaderFields(): Map<String, String?> {
        return requestHeaders()
    }

    override fun getResponseHeaders(): Map<Any?, Any?> {
        return responseHeaders
    }

    override fun toString(): String {
        return """
            uuid: $uuid
            
            url: ${getUrl()}
            message: ${getRequestBody()}
            headers: ${requestHeaders()}
            error: ${getError()}
            
            responseCode: $responseCode
            response: $responseBody
            responseHeaders: {
                ${responseHeaders.entries.joinToString(",\n") { "${it.key}: ${it.value}" }}
             }
        """
    }

}