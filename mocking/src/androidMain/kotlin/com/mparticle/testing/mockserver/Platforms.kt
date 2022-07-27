package com.mparticle.testing.mockserver

import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.os.Handler
import com.mparticle.networking.MPUrl
import com.mparticle.networking.MPUrlMockImpl
import com.mparticle.networking.setMPUrlFactory
import android.os.Looper
import com.mparticle.api.ClientPlatform
import com.mparticle.internal.AccessUtils
import com.mparticle.internal.DatabaseHelper
import com.mparticle.internal.database.MPDatabase
import com.mparticle.internal.database.MPDatabaseImpl
import com.mparticle.internal.database.services.MParticleDBManager
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.testing.TestLifecycleContext
import org.json.JSONException


actual open class Platforms actual constructor(val clientPlatform: ClientPlatform) {
    private val context = clientPlatform.context

    init {
        prepareThread()
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

    actual fun injectMockServer() {
        setMPUrlFactory {
            MPUrlMockImpl(it) as MPUrl
        }
    }

    actual fun sendForeground() {
        TestLifecycleContext(clientPlatform.context).sendForeground()
    }

    /**
     * send the Application to the Background by triggering the ON_STOP lifecycle callbacks. This method will "catch up"
     * your current lifecycle state to ON_STOP by calling all methods inbetween. For example, if your current
     * lifecycle state is ON_RESUME, we will trigger ON_PAUSE and then trigger ON_START when this method is invoked
     */
    actual fun sendBackground() {
        TestLifecycleContext(clientPlatform.context).sendForeground()
    }

    actual fun getDatabaseContents(): Map<String, List<Map<String, Any?>>> = getDatabaseContents()
    actual fun getDatabaseContents(tables: List<String>?): Map<String, List<Map<String, Any?>>> = getDatabaseContents(
        MParticleDBManager(context).database
    )

    open fun getAllTables(): List<String> {
        return getAllTables(MParticleDBManager(context).database)
    }

    @Throws(JSONException::class)
    open fun getDatabaseContents(
        database: MPDatabase,
        tableNames: List<String> = getAllTables()
    ): Map<String, List<Map<String, Any?>>> {
        val databaseJson = mutableMapOf<String, List<Map<String, Any?>>>()
        for (tableName in tableNames) {
            val data = getData(database.query(tableName, null, null, null, null, null, null))
            databaseJson.put(tableName, data)
        }
        return databaseJson
    }

    actual open fun getDatabaseSchema(): Map<String, List<String>> {
        return getDatabaseSchema(DatabaseHelper(context).writableDatabase)
    }

    @Throws(JSONException::class)
    fun getDatabaseSchema(database: SQLiteDatabase): Map<String, List<String>> {
        val databaseJson = mutableMapOf<String, List<String>>()
        for (tableName in getAllTables(MPDatabaseImpl(database))) {
            val cursor = database.query(tableName, null, null, null, null, null, null)
            databaseJson[tableName] = cursor.columnNames.toList()
        }
        return databaseJson
    }

    open fun getAllTables(database: MPDatabase): List<String> {
        val cursor =
            database.query("sqlite_master", null, "type = ?", arrayOf("table"), null, null, null)
        cursor!!.moveToFirst()
        val tableNames: MutableList<String> = ArrayList()
        try {
            while (!cursor.isAfterLast) {
                val tableName = cursor.getString(cursor.getColumnIndexOrThrow("name"))
                if ("android_metadata" != tableName && "sqlite_sequence" != tableName) {
                    tableNames.add(cursor.getString(cursor.getColumnIndexOrThrow("name")))
                }
                cursor.moveToNext()
            }
        } finally {
            if (!cursor.isClosed) {
                cursor.close()
            }
        }
        return tableNames
    }

    private fun getData(cursor: Cursor?): List<Map<String, Any?>> {
        cursor!!.moveToFirst()
        val data = mutableListOf<Map<String, Any?>>()
        try {
            while (!cursor.isAfterLast) {
                val row = mutableMapOf<String, Any?>()
                for (i in 0 until cursor.columnCount) {
                    val columnName = cursor.getColumnName(i)
                    when (cursor.getType(i)) {
                        Cursor.FIELD_TYPE_FLOAT -> row[columnName] = cursor.getFloat(i).toDouble()
                        Cursor.FIELD_TYPE_INTEGER -> row[columnName] = cursor.getInt(i)
                        Cursor.FIELD_TYPE_STRING -> row[columnName] = cursor.getString(i)
                    }
                }
                data.add(row)
                cursor.moveToNext()
            }
        } finally {
            if (cursor != null && !cursor.isClosed) {
                cursor.close()
            }
        }
        return data
    }

    actual fun setCachedConfig(configMessage: ConfigResponseMessage?) {
        AccessUtils.storeConfig(configMessage, context)
    }
}