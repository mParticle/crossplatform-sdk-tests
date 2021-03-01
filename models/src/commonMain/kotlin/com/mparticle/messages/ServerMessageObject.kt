package com.mparticle.messages

import kotlinx.serialization.json.Json
import kotlinx.serialization.serializer

open class ServerMessageObject {

    fun toJsonString(): String {
        return Json.encodeToString(serializer(), this)
    }
}