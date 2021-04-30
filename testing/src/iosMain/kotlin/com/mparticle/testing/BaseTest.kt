package com.mparticle.testing

import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl

actual open class BasePlatformTest actual constructor() {
    actual val strict: Boolean = false
    actual open fun beforeTest() {
    }

    actual fun beforeTestPlatform() {

    }

    actual fun clientPlatform(): ClientPlatform {
        return ClientPlatformImpl()
    }
}