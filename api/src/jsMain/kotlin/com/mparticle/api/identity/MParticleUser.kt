package com.mparticle.api.identity

actual class MParticleUser {
    actual val mpid: Long
        get() = TODO("Not yet implemented")

    actual fun getUserAttributes(): Map<String, Any?> {
        TODO("Not yet implemented")
    }

    actual fun getUserAttributes(listener: UserAttributeListener?): Map<String, Any?>? {
        TODO("Not yet implemented")
    }

    actual fun setUserAttributes(userAttributes: Map<String, Any?>): Boolean {
        TODO("Not yet implemented")
    }

    actual fun getUserIdentities(): Map<IdentityType, String> {
        TODO("Not yet implemented")
    }

    actual fun setUserAttribute(key: String, value: Any): Boolean {
        TODO("Not yet implemented")
    }

    actual fun setUserAttributeList(key: String, value: Any): Boolean {
        TODO("Not yet implemented")
    }

    actual fun incrementUserAttribute(key: String, value: Int): Boolean {
        TODO("Not yet implemented")
    }

    actual fun removeUserAttribute(key: String): Boolean {
        TODO("Not yet implemented")
    }

    actual fun setUserTag(tag: String): Boolean {
        TODO("Not yet implemented")
    }

    actual fun getConsentState(): ConsentState {
        TODO("Not yet implemented")
    }

    actual fun setConsentState(state: ConsentState?) {
    }

    actual fun isLoggedIn(): Boolean {
        TODO("Not yet implemented")
    }

    actual fun getFirstSeenTime(): Long {
        TODO("Not yet implemented")
    }

    actual fun getLastSeenTime(): Long {
        TODO("Not yet implemented")
    }
}