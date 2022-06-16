package com.mparticle.api.android

import com.mparticle.api.MParticleOptions

fun com.mparticle.MParticleOptions.Builder.toMParticleOptions(): MParticleOptions = MParticleOptions(this)