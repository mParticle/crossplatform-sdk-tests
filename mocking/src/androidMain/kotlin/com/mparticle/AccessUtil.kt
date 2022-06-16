package com.mparticle

import com.mparticle.identity.BaseIdentityTask
import com.mparticle.internal.KitFrameworkWrapper
import com.mparticle.internal.KitManager
import com.mparticle.internal.MPUtility
import com.mparticle.internal.MessageManager

object AccessUtil {

    @JvmStatic
    fun getMessageManager() = MParticle.getInstance()?.mMessageManager

    @JvmStatic
    fun setKitManager(kitManager: KitFrameworkWrapper) {
        MParticle.getInstance()?.mKitManager = kitManager
    }

    @JvmStatic
    fun getIdentityTask(builder: MParticleOptions.Builder): BaseIdentityTask? {
        return builder.identityTask
    }

    @JvmStatic
    fun setCredentialsIfEmpty(builder: MParticleOptions.Builder): MParticleOptions.Builder {
        if (MPUtility.isEmpty(builder.apiKey) && MPUtility.isEmpty(builder.apiSecret)) {
            builder.credentials("key", "secret")
        }
        return builder
    }
}
