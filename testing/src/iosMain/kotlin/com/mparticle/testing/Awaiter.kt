package com.mparticle.testing

import co.touchlab.stately.freeze

actual fun setAwaiter(awaiter: Awaiter) {
    awaiterInstance = awaiter.freeze()
}