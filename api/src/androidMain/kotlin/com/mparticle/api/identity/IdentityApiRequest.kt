package com.mparticle.api.identity

import com.mparticle.api.GenericDelegate
import com.mparticle.identity.IdentityApiRequest

actual class IdentityApiRequest actual constructor(user: MParticleUser?): IdentityApiRequest.Builder(user?.let { it.user }) {

    actual var identities: Map<IdentityType, String?> by GenericDelegate(mapOf()) {
        this.userIdentities(identities.entries.associate { it.key.toIdentityType() to it.value })
    }

    actual fun addIdentity(key: IdentityType, value: String?) {
        userIdentity(key.toIdentityType(), value)
    }

}