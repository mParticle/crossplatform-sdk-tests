package com.mparticle.networking

import com.mparticle.testing.mockserver.Server
import com.mparticle.testing.mockserver.model.RawConnection
import com.mparticle.testing.mockserver.model.SimpleRawConnection
import java.io.*
import java.util.*
import java.util.zip.GZIPInputStream
import javax.net.ssl.SSLSocketFactory


class MPConnectionMockImpl internal constructor(var url: MPUrl) : MPConnection {
    var connection: RawConnection = SimpleRawConnection(url.toString(), { outputStream?.getString()})
    private var requestMethod: String = "GET"
    private var doOutput: Boolean? = null
    private var connectTimeout: Int? = null
    private var readTimeout: Int? = null
    private var requestProperties: MutableMap<String, MutableList<String>?> = HashMap()
    private var outputStream: ByteArrayOutputStream? = null
    private var inputStream: ByteArrayInputStream? = null
    private var sslSocketFactory: SSLSocketFactory? = null
    private var requestMade = false

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
            makeRequest()
            inputStream = ByteArrayInputStream(connection.getResponseBody()?.toByteArray())
        }
        return inputStream!!
    }

    override fun getErrorStream(): InputStream? {
        return null
    }

    @Throws(IOException::class)
    override fun getResponseCode(): Int {
        makeRequest()
        return connection.getResponseCode()
    }

    @Throws(IOException::class)
    override fun getResponseMessage(): String {
        return connection.getResponseBody() ?: ""
    }

    override fun setSSLSocketFactory(factory: SSLSocketFactory?) {
        sslSocketFactory = factory
    }

    override fun getSSLSocketFactory(): SSLSocketFactory? {
        return sslSocketFactory
    }

    fun isDoOutput() = doOutput ?: false

    fun ByteArrayOutputStream.getString(): String {
        return if (getHeaderField("Content-Encoding") == "gzip") {
            try {
                val bytes: ByteArray = toByteArray()
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
        } else {
            String(this.toByteArray())
        }
    }

    private fun makeRequest() {
        if (!requestMade) {
            requestMade = true
            connection = Server.onRequestMade(connection)
        }
    }
}
