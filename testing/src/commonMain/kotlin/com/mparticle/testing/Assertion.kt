package com.mparticle.testing

import co.touchlab.stately.isolate.IsolateState
import com.mparticle.api.Logger
import com.mparticle.utils.Mutable

open abstract class Assertion<Type>(
    private val isInverse: Boolean = false
) {
    internal val result = IsolateState { Mutable(false) }
    internal val complete = IsolateState { Mutable(false)}
    internal val latch by lazy { FailureLatch() }

    abstract fun load(): Assertion<Type>
    abstract fun orHasAlready(): Assertion<Type>
    abstract internal fun cleanup()

    init {

    }

    fun blockUntilFinished() {
        if (!result.access { it.value }) {
            Logger.error("BLOCK UNTIL FINISHED")
            latch.await()
        } else {
            Logger.info("Latch already counted down, will not wait")
        }
    }

    fun after(lambda: () -> Unit): Assertion<Type> =
        lambda().let { this }

    fun latch(): FailureLatch = latch

    fun finish(didFinish: Boolean) {
        complete.access { it.value = true }
        latch.countDown()
            .let { result.access { it.value = didFinish } }
        if (isInverse && didFinish) {
            throw AssertionError("Inverse condition failed!!")
        }
        cleanup()
    }

    fun cancel() {
        complete.access { it.value }
        latch.countDown()
    }

    fun assertFinished() {
        complete.access { it.value = true }
        if (result.access { it.value } == isInverse) {
            throw AssertionError("Assertion was not finished when assertFinished was called")
        }
    }
}