package com.mparticle.testing

import com.mparticle.api.Environment
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import kotlin.test.BeforeTest

abstract class BaseStartedTest: BaseTest(false) {
    @BeforeTest
    override fun afterBeforeAll() {
        MParticle.clearInstance()
        MParticleOptions("apiKey", "apiSecret", clientPlatform).apply { environment = Environment.Development }
            .let {
                transformMParticleOptions(it)
            }
            .let {
                startMParticle(it)
            }
    }

    open fun transformMParticleOptions(options: MParticleOptions): MParticleOptions = options
}