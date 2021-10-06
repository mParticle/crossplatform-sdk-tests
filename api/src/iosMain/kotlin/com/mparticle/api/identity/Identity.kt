package com.mparticle.api.identity

import cocoapods.mParticle_Apple_SDK.MPIdentityApiResult
import cocoapods.mParticle_Apple_SDK.MPModifyApiResult
import platform.Foundation.NSError
import platform.Foundation.NSNumber
import cocoapods.mParticle_Apple_SDK.MPIdentityApi as IdentityApiIOS
import cocoapods.mParticle_Apple_SDK.MPGDPRConsent as GDPRConsentIOS
import cocoapods.mParticle_Apple_SDK.MPCCPAConsent
import cocoapods.mParticle_Apple_SDK.MParticleUser as MParticleUserIOS
import cocoapods.mParticle_Apple_SDK.MPIdentityApiRequest
import com.mparticle.api.MParticle
import com.mparticle.api.identity.*
import cocoapods.mParticle_Apple_SDK.MPIdentityApiResultCallback as IdentityApiResultCallbackIOS
import cocoapods.mParticle_Apple_SDK.MPModifyApiResultCallback as ModifyApiResultCallbackIOS


class IdentityApiImpl(val identityApi: IdentityApiIOS): IdentityApi {
    override fun getCurrentUser(): MParticleUser? = identityApi.currentUser?.let { MParticleUser(it) }
    override fun getUser(mpid: Long): MParticleUser? = identityApi.getUser(NSNumber(long = mpid))?.let { MParticleUser(it) }
    override fun getUsers(): List<MParticleUser> = identityApi.getAllUsers().map { MParticleUser(it as MParticleUserIOS) }

    override fun identify(request: IdentityApiRequest?): IdentityResponse = makeIdentityRequest(IdentityRequestType.Identify, request)
    override fun login(request: IdentityApiRequest?): IdentityResponse = makeIdentityRequest(IdentityRequestType.Login, request)
    override fun logout(request: IdentityApiRequest?): IdentityResponse = makeIdentityRequest(IdentityRequestType.Logout, request)
    override fun modify(request: IdentityApiRequest): IdentityResponse = makeIdentityRequest(IdentityRequestType.Modify, request)


    private fun makeIdentityRequest(identityRequestType: IdentityRequestType, identityApiRequest: IdentityApiRequest?): IdentityResponse {
        val response = IdentityResponse()
        val currentMpid = MParticle.getInstance()?.Identity()?.getCurrentUser()?.getId()
        val callback = object: IdentityApiResultCallbackIOS {
            override fun invoke(result: MPIdentityApiResult?, error: NSError?) {
                when {
                    error != null -> {
                        val errorResponse = IdentityHttpResponse().apply {
                            mpid = currentMpid ?: 0
                            httpCode = error.code.toInt()
                            this.errors = error.userInfo.map { Error(it.key?.toString(), it.value.toString()) }
                        }
                        response.onFailure(errorResponse)
                    }
                    result != null -> response.onSuccess(
                        MParticleUser(result.user),
                        result.previousUser?.let { MParticleUser(it) })
                    else -> throw IllegalStateException("Identity Response did not have a result or an error")
                }
            }
        }
        val identityApiRequestApple = (identityApiRequest ?: IdentityApiRequest(null)).identityApiRequest
        when(identityRequestType) {
            IdentityRequestType.Identify -> identityApi.identify(identityApiRequestApple, callback)
            IdentityRequestType.Login -> identityApi.login(identityApiRequestApple, callback)
            IdentityRequestType.Logout -> identityApi.logout(identityApiRequestApple, callback)
            IdentityRequestType.Modify -> identityApi.modify(identityApiRequestApple, callback)
        }
        return response
    }

    enum class IdentityRequestType {
        Identify,
        Login,
        Logout,
        Modify
    }
}



//actual class Consent {
//    actual var isConsented: Boolean
//        get() = consentInstance.consented
//        set(value) {
//            throw RuntimeException("Read Only Instance!")
//        }
//    actual var document: String?
//        get() = consentInstance.document
//        set(value) {
//            throw RuntimeException("Read Only Instance!")
//        }
//    actual var timestamp: Long?
//        get() = consentInstance.timestamp.timeIntervalSinceReferenceDate.toLong()
//        set(value) {
//            throw RuntimeException("Read Only Instance!")
//        }
//    actual var location: String?
//        get() = consentInstance.location
//        set(value) {
//            throw RuntimeException("Read Only Instance!")
//        }
//    actual var hardwareId: String?
//        get() = consentInstance.hardwareId
//        set(value) {
//            throw RuntimeException("Read Only Instance!")
//        }
//}






fun Any.toIdentityType(): IdentityType {
    return IdentityType.values().first {
        it.value == this
    }
}
