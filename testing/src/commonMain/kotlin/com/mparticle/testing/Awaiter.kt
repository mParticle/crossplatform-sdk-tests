package com.mparticle.testing

expect fun setAwaiter(awaiter: Awaiter)

interface Awaiter {
    fun initializeExpectation(description: String)
    fun await(description: String, timeout: Double)
    fun countdown(description: String)
}