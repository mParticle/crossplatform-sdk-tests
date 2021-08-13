package com.mparticle

import android.content.Context
import com.mparticle.api.*
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions

actual internal class Platforms {

    actual fun start(options: MParticleOptions) {
        com.mparticle.MParticle.start(options.toMParticleOptions())
    }

    actual fun getInstance(): MParticle? {
        return com.mparticle.MParticle.getInstance()?.let { MParticle(it) }
    }

    actual fun clearInstance() {
        com.mparticle.MParticle.setInstance(null)
    }

    actual fun reset(clientPlatform: ClientPlatform) {
        //TODO how to get a context object here
        com.mparticle.MParticle.reset(clientPlatform.context)
    }
}