package com.mparticle.testing.mockserver

import cocoapods.mParticle_Apple_SDK.MPConnectorFactoryProtocolProtocol
import platform.darwin.NSObject

//actual inheritors : NSObject(), MPConnectorFactoryProtocol
class MockConnectorFactory(private val onRequestMade: OnRequestMade): NSObject(), MPConnectorFactoryProtocolProtocol {
    override fun createConnector(): NSObject {
        return MockConnector(onRequestMade) as NSObject
    }
}