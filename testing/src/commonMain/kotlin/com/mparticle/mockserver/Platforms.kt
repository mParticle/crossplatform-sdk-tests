package com.mparticle.mockserver

import com.mparticle.messages.*

expect open class Platforms() {

    var mainThreadRunner: MainThreadRunner

    fun sleep(millis: Long)

    fun injectMockServer()

    fun setCachedConfig(configMessage: ConfigResponseMessage)

    fun sendForeground()
    fun sendBackground()

    //if null, return all tables
    fun getDatabaseContents(): Map<String, Any>
    fun getDatabaseContents(tables: List<String>?): Map<String, Any>

    //if null, return all tables
    fun getDatabaseSchema(): Map<String, Any>
    fun getDatabaseSchema(tables: List<String>?): Map<String, Any>

    fun currentThread(): String?

    fun isServerThread(): Boolean
    fun prepareThread()
}

expect class MainThreadRunner {
    fun run(runnable: Runnable)
    fun runDelayed(delay: Long, runnable: Runnable)
}

typealias Runnable = () -> Unit

