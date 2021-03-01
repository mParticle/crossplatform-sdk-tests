package com.mparticle.networking

import com.mparticle.mockserver.MockServer2
import java.io.ByteArrayInputStream
import java.io.ByteArrayOutputStream
import java.io.IOException
import java.io.InputStream
import java.io.OutputStream
import java.util.ArrayList
import java.util.HashMap
import java.util.zip.GZIPInputStream
import javax.net.ssl.SSLSocketFactory
import com.mparticle.mockserver.model.RawConnection


class MPConnectionTestImpl internal constructor(var url: MPUrl, var mockServer: MockServer2) : com.mparticle.networking.MPConnection, RawConnection {
    private var requestMethod: String = "GET"
    private var doOutput: Boolean? = null
    private var connectTimeout: Int? = null
    private var readTimeout: Int? = null
    private var requestProperties: MutableMap<String, MutableList<String>?> = HashMap()
    private var responseCode: Int? = null
    private var outputStream: ByteArrayOutputStream? = null
    private var inputStream: ByteArrayInputStream? = null
    private var sslSocketFactory: SSLSocketFactory? = null
    private var response = ""
    private var errorResponse: String? = null

    override fun getUrl() = url.toString()

    override fun isHttps(): Boolean {
        return url.file.startsWith("https")
    }

    override fun setRequestMethod(method: String) {
        requestMethod = method
    }

    override fun setDoOutput(doOutput: Boolean) {
        this.doOutput = doOutput
    }

    override fun setConnectTimeout(timeout: Int) {
        connectTimeout = timeout
    }

    override fun setReadTimeout(readTimeout: Int) {
        this.readTimeout = readTimeout
    }

    override fun setRequestProperty(key: String, value: String) {
        var values = requestProperties[key]
        if (values == null) {
            values = ArrayList()
        }
        values.add(value)
        requestProperties[key] = values
    }

    override fun setResponseCode(responseCode: Int) {
        this.responseCode = responseCode
    }

    override fun getURL(): MPUrl {
        return url
    }

    override fun getRequestMethod(): String {
        return requestMethod
    }

    override fun getHeaderField(key: String): String? {
        if (requestProperties.containsKey(key)) {
            val strings: MutableList<String>? = requestProperties[key]
            if (strings!!.size > 1) {
                throw RuntimeException("Multiple header fields, not implemented.")
            }
            if (strings.size == 1) {
                return strings[0]
            }
        }
        return null
    }

    override fun getHeaderFields(): MutableMap<String, MutableList<String>?> {
        return HashMap<String, MutableList<String>?>(requestProperties)
    }

    @Throws(IOException::class)
    override fun getOutputStream(): OutputStream {
        if (outputStream == null) {
            outputStream = ByteArrayOutputStream()
        }
        return outputStream!!
    }

    @Throws(IOException::class)
    override fun getInputStream(): InputStream {
        if (inputStream == null) {
            if (responseCode == null) {
                mockServer.onRequestMade(this)
            }
            inputStream = ByteArrayInputStream(response.toByteArray())
        }
        return inputStream!!
    }

    override fun getErrorStream(): InputStream? {
        return null
    }

    override fun getResponseError(): String? {
        return errorResponse
    }

    @Throws(IOException::class)
    override fun getResponseCode(): Int {
        if (responseCode == null) {
            mockServer.onRequestMade(this)
        }
        return responseCode!!
    }

    @Throws(IOException::class)
    override fun getResponseMessage(): String {
        return response
    }

    override fun getResponseBody(): String = getResponseMessage()

    override fun setSSLSocketFactory(factory: SSLSocketFactory?) {
        sslSocketFactory = factory
    }

    override fun getSSLSocketFactory(): SSLSocketFactory? {
        return sslSocketFactory
    }

    override fun getBody(): String {
        return outputStream?.let { outputStream ->
            if (getHeaderField("Content-Encoding") == "gzip") {
                return try {
                    val bytes: ByteArray = outputStream.toByteArray()
                    val inputStream: InputStream = ByteArrayInputStream(bytes)
                    val stream = GZIPInputStream(inputStream)
                    val data = ByteArray(32)
                    var bytesRead: Int = 0
                    val builder = java.lang.StringBuilder()
                    while (stream.read(data).also({ bytesRead = it }) != -1) {
                        builder.append(String(data, 0, bytesRead))
                    }
                    stream.close()
                    inputStream.close()
                    builder.toString()
                } catch (e: IOException) {
                    throw RuntimeException(e)
                }
            }
            String(outputStream.toByteArray())
        } ?: "{}"
    }

    override fun setResponseError(response: String?) {
        errorResponse = response
    }

    override fun setResponseBody(response: String?) {
        this.response = response ?: ""
    }

    fun isDoOutput() = doOutput ?: false

}
