package com.mparticle.api.media

import platform.Foundation.NSDate
import platform.Foundation.NSUUID

actual class Platforms {
    actual fun currentTimeMillis(): Long {
        return NSDate().timeIntervalSinceReferenceDate.toLong()
    }

    actual fun randomUuid(): String {
        return NSUUID().UUIDString()
    }
}