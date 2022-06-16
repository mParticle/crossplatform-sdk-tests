package com.mparticle.testing

import co.touchlab.stately.freeze
import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl

actual fun beforeTest() {
}

actual fun getClientPlatform(): ClientPlatform {
    return ClientPlatformImpl()
}

