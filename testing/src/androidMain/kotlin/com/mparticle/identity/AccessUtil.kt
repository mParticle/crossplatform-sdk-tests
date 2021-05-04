package com.mparticle.identity

import com.mparticle.identity.IdentityStateListener

import com.mparticle.identity.MParticleIdentityClientImpl

import com.mparticle.identity.MParticleUserImpl

import com.mparticle.networking.BaseNetworkConnection

import com.mparticle.identity.IdentityApiRequest

import com.mparticle.identity.IdentityHttpResponse

import com.mparticle.identity.MParticleIdentityClient

import com.mparticle.networking.MParticleBaseClient
import com.mparticle.internal.KitManager

import com.mparticle.networking.MPUrl
import java.net.MalformedURLException
import com.mparticle.MParticle
import android.content.Context
import android.os.Handler
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.internal.ConfigManager


object AccessUtil {

    @JvmStatic
    var identityApiClient: MParticleIdentityClientImpl
        get() {
            var identityClient: MParticleBaseClient? = null
            if (MParticle.getInstance() != null) {
                identityClient = MParticle.getInstance()?.Identity()?.getApiClient()
            }
            if (identityClient == null) {
                val context: Context = InstrumentationRegistry.getInstrumentation().getContext()
                var configManager = MParticle.getInstance()?.Internal()?.getConfigManager() ?: ConfigManager(context)
                return getIdentityClient(context, configManager)
            }
            return identityClient as MParticleIdentityClientImpl
        }
        set(identityClient) {
            MParticle.getInstance()?.Identity()?.setApiClient(identityClient)
        }

    private fun getIdentityClient(context: Context, configManager: ConfigManager?): MParticleIdentityClientImpl {
        return MParticleIdentityClientImpl(context, configManager, MParticle.OperatingSystem.FIRE_OS)
    }

    @JvmStatic
    fun setDefaultIdentityApiClient(context: Context?) {
        MParticle.getInstance()?.Identity()?.setApiClient(null)
    }

    @JvmStatic
    fun setUserIdentity(value: String?, identityType: MParticle.IdentityType?, mpid: Long) {
        MParticle.getInstance()?.Identity()?.mUserDelegate?.setUserIdentity(value, identityType, mpid)
    }

    @JvmStatic
    fun setUserIdentities(userIdentities: Map<MParticle.IdentityType?, String?>, mpid: Long) {
        for ((key, value) in userIdentities) {
            MParticle.getInstance()?.Identity()?.mUserDelegate?.setUserIdentity(value, key, mpid)
        }
    }

    @JvmStatic
    fun clearUserIdentities(user: MParticleUserImpl) {
        val nullUserIdentities: MutableMap<MParticle.IdentityType, String?> = HashMap<MParticle.IdentityType, String?>()
        for (identityType in MParticle.IdentityType.values()) {
            nullUserIdentities.put(identityType, null)
        }
        user.setUserIdentities(nullUserIdentities)
    }

    @JvmStatic
    fun getIdentityTypeString(identityType: MParticle.IdentityType?): String {
        return MParticleIdentityClientImpl.getStringValue(identityType)
    }

    @JvmStatic
    fun setKitManager(kitManager: KitManager) {
        MParticle.getInstance()?.Identity()?.mKitManager = kitManager
    }

    @JvmStatic
    val identityStateListeners = MParticle.getInstance()?.Identity()?.identityStateListeners

    class IdentityApiClient : MParticleIdentityClient {
        @Throws(java.lang.Exception::class)
        override fun login(request: IdentityApiRequest): IdentityHttpResponse? {
            return null
        }

        @Throws(java.lang.Exception::class)
        override fun logout(request: IdentityApiRequest): IdentityHttpResponse? {
            return null
        }

        @Throws(java.lang.Exception::class)
        override fun identify(request: IdentityApiRequest): IdentityHttpResponse? {
            return null
        }

        @Throws(java.lang.Exception::class)
        override fun modify(request: IdentityApiRequest): IdentityHttpResponse? {
            return null
        }

        override fun getRequestHandler(): BaseNetworkConnection? = null

        override fun setRequestHandler(connection: BaseNetworkConnection?) {}
    }
}