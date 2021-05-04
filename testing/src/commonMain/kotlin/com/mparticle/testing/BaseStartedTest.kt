package com.mparticle.testing

import com.mparticle.api.MParticle
import kotlin.test.BeforeTest

abstract class BaseStartedTest: BaseTest() {
    @BeforeTest
    fun beforeStarted() {
        MParticle.clearInstance()
//        TODO
//        convert this to common API

//        val builder = MParticleOptions
//            .builder(mContext)
//            .credentials("key", "value")
//            .identify(IdentityApiRequest.withEmptyUser().build())
//            .environment(MParticle.Environment.Production)
//        startMParticle(transformMParticleOptions(builder))
    }
}