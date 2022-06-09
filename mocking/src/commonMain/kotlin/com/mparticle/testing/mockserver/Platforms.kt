package com.mparticle.testing.mockserver

expect open class Platforms() {
    fun injectMockServer()
    fun prepareThread()
}

typealias Runnable = () -> Unit

