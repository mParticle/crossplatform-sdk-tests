package com.mparticle.api

expect class Logger {
    fun info(message: String)
    fun warning(message: String)
    fun error(message: String)
}
