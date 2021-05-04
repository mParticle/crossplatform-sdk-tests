package com.mparticle.mockserver.model

interface RawConnection {
    fun getUrl(): String
    fun getBody(): String
    fun getHeaderFields(): Map<String, List<String?>?>

    fun getResponseCode(): Int
    fun getResponseBody(): String?
    fun getResponseError(): String?

    fun setResponseCode(responseCode: Int)
    fun setResponseBody(responseBody: String?)
    fun setResponseError(responseError: String?)
}