package com.mparticle.api.media

import platform.Foundation.NSNumber

fun Int?.toNSNumber(): NSNumber? {
    return this?.toLong().toNSNumber()
}

fun Long?.toNSNumber(): NSNumber? {
    return this?.let {
        NSNumber(long = it)
    }
}

fun Double?.toNSNumber(): NSNumber? {
    return this?.let {
        NSNumber(double = it)
    }
}