package com.mparticle.testing

import com.mparticle.api.media.toNSNumber
import platform.Foundation.NSCondition
import platform.Foundation.NSDate
import platform.Foundation.addTimeInterval
import platform.Foundation.dateWithTimeIntervalSinceNow
import platform.darwin.DISPATCH_QUEUE_PRIORITY_DEFAULT
import platform.darwin.dispatch_async
import kotlin.test.fail
import kotlin.native.concurrent.AtomicInt
import com.mparticle.api.Logger
import kotlin.reflect.findAssociatedObject
import kotlin.test.Test

/**
 * important to run fail() calls on the testing thread. JUnit doesn't always pick up on test failures
 * from background threads, which request might be coming in on, so you could end up with false positives
 */
actual class FailureLatch actual constructor() {
    var finished = AtomicInt(0)
    val condition = NSCondition()

    actual fun countDown() {
        Logger().error("COUNT DOWN")
        finished.increment()
        condition.unlock()
    }

    actual fun await(timeout: Long, after: (() -> Unit)?) {
        Logger().error("Await")
        if (finished.value >= 1) {
            Logger().error("Already Counted Down!")
            return
        }
        condition.waitUntilDate(NSDate.dateWithTimeIntervalSinceNow((timeout.toDouble()/1000.0)))
        Logger().error("Finished, value: ${finished.value}")
        if (finished.value < 1) {
            throw AssertionError("timed out. More than ${timeout}ms have elapsed")
        }
    }
}