package com.mparticle.testing

actual class TestLifecycleContext {
    actual fun triggerOnLowMemory() {
    }

    actual fun sendForeground() {
    }

    actual fun sendBackground() {
    }

    actual fun triggerActivityLifecycleEvent(state: LifecycleEvent) {

    }
}