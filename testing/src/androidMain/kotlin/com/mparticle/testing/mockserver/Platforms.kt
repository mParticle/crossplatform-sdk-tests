package com.mparticle.testing.mockserver

import com.mparticle.networking.MPUrl
import com.mparticle.networking.MPUrlMockImpl
import com.mparticle.networking.setMPUrlFactory
import com.mparticle.internal.database.services.MParticleDBManager
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.testing.TestLifecycleContext
import android.os.Looper
import androidx.test.platform.app.InstrumentationRegistry


actual open class Platforms {
    init {
        prepareThread()
    }
    var mContext = TestLifecycleContext(InstrumentationRegistry.getInstrumentation().targetContext.applicationContext);

    actual fun injectMockServer() {
        setMPUrlFactory {
            MPUrlMockImpl(it) as MPUrl
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

    actual fun currentThread(): String? = Thread.currentThread().name
    actual fun isServerThread(): Boolean = true //Looper.getMainLooper() == Looper.myLooper()
    actual fun <T> runInForeground(runnable: () -> T): T {
        return runnable()
    }
    actual fun prepareThread() {
        if (Looper.myLooper() == null) {
            Looper.prepare()
        }
    }
}