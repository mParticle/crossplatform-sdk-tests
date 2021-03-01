package com.mparticle.mockserver

import com.mparticle.networking.MPUrl
import com.mparticle.networking.MPUrlTestImpl
import com.mparticle.networking.setMPUrlFactory
import com.mparticle.internal.ConfigManager
import com.mparticle.internal.database.services.MParticleDBManager
import com.mparticle.internal.database.MPDatabase
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.testing.TestLifecycleContext
import android.os.Handler
import android.os.Looper
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.api.MParticle
import com.mparticle.internal.Logger


actual open class Platforms {
    var mContext = TestLifecycleContext(InstrumentationRegistry.getInstrumentation().context.applicationContext);
    actual var mainThreadRunner: ThreadRunner = ThreadRunner()

    actual fun injectMockServer(mockserver: MockServer2) {
        setMPUrlFactory {
            MPUrlTestImpl(it, mockserver) as MPUrl
        }
    }

    actual fun sleep(millis: Long) {
        Thread.sleep(millis)
    }


    actual fun setCachedConfig(configMessage: ConfigResponseMessage) {

    }

    actual fun sendForeground() {
        mContext.sendForeground()
    }

    /**
     * send the Application to the Background by triggering the ON_STOP lifecycle callbacks. This method will "catch up"
     * your current lifecycle state to ON_STOP by calling all methods inbetween. For example, if your current
     * lifecycle state is ON_RESUME, we will trigger ON_PAUSE and then trigger ON_START when this method is invoked
     */
    actual fun sendBackground() {
        mContext.sendBackground()
    }

    fun getDatabaseContents(database: com.mparticle.internal.database.MPDatabase) = mapOf<String, Any>()
    actual fun getDatabaseContents(): Map<String, Any> = getDatabaseContents()
    actual fun getDatabaseContents(tables: List<String>?): Map<String, Any> = getDatabaseContents(MParticleDBManager(mContext).getDatabase())

    fun getDatabaseSchema(database: com.mparticle.internal.database.MPDatabase) = mapOf<String, Any>()
    actual fun getDatabaseSchema() = getDatabaseSchema(null)
    actual fun getDatabaseSchema(tables: List<String>?): Map<String, Any> = getDatabaseSchema(MParticleDBManager(mContext).getDatabase())
}

actual class ThreadRunner {
    actual fun run(runnable: () -> Unit) {
        Handler(Looper.getMainLooper()).post(runnable)
    }

    actual fun runDelayed(delay: Long, runnable: () -> Unit) {
        Handler(Looper.getMainLooper()).postDelayed(runnable, delay)
    }
}