package com.mparticle.api

import platform.Foundation.NSLog

actual object Logger {
    actual fun info(message: String) {
        NSLog("MParticle info: $message")
    }

    actual fun warning(message: String) {
        NSLog("MParticle Warning: $message")
    }

    actual fun error(message: String) {
        NSLog("MParticle ERROR: $message")
    }
}