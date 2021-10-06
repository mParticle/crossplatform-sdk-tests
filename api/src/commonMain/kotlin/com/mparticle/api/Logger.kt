package com.mparticle.api

expect object Logger {
    fun info(message: String)
    fun warning(message: String)
    fun error(message: String)
}
