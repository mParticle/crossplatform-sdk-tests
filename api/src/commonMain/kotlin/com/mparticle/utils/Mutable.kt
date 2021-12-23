package com.mparticle.utils

import co.touchlab.stately.isolate.IsolateState
import kotlin.jvm.JvmField

/**
 * Simple wrapper class for accessing mutable fields across Threads during tests
 */
class Mutable<T>(@JvmField var value: T)

class ThreadsafeMutable<T>( initialValue: T) {
    val isolateState = IsolateState { Mutable(initialValue) }

    var value: T
        get() = isolateState.access { it.value }
        set(newValue) { isolateState.access { it.value = newValue } }
}