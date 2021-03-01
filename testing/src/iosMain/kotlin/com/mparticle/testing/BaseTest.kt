package com.mparticle.testing

import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl

actual val strict: Boolean = false

actual fun beforeTest() {

}

actual fun getClientPlatform(): ClientPlatform {
    return ClientPlatformImpl()
}