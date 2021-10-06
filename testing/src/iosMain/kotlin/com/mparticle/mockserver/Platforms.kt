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
        Logger.info("Setting Connection Factory")
        MPNetworkCommunication.setConnectorFactory(MockConnectorFactory { rawConnection: RawConnection ->
            Logger.info("CHECKING MockServer2 Status (iOS Worker Thread)\n ${currentThread()}")
//            Logger.error("(setConnectorFactory)Mockserver is frozen? = ${MockServerAccessor.run { isFrozen }}")
            Logger.info("Attempting connection for request: $rawConnection")
            MockServerAccessor.runAndReturn {
                Logger.info("(pre-onRequestMade)")
                Logger.info(rawConnection.toString())
                Logger.info("ON Request made")
                val response = onRequestMade(rawConnection)
                Logger.info("Response (in iOS) = $response")
                response.freeze()
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