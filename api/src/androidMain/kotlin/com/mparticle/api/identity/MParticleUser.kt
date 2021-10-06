package com.mparticle.api.identity

import com.mparticle.identity.MParticleUser

actual class MParticleUser(val user: MParticleUser) {
    actual val mpid: Long
        get() = user.id
    actual fun getUserAttributes(): Map<String, Any?> = user.userAttributes
    actual fun getUserAttributes(listener: UserAttributeListener?): Map<String, Any?>? = user.getUserAttributes(listener?.toUserAttributeListener())
    actual fun setUserAttributes(userAttributes: Map<String, Any?>): Boolean = user.setUserAttributes(userAttributes)
    actual fun getUserIdentities(): Map<IdentityType, String> = user.userIdentities.entries.associate { it.key.toIdentityType() to it.value }
    actual fun setUserAttribute(key: String, value: Any): Boolean = user.setUserAttribute(key, value)
    actual fun setUserAttributeList(key: String, value: Any): Boolean = user.setUserAttributeList(key, value)
    actual fun incrementUserAttribute(key: String, value: Int): Boolean = user.incrementUserAttribute(key, value)
    actual fun removeUserAttribute(key: String): Boolean = user.removeUserAttribute(key)
    actual fun setUserTag(tag: String): Boolean = user.setUserTag(tag)
    actual fun getConsentState(): ConsentState = ConsentState(user.consentState)
    actual fun setConsentState(state: ConsentState?) = user.setConsentState(state?.build())
    actual fun isLoggedIn(): Boolean = user.isLoggedIn
    actual fun getFirstSeenTime(): Long = user.firstSeenTime
    actual fun getLastSeenTime(): Long = user.lastSeenTime
}