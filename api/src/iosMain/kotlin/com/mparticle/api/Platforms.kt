package com.mparticle

import com.mparticle.api.ClientPlatform
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleImpl
import com.mparticle.api.MParticleOptions
actual internal class Platforms {

    actual fun start(options: MParticleOptions) {
        cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().startWithOptions(options.options)
    }

    actual fun getInstance(): MParticle? {
        return cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance()?.let { MParticleImpl(it )}
    }

    actual fun clearInstance() {

    }

    actual fun reset(clientPlatform: ClientPlatform) {

    }
}