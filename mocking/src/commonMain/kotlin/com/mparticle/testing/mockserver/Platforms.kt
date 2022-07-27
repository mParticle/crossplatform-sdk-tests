package com.mparticle.testing.mockserver

import com.mparticle.api.ClientPlatform
import com.mparticle.messages.ConfigResponseMessage

expect open class Platforms(clientPlatform: ClientPlatform) {
    fun injectMockServer()
    fun prepareThread()

    fun sendForeground()
    fun sendBackground()

    fun setCachedConfig(configMessage: ConfigResponseMessage?)

    //if null, return all tables
    fun getDatabaseContents(): Map<String, List<Map<String, Any?>>>
    fun getDatabaseContents(tables: List<String>?): Map<String, List<Map<String, Any?>>>

    fun getDatabaseSchema(): Map<String, List<String>>
}

typealias Runnable = () -> Unit

