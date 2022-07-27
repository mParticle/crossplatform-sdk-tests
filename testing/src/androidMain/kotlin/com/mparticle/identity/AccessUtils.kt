package com.mparticle.identity

import android.content.Context
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.MParticle
import com.mparticle.internal.ConfigManager
import com.mparticle.internal.KitManager
import com.mparticle.networking.BaseNetworkConnection
import com.mparticle.networking.MPUrl
import com.mparticle.networking.MParticleBaseClient
import java.net.MalformedURLException
import com.mparticle.identity.IdentityHttpResponse as IdentityHttpResponseAndroid
import com.mparticle.identity.IdentityApiRequest as IdentityApiRequestAndroid

object AccessUtils {
    var IDENTIFY_PATH = MParticleIdentityClientImpl.IDENTIFY_PATH
    var LOGIN_PATH = MParticleIdentityClientImpl.LOGIN_PATH
    var LOGOUT_PATH = MParticleIdentityClientImpl.LOGOUT_PATH
    var MODIFY_PATH = MParticleIdentityClientImpl.MODIFY_PATH
    fun getUrl(endpoint: String?): MPUrl? {
        return identityApiClient?.getUrl(endpoint)
    }

    fun getUrl(endpoint: String?, mpid: Long?): MPUrl? {
        return identityApiClient?.getUrl(mpid!!, endpoint)
    }

    var identityApiClient: MParticleIdentityClientImpl?
        get() {
            var identityClient: MParticleBaseClient? = null
            if (MParticle.getInstance() != null) {
                identityClient = MParticle.getInstance()!!.Identity().apiClient
            }
            if (identityClient == null) {
                val context = InstrumentationRegistry.getInstrumentation().context
                var configManager: ConfigManager? = null
                if (MParticle.getInstance() != null) {
                    MParticle.getInstance()?.Internal()?.configManager
                }
                if (configManager == null) {
                    configManager = ConfigManager(context)
                }
                return getIdentityClient(context, configManager)
            }
            return identityClient as MParticleIdentityClientImpl
        }
        set(identityClient) {
            MParticle.getInstance()!!.Identity().apiClient = identityClient
        }

    private fun getIdentityClient(
        context: Context,
        configManager: ConfigManager
    ): MParticleIdentityClientImpl {
        return MParticleIdentityClientImpl(
            context,
            configManager,
            MParticle.OperatingSystem.FIRE_OS
        )
    }

    fun setDefaultIdentityApiClient(context: Context?) {
        MParticle.getInstance()!!.Identity().apiClient = null
    }

    fun setUserIdentity(value: String?, identityType: MParticle.IdentityType?, mpid: Long) {
        MParticle.getInstance()!!.Identity().mUserDelegate.setUserIdentity(
            value,
            identityType,
            mpid
        )
    }

    fun setUserIdentities(userIdentities: Map<MParticle.IdentityType?, String?>, mpid: Long) {
        for ((key, value) in userIdentities) {
            MParticle.getInstance()!!.Identity().mUserDelegate.setUserIdentity(
                value,
                key, mpid
            )
        }
    }

    fun clearUserIdentities(user: MParticleUserImpl) {
        val nullUserIdentities: MutableMap<MParticle.IdentityType, String?> = HashMap()
        for (identityType in MParticle.IdentityType.values()) {
            nullUserIdentities[identityType] = null
        }
        user.userIdentities = nullUserIdentities
    }

    fun getIdentityTypeString(identityType: MParticle.IdentityType?): String {
        return MParticleIdentityClientImpl.getStringValue(identityType)
    }

    fun setKitManager(kitManager: KitManager?) {
        MParticle.getInstance()!!.Identity().mKitManager = kitManager
    }

    val identityStateListeners: Set<IdentityStateListener>
        get() = MParticle.getInstance()!!.Identity().identityStateListeners

    class IdentityApiClient : MParticleIdentityClient {
        @Throws(Exception::class)
        override fun login(request: IdentityApiRequestAndroid): IdentityHttpResponseAndroid {
            return IdentityHttpResponseAndroid(200, "some error")
        }

        @Throws(Exception::class)
        override fun logout(request: IdentityApiRequestAndroid): IdentityHttpResponseAndroid {
            return IdentityHttpResponseAndroid(200, "some error")        }

        @Throws(Exception::class)
        override fun identify(request: IdentityApiRequestAndroid): IdentityHttpResponseAndroid {
            return IdentityHttpResponseAndroid(200, "some error")        }

        @Throws(Exception::class)
        override fun modify(request: IdentityApiRequestAndroid): IdentityHttpResponseAndroid {
            return IdentityHttpResponseAndroid(200, "some error")        }

        override fun getRequestHandler(): BaseNetworkConnection? {
            return null
        }

        override fun setRequestHandler(handler: BaseNetworkConnection) {}
    }
}