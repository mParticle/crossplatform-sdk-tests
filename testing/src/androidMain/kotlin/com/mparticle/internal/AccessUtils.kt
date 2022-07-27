package com.mparticle.internal

import android.content.Context
import android.os.Handler
import com.mparticle.AccessUtils
import com.mparticle.MParticle
import com.mparticle.internal.MParticleApiClientImpl.MPConfigException
import com.mparticle.messages.ConfigResponseMessage
import com.mparticle.messages.DTO
import com.mparticle.testing.FailureLatch
import org.json.JSONObject
import java.io.IOException
import java.util.concurrent.CountDownLatch

object AccessUtils {
    fun getInstallType(messageManager: MessageManager): MParticle.InstallType {
        return messageManager.mInstallType
    }

    fun fetchConfig() {
        AccessUtils.messageManager.refreshConfiguration()
    }

    val messageHandler: BaseHandler
        get() = com.mparticle.AccessUtils.messageManager.mMessageHandler
    val uploadHandler: UploadHandler
        get() = com.mparticle.AccessUtils.messageManager.mUploadHandler

    fun setMParticleApiClient(client: MParticleApiClient?) {
        uploadHandler.setApiClient(client)
    }

    fun setAppStateManagerHandler(handler: Handler) {
        MParticle.getInstance()?.Internal()?.appStateManager?.delayedBackgroundCheckHandler = handler
    }

    @Throws(InterruptedException::class)
    fun awaitMessageHandler() {
        val messageHandler: BaseHandler = messageHandler
        val latch: CountDownLatch = FailureLatch(count = 1)
        messageHandler.await(latch)
        latch.await()
        return
    }

    /**
     * This method will block the current thread until Upload messages, which are tied to the mpid parameter,
     * or are UploadTriggerMessages, are cleared from the Handler's queue.
     *
     * Upload essages which are tied to an MPID, are ones originating from MParticle.getInstance().upload() calls,
     * and initial upload messages.
     *
     * the fact that these messages are tied into an MPID is an artifact from a defunct implementation
     * of the UploadHandler, but it is really useful for this use case.
     * @throws InterruptedException
     */
    @Throws(InterruptedException::class)
    fun awaitUploadHandler() {
        val uploadHandler: BaseHandler = uploadHandler
        val latch: CountDownLatch = FailureLatch(count =1)
        uploadHandler.await(latch)
        latch.await()
        return
    }

    @Throws(IOException::class, MPConfigException::class)
    fun forceFetchConfig() {
        uploadHandler.mApiClient.fetchConfig(true)
    }

    val apiClient: MParticleApiClient
        get() = com.mparticle.AccessUtils.messageManager.mUploadHandler.mApiClient
    val kitManager: KitManager?
        get() = MParticle.getInstance()?.Internal()?.kitManager?.mKitManager

    fun setPushInPushRegistrationHelper(context: Context?, instanceId: String?, senderId: String?) {
        PushRegistrationHelper.setPushRegistration(context, instanceId, senderId)
    }

    fun storeConfig(config: ConfigResponseMessage?, context: Context) {
        val configJson = config?.let {
            DTO.jsonBuilder.encodeToString(ConfigResponseMessage.serializer(), config)
        }?.let {
            JSONObject(it)
        }
        ConfigManager.getInstance(context).apply {
            if (configJson != null) {
                saveConfigJson(configJson)
            } else {
                clearConfig()
            }
        }
    }
}