package com.mparticle.api.identity

import com.mparticle.identity.IdentityApiRequest

actual class IdentityApiRequest actual constructor(user: MParticleUser?): IdentityApiRequest.Builder(user?.let { it.user }) {

    actual fun addIdentity(key: IdentityType, value: String?) {
        userIdentity(key.toIdentityType(), value)
    }

}