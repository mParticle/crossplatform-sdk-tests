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
        val instance = MParticleIOS.sharedInstance()
        Logger().error("Setting Connection Factory")
        MPNetworkCommunication.setConnectorFactory(MockConnectorFactory { rawConnection: RawConnection ->
            Logger().error("CHECKING MockServer2 Status (iOS Worker Thread)\n ${currentThread()}")
//            Logger().error("(setConnectorFactory)Mockserver is frozen? = ${MockServerAccessor.run { isFrozen }}")
            Logger().error("Attempting connection for request: $rawConnection")
            MockServerAccessor.runAndReturn {
                Logger().error("(pre-onRequestMade)")
                Logger().error(rawConnection.toString())
                Logger().error("ON Request made")
                val response = onRequestMade(rawConnection)
                Logger().error("Response (in iOS) = $response")
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
    actual var mainThreadRunner: MainThreadRunner
        get() = MainThreadRunner()
        set(value) {
            //DO NOTHING
        }

    actual fun setCachedConfig(configMessage: ConfigResponseMessage) {
    }

    actual fun currentThread(): String? {
//    val count = (NSThread.currentThread.threadDictionary["test"] ?: "0").toInt()
//    NSThread.currentThread.threadDictionary["test"] = count + 0
        return """
        isMain: ${NSThread.currentThread.isMainThread}
        name: ${NSThread.currentThread.name}
        dictionary: ${NSThread.currentThread.threadDictionary}
        """
    }

    actual fun isServerThread(): Boolean {
        return NSThread.currentThread.threadDictionary.allKeys.contains("server thread").apply {
            Logger().error("Checking Thread: ${currentThread()}")
            Logger().error("is server thread?: $this")
        }//NSThread.currentThread.isMainThread.apply { Logger().error("is Main Thread? $this")}
    }

    actual fun prepareThread() {}
}

actual class MainThreadRunner {
    actual fun run(runnable: () -> Unit) {
        Logger().error("Running on Main Thread")
        NSRunLoop.mainRunLoop().performBlock(runnable)
    }

    actual fun runDelayed(delay: Long, runnable: () -> Unit) {
        TODO("implementation needed")
    }
}

typealias OnRequestMade = (RawConnection) -> RawConnection