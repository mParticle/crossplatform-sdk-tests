package com.mparticle

import com.mparticle.api.Environment
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import com.mparticle.testing.BaseTest
import kotlin.test.*

class SampleTests: BaseTest() {

    @Test
    @Throws(Throwable::class)
    fun testStarted() {
        startMParticle()
        assertNotNull(MParticle.getInstance())
    }

    @Test
    @Throws(Throwable::class)
    fun testDefaultEnvironment() {
        startMParticle()
        val environment = MParticle.getInstance()?.getEnvironment()
        assertNotNull(environment)
    }

    @Test

    @Throws(Throwable::class)
    fun testSetEnvironment() {
        startMParticle(MParticleOptions("apiKey", "apiSecret", clientPlatform, {}).apply {
            environment = Environment.Development
        })
        val environment = MParticle.getInstance()?.getEnvironment()
        assertEquals(Environment.Development, environment)
    }
}