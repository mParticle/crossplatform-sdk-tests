package com.mparticle.api.identity

expect class IdentityApiRequest(user: MParticleUser? = null) {
    var identities: Map<IdentityType, String?>
    fun addIdentity(key: IdentityType, value: String?)
}

fun IdentityApiRequest(user: MParticleUser? = null, initializer: IdentityApiRequest.() -> Unit): IdentityApiRequest =
    IdentityApiRequest(user).apply(initializer)