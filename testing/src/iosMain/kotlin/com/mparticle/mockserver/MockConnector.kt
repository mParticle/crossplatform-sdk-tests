package com.mparticle.mockserver

import cocoapods.mParticle_Apple_SDK.MPConnectorProtocolProtocol
import cocoapods.mParticle_Apple_SDK.MPURL
import platform.Foundation.NSData
import platform.Foundation.NSURL
import platform.darwin.NSObject

class MockConnector(private val onRequestMade: OnRequestMade): NSObject(), MPConnectorProtocolProtocol {
    override fun responseFromGetRequestToURL(url: MPURL): NSObject {
        return MockConnectorResponse(onRequestMade, url.url)
    }

    override fun responseFromPostRequestToURL(url: MPURL, message: String?, serializedParams: NSData?): NSObject {
        return MockConnectorResponse(onRequestMade, url.url, message, serializedParams) as NSObject
    }
}