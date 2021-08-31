package com.mparticle.mockserver

import cocoapods.mParticle_Apple_SDK.MPConnectorFactoryProtocolProtocol
import kotlinx.coroutines.Dispatchers
import platform.darwin.NSObject
import kotlin.native.concurrent.ThreadLocal

//actual inheritors : NSObject(), MPConnectorFactoryProtocol
class MockConnectorFactory(private val onRequestMade: OnRequestMade): NSObject(), MPConnectorFactoryProtocolProtocol {
    override fun createConnector(): NSObject {
        return MockConnector(onRequestMade) as NSObject
    }
}