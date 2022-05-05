package com.mparticle.api.identity

actual class IdentityApiRequest actual constructor(user: MParticleUser?) {
    actual var identities: Map<IdentityType, String?>
        get() = TODO("Not yet implemented")
        set(value) {}

    actual fun addIdentity(key: IdentityType, value: String?) {
    }
}