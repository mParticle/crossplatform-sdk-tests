package com.mparticle.testing.mockserver

import com.mparticle.api.Logger
import com.mparticle.testing.mockserver.ThreadingUtil.runBlockingServer
import com.mparticle.testing.mockserver.model.RawConnection
import kotlinx.cinterop.addressOf
import kotlinx.cinterop.usePinned
import platform.Foundation.NSData
import platform.posix.memcpy

class AsyncRawConnectionImpl(val url: String, private val message: String? = null): RawConnection {
    fun fail(message: String) {
        val runnable = {
            throw RuntimeException(
                """
                    url: $url
                    message: $message
                """.trimIndent()
            )
        }
        runBlockingServer { runnable() }
    }

    var responseCode: Int? = null
    var responseBody: String? = null
    var responseError: String? = null
    var responseHeaders: Map<Any?, Any?> = mapOf()


    override fun getUrl(): String = url

    override fun getRequestBody(): String {
        return message ?: ""
    }

    override fun getHeaderFields(): Map<String, String?> {
        return responseHeaders.entries.associate { it.key.toString() to it.value?.toString() }
    }

    override fun getResponseCode(): Int {
        Logger.error("GetResponse Code, url = $url")
        return responseCode?: let {
            fail("Missing Response Code!")
            -1
        }
    }

    override fun getResponseBody(): String? {
        return responseBody
    }

    override fun getResponseHeaders(): Map<Any?, Any?> {
        return responseHeaders;
    }

    override fun getError(): String? {
        TODO("Not yet implemented")
    }

    override fun setResponseCode(responseCode: Int) {
        this.responseCode = responseCode
    }

    override fun setResponseBody(responseBody: String?) {
        this.responseBody = responseBody
    }

    override fun setError(responseError: String?) {
        this.responseError = responseError
    }

    fun NSData.toByteArray(): ByteArray = ByteArray(this@toByteArray.length.toInt()).apply {
        usePinned {
            memcpy(it.addressOf(0), this@toByteArray.bytes, this@toByteArray.length)
        }
    }

    override fun toString(): String {
        return """
            url: $url
            message: $message
            responseCode: $responseCode
            responseBody: $responseBody
            error: $responseError
        """.trimIndent()
    }
}