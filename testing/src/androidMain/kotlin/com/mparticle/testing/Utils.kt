package com.mparticle.testing

import com.mparticle.MParticle
import com.mparticle.internal.Logger
import com.mparticle.internal.Logger.DefaultLogHandler
import com.mparticle.messages.DTO
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import org.json.JSONArray
import org.json.JSONObject

object Utils {
    private var firebasePresent = false

    @JvmStatic
    fun setFirebasePresent(present: Boolean, token: String?) {
        firebasePresent = present
        com.google.firebase.iid.FirebaseInstanceId.setToken(token)
    }

    @JvmStatic
    fun isFirebasePresent(): Boolean {
        return firebasePresent
    }

    @JvmStatic
    fun setStrictMode(logLevelLimit: MParticle.LogLevel?, vararg exclusions: String) {
        if (logLevelLimit != null) {
            object : DefaultLogHandler() {
                override fun log(logLevel: MParticle.LogLevel, error: Throwable?, messages: String?) {
                    super.log(logLevel, error, messages)
                    if (logLevel.ordinal <= logLevelLimit.ordinal) {
                        for (exclude in exclusions) {
                            if (messages == exclude) {
                                return
                            }
                            throw RuntimeException(
                                String.format(
                                    "Unacceptable Log of level \"%s\" : \n\"%s\" ",
                                    logLevel.name,
                                    messages
                                )
                            )
                        }
                    }
                }
            }
        } else {
            null
        }.let {
            Logger.setLogHandler(it)
        }
    }

    fun assertJsonArrayEqual(jsonArray1: JSONArray, jsonArray2: JSONArray) {
        fun JSONArray.toJsonArray(): JsonArray = DTO.jsonBuilder.decodeFromString(JsonArray.serializer(), toString())
        assertJsonArrayEqual(jsonArray1.toJsonArray(), jsonArray2.toJsonArray())
    }

    fun assertJsonEqual(object1: JSONObject, object2: JSONObject) {
        fun JSONObject.toJsonObj(): JsonObject = DTO.jsonBuilder.decodeFromString(JsonObject.serializer(), toString())
        assertJsonEqual(object1.toJsonObj(), object2.toJsonObj())
    }

    fun JSONArray.toList(): List<Any?> {
        return (0 until this.length()).map { this[it] }
    }

    fun JSONObject.toMap(): Map<String, Any?> {
        return keys().asSequence().associateWith { get(it) }
    }
}