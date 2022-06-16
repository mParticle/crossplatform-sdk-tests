package com.mparticle.testing.mockserver

import com.mparticle.testing.mockserver.model.RawConnection
import com.mparticle.testing.mockserver.model.SimpleRawConnection

class ThreadsafeRawConnection(url: String, message: String? = null): RawConnection {

    private val connection: RawConnection by lazy { SimpleRawConnection(url = url, requestBody = message) }

    override fun getUrl(): String {
        return connection.getUrl()
    }

    override fun getRequestBody(): String {
        return connection.getRequestBody()
    }

    override fun getHeaderFields(): Map<String, List<String?>?> {
        return connection.getHeaderFields()
    }

    override fun getResponseCode(): Int {
        return connection.getResponseCode()
    }

    override fun getResponseBody(): String? {
        return connection.getResponseBody()
    }

    override fun getResponseHeaders(): Map<Any?, Any?> {
        return connection.getResponseHeaders()
    }

    override fun getError(): String? {
        return connection.getError()
    }

    override fun setResponseCode(responseCode: Int) {
        connection.setResponseCode(responseCode)
    }

    override fun setResponseBody(responseBody: String?) {
        connection.setResponseBody(responseBody)
    }

    override fun setError(responseError: String?) {
        connection.setError(responseError)
    }

    override fun toString(): String = connection.toString()
}