package com.mparticle.testing

import co.touchlab.stately.freeze
import com.mparticle.api.Logger
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import platform.Foundation.NSDate
import platform.Foundation.NSThread
import platform.Foundation.addTimeInterval
import kotlin.random.Random

/**
 * important to run fail() calls on the testing thread. JUnit doesn't always pick up on test failures
 * from background threads, which request might be coming in on, so you could end up with false positives
 */

var awaiterInstance: Awaiter? = null
    get() = field.freeze()

actual class FailureLatch actual constructor(val description: String) {
    val platforms = Platforms()

    val id = Random.nextInt() % 1000

    init {
        awaiterInstance!!.initializeExpectation(description)
    }


    actual fun countDown() {
        if (NSThread.currentThread.isMainThread) {
            awaiterInstance!!.countdown(description)
        } else {
            runBlocking(Dispatchers.Main) {
                awaiterInstance!!.countdown(description)
            }
        }
        Logger.info("countdown: $description($id)")
    }

    actual fun await() {
        await(5L)
    }

    actual fun await(timeout: Long) {
        Logger.info("Awaiting latch:  $description($id)")
        awaiterInstance!!.await(description, timeout.toDouble())
        Logger.info("Latch released: $description($id).")
    }
}