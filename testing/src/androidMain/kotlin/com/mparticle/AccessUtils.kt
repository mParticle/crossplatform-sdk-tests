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
    fun reset(context: Context?, deleteDatabase: Boolean) {
        MParticle.reset(context!!, deleteDatabase)
    }

    /**
     * This is a way less than ideal implementation, but I think the insight is very important.
     *
     * This method returns an ordered list of the pending Messages in the UploadHandler queue. This
     * gives us the ability to test the UploadHandler's true "state" when looking closely at how
     * our Upload loop is performing
     * @return
     */
    @get:RequiresApi(api = Build.VERSION_CODES.M)
    val uploadHandlerMessageQueue: Set<Message>
        get() = messageManager.mUploadHandler.messageQueue
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