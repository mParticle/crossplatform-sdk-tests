package com.mparticle.testing

import co.touchlab.stately.freeze
import com.mparticle.api.ClientPlatform
import com.mparticle.messages.ConfigResponseMessage
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import platform.Foundation.NSThread
import platform.Foundation.allKeys

actual open class Platforms {

    actual fun sleep(millis: Long) {
//        platform.posix.sleep(millis.toUInt())
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

    actual fun <T> runInForeground(runnable: () -> T): T {
        return runBlocking(Dispatchers.Main) { runnable() }
    }

    actual fun prepareThread() {}
}

