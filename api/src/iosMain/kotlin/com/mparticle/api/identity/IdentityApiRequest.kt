package com.mparticle.api.identity

import cocoapods.mParticle_Apple_SDK.MPIdentityApiRequest

actual class IdentityApiRequest(val identityApiRequest: MPIdentityApiRequest) {
    actual constructor(user: MParticleUser?): this(user?.let { MPIdentityApiRequest.requestWithUser(it.user)} ?: MPIdentityApiRequest.requestWithEmptyUser())

    actual fun addIdentity(key: IdentityType, value: String?) {
        identityApiRequest.setIdentity(value, key.ordinal.toULong())
    }
}