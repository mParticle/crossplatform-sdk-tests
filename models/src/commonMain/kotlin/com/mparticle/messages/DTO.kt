package com.mparticle.messages

import com.mparticle.messages.events.AppStateTransitionEvent
import com.mparticle.messages.events.BaseEvent
import com.mparticle.messages.events.BatchMessage
import com.mparticle.messages.events.CommerceEventMessage
import com.mparticle.messages.events.FirstRunMessage
import com.mparticle.messages.events.MPEventMessage
import com.mparticle.messages.events.PushRegistrationMessage
import com.mparticle.messages.events.ScreenViewMessage
import com.mparticle.messages.events.SessionEndMessage
import com.mparticle.messages.events.SessionStartMessage
import com.mparticle.messages.events.UserIdentityChangeMessage
import kotlinx.serialization.KSerializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.modules.SerializersModule
import kotlinx.serialization.serializer
import kotlin.reflect.KType

abstract class DTO {

    companion object {
        inline fun <reified T: DTO> from(string: String): T = batchJsonBuilder.decodeFromString(serializer<T>(), string)

        val batchJsonBuilder = Json {
            serializersModule = SerializersModule {
                polymorphic(BaseEvent::class, AppStateTransitionEvent::class, AppStateTransitionEvent.serializer())
                polymorphic(BaseEvent::class, MPEventMessage::class, MPEventMessage.serializer())
                polymorphic(BaseEvent::class, CommerceEventMessage::class, CommerceEventMessage.serializer())
                polymorphic(BaseEvent::class, SessionEndMessage::class, SessionEndMessage.serializer())
                polymorphic(BaseEvent::class, SessionStartMessage::class, SessionStartMessage.serializer())
                polymorphic(BaseEvent::class, FirstRunMessage::class, FirstRunMessage.serializer())
                polymorphic(BaseEvent::class, UserIdentityChangeMessage::class, UserIdentityChangeMessage.serializer())
                polymorphic(BaseEvent::class, ScreenViewMessage::class, ScreenViewMessage.serializer())
                polymorphic(BaseEvent::class, PushRegistrationMessage::class, PushRegistrationMessage.serializer())
            }
            ignoreUnknownKeys = true
            classDiscriminator = "dt"
            isLenient = true
            coerceInputValues = true
        }
        val jsonBuilder = Json {
            isLenient = true
            ignoreUnknownKeys = true
            coerceInputValues = true
        }
    }
}

inline fun <reified T: DTO> T.toJsonString(): String {
    return DTO.batchJsonBuilder.encodeToString(serializer(), this)
}