package com.mparticle.mockserver

import com.mparticle.api.Logger
import kotlinx.coroutines.newSingleThreadContext
import kotlinx.coroutines.runBlocking
import kotlin.native.concurrent.SharedImmutable

@SharedImmutable
private val serverThread by lazy { newSingleThreadContext("MockServerThread") }

object ThreadingUtil {
    val platforms = Platforms()
    fun <T> runBlockingServer(runnable: () -> T): T {
        return if (platforms.isServerThread()) {
            runnable()
        } else {
            Logger.error("Hopping on Server Thread")
//            platforms.prepareThread()
            runBlocking(serverThread) { runnable() }.apply { Logger.error("OFF Server Thread") }
        }
    }
}