package com.mparticle.mockserver

import cocoapods.mParticle_Apple_SDK.MPNetworkCommunication
import com.mparticle.api.Logger
import com.mparticle.mockserver.*
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.mockserver.model.RawConnection
import platform.Foundation.NSRunLoop
import platform.Foundation.NSThread
import platform.Foundation.allKeys
import platform.Foundation.performBlock
import kotlin.native.concurrent.freeze
import kotlin.native.concurrent.isFrozen
import cocoapods.mParticle_Apple_SDK.MParticle as MParticleIOS

actual open class Platforms actual constructor() {

    actual fun injectMockServer() {
        MPNetworkCommunication.setConnectorFactory(MockConnectorFactory { rawConnection: RawConnection ->
            MockServerAccessor.runAndReturn {
                onRequestMade(rawConnection).freeze()
            }.freeze()
        }.freeze())
    }

    actual fun sleep(millis: Long) {
//        platform.posix.sleep(millis.toUInt())
    }
    actual fun sendForeground() {
    }

    actual fun sendBackground() {
    }

    actual fun getDatabaseContents() = getDatabaseContents(null)
    actual fun getDatabaseContents(tables: List<String>?): Map<String, Any> = mapOf()
    actual fun getDatabaseSchema() = getDatabaseSchema(null)
    actual fun getDatabaseSchema(tables: List<String>?): Map<String, Any> = mapOf()

    actual fun setCachedConfig(configMessage: ConfigResponseMessage) {
    }

    actual fun currentThread(): String? {
        return """
        isMain: ${NSThread.currentThread.isMainThread}
        name: ${NSThread.currentThread.name}
        dictionary: ${NSThread.currentThread.threadDictionary}
        """
    }

    actual fun isServerThread(): Boolean {
        return NSThread.currentThread.threadDictionary.allKeys.contains("server thread")
    }

    actual fun prepareThread() {}
}

typealias OnRequestMade = (RawConnection) -> RawConnection