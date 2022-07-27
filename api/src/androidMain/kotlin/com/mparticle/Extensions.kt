package com.mparticle

import com.mparticle.api.MParticleOptions

fun com.mparticle.MParticleOptions.Builder.toMParticleOptions(): MParticleOptions = MParticleOptions(this)

fun com.mparticle.MParticleOptions.Builder.apiSecret() = apiSecret

fun com.mparticle.MParticleOptions.Builder.apiKey() = apiKey

fun com.mparticle.MParticleOptions.Builder.logLevel() = logLevel