package com.mparticle.api.identity

import com.mparticle.MParticle
import com.mparticle.consent.CCPAConsent
import com.mparticle.consent.ConsentInstance
import com.mparticle.consent.GDPRConsent
import com.mparticle.identity.IdentityApi as IdentityApiAndroid
import com.mparticle.identity.MParticleUser as MParticleUserAndroid
import com.mparticle.identity.IdentityApiRequest as IdentityApiRequestAndroid
import com.mparticle.MParticle.IdentityType as IdentityTypeAndroid
import com.mparticle.identity.BaseIdentityTask as BaseIdentityTaskAndroid
import com.mparticle.identity.IdentityHttpResponse as IdentityHttpResponseAndroid
import com.mparticle.UserAttributeListener as UserAttributeListenerAndroid
import com.mparticle.consent.ConsentState as ConsentStateAndroid

class IdentityApiImpl(val identityApi: IdentityApiAndroid): IdentityApi {

    override fun getCurrentUser(): MParticleUser? = identityApi.currentUser?.let { MParticleUserImpl(it) }

    override fun getUser(mpid: Long): MParticleUser? {
        return identityApi.getUser(mpid)?.let { MParticleUserImpl(it) }
    }

    override fun getUsers(): List<MParticleUser> {
        return identityApi.users.map { MParticleUserImpl(it) }
    }

    override fun identify(request: IdentityApiRequest?) {
        identityApi.identify(request?.build())
    }

    override fun login(request: IdentityApiRequest?) {
        identityApi.login(request?.build())
    }

    override fun logout(request: IdentityApiRequest?) {
        identityApi.logout(request?.build())
    }

    override fun modify(request: IdentityApiRequest) {
        identityApi.modify(request.build())
    }
}

actual class IdentityApiRequest actual constructor(user: MParticleUser?): IdentityApiRequestAndroid.Builder(user?.let { MParticleUserAndroidImpl(it) }) {

    actual fun addIdentity(key: IdentityType, value: String?) {
        userIdentity(key.toIdentityType(), value)
    }

}

class MParticleUserAndroidImpl(val user: MParticleUser): MParticleUserAndroid {
    override fun getId(): Long = user.getId()
    override fun getUserAttributes(): MutableMap<String, Any?> = user.getUserAttributes().toMutableMap()
    override fun getUserAttributes(listener: com.mparticle.UserAttributeListener?): Map<String, Any?>? = user.getUserAttributes(listener?.toUserAttributeListener())
    override fun setUserAttributes(userAttributes: MutableMap<String, Any>): Boolean = user.setUserAttributes(userAttributes)
    override fun getUserIdentities(): Map<MParticle.IdentityType, String> =  user.getUserIdentities().entries.associate { it.key.toIdentityType() to it.value }
    override fun setUserAttribute(key: String, value: Any): Boolean = user.setUserAttribute(key, value)
    override fun setUserAttributeList(key: String, value: Any): Boolean = user.setUserAttributeList(key, value)
    override fun incrementUserAttribute(key: String, value: Int): Boolean = user.incrementUserAttribute(key, value)
    override fun removeUserAttribute(key: String): Boolean = user.removeUserAttribute(key)
    override fun setUserTag(tag: String): Boolean = user.setUserTag(tag)
    override fun getConsentState(): com.mparticle.consent.ConsentState = user.getConsentState().build();
    override fun setConsentState(state: com.mparticle.consent.ConsentState?) = throw RuntimeException("I don't think we ever need to call this?...if you get this error, implement the conversion between ConsentState (Android) and ConsentState (Common)")
    override fun isLoggedIn(): Boolean = user.isLoggedIn()
    override fun getFirstSeenTime(): Long = user.getFirstSeenTime()
    override fun getLastSeenTime(): Long = user.getLastSeenTime()
}

class MParticleUserImpl(val user: MParticleUserAndroid): MParticleUser {
    override fun getId(): Long = user.id
    override fun getUserAttributes(): Map<String, Any?> = user.userAttributes
    override fun getUserAttributes(listener: UserAttributeListener?): Map<String, Any?>? = user.getUserAttributes(listener?.toUserAttributeListener())
    override fun setUserAttributes(userAttributes: Map<String, Any?>): Boolean = user.setUserAttributes(userAttributes)
    override fun getUserIdentities(): Map<IdentityType, String> = user.userIdentities.entries.associate { it.key.toIdentityType() to it.value }
    override fun setUserAttribute(key: String, value: Any): Boolean = user.setUserAttribute(key, value)
    override fun setUserAttributeList(key: String, value: Any): Boolean = user.setUserAttributeList(key, value)
    override fun incrementUserAttribute(key: String, value: Int): Boolean = user.incrementUserAttribute(key, value)
    override fun removeUserAttribute(key: String): Boolean = user.removeUserAttribute(key)
    override fun setUserTag(tag: String): Boolean = user.setUserTag(tag)
    override fun getConsentState(): ConsentState = ConsentState(user.consentState)
    override fun setConsentState(state: ConsentState?) = user.setConsentState(state?.build())
    override fun isLoggedIn(): Boolean = user.isLoggedIn
    override fun getFirstSeenTime(): Long = user.firstSeenTime
    override fun getLastSeenTime(): Long = user.lastSeenTime
}

fun IdentityType.toIdentityType(): IdentityTypeAndroid {
    return IdentityTypeAndroid.values().first {
        it.value == this.value
    }
}

fun IdentityTypeAndroid.toIdentityType(): IdentityType {
    return IdentityType.values().first {
        it.value == this.value
    }
}

fun BaseIdentityTask.toBaseIdentityTask(): BaseIdentityTaskAndroid {
    val task = BaseIdentityTaskAndroid()
    failureListeners.forEach { listener ->
        task.addFailureListener { listener(it?.toIdentityHttpApiResponse()) }
    }
    successListeners.forEach { listener ->
        task.addSuccessListener { listener(MParticleUserImpl(it.user), it.previousUser?.let { user -> MParticleUserImpl(user) })}
    }
    return task
}

fun IdentityHttpResponseAndroid.toIdentityHttpApiResponse(): IdentityHttpResponse {
    return IdentityHttpResponse().also {
        it.context = context
        it.httpCode = httpCode
        it.loggedIn = isLoggedIn
        it.mpId = mpId
        it.errors = errors.map { error -> Error(error.message, error.code) }
    }
}

fun UserAttributeListener.toUserAttributeListener(): UserAttributeListenerAndroid {
    return object: UserAttributeListenerAndroid {
        override fun onUserAttributesReceived(
            userAttributes: Map<String, String?>?,
            userAttributeLists: Map<String, List<String?>>?,
            mpid: Long?
        ) {
            this@toUserAttributeListener.onUserAttributesReceived(userAttributes, userAttributeLists, mpid)
        }

    }
}

fun UserAttributeListenerAndroid.toUserAttributeListener(): UserAttributeListener{
    return object: UserAttributeListener {
        override fun onUserAttributesReceived(
            userAttributes: Map<String, String?>?,
            userAttributeLists: Map<String, List<String?>>?,
            mpid: Long?
        ) {
            return this@toUserAttributeListener.onUserAttributesReceived(userAttributes, userAttributeLists, mpid)
        }

    }
}

actual class ConsentState(private val consentState: ConsentStateAndroid? = null): ConsentStateAndroid.Builder() {
    actual var gdprConsentState: MutableMap<String, IConsent>? = null
        get() = consentState?.gdprConsentState?.entries?.associate { it.key to ConsentImpl(it.value) }?.toMutableMap() ?: field
        set(value) {
            field = value
            setGDPRConsentState(value?.entries?.associate { it.key to it.value.toGDPRConsent() })
        }
    actual var ccpaConsent: IConsent? = null
        get() = field
        set(value) {
            field = value
            if (value == null) {
                removeCCPAConsentState()
            } else {
                setCCPAConsentState(value.toCCPAConsent())
            }
        }

}

fun IConsent.toGDPRConsent(): GDPRConsent = GDPRConsent.builder(isConsented)
        .document(document)
        .hardwareId(hardwareId)
        .location(location)
        .timestamp(timestamp)
        .build()

fun IConsent.toCCPAConsent(): CCPAConsent = CCPAConsent.builder(isConsented)
    .document(document)
    .hardwareId(hardwareId)
    .location(location)
    .timestamp(timestamp)
    .build()

class ConsentImpl(val consentInstance: ConsentInstance): IConsent {
    override var isConsented: Boolean
        get() = consentInstance.isConsented
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    override var document: String?
        get() = consentInstance.document
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    override var timestamp: Long?
        get() = consentInstance.timestamp
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    override var location: String?
        get() = consentInstance.location
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    override var hardwareId: String?
        get() = consentInstance.hardwareId
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
}