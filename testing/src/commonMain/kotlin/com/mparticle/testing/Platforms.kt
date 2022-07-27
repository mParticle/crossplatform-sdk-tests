package com.mparticle.testing

import com.mparticle.messages.ConfigResponseMessage

expect open class Platforms() {

    fun sleep(millis: Long)

    fun currentThread(): String?

    fun isServerThread(): Boolean
    fun <T> runInForeground(runnable: () -> T): T
    fun prepareThread()
}

typealias Runnable = () -> Unit

