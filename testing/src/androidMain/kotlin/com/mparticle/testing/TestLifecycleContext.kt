package com.mparticle.testing

import android.app.Application
import android.content.ComponentCallbacks
import android.content.Context
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import androidx.lifecycle.Lifecycle
import com.mparticle.internal.MockActivity
import java.lang.IllegalStateException
import kotlin.test.*

actual class TestLifecycleContext(val context: Context): Application() {
    val activity: MockActivity
    val handler = Handler(Looper.getMainLooper())

    private var currentState: LifecycleEvent? = null

    private val activityLifecycleCallbacks = mutableListOf<ActivityLifecycleCallbacks>();
    private val componentCallbacks = mutableListOf<ComponentCallbacks>()


    init {
        attachBaseContext(context);
        activity = MockActivity(this)
    }

    override fun onCreate() {
        super.onCreate()
    }

    actual fun triggerOnLowMemory() {
        componentCallbacks.forEach { it.onLowMemory() }
    }

    actual fun triggerActivityLifecycleEvent(state: LifecycleEvent) {
        val bundle = Bundle()
        if (activity.baseContext == null) {
            activity.setContext(context)
        }

        val latch = FailureLatch("ActivityLifecycle Event")
        val pauseLatch = FailureLatch("Pause")

        // invoke Activity callbacks on the Main Thread, like it would in a real application.
        //
        // there is some funky behavior in the ProcessObserver where it has a fixed delay calling
        // the onPause callbacks. blocking using the pauseLatch until the callback is actually invoked
        // is the only way we can run this without arbitrary Thread.Sleep() calls
        handler.post {
            when (state) {
                LifecycleEvent.ApplicationStart -> activityLifecycleCallbacks.forEach {
                    it.onActivityCreated(activity, bundle)
                }
                LifecycleEvent.ScreenStart -> activityLifecycleCallbacks.forEach {
                    it.onActivityStarted(activity)
                    it.onActivityResumed(activity)
                }
                LifecycleEvent.ScreenStop -> activityLifecycleCallbacks.forEach {
                    it.onActivityPaused(activity)
                    it.onActivityStopped(activity)
                }
                LifecycleEvent.ApplicationStop -> {
                    activityLifecycleCallbacks.forEach {
                        it.onActivityDestroyed(activity)
                    }

                }
            }
            latch.countDown()
        }
        latch.await()

        if (state == LifecycleEvent.ScreenStop) {
            pauseLatch.await(1500)
        }
        currentState = state
    }

    actual fun sendForeground() {
        when (currentState) {
            null, LifecycleEvent.ApplicationStop -> {
                triggerActivityLifecycleEvent(LifecycleEvent.ApplicationStart)
                sendForeground()
            }
            LifecycleEvent.ApplicationStart, LifecycleEvent.ScreenStop -> {
                triggerActivityLifecycleEvent(LifecycleEvent.ScreenStart)
            }
            else -> throw IllegalStateException("Cannot send App to foreground when current state is: $currentState")
        }
        assertEquals(
            LifecycleEvent.ScreenStart,
            currentState,
            "Failed to send application to Foreground"
        )
    }

    actual fun sendBackground() {
        var currentState = currentState
        when (currentState) {
            LifecycleEvent.ScreenStart -> {
                triggerActivityLifecycleEvent(LifecycleEvent.ScreenStop)
            }
            LifecycleEvent.ScreenStop, LifecycleEvent.ApplicationStop -> {
                throw IllegalStateException("Application is already in the background, current state = $currentState")
            }
            null, LifecycleEvent.ApplicationStart -> {
                throw IllegalStateException("Application has not entered foreground, call sendForeground() first")
            }
        }
        assertEquals(
            currentState,
            LifecycleEvent.ScreenStop,
            "Failed to send application to Background"
        )
    }

    override fun getApplicationContext(): Context {
        return this;
    }

    override fun registerActivityLifecycleCallbacks(callback: ActivityLifecycleCallbacks?) {
        callback?.let { activityLifecycleCallbacks.add(it) }
    }

    override fun registerComponentCallbacks(callback: ComponentCallbacks) {
        componentCallbacks.add(callback)
    }

    override fun unregisterActivityLifecycleCallbacks(callback: ActivityLifecycleCallbacks?) {
        activityLifecycleCallbacks.remove(callback)
        super.unregisterActivityLifecycleCallbacks(callback)
    }

    fun Lifecycle.Event?.nextEvent(): Lifecycle.Event? {
        return when (this) {
            null -> Lifecycle.Event.ON_CREATE
            Lifecycle.Event.ON_CREATE -> Lifecycle.Event.ON_START
            Lifecycle.Event.ON_START -> Lifecycle.Event.ON_RESUME
            Lifecycle.Event.ON_RESUME -> Lifecycle.Event.ON_PAUSE
            Lifecycle.Event.ON_PAUSE -> Lifecycle.Event.ON_STOP
            Lifecycle.Event.ON_STOP -> Lifecycle.Event.ON_DESTROY
            Lifecycle.Event.ON_DESTROY -> Lifecycle.Event.ON_CREATE
            Lifecycle.Event.ON_ANY -> null
        }
    }
}