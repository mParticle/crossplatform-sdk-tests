package com.mparticle.testing.mockserver

import cocoapods.mParticle_Apple_SDK.MPNetworkCommunication
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.testing.mockserver.model.RawConnection
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import platform.Foundation.NSThread
import platform.Foundation.allKeys
import kotlin.native.concurrent.freeze

actual open class Platforms actual constructor() {

    actual fun prepareThread() {}

    actual fun injectMockServer() {
        MPNetworkCommunication.setConnectorFactory(MockConnectorFactory { rawConnection: RawConnection ->
            Server.onRequestMade(rawConnection).freeze()
        }.freeze())
    }
}

typealias OnRequestMade = (RawConnection) -> RawConnection