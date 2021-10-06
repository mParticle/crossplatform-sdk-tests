package com.mparticle.testing

import com.mparticle.api.Logger
import com.mparticle.mockserver.MockServerAccessor
import com.mparticle.mockserver.Platforms
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import platform.Foundation.NSCondition
import platform.Foundation.NSDate
import platform.Foundation.NSThread
import platform.Foundation.addTimeInterval
import kotlin.random.Random

/**
 * important to run fail() calls on the testing thread. JUnit doesn't always pick up on test failures
 * from background threads, which request might be coming in on, so you could end up with false positives
 */

var awaiterInstance: Awaiter? = null

actual class FailureLatch actual constructor(val description: String) {
    val platforms = Platforms()

    val id = Random.nextInt() % 1000

    init {
        awaiterInstance!!.initializeExpectation(description)
    }

    private val condition = NSCondition()


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

        await(MockServerAccessor.defaultTimeout)
    }

    actual fun await(timeout: Long) {
        val timeout = 5.0
        val endTime: NSDate = NSDate()!!.addTimeInterval(timeout) as NSDate
        Logger.info("Awaiting latch:  $description($id)")
        awaiterInstance!!.await(description, timeout)
        Logger.info("Latch released: $description($id).")
    }
}