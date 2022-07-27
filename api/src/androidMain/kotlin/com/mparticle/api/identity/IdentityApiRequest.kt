package com.mparticle.api.identity

import com.mparticle.api.GenericDelegate
import com.mparticle.identity.IdentityApiRequest as IdentityApiRequestAndroid

actual class IdentityApiRequest(val request: IdentityApiRequestAndroid.Builder) {

    actual constructor(user: MParticleUser?): this(IdentityApiRequestAndroid.withUser(user?.let { it.user }))
    actual var identities: Map<IdentityType, String?> by GenericDelegate(mapOf()) {
        request.userIdentities(identities.entries.associate { it.key.toIdentityType() to it.value })
    }

    actual fun addIdentity(key: IdentityType, value: String?) {
        request.userIdentity(key.toIdentityType(), value)
    }

}