package com.mparticle

import com.mparticle.api.ClientPlatform
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions

expect internal class Platforms() {
    fun start(options: MParticleOptions)
    fun getInstance(): MParticle?
    fun clearInstance()
    fun reset(clientPlatform: ClientPlatform)
}