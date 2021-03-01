package com.mparticle.api.identity

import cocoapods.mParticle_Apple_SDK.MPIdentityApiResult
import cocoapods.mParticle_Apple_SDK.MPModifyApiResult
import platform.Foundation.NSError
import platform.Foundation.NSNumber
import cocoapods.mParticle_Apple_SDK.MPIdentityApi as IdentityApiIOS
import cocoapods.mParticle_Apple_SDK.MPConsentState as ConsentStateIOS
import cocoapods.mParticle_Apple_SDK.MPGDPRConsent as GDPRConsentIOS
import cocoapods.mParticle_Apple_SDK.MPCCPAConsent
import cocoapods.mParticle_Apple_SDK.MParticleUser as MParticleUserIOS
import cocoapods.mParticle_Apple_SDK.MPIdentityApiRequest
import com.mparticle.api.identity.*
import cocoapods.mParticle_Apple_SDK.MPIdentityApiResultCallback as IdentityApiResultCallbackIOS
import cocoapods.mParticle_Apple_SDK.MPModifyApiResultCallback as ModifyApiResultCallbackIOS


class IdentityApiImpl(val identityApi: IdentityApiIOS): IdentityApi {
    override fun getCurrentUser(): MParticleUser? = identityApi.currentUser?.let { MParticleUserImpl(it) }
    override fun getUser(mpid: Long): MParticleUser? = identityApi.getUser(NSNumber(long = mpid))?.let { MParticleUserImpl(it) }
    override fun getUsers(): List<MParticleUser> = identityApi.getAllUsers().map { MParticleUserImpl(it as MParticleUserIOS) }
    override fun identify(request: IdentityApiRequest?) {
        //TODO implement callback
        identityApi.identify(request?.identityRequest ?: MPIdentityApiRequest(), object: IdentityApiResultCallbackIOS {
            override fun invoke(p1: MPIdentityApiResult?, p2: NSError?) {
                TODO("Not yet implemented")
            }
        })
    }

    override fun login(request: IdentityApiRequest?) {
        identityApi.login(request?.identityRequest ?: MPIdentityApiRequest(), object: IdentityApiResultCallbackIOS {
            override fun invoke(p1: MPIdentityApiResult?, p2: NSError?) {
                TODO("Not yet implemented")
            }
        })
    }

    override fun logout(request: IdentityApiRequest?) {
        identityApi.logout(request?.identityRequest ?: MPIdentityApiRequest(), object: IdentityApiResultCallbackIOS {
            override fun invoke(p1: MPIdentityApiResult?, p2: NSError?) {
                TODO("Not yet implemented")
            }
        })
    }

    override fun modify(request: IdentityApiRequest) {
        identityApi.modify(request.identityRequest, object: ModifyApiResultCallbackIOS {
            override fun invoke(p1: MPModifyApiResult?, p2: NSError?) {
                TODO("Not yet implemented")
            }
        })
    }
}

class MParticleUserImpl(val user: MParticleUserIOS): MParticleUser {
    
    override fun getId(): Long = user.userId.longLongValue
    override fun getUserAttributes(): Map<String, Any?> = user.userAttributes.entries.associate { it.key!!.toString() to it.value }
    override fun getUserAttributes(listener: UserAttributeListener?): Map<String, Any?>? = throw RuntimeException("Not available on iOS")
    override fun setUserAttributes(userAttributes: Map<String, Any?>): Boolean {
        userAttributes.entries
            .associate {
                it.key as Any? to it.value
            }.let {
                user.setUserAttributes(it)
            }
        return true
    }
    override fun getUserIdentities(): Map<IdentityType, String> = user.identities.entries.associate { it.key!!.toIdentityType() to it.value.toString() }
    override fun setUserAttribute(key: String, value: Any): Boolean = user.setUserAttribute(key, value).let { true }
    override fun setUserAttributeList(key: String, value: Any): Boolean = user.setUserAttributeList(key, value as List<*>).let { true }
    override fun incrementUserAttribute(key: String, value: Int): Boolean = user.incrementUserAttribute(key, NSNumber(value)).let { true }
    override fun removeUserAttribute(key: String): Boolean = user.removeUserAttribute(key).let { true }
    override fun setUserTag(tag: String): Boolean = user.setUserTag(tag)?.let { true }
    override fun getConsentState(): ConsentState = com.mparticle.api.identity.ConsentState(user.consentState())
    override fun setConsentState(state: ConsentState?) = user.setConsentState(state ?: ConsentStateIOS())
    override fun isLoggedIn(): Boolean = user.isLoggedIn
    override fun getFirstSeenTime(): Long = user.firstSeen.timeIntervalSinceReferenceDate.toLong()
    override fun getLastSeenTime(): Long = user.firstSeen.timeIntervalSinceReferenceDate.toLong()
}

actual class IdentityApiRequest actual constructor(user: MParticleUser?) {
    val identityRequest: MPIdentityApiRequest = MPIdentityApiRequest.requestWithEmptyUser()

    init {
        user?.getUserIdentities()?.forEach {
            identityRequest.setIdentity(it.value, it.key.ordinal.toULong())
        }
    }
    actual fun addIdentity(key: IdentityType, value: String?) {
        identityRequest.setIdentity(value, key.ordinal.toULong())
    }

}

actual class ConsentState(val consentState: ConsentStateIOS? = null): ConsentStateIOS() {

    actual var gdprConsentState: MutableMap<String, IConsent>? = null
        get() = consentState?.gdprConsentState()
            ?.map { it.key to it.value as GDPRConsentIOS }
            ?.associate { it.first.toString() to GDPRConsentImpl(it.second) }
            ?.toMutableMap()
            ?: field
        set(value) {
            field = value
            setGDPRConsentState(value?.entries?.associate { it.key to it.value.toGDPRConsent() })
        }
    actual var ccpaConsent: IConsent? = null
        get() = consentState?.ccpaConsentState()?.let { CCPAConsentImpl(it) } ?: field
        set(value) {
            field = value
            if (value == null) {
                removeCCPAConsentState()
            } else {
                setCCPAConsentState(value.toCCPAConsent())
            }
        }
}

fun IConsent.toGDPRConsent(): GDPRConsentIOS = GDPRConsentIOS().apply {
    setConsented(isConsented)
    setDocument(document)
    setHardwareId(hardwareId)
    setLocation(location)
    setTimestamp(timestamp)
}

fun IConsent.toCCPAConsent(): MPCCPAConsent = MPCCPAConsent().apply {
    setConsented(isConsented)
    setDocument(document)
    setHardwareId(hardwareId)
    setLocation(location)
    setTimestamp(timestamp)
}


class GDPRConsentImpl(val consentInstance: GDPRConsentIOS): IConsent {
    override var isConsented: Boolean
        get() = consentInstance.consented
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var document: String?
        get() = consentInstance.document
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var timestamp: Long?
        get() = consentInstance.timestamp.timeIntervalSinceReferenceDate.toLong()
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var location: String?
        get() = consentInstance.location
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var hardwareId: String?
        get() = consentInstance.hardwareId
        set(value) { throw RuntimeException("Read Only Instance!")}
}

class CCPAConsentImpl(val consentInstance: MPCCPAConsent): IConsent {
    override var isConsented: Boolean
        get() = consentInstance.consented
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var document: String?
        get() = consentInstance.document
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var timestamp: Long?
        get() = consentInstance.timestamp.timeIntervalSinceReferenceDate.toLong()
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var location: String?
        get() = consentInstance.location
        set(value) { throw RuntimeException("Read Only Instance!")}
    override var hardwareId: String?
        get() = consentInstance.hardwareId
        set(value) { throw RuntimeException("Read Only Instance!")}
}

fun Any.toIdentityType(): IdentityType {
    return IdentityType.values().first {
        it.value == this
    }
}
