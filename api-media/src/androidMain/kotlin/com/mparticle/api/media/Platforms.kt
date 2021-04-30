package com.mparticle.api.media

import java.util.*

actual class Platforms {
    actual fun currentTimeMillis() = System.currentTimeMillis()
    actual fun randomUuid() = UUID.randomUUID().toString()
}