package com.mparticle.api.identity

interface IdentityApi {
    fun getCurrentUser(): MParticleUser?
    fun getUser(mpid: Long): MParticleUser?
    fun getUsers(): List<MParticleUser>

    fun identify(request: IdentityApiRequest?)
    fun login(request: IdentityApiRequest?)
    fun logout(request: IdentityApiRequest?)
    fun modify(request: IdentityApiRequest)
}

interface MParticleUser {
    fun getId(): Long
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

interface UserAttributeListener {
    fun onUserAttributesReceived(
        userAttributes: Map<String, String?>?,
        userAttributeLists: Map<String, List<String?>>?,
        mpid: Long?
    )
}

expect class IdentityApiRequest(user: MParticleUser?) {
    fun addIdentity(key: IdentityType, value: String?)
}

enum class IdentityType(val value: Int) {
    Other(0),
    CustomerId(1),
    Facebook(2),
    Twitter(3),
    Google(4),
    Microsoft(5),
    Yahoo(6),
    Email(7),
    Alias(8),
    FacebookCustomAudienceId(9),
    Other2(10),
    Other3(11),
    Other4(12),
    Other5(13),
    Other6(14),
    Other7(15),
    Other8(16),
    Other9(17),
    Other10(18),
    MobileNumber(19),
    PhoneNumber2(20),
    PhoneNumber3(21)
}

expect class ConsentState {
    var gdprConsentState: MutableMap<String, IConsent>?
    var ccpaConsent: IConsent?
}

interface IConsent {
    var isConsented: Boolean
    var document: String?
    var timestamp: Long?
    var location: String?
    var hardwareId: String?
}

class Consent(override var isConsented: Boolean): IConsent {
    override var document: String? = null
    override var timestamp: Long? = null
    override var location: String? = null
    override var hardwareId: String? = null
}

open class BaseIdentityTask {
    val successListeners = ArrayList<(MParticleUser, MParticleUser?) -> Unit>()
    val failureListeners = ArrayList<(IdentityHttpResponse?) -> Unit>()

    fun addFailureListener(listener: (IdentityHttpResponse?) -> Unit): BaseIdentityTask {
        failureListeners.add(listener)
        return this
    }

    fun addSuccessListener(listener: (MParticleUser, MParticleUser?) -> Unit): BaseIdentityTask {
        successListeners.add(listener)
        return this
    }
}

class IdentityHttpResponse {
    var errors: List<Error> = ArrayList<Error>()
    var mpId: Long = 0
    var context: String? = null
    var httpCode = 0
    var loggedIn = false
}

class Error(
    var message: String?,
    var code: String?
)