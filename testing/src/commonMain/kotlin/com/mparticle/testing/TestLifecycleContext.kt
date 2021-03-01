package com.mparticle.testing

expect class TestLifecycleContext {
    fun triggerOnLowMemory()
    fun triggerActivityLifecycleEvent(state: LifecycleEvent)
    fun sendForeground()
    fun sendBackground()


}