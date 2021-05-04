package com.mparticle.api

import android.content.Context
import com.mparticle.internal.PushRegistrationHelper
import java.lang.RuntimeException
import java.math.BigDecimal
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiImpl
import com.mparticle.api.identity.BaseIdentityTask
import com.mparticle.api.identity.toBaseIdentityTask
import com.mparticle.api.events.*
import com.mparticle.MParticle as MParticleAndroid
import com.mparticle.MParticleOptions as MParticleOptionsAndroid
import com.mparticle.MParticle.InstallType as InstallTypeAndroid
import com.mparticle.MParticle.LogLevel as LogLevelAndroid


class MParticleImpl(val mparticle: MParticleAndroid): MParticle {

    override fun upload() {
        mparticle.upload()
    }

    override fun setOptOut(optOutStatus: Boolean) {
        mparticle.optOut = optOutStatus
    }

    override fun getOptOut(): Boolean = mparticle.optOut

    override fun logEvent(event: BaseEvent) {
        mparticle.logEvent(event.baseEventAndroid)
    }

    override fun logLtvIncrease(valueIncreased: Double, eventName: String, contextInfo: Map<String, String?>?) {
        mparticle.logLtvIncrease(BigDecimal.valueOf(valueIncreased), eventName, contextInfo)
    }

    override fun logScreen(screenName: String, eventData: Map<String, String?>?) {
        mparticle.logScreen(screenName, eventData)
    }

    override fun logScreen(screen: MPEvent) {
        mparticle.logScreen(screen.mpEventAndroid.build())
    }

    override fun leaveBreadcrumb(breadcrumb: String) {
        mparticle.leaveBreadcrumb(breadcrumb)
    }

    override fun logError(message: String, errorAttributes: Map<String, String?>?) {
        mparticle.logError(message, errorAttributes)
    }

    override fun logNetworkPerformance(
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

    override fun logPushRegistration(instanceId: String?, senderId: String?) {
        mparticle.logPushRegistration(instanceId, senderId)
    }

    override fun Identity(): IdentityApi? {
        return IdentityApiImpl(mparticle.Identity())
    }

    override fun getKitInstance(kitId: Int): Any? {
        return mparticle.getKitInstance(kitId)
    }

    override fun isKitActive(serviceProviderId: Int): Boolean {
        return mparticle.isKitActive(serviceProviderId)
    }

    override fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?) {
        android.location.Location(provider).apply {
            latitude?.let { setLatitude(latitude) }
            longitude?.let { setLongitude(longitude) }
            accuracy?.let { setAccuracy(accuracy) }
        }.let {
            mparticle.setLocation(it)
        }
    }

    override fun setSessionAttribute(key: String, value: Any?) {
        mparticle.setSessionAttribute(key, value)
    }

    override fun incrementSessionAttribute(key: String, value: Int) {
        mparticle.incrementSessionAttribute(key, value)
    }

    override fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?) {
        mparticle.setIntegrationAttributes(integrationId, attributes)
    }

    override fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>? {
        return mparticle.getIntegrationAttributes(integrationId)
    }

    override fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long) {
        mparticle.enableLocationTracking(provider, minTime, minDistance)
    }

    override fun disableLocationTracking() {
        mparticle.disableLocationTracking()
    }

    override fun isLocationTrackingEnabled(): Boolean {
        return mparticle.isLocationTrackingEnabled
    }

    override fun enableUncaughtExceptionLogging() {
        mparticle.enableUncaughtExceptionLogging()
    }

    override fun disableUncaughtExceptionLogging() {
        mparticle.disableLocationTracking()
    }

    override fun setInstallReferrer(referrer: String?) {
        mparticle.installReferrer = referrer
    }

    override fun getInstallReferrer(): String? {
        return mparticle.installReferrer
    }

    override fun getEnvironment(): Environment? {
        return Environment.values().first { it.name.equals(mparticle.environment.name, ignoreCase = true) }
    }

    override fun getCurrentSession(): Session? {
        val session = mparticle.currentSession
        if (session == null) {
            return null
        } else {
            return object : Session {
                override fun getSessionUUID() = session.sessionUUID!!

                override fun getSessionID() = session.sessionID

                override fun getSessionStartTime() = throw RuntimeException("Not implemented")
            }
        }
    }

    override fun isAutoTrackingEnabled(): Boolean? {
        return mparticle.isAutoTrackingEnabled
    }

    override fun isDevicePerformanceMetricsDisabled(): Boolean {
        return mparticle.isDevicePerformanceMetricsDisabled
    }

    override fun getSessionTimeout(): Int {
        return mparticle.sessionTimeout
    }

    override fun isProviderActive(serviceProviderId: Int): Boolean {
        return mparticle.isProviderActive(serviceProviderId)
    }

    override fun logException(exception: Exception?, eventData: Map<String?, String?>?, message: String?) {
        mparticle.logException(Exception(exception), eventData, message)
    }
}

actual class MParticleOptions actual constructor(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform, initializer: (MParticleOptions.() -> Unit)?) {

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

    actual var identifyTask: BaseIdentityTask? = null
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

fun MParticleOptions.toMParticleOptions(): MParticleOptionsAndroid {
    val builder = MParticleOptionsAndroid.builder(clientPlatform.context)
        .credentials(apiKey, apiSecret)
        .dataplan(dataplanId, dataplanVersion)

    this.androidIdDisabled?.let { builder.androidIdDisabled(it) }
    this.dataplanOptions?.let {
        builder.dataplanOptions(
            com.mparticle.MParticleOptions.DataplanOptions.builder()
                .dataplanVersion(it.dataplan)
                .blockEventAttributes(it.blockEventAttributes)
                .blockEvents(it.blockEvents)
                .blockUserAttributes(it.blockUserAttributes)
                .blockUserIdentities(it.blockUserIdentities)
                .build()
        )
    }
    this.devicePerformanceMetricsDisabled?.let { builder.devicePerformanceMetricsDisabled(it) }
    this.enableUncaughtExceptionLogging?.let { builder.enableUncaughtExceptionLogging(it)}
    this.environment?.let { environment -> builder.environment(com.mparticle.MParticle.Environment.values().first {
        it.name.equals(environment.name, ignoreCase = true)
    }) }
    this.identifyRequest?.let {
        builder.identify(it.build())
    }
    this.identifyTask?.let { builder.identifyTask(it.toBaseIdentityTask()) }
    this.identityConnectionTimeout?.let { builder.identityConnectionTimeout(it) }
    this.sessionTimeout?.let { builder.sessionTimeout(it) }
    this.uploadInterval?.let { builder.uploadInterval(it) }
    this.logLevel?.let { logLevel -> builder.logLevel(logLevel.toLogLevel())}

    if (pushRegistrationInstanceId != null && pushRegistrationSenderId != null) {
        builder.pushRegistration(pushRegistrationInstanceId!!, pushRegistrationSenderId!!)
    }

    return builder.build()
}

fun InstallType.toInstallType(): InstallTypeAndroid {
    return InstallTypeAndroid.values().first {
        it.name == name
    }
}


fun LogLevel.toLogLevel(): LogLevelAndroid {
    return LogLevelAndroid.values().first {
        it.logLevel == level
    }
}