package com.mparticle.testing

import com.mparticle.api.Platform
import com.mparticle.api.platform
import kotlin.test.assertEquals

fun <T> assertPlatformDifference(value: T, message: String? = null, assertion: (Platform) -> T) {
    assertEquals (assertion(platform), value, message)
}