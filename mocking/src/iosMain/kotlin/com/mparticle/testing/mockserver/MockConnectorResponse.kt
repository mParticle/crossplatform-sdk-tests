package com.mparticle.testing.mockserver

import cocoapods.mParticle_Apple_SDK.MPConnectorResponseProtocolProtocol
import com.mparticle.api.toByteArray
import com.mparticle.api.toNSData
import com.mparticle.testing.mockserver.model.RawConnection
import com.mparticle.testing.mockserver.model.SimpleRawConnection
import platform.Foundation.*
import platform.darwin.NSObject

class MockConnectorResponse(private val onRequestMade: OnRequestMade, private val url: NSURL, private val message: String? = null, serializedParams: NSData? = null): NSObject(),
    MPConnectorResponseProtocolProtocol {

    /**
     * iOS does not pass the requests headers into the responseFromPostRequestToURL method, so we are unable to use the im crossplatform testing :(
     */
    var rawConnection: RawConnection = SimpleRawConnection(url.absoluteString!!, message ?: serializedParams?.toByteArray()?.decodeToString(), mapOf())
    private var requestMade = false

    private fun makeRequest() {
        if (!requestMade) {
            requestMade = true
            rawConnection = onRequestMade(rawConnection)

        }
    }

    override var data: NSData?
        get() {
            makeRequest()
            return rawConnection.getResponseBody()?.encodeToByteArray()?.toNSData()
        }
        set(value) { throw RuntimeException("Should not be invoked") }

    override var downloadTime: NSTimeInterval = 0.0

    override var error: NSError?
        get() {
            makeRequest()
            return if (!rawConnection.getError().isNullOrEmpty()) {
                NSError(rawConnection.getError(), rawConnection.getResponseCode().toLong(), null)
            } else {
                null
            }
        }
        set(value) { throw RuntimeException("Should not be invoked") }

    override var httpResponse: NSHTTPURLResponse?
        get() {
            makeRequest()
            val responseCode = rawConnection.getResponseCode().toLong()
            return NSHTTPURLResponse(url, responseCode, null, rawConnection.getResponseHeaders())
        }
        set(value) { throw RuntimeException("Should not be invoked") }
}