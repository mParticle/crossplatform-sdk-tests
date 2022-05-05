package com.mparticle.api.identity

actual class IdentityApi {
    actual val currentUser: MParticleUser?
        get() = TODO("Not yet implemented")
    actual val allUsers: List<MParticleUser>
        get() = TODO("Not yet implemented")

    actual fun getUser(mpid: Long): MParticleUser? {
        TODO("Not yet implemented")
    }

    actual fun identify(request: IdentityApiRequest?): IdentityResponse {
        TODO("Not yet implemented")
    }

    actual fun login(request: IdentityApiRequest?): IdentityResponse {
        TODO("Not yet implemented")
    }

    actual fun logout(request: IdentityApiRequest?): IdentityResponse {
        TODO("Not yet implemented")
    }

    actual fun modify(request: IdentityApiRequest): IdentityResponse {
        TODO("Not yet implemented")
    }

}