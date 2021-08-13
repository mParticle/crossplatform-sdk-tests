package com.mparticle.testing

import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl

actual val strict: Boolean = true

actual fun beforeTest() {
}

actual fun setAwaiter(awaiter: Awaiter) {
    awaiterInstance = awaiter
}

actual fun getClientPlatform(): ClientPlatform {
    return ClientPlatformImpl()
}

