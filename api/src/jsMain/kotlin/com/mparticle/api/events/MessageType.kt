package com.mparticle.api.events

actual enum class MessageType {
    SessionStart, SessionEnd, Event, ScreenView, CommerceEvent, OptOut, Error, PushRegistration, FirstRun, AppStateTransition, PushReceived, BreadCrumb, NetworkPerformance, Profile, UserAttributeChange, UserIdentityChange, Media;
}