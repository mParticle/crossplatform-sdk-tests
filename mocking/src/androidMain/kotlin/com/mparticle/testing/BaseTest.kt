package com.mparticle.testing

import android.content.Context
import android.content.ContextWrapper
import android.content.pm.ApplicationInfo
import android.os.Debug
import android.util.Log
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.MParticleOptions as MParticleOptionsAndroid
import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl
import com.mparticle.api.MParticleOptions
import com.mparticle.internal.AppStateManager
import com.mparticle.internal.Logger
import com.mparticle.testing.mockserver.Server
import com.mparticle.MParticle as MParticleAndroid
import kotlinx.coroutines.Deferred
import kotlinx.coroutines.Job
import kotlinx.coroutines.joinAll
import java.lang.IllegalStateException

//awaiter only used for iOS
actual fun beforeTest() {
//    if (Looper.myLooper() == null) {
//        Looper.prepare()
//    }
    AppStateManager.mInitialized = false
    //set the timeout on the FailureLatch higher if developer is debugging. This way you won't have
    //as many annoying failures while trying to figure out whats happening in a breakpoint
    if (Debug.isDebuggerConnected() || Debug.waitingForDebugger()) {
        Log.e("MockServer2", "debug mode")
        Server.defaultTimeout = 60 * 1000
    }
    Logger.setLogHandler(null)
}

actual fun getClientPlatform(): ClientPlatform {
    return ClientPlatformImpl(InstrumentationRegistry.getInstrumentation().context)
}


fun BaseTest.startMParticle(builder: MParticleOptionsAndroid.Builder) {
    startMParticle(MParticleOptions(builder))
}

val BaseTest.context: Context
    get() { return this.clientPlatform.context }

val BaseTest.productionContext: Context
    get() {
        return object : ContextWrapper(clientPlatform.context) {
            override fun getApplicationInfo() = ApplicationInfo().apply {
                flags = 0
            }
        }
    }

fun <T> T?.orThrow(): T = this ?: throw IllegalStateException("MParticle instance is null")