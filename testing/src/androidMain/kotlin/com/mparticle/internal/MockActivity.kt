package com.mparticle.internal

import android.app.Activity
import android.app.FragmentManager
import android.content.Context
import com.mparticle.testing.TestLifecycleContext


/**
 * Used to Mock an Activity instance, which will return the Mocked FragmentManager
 */
class MockActivity(val context: TestLifecycleContext): Activity() {
    fun setContext(context: Context) {
        this.attachBaseContext(context)
    }

    override fun getLocalClassName(): String {
        return name
    }

    companion object {
        @JvmStatic
        var name: String = "com.mparticle.TestActivity"
    }
}
