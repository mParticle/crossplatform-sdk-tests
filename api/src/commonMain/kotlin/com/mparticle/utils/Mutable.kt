package com.mparticle.utils

import co.touchlab.stately.isolate.IsolateState
import kotlin.jvm.JvmField
import kotlin.native.concurrent.ThreadLocal

/**
 * Simple wrapper class for accessing mutable fields across Threads during tests
 */
class Mutable<T>(@JvmField var value: T)

class ThreadsafeMutable<T>(initializer: () -> T) {
    constructor(t: T): this({t})

    val isolateState = IsolateState { Mutable(initializer()) }

    fun mutate(mutation: T.() -> Unit) {
        isolateState.access { mutation(it.value) }
    }

    fun setValue(initializer: () -> T) {
        isolateState.access { it.value = initializer() }
    }

    fun getValue(): T {
        return isolateState.access { it.value }
    }
}