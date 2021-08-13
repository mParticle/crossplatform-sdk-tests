package com.mparticle.mockserver

import cocoapods.mParticle_Apple_SDK.IMPConnectorProtocol
import platform.Foundation.NSData
import platform.Foundation.NSURL
import platform.darwin.NSObject

//actual inheritors : NSObject(), IMPConnectorProtocol
class MockConnector(private val onRequestMade: OnRequestMade): NSObject(), IMPConnectorProtocol {
    override fun responseFromGetRequestToURL(url: NSURL): NSObject {
        return MockConnectorResponse(onRequestMade, url) as NSObject
    }

    override fun responseFromPostRequestToURL(url: NSURL, message: String?, serializedParams: NSData?): NSObject {
        return MockConnectorResponse(onRequestMade, url, message, serializedParams) as NSObject
    }
}