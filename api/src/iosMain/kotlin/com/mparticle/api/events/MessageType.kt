package com.mparticle.api.events

import cocoapods.mParticle_Apple_SDK.*


actual enum class MessageType(val iosMessageType: ULong) {
    SessionStart(MPMessageTypeSessionStart),
    SessionEnd(MPMessageTypeSessionEnd),
    Event(MPMessageTypeEvent),
    ScreenView(MPMessageTypeScreenView),
    CommerceEvent(MPMessageTypeCommerceEvent),
    OptOut(MPMessageTypeOptOut),
    Error(MPMessageTypeCrashReport),
    PushRegistration(MPMessageTypePushRegistration),
    FirstRun(MPMessageTypeFirstRun),
    AppStateTransition(MPMessageTypeAppStateTransition),
    PushReceived(MPMessageTypePushNotification),
    BreadCrumb(MPMessageTypeBreadcrumb),
    NetworkPerformance(MPMessageTypeNetworkPerformance),
    Profile(MPMessageTypeProfile),
    UserAttributeChange(MPMessageTypeUserAttributeChange),
    UserIdentityChange(MPMessageTypeUserIdentityChange),
    Media(MPMessageTypeMedia);

    companion object {
        fun forMessageType(messageType: ULong): MessageType {
            return values().firstOrNull {it.iosMessageType == messageType} ?: throw RuntimeException("MessageType: " + messageType + " not found!")
        }
    }
}