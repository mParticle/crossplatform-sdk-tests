package com.mparticle.testing

import android.content.Context
import android.os.Debug
import android.os.Looper
import android.util.Log
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl
import com.mparticle.internal.AppStateManager
import com.mparticle.internal.Logger
import com.mparticle.mockserver.Server
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking

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

actual fun setAwaiter(awaiter: Awaiter) {

}