package com.mparticle.mockserver

import com.mparticle.messages.*

expect open class Platforms() {

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
    fun setServerThread()
    fun prepareThread()
}

typealias Runnable = () -> Unit

