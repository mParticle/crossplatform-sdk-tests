package com.mparticle.api

import android.util.Log
import com.mparticle.internal.Logger as LoggerAndroid

actual object Logger {
    actual fun info(message: String) {
//        LoggerAndroid.info(message)
        Log.i("MParticleTest", message)
    }

    actual fun warning(message: String) {
//        LoggerAndroid.warning(message)
        Log.w("MParticleTest", message)
    }

    actual fun error(message: String) {
//        LoggerAndroid.error(message)
        Log.e("MParticleTest", message)
    }
}