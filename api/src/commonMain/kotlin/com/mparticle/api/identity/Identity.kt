package com.mparticle.api.identity

interface IdentityApi {
    fun getCurrentUser(): MParticleUser?
    fun getUser(mpid: Long): MParticleUser?
    fun getUsers(): List<MParticleUser>

    fun identify(request: IdentityApiRequest?): IdentityResponse
    fun login(request: IdentityApiRequest?): IdentityResponse
    fun logout(request: IdentityApiRequest?): IdentityResponse
    fun modify(request: IdentityApiRequest): IdentityResponse
}

interface UserAttributeListener {
    fun onUserAttributesReceived(
        userAttributes: Map<String, String?>?,
        userAttributeLists: Map<String, List<String?>>?,
        mpid: Long?
    )
}





open class IdentityResponse {

    val successListeners = ArrayList<(MParticleUser, MParticleUser?) -> Unit>()
    val failureListeners = ArrayList<(IdentityHttpResponse?) -> Unit>()

    fun addFailureListener(listener: (IdentityHttpResponse?) -> Unit): IdentityResponse {
        failureListeners.add(listener)
        return this
    }

    fun addSuccessListener(listener: (MParticleUser, MParticleUser?) -> Unit): IdentityResponse {
        successListeners.add(listener)
        return this
    }


    internal fun onSuccess(currentUser: MParticleUser, previousUser: MParticleUser?) {
        successListeners.forEach { it(currentUser, previousUser) }
    }

    internal fun onFailure(response: IdentityHttpResponse) {
        failureListeners.forEach { it(response) }
    }
}

class IdentityHttpResponse {
    var errors: List<Error> = ArrayList()
    var mpid: Long = 0
    var context: String? = null
    var httpCode = 0
    var loggedIn = false

    override fun toString(): String {
        return """
            errors: ${errors.joinToString("\n"){ "code: ${it.code}, message: ${it.message}" }}
            mpid: $mpid
            context: $context
            httpsCode: $httpCode
            loggedId: $loggedIn
        """.trimIndent()
    }
}

class Error(
    var code: String?,
    var message: String?
)