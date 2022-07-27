package com.mparticle.testing.mockserver

import cocoapods.mParticle_Apple_SDK.MPNetworkCommunication
import com.mparticle.api.ClientPlatform
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.testing.mockserver.model.RawConnection
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import platform.Foundation.NSThread
import platform.Foundation.allKeys
import kotlin.native.concurrent.freeze

actual open class Platforms actual constructor(clientPlatform: ClientPlatform) {

    actual fun prepareThread() {}

    actual fun injectMockServer() {
        MPNetworkCommunication.setConnectorFactory(MockConnectorFactory { rawConnection: RawConnection ->
            Server.onRequestMade(rawConnection).freeze()
        }.freeze())
    }

    actual fun sendForeground() {
        TODO()
    }

    actual fun sendBackground() {
        TODO()
    }

    actual fun getDatabaseContents() = getDatabaseContents(null)
    actual fun getDatabaseContents(tables: List<String>?): Map<String, List<Map<String, Any?>>> {
        TODO()
    }

    actual fun getDatabaseSchema(): Map<String, List<String>> {
        TODO()
    }

    actual fun setCachedConfig(configMessage: ConfigResponseMessage?) {
        TODO()
    }
}

typealias OnRequestMade = (RawConnection) -> RawConnection