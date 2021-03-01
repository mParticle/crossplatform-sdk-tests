package com.mparticle.mockserver

import com.mparticle.messages.*

expect open class Platforms() {

    var mainThreadRunner: ThreadRunner

    fun sleep(millis: Long)

    fun injectMockServer(mockserver: MockServer2)

    fun setCachedConfig(configMessage: ConfigResponseMessage)

    fun sendForeground()
    fun sendBackground()

    //if null, return all tables
    fun getDatabaseContents(): Map<String, Any>
    fun getDatabaseContents(tables: List<String>?): Map<String, Any>

    //if null, return all tables
    fun getDatabaseSchema(): Map<String, Any>
    fun getDatabaseSchema(tables: List<String>?): Map<String, Any>
}

expect class ThreadRunner {
    fun run(runnable: Runnable)
    fun runDelayed(delay: Long, runnable: Runnable)
}

typealias Runnable = () -> Unit
