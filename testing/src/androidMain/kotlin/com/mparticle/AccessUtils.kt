package com.mparticle

import android.content.Context
import android.os.Build
import android.os.Message
import androidx.annotation.RequiresApi
import com.mparticle.identity.BaseIdentityTask
import com.mparticle.internal.KitFrameworkWrapper
import com.mparticle.internal.MPUtility
import com.mparticle.internal.MessageManager

object AccessUtils {
    fun reset(context: Context?, deleteDatabase: Boolean, switchingWorkspaces: Boolean) {
        MParticle.reset(context!!, deleteDatabase, switchingWorkspaces)
    }

    val messageManager: MessageManager
        get() = MParticle.getInstance()!!.mMessageManager

    fun setKitManager(kitManager: KitFrameworkWrapper?) {
        MParticle.getInstance()!!.mKitManager = kitManager!!
    }

    fun getIdentityTask(builder: MParticleOptions.Builder): BaseIdentityTask {
        return builder.identityTask
    }

    fun setCredentialsIfEmpty(builder: MParticleOptions.Builder): MParticleOptions.Builder {
        if (MPUtility.isEmpty(builder.apiKey) && MPUtility.isEmpty(builder.apiSecret)) {
            builder.credentials("key", "secret")
        }
        return builder
    }

    fun emptyMParticleOptions(context: Context?): MParticleOptions {
        return MParticleOptions.builder(context!!).buildForInternalRestart()
    }
}