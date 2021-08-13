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
        Logger().error("Initializing Expectation: $description($id)")
        awaiterInstance!!.initializeExpectation(description)
    }

    private val condition = NSCondition()


    actual fun countDown() {
        Logger().error("Start COUNTDOWN: $description($id)")
//        count {
//            decrement()
//        }
//        count {
//            decrement()
//        }
//        condition.apply {
//            lock()
//            broadcast()
//            unlock()
//        }
        if (NSThread.currentThread.isMainThread) {
            awaiterInstance!!.countdown(description)
        } else {
            runBlocking(Dispatchers.Main) {
                awaiterInstance!!.countdown(description)
            }
        }
        Logger().error("countdown: $description($id)")
    }

    actual fun await() {

//        if (count { value} <= 0) {
//            Logger().error("Already counted down, skipping await(). count = ${count { value }}")
//        } else {
            Logger().error("Awaiting..  $description($id)")
            await(MockServerAccessor.defaultTimeout)
//        }
    }

    actual fun await(timeout: Long) {
        val timeout = 5.0
        val endTime: NSDate = NSDate()!!.addTimeInterval(timeout) as NSDate
        Logger().error("Pre Await call. $description($id). Thread: \n${platforms.currentThread()}")
        awaiterInstance!!.await(description, timeout)
        Logger().error("Post Await call. $description($id). Thread:\n ${platforms.currentThread()}")
//        Logger().error("await, pre lock(). Is Main Thread?: ${isServerThread()}")
//        if (count { value } < 0) {
//            return
//        }
//        Logger().error("Awaiting for : ${endTime.timeIntervalSince1970 - NSDate().timeIntervalSince1970}ms")
//        while(count { value } > 0) {
//            val result = condition.waitUntilDate(NSDate().addTimeInterval(0.05) as NSDate)
//            Logger().error("Await loop, ${endTime.timeIntervalSince1970 - NSDate().timeIntervalSince1970}ms left")
//            if (NSDate().timeIntervalSince1970 > endTime.timeIntervalSince1970) {
//                Logger().error("timed out. More than ${timeout}ms have elapsed")
//                throw AssertionError("timed out. More than ${timeout}ms have elapsed")
//            }
//        }

    }
}