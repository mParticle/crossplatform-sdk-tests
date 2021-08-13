package com.mparticle

import cocoapods.mParticle_Apple_SDK.MPILogLevelVerbose
import com.mparticle.api.ClientPlatform
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
actual internal class Platforms {

    actual fun start(options: MParticleOptions) {
        options.options.setLogLevel(MPILogLevelVerbose)
        cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().startWithOptions(options.options)
    }

    actual fun getInstance(): MParticle? {
        return cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().let { MParticle(it )}
    }

    actual fun clearInstance() {

    }

    actual fun reset(clientPlatform: ClientPlatform) {
        cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().reset()
    }
}