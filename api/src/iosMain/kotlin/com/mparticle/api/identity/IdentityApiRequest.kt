package com.mparticle.api.identity

import cocoapods.mParticle_Apple_SDK.MPIdentityApiRequest
import com.mparticle.api.GenericDelegate
import kotlin.native.concurrent.freeze

actual class IdentityApiRequest(val identityApiRequest: MPIdentityApiRequest) {
    actual constructor(user: MParticleUser?): this(user?.let { MPIdentityApiRequest.requestWithUser(it.user)} ?: MPIdentityApiRequest.requestWithEmptyUser())

    actual var identities: Map<IdentityType, String?> by GenericDelegate(mapOf()) {
        identities.entries.forEach {
            identityApiRequest.setIdentity(it.value, it.key.ordinal.toULong())
        }
    }

    actual fun addIdentity(key: IdentityType, value: String?) {
        identityApiRequest.setIdentity(value, key.ordinal.toULong())
    }
}