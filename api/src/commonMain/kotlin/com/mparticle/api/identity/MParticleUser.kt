package com.mparticle.api.identity

expect class MParticleUser {
    val mpid: Long
    fun getUserAttributes(): Map<String, Any?>
    fun getUserAttributes(listener: UserAttributeListener?): Map<String, Any?>?
    fun setUserAttributes(userAttributes: Map<String, Any?>): Boolean
    fun getUserIdentities(): Map<IdentityType, String>
    fun setUserAttribute(key: String, value: Any): Boolean
    fun setUserAttributeList(key: String, value: Any): Boolean
    fun incrementUserAttribute(key: String, value: Int): Boolean
    fun removeUserAttribute(key: String): Boolean
    fun setUserTag(tag: String): Boolean
    fun getConsentState(): ConsentState
    fun setConsentState(state: ConsentState?)
    fun isLoggedIn(): Boolean
    fun getFirstSeenTime(): Long
    fun getLastSeenTime(): Long
}