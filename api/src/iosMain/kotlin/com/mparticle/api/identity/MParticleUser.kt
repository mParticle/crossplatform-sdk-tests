package com.mparticle.api.identity

import cocoapods.mParticle_Apple_SDK.MPConsentState
import cocoapods.mParticle_Apple_SDK.MParticleUser
import platform.Foundation.NSNumber

actual class MParticleUser(val user: MParticleUser) {

    actual fun getId(): Long = user.userId.longLongValue
    actual fun getUserAttributes(): Map<String, Any?> = user.userAttributes.entries.associate { it.key!!.toString() to it.value }
    actual fun getUserAttributes(listener: UserAttributeListener?): Map<String, Any?>? = throw RuntimeException("Not available on iOS")
    actual fun setUserAttributes(userAttributes: Map<String, Any?>): Boolean {
        userAttributes.entries
            .associate {
                it.key as Any? to it.value
            }.let {
                user.setUserAttributes(it)
            }
        return true
    }
    actual fun getUserIdentities(): Map<IdentityType, String> = user.identities.entries.associate { it.key!!.toIdentityType() to it.value.toString() }
    actual fun setUserAttribute(key: String, value: Any): Boolean = user.setUserAttribute(key, value).let { true }
    actual fun setUserAttributeList(key: String, value: Any): Boolean = user.setUserAttributeList(key, value as List<*>).let { true }
    actual fun incrementUserAttribute(key: String, value: Int): Boolean = user.incrementUserAttribute(key, NSNumber(value)).let { true }
    actual fun removeUserAttribute(key: String): Boolean = user.removeUserAttribute(key).let { true }
    actual fun setUserTag(tag: String): Boolean = user.setUserTag(tag).let { true }
    actual fun getConsentState(): ConsentState = ConsentState(user.consentState() ?: MPConsentState())
    actual fun setConsentState(state: ConsentState?) = user.setConsentState(state?.consentState ?: MPConsentState())
    actual fun isLoggedIn(): Boolean = user.isLoggedIn
    actual fun getFirstSeenTime(): Long = user.firstSeen.timeIntervalSinceReferenceDate.toLong()
    actual fun getLastSeenTime(): Long = user.firstSeen.timeIntervalSinceReferenceDate.toLong()
}
