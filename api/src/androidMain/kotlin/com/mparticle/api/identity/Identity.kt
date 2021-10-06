package com.mparticle.api.identity

import com.mparticle.MParticleTask
import com.mparticle.consent.CCPAConsent
import com.mparticle.consent.ConsentInstance
import com.mparticle.consent.GDPRConsent
import com.mparticle.identity.IdentityApiResult
import com.mparticle.identity.IdentityApi as IdentityApiAndroid
import com.mparticle.MParticle.IdentityType as IdentityTypeAndroid
import com.mparticle.identity.BaseIdentityTask as BaseIdentityTaskAndroid
import com.mparticle.identity.IdentityHttpResponse as IdentityHttpResponseAndroid
import com.mparticle.UserAttributeListener as UserAttributeListenerAndroid
import com.mparticle.consent.ConsentState as ConsentStateAndroid

actual class IdentityApi(val identityApi: IdentityApiAndroid) {

    actual val currentUser: MParticleUser?
        get() = identityApi.currentUser?.let { MParticleUser(it) }

    actual val allUsers: List<MParticleUser>
        get() = identityApi.users.map { MParticleUser(it) }

    actual fun getUser(mpid: Long): MParticleUser? {
        return identityApi.getUser(mpid)?.let { MParticleUser(it) }
    }

    actual fun identify(request: IdentityApiRequest?): IdentityResponse =
        identityApi.identify(request?.build()).toIdentityResponse()

    actual fun login(request: IdentityApiRequest?): IdentityResponse =
        identityApi.login(request?.build()).toIdentityResponse()

    actual fun logout(request: IdentityApiRequest?): IdentityResponse =
        identityApi.logout(request?.build()).toIdentityResponse()


    actual fun modify(request: IdentityApiRequest): IdentityResponse =
        identityApi.modify(request.build()).toIdentityResponse()
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

fun MParticleTask<IdentityApiResult>.toIdentityResponse(): IdentityResponse =
    IdentityResponse().also { response ->
        addFailureListener { response.onFailure(it!!.toIdentityHttpApiResponse()) }
        addSuccessListener {
            response.onSuccess(
                MParticleUser(it.user),
                it.previousUser?.let { user -> MParticleUser(user) })
        }
    }

fun IdentityResponse.toBaseIdentityTask(): BaseIdentityTaskAndroid {
    val task = BaseIdentityTaskAndroid()
    failureListeners.forEach { listener ->
        task.addFailureListener { listener(it?.toIdentityHttpApiResponse()) }
    }
    successListeners.forEach { listener ->
        task.addSuccessListener { listener(MParticleUser(it.user), it.previousUser?.let { user -> MParticleUser(user) })}
    }
    return task
}

fun IdentityHttpResponseAndroid.toIdentityHttpApiResponse(): IdentityHttpResponse {
    return IdentityHttpResponse().also {
        it.context = context
        it.httpCode = httpCode
        it.loggedIn = isLoggedIn
        it.mpid = mpId
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