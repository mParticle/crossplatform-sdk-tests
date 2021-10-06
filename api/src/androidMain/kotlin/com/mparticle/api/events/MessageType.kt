package com.mparticle.api.events

import com.mparticle.BaseEvent

actual enum class MessageType(val androidMessageType: BaseEvent.Type) {
    SessionStart(BaseEvent.Type.SESSION_START),
    SessionEnd(BaseEvent.Type.SESSION_END),
    Event(BaseEvent.Type.EVENT),
    ScreenView(BaseEvent.Type.SCREEN_VIEW),
    CommerceEvent(BaseEvent.Type.SESSION_START),
    OptOut(BaseEvent.Type.OPT_OUT),
    Error(BaseEvent.Type.ERROR),
    PushRegistration(BaseEvent.Type.PUSH_REGISTRATION),
    FirstRun(BaseEvent.Type.FIRST_RUN),
    AppStateTransition(BaseEvent.Type.APP_STATE_TRANSITION),
    PushReceived(BaseEvent.Type.PUSH_RECEIVED),
    BreadCrumb(BaseEvent.Type.BREADCRUMB),
    NetworkPerformance(BaseEvent.Type.NETWORK_PERFORMNACE),
    Profile(BaseEvent.Type.PROFILE),
    UserAttributeChange(BaseEvent.Type.USER_ATTRIBUTE_CHANGE),
    UserIdentityChange(BaseEvent.Type.USER_IDENTITY_CHANGE),
    Media(BaseEvent.Type.MEDIA);


    companion object {
        fun forMessageType(messageType: BaseEvent.MessageType): MessageType {
            return values().firstOrNull {it.androidMessageType == messageType} ?: throw RuntimeException("MessageType: " + messageType + " not found!")
        }
    }
}