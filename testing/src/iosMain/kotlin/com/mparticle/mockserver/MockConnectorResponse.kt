package com.mparticle.mockserver

import cocoapods.mParticle_Apple_SDK.IMPConnectorResponseProtocol
import com.mparticle.api.toByteArray
import com.mparticle.api.toNSData
import com.mparticle.mockserver.model.RawConnection
import platform.Foundation.*
import platform.darwin.NSObject

//actual inheritors : IMPConnectorResponseProtocol, NSObject()
class MockConnectorResponse(private val onRequestMade: OnRequestMade, private val url: NSURL, private val message: String? = null, serializedParams: NSData? = null): NSObject(),
    IMPConnectorResponseProtocol {

    var rawConnection: RawConnection = ThreadsafeRawConnection(url.absoluteString!!, message ?: serializedParams?.toByteArray()?.decodeToString()) //serializedParams?.toByteArray().decodeToString()
    private var requestMade = false

     private fun makeRequest() {
         if (!requestMade) {
             requestMade = true
                 rawConnection = onRequestMade(rawConnection)

         }
     }

    override fun data(): NSData? {
        makeRequest()
        return rawConnection.getResponseBody()?.encodeToByteArray()?.toNSData()
    }

    override fun downloadTime(): NSTimeInterval = downloadTime

    override fun error(): NSError? {
        makeRequest()
        return if (!rawConnection.getError().isNullOrEmpty()) {
            NSError(rawConnection.getError(), rawConnection.getResponseCode().toLong(), null)
        } else {
            null
        }
    }

    override fun httpResponse(): NSHTTPURLResponse? {
        makeRequest()
        val responseCode = rawConnection.getResponseCode().toLong()
        return NSHTTPURLResponse(url, responseCode, null, rawConnection.getResponseHeaders())
    }

    override fun setData(data: NSData?) {
        throw RuntimeException("Should not be invoked")
    }

    override fun setDownloadTime(downloadTime: NSTimeInterval) {
        throw RuntimeException("Should not be invoked")
    }

    override fun setError(error: NSError?) {
        throw RuntimeException("Should not be invoked")
    }

    override fun setHttpResponse(httpResponse: NSHTTPURLResponse?) {
        throw RuntimeException("Should not be invoked")
    }
}