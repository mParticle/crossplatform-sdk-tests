package com.mparticle.api

import com.mparticle.internal.Logger as LoggerAndroid

actual class Logger {
    actual fun info(message: String) {
        LoggerAndroid.info(message)
    }

    actual fun warning(message: String) {
        LoggerAndroid.warning(message)
    }

    actual fun error(message: String) {
        LoggerAndroid.error()
    }
}