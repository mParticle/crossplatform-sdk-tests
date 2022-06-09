package com.mparticle.testing

import java.util.concurrent.CountDownLatch
import java.util.concurrent.TimeUnit

/**
 * important to run fail() calls on the testing thread. JUnit doesn't always pick up on test failures
 * from background threads, which request might be coming in on, so you could end up with false positives
 */
actual class FailureLatch actual constructor(val description: String) : CountDownLatch(1) {
    var timedOut: Boolean = false
    var count: Int = 1

    @Volatile private var finished = false

    actual override fun countDown() {
        if (--count == 0) {
            finished = true
            super.countDown()
        }
    }

    fun await(count: Int) {
        this.count = count
        await()
    }

    actual override fun await() {
        await(5000L)
    }

    actual fun await(timeout: Long) {
        val awaitStackTrace = RuntimeException()
        if (finished) {
            return
        }
        //this should never finish. Either FailureLatch#countDown() is called, and the
        //timeoutRunnable is removed from the handler, or the timeoutRunnable executes, failing
        //the test
        this.await(timeout, TimeUnit.MILLISECONDS)
        if (!finished) {
            RuntimeException("$description timed out. More than ${timeout}ms have elapsed", awaitStackTrace).let {
//                Handler(Looper.getMainLooper()).post { throw it }
                throw it
            }

        }
    }
}