package com.mparticle.api.identity

expect class IdentityApiRequest(user: MParticleUser? = null) {
    fun addIdentity(key: IdentityType, value: String?)
}