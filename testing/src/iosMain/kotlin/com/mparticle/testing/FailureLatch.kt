package com.mparticle.testing

/**
 * important to run fail() calls on the testing thread. JUnit doesn't always pick up on test failures
 * from background threads, which request might be coming in on, so you could end up with false positives
 */
actual class FailureLatch {
    actual fun countDown() {
    }

    actual fun await(timeout: Long) {
    }

    actual fun await() {
    }
}