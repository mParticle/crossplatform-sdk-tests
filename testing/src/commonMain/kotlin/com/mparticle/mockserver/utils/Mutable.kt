package com.mparticle.mockserver.utils

import kotlin.jvm.JvmField

/**
 * Simple wrapper class for accessing mutable fields across Threads during tests
 */
class Mutable<T>(@JvmField var value: T)