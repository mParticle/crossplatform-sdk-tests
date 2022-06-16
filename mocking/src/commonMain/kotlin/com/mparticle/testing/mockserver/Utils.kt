package com.mparticle.testing.mockserver

import com.mparticle.api.Logger
import com.mparticle.testing.Platforms
import kotlinx.coroutines.newSingleThreadContext
import kotlinx.coroutines.runBlocking
import kotlin.coroutines.CoroutineContext
import kotlin.native.concurrent.SharedImmutable


@SharedImmutable
private val serverThread: CoroutineContext = newSingleThreadContext("MockServerThread")

object ThreadingUtil {
    val platforms = Platforms()
    fun <T> runBlockingServer(runnable: () -> T): T {
        return if (platforms.isServerThread()) {
            runnable()
        } else {
            Logger.error("Hopping on Server Thread")
//            platforms.prepareThread()
            runBlocking(serverThread) {
                try {
                    runnable()
                } catch (ex: Throwable) {
                        Logger.error(ex.message ?: "error receiving request")
                        Logger.error(ex.stackTraceToString())
                    throw ex
                }
            }.apply { Logger.error("OFF Server Thread") }
        }
    }
}