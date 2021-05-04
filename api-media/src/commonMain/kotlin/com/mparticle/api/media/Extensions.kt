package com.mparticle.api.media

import kotlin.reflect.KFunction
import kotlin.reflect.KProperty0

fun <T> KProperty0<T>.toEntry(): Pair<String, T?> {
    return name to get()
}