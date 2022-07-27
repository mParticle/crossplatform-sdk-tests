package com.mparticle.testing

import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.os.Handler
import android.os.Looper
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.api.ClientPlatform
import com.mparticle.internal.DatabaseHelper
import com.mparticle.internal.database.MPDatabase
import com.mparticle.internal.database.MPDatabaseImpl
import com.mparticle.internal.database.services.MParticleDBManager
import com.mparticle.internal.database.services.SQLiteOpenHelperWrapper
import com.mparticle.internal.database.tables.MParticleDatabaseHelper
import com.mparticle.messages.ConfigResponseMessage
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import org.json.JSONException
import org.json.JSONObject

actual open class Platforms {

    init {
        prepareThread()
    }

    actual fun sleep(millis: Long) {
        Thread.sleep(millis)
    }

    actual fun currentThread(): String? = Thread.currentThread().name
    actual fun <T> runInForeground(runnable: () -> T): T {
//        return runBlocking(Dispatchers.Main) { runnable() }
        return runnable()
    }

    actual fun prepareThread() {
        if (Looper.myLooper() == null) {
            Looper.prepare()
        }
        Handler(Looper.getMainLooper()).post {
            if (Looper.myLooper() == null) {
                Looper.prepare()
            }
        }
    }

    actual fun isServerThread() = true
}

