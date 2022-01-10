package com.mparticle.testing

import com.mparticle.mockserver.Server
import kotlin.random.Random

/**
 * important to run fail() calls on the testing thread. JUnit doesn't always pick up on test failures
 * from background threads, which request might be coming in on, so you could end up with false positives
 */
expect class FailureLatch(description: String = "Internal Latch ${Random.nextInt() % 100}") {
    fun countDown()
    fun await()
    fun await(timeout: Long = Server.defaultTimeout)
}