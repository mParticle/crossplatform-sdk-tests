package com.mparticle.internal

import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.MParticle
import com.mparticle.identity.IdentityStateListener
import com.mparticle.internal.database.tables.MParticleDatabaseHelper
import com.mparticle.networking.BaseNetworkConnection
import com.mparticle.testing.FailureLatch
import org.json.JSONObject

object AccessUtil {
    val STORE_MESSAGE: Int = com.mparticle.internal.MessageHandler.STORE_MESSAGE
    val REMOVE_USER_ATTRIBUTE: Int = com.mparticle.internal.MessageHandler.REMOVE_USER_ATTRIBUTE
    val SET_USER_ATTRIBUTE: Int = com.mparticle.internal.MessageHandler.SET_USER_ATTRIBUTE
    val UPLOAD_MESSAGES: Int = UploadHandler.UPLOAD_MESSAGES
    val UPLOAD_TRIGGER_MESSAGES: Int = UploadHandler.UPLOAD_TRIGGER_MESSAGES

    @JvmStatic
    fun clearMpId(context: android.content.Context?) {
        ConfigManager.clearMpid(context)
    }

    @JvmStatic
    fun getInstallType(messageManager: MessageManager): com.mparticle.MParticle.InstallType {
        return messageManager.mInstallType
    }

    @JvmStatic
    fun deleteConfigManager(context: android.content.Context?) {
        ConfigManager.deleteConfigManager(context)
    }

    @JvmStatic
    fun clearMessages(messageManager: MessageManager) {
        messageManager.mMessageHandler.removeCallbacksAndMessages(null)
        messageManager.mUploadHandler.removeCallbacksAndMessages(null)
    }

    @JvmStatic
    fun deleteDatabase() {
        androidx.test.platform.app.InstrumentationRegistry.getInstrumentation().getTargetContext()
            .deleteDatabase(MParticleDatabaseHelper.getDbName())
    }

    private val messageHandler: MessageHandler?
        get() = com.mparticle.AccessUtil.getMessageManager()?.mMessageHandler
    private val uploadHandler: UploadHandler?
        get() = com.mparticle.AccessUtil.getMessageManager()?.mUploadHandler

    @JvmStatic
    fun getUploadHandler(): BaseHandler? = uploadHandler


    @JvmStatic
    fun getMessageHandler(): BaseHandler? = messageHandler

    @JvmStatic
    fun setMParticleApiClient(client: MParticleApiClient?) {
        uploadHandler?.setApiClient(client)
    }

    @JvmStatic
    fun setAppStateManagerHandler(handler: android.os.Handler?) {
        if (com.mparticle.MParticle.getInstance() != null) {
            com.mparticle.MParticle.getInstance()?.Internal()?.getAppStateManager()?.delayedBackgroundCheckHandler =
                handler
        }
    }


    @JvmStatic
    @Throws(java.lang.InterruptedException::class)
    fun awaitMessageHandler() {
        val messageHandler: BaseHandler = messageHandler!!
        val latch: java.util.concurrent.CountDownLatch = FailureLatch()
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

    @JvmStatic
    @Throws(java.lang.InterruptedException::class)
    fun awaitUploadHandler() {
        val uploadHandler: BaseHandler = uploadHandler!!
        val latch: java.util.concurrent.CountDownLatch = FailureLatch()
        uploadHandler.await(latch)
        latch.await()
        return
    }

    @JvmStatic
    val apiClient: MParticleApiClient?
        get() = com.mparticle.AccessUtil.getMessageManager()?.mUploadHandler?.mApiClient

    @JvmStatic
    @Throws(java.lang.InterruptedException::class)
    fun setKitManager(kitManager: KitManager) {
        com.mparticle.MParticle.getInstance()?.Internal()?.getKitManager()?.let { kitFrameworkWrapper ->
            kitFrameworkWrapper.loadKitLibrary()
            com.mparticle.MParticle.getInstance()?.Identity()
                ?.removeIdentityStateListener(kitFrameworkWrapper.mKitManager as IdentityStateListener)
            val kitManagerLoadedLatch: java.util.concurrent.CountDownLatch = FailureLatch()
            //Need to do this since the KitManager instance in KitFrameworkWrapper is not threadsafe. If
            //it is in mid-loadKitLibrary, then the instance you set could be overwritten.
            uploadHandler!!.post(object : java.lang.Runnable {
                override fun run() {
                    if (!kitFrameworkWrapper.getFrameworkLoadAttempted()) {
                        kitFrameworkWrapper.loadKitLibrary()
                    }
                    kitFrameworkWrapper.setKitManager(kitManager)
                    kitManagerLoadedLatch.countDown()
                }
            })
            kitManagerLoadedLatch.await()
            val kitsLoadedLatch: java.util.concurrent.CountDownLatch = FailureLatch()
            kitFrameworkWrapper.setKitsLoaded(false)
            KitFrameworkWrapper.addKitsLoadedListener(object : KitsLoadedListener {
                override fun onKitsLoaded() {
                    kitsLoadedLatch.countDown()
                }
            })
            val configuration =
                com.mparticle.MParticle.getInstance()?.Internal()?.getConfigManager()?.getLatestKitConfiguration()
            com.mparticle.internal.Logger.debug("Kit Framework loaded. IN TEST")
            if (configuration != null) {
                com.mparticle.internal.Logger.debug("Restoring previous Kit configuration IN TEST.")
                kitManager.updateKits(configuration)
            }
            kitsLoadedLatch.await()
        }
    }

    @JvmStatic
    fun setPushInPushRegistrationHelper(context: android.content.Context?, instanceId: String?, senderId: String?) {
        PushRegistrationHelper.setPushRegistration(context, instanceId, senderId)
    }

    @JvmStatic
    val activityDelay: Long
        get() = AppStateManager.ACTIVITY_DELAY

    open class EmptyMParticleApiClient : MParticleApiClient {

        private var requestHandler: BaseNetworkConnection? = null


        override fun fetchConfig() {
        }

        override fun fetchConfig(force: Boolean) {
        }

@Throws(
            org.json.JSONException::class,
            java.io.IOException::class,
            com.mparticle.internal.MParticleApiClientImpl.MPThrottleException::class,
            com.mparticle.internal.MParticleApiClientImpl.MPRampException::class)
        override fun sendMessageBatch(message: String): Int {
            return 0
        }

        override fun fetchAudiences(): org.json.JSONObject? {
            return null
        }

        @Throws(
            org.json.JSONException::class,
            java.io.IOException::class,
            com.mparticle.internal.MParticleApiClientImpl.MPThrottleException::class)
        override fun sendAliasRequest(request: String): MParticleApiClient.AliasNetworkResponse {
            return MParticleApiClient.AliasNetworkResponse(0)
        }

        override fun getRequestHandler(): com.mparticle.networking.BaseNetworkConnection? {
            return requestHandler
        }

        override fun setRequestHandler(requestHandler: com.mparticle.networking.BaseNetworkConnection) {
            this.requestHandler = requestHandler
        }

        override fun getCookies(): JSONObject {
            return org.json.JSONObject()
        }
    }
}