package com.mparticle.api

import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.getEvent
import com.mparticle.api.events.getMPEvent
import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse
import com.mparticle.internal.PushRegistrationHelper
import java.math.BigDecimal
import com.mparticle.MParticle as MParticleAndroid
import com.mparticle.MParticleOptions as MParticleOptionsAndroid


actual class MParticle(val mparticle: MParticleAndroid) {

    actual fun upload() {
        mparticle.upload()
    }

    actual var isOptOut: Boolean
        get() = mparticle.optOut
        set(value) { mparticle.optOut = value}

    actual fun logEvent(event: BaseEvent) {
        mparticle.logEvent(getEvent(event))
    }

    actual fun logLtvIncrease(valueIncreased: Double, eventName: String, contextInfo: Map<String, String?>?) {
        mparticle.logLtvIncrease(BigDecimal.valueOf(valueIncreased), eventName, contextInfo)
    }

    actual fun logScreen(screenName: String, eventData: Map<String, String?>?) {
        mparticle.logScreen(screenName, eventData)
    }

    actual fun logScreen(screen: MPEvent) {
        mparticle.logScreen(getMPEvent(screen))
    }

    actual fun leaveBreadcrumb(breadcrumb: String) {
        mparticle.leaveBreadcrumb(breadcrumb)
    }

    actual fun logError(message: String, errorAttributes: Map<String, String?>?) {
        mparticle.logError(message, errorAttributes)
    }

    actual fun logNetworkPerformance(
        url: String,
        startTime: Long,
        method: String,
        length: Long,
        bytesSent: Long,
        bytesReceived: Long,
        requestString: String?,
        responseCode: Int
    ) {
        mparticle.logNetworkPerformance(url, startTime, method, length, bytesSent, bytesReceived, requestString, responseCode)
    }

    actual fun logPushRegistration(instanceId: String?, senderId: String?) {
        mparticle.logPushRegistration(instanceId, senderId)
    }

    actual fun logException(exception: Exception?, eventData: Map<String?, String?>?, message: String?) {
        mparticle.logException(Exception(exception), eventData, message)
    }

    actual val identity: IdentityApi
        get() = IdentityApi(mparticle.Identity())

    actual fun kitInstance(kitId: Int): Any? {
        return mparticle.getKitInstance(kitId)
    }

    actual fun isKitActive(serviceProviderId: Int): Boolean {
        return mparticle.isKitActive(serviceProviderId)
    }

    actual fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?) {
        android.location.Location(provider).apply {
            latitude?.let { setLatitude(latitude) }
            longitude?.let { setLongitude(longitude) }
            accuracy?.let { setAccuracy(accuracy) }
        }.let {
            mparticle.setLocation(it)
        }
    }

    actual fun setSessionAttribute(key: String, value: Any?) {
        mparticle.setSessionAttribute(key, value)
    }

    actual fun incrementSessionAttribute(key: String, value: Int) {
        mparticle.incrementSessionAttribute(key, value)
    }

    actual fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?) {
        mparticle.setIntegrationAttributes(integrationId, attributes)
    }

    actual fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>? {
        return mparticle.getIntegrationAttributes(integrationId)
    }

    actual fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long) {
        mparticle.enableLocationTracking(provider, minTime, minDistance)
    }

    actual fun disableLocationTracking() {
        mparticle.disableLocationTracking()
    }

    actual fun isLocationTrackingEnabled(): Boolean {
        return mparticle.isLocationTrackingEnabled
    }


    actual var installReferrer: String? by mparticle::installReferrer

    actual val environment: Environment
        get() = Environment.values().first { it.name.equals(mparticle.environment.name, ignoreCase = true) }

    actual val currentSession: Session?
        get() = mparticle.currentSession?.let { Session(it) }

    actual val autoTrackingEnabled: Boolean
        get() = mparticle.isAutoTrackingEnabled

    actual val devicePerformanceMetricsEnabled: Boolean
        get() = mparticle.isDevicePerformanceMetricsDisabled

    actual val sessionTimeout: Int by mparticle::sessionTimeout

    actual fun isProviderActive(serviceProviderId: Int): Boolean {
        return mparticle.isProviderActive(serviceProviderId)
    }

    actual val uncaughtExceptionLogging: Boolean by GenericDelegate(false) {
        if (it) {
            mparticle.enableUncaughtExceptionLogging()
        } else {
            mparticle.disableLocationTracking()
        }
    }

    actual companion object {
        actual fun start(options: MParticleOptions) {
            com.mparticle.MParticle.start(options.toMParticleOptions())
        }

        actual fun getInstance(): MParticle? {
            return com.mparticle.MParticle.getInstance()?.let { MParticle(it) }
        }

        actual fun clearInstance() {
            com.mparticle.MParticle.setInstance(null)
        }

        actual fun reset(clientPlatform: ClientPlatform) {
            //TODO how to get a context object here
            com.mparticle.MParticle.reset(clientPlatform.context)
        }
    }
}

actual class MParticleOptions actual constructor(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform) {

    class Dataplan(var dataplanId: String? = null, var dataplanVersion: Int? = null)

    actual var apiKey = apiKey
    actual var apiSecret = apiSecret

    actual var clientPlatform = clientPlatform
    val dataplan: Dataplan by lazy { Dataplan() }
    val push: PushRegistrationHelper.PushRegistration by lazy { PushRegistrationHelper.PushRegistration(null, null) }

    val builder = MParticleOptionsAndroid.builder(clientPlatform.context)

    actual var installType: InstallType? = null
        set(value) {
            field = value
            value?.toInstallType()?.let { builder.installType(it) }
        }
    actual var pushRegistrationInstanceId: String? by push::instanceId
    actual var pushRegistrationSenderId: String? by push::senderId
    actual var dataplanId: String? by dataplan::dataplanId
    actual var dataplanVersion: Int? by dataplan::dataplanVersion

    actual var identifyRequest: IdentityApiRequest? = null

    actual var identifyTask: IdentityResponse? = null
    actual var enableUncaughtExceptionLogging: Boolean? = null
    actual var androidIdDisabled: Boolean? = null
    actual var devicePerformanceMetricsDisabled: Boolean? = null
    actual var locationTracking: LocationTracking? = null
    actual var sessionTimeout: Int? = null
    actual var uploadInterval: Int? = null
    actual var identityConnectionTimeout: Int? = null
    actual var networkOptions: NetworkOptions? = null
    actual var dataplanOptions: DataplanOptions? = null
    actual var environment: Environment? = null
    actual var logLevel: LogLevel? = null
}

actual class NetworkOptions actual constructor() {

}

actual class Session(val session: com.mparticle.Session) {
    actual val uusd: String = session.sessionUUID!!
    actual val id: Long = session.sessionID
    actual val startTime: Long = session.sessionStartTime!!

}

actual class DataplanOptions(val dataplanOptions: com.mparticle.MParticleOptions.DataplanOptions.Builder) {
    actual var dataplan: String? = null
        get() = field
        set(value) {
            dataplanOptions.dataplanVersion(value)
            field = value
        }
    actual var blockUserAttributes: Boolean = false
        get() = field
        set(value) {
            dataplanOptions.blockUserAttributes(value)
            field = value
        }
    actual var blockUserIdentities: Boolean = false
        get() = field
        set(value) {
            dataplanOptions.blockUserIdentities(value)
            field = value
        }
    actual var blockEventAttributes: Boolean = false
        get() = field
        set(value) {
            dataplanOptions.blockEventAttributes(value)
            field = value
        }
    actual var blockEvents: Boolean = false
        get() = field
        set(value) {
            dataplanOptions.blockEvents(value)
            field = value
        }
}