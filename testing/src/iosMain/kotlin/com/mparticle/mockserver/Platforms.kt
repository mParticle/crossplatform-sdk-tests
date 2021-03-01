package com.mparticle.mockserver

import com.mparticle.api.ClientPlatform
import com.mparticle.messages.ConfigResponseMessage

actual open class Platforms actual constructor() {

    actual var mainThreadRunner: ThreadRunner = ThreadRunner()

    actual fun injectMockServer(mockserver: MockServer2) {
        //TODO, integrate mockserver with iOS SDK...branch in progress fwiw
    }

    actual fun sleep(millis: Long) {
        platform.posix.sleep(millis.toUInt())
    }

    actual fun setCachedConfig(configMessage: ConfigResponseMessage) {
        //TODO, inject this into the ios cache/db
    }

    actual fun sendForeground() {
    }

    actual fun sendBackground() {
    }

    actual fun getDatabaseContents() = getDatabaseContents(null)
    actual fun getDatabaseContents(tables: List<String>?): Map<String, Any> = mapOf()
    actual fun getDatabaseSchema() = getDatabaseSchema(null)
    actual fun getDatabaseSchema(tables: List<String>?): Map<String, Any> = mapOf()
}

actual class ThreadRunner {
    actual fun run(runnable: () -> Unit) {
    }

    actual fun runDelayed(delay: Long, runnable: () -> Unit) {
    }
}