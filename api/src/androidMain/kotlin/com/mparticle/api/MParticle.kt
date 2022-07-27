package com.mparticle.api

import android.util.Log
import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.getEvent
import com.mparticle.api.events.getMPEvent
import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse
import com.mparticle.api.identity.toBaseIdentityTask
import com.mparticle.apiKey
import com.mparticle.apiSecret
import com.mparticle.internal.PushRegistrationHelper
import java.lang.RuntimeException
import java.math.BigDecimal
import com.mparticle.MParticle as MParticleAndroid
import com.mparticle.MParticleOptions as MParticleOptionsAndroid
import com.mparticle.MParticle.Environment as AndroidEnvironment
import com.mparticle.MParticle.LogLevel as AndroidLogLevel
import com.mparticle.logLevel

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

    actual val logLevel: LogLevel?
        get() = LogLevel.values().firstOrNull { it.android == com.mparticle.internal.Logger.getMinLogLevel() }

    actual val uploadInterval: Long
        get() = mparticle.Internal().configManager.uploadInterval

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
            com.mparticle.MParticle.start(options.builder.build())
        }

        actual fun getInstance(): MParticle? {
            return com.mparticle.MParticle.getInstance()?.let { MParticle(it) }
        }

        actual fun clearInstance() {
            com.mparticle.MParticle.setInstance(null)
        }

        actual fun reset(clientPlatform: ClientPlatform) {
            com.mparticle.MParticle.reset(clientPlatform.context)
        }
    }
}

actual class MParticleOptions(val builder: MParticleOptionsAndroid.Builder, noDefaultKeySecret: Boolean = false) {
    private val NoKey = "no key!"
    private val NoSecret = "no secret!"

    actual constructor(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform): this(
        MParticleOptionsAndroid
            .builder(clientPlatform.context)
            .credentials(apiKey, apiSecret)
    )

    actual var apiKey: String by GenericDelegate(builder.apiKey() ?: NoKey) { builder.credentials(it, apiSecret)}
    actual var apiSecret: String by GenericDelegate(builder.apiSecret() ?: NoSecret) { builder.credentials(apiKey, it)}
    actual var pushRegistrationInstanceId: String? by GenericDelegate(null) { pushRegistrationSenderId?.let { senderId -> it?.let { builder.pushRegistration(it, senderId) }}}
    actual var pushRegistrationSenderId: String? by GenericDelegate(null) { pushRegistrationInstanceId?.let { instanceId -> it?.let { builder.pushRegistration(instanceId, it) }}}
    actual var dataplanId: String? by GenericDelegate(null) { builder.dataplan(it, dataplanVersion)}
    actual var dataplanVersion: Int? by GenericDelegate(null) { builder.dataplan(dataplanId, it) }

    actual var installType: InstallType? by GenericDelegate(null) { it?.toInstallType()?.let { builder.installType(it) }}
    actual var identifyRequest: IdentityApiRequest? by GenericDelegate(null) { it?.request?.build()?.let { builder.identify(it) } }

    actual var identifyTask: IdentityResponse? by GenericDelegate(null) { it?.toBaseIdentityTask()?.let { builder.identifyTask(it)}}
    actual var enableUncaughtExceptionLogging: Boolean? by GenericDelegate(null) { it?.let { builder.enableUncaughtExceptionLogging(it)}}
    actual var androidIdDisabled: Boolean? by GenericDelegate(null) { it?.let { builder.androidIdEnabled(it)}}
    actual var devicePerformanceMetricsDisabled: Boolean? by GenericDelegate(null) { it?.let { builder.devicePerformanceMetricsDisabled(it)}}
    actual var locationTracking: LocationTracking? by GenericDelegate(null) { it?.apply { builder.locationTrackingEnabled(provider, minTime, minDistance) } }
    actual var sessionTimeout: Int? by GenericDelegate(null) { it?.let { builder.sessionTimeout(it) }}
    actual var uploadInterval: Int? by GenericDelegate(null) { it?.let { builder.uploadInterval(it)}}
    actual var identityConnectionTimeout: Int? by GenericDelegate(null) { it?.let { builder.identityConnectionTimeout(it)}}
    actual var networkOptions: NetworkOptions? by GenericDelegate(null) { throw RuntimeException("We don't map NetworkOptions yet..TODO")}
    actual var dataplanOptions: DataplanOptions? by GenericDelegate(null) { it?.dataplanOptions?.build()?.let { builder.dataplanOptions(it)}}
    actual var environment: Environment? by GenericDelegate(null) { it?.android?.let { builder.environment(it)}}
    actual var logLevel: LogLevel? by GenericDelegate(builder.logLevel()?.let { LogLevel.getLogLevel(it) }) { it?.android?.let { builder.logLevel(it)} }

    init {
        //set default credentials unless flag is set
        if (!noDefaultKeySecret) {
            if (apiKey == NoKey) {
                apiKey = "key"
            }
            if (apiSecret == NoSecret) {
                apiSecret = "secret"
            }
        }
        com.mparticle.internal.Logger.setLogHandler(object: com.mparticle.internal.Logger.AbstractLogHandler() {
            override fun verbose(error: Throwable?, message: String?) {
                Logger.info("$message, error: ${error?.stackTraceToString()}")
            }

            override fun info(error: Throwable?, message: String?) {
                Logger.info("$message, error: ${error?.stackTraceToString()}")

            }

            override fun debug(error: Throwable?, message: String?) {
                Logger.info("$message, error: ${error?.stackTraceToString()}")

            }

            override fun warning(error: Throwable?, message: String?) {
                Logger.warning("$message, error: ${error?.stackTraceToString()}")

            }

            override fun error(error: Throwable?, message: String?) {
                Logger.error("$message, error: ${error?.stackTraceToString()}")

            }

        })
        if (logLevel == null) {
            logLevel = LogLevel.Debug
        }
    }
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

actual enum class Environment(val android: AndroidEnvironment) {
    AutoDetect(AndroidEnvironment.AutoDetect),
    Development(AndroidEnvironment.Development),
    Production(AndroidEnvironment.Production);

    companion object {
        fun getEnvironment(android: AndroidEnvironment): Environment {
            return values().firstOrNull { it.android == android }!!
        }
    }
}

actual enum class LogLevel(val android: AndroidLogLevel) {
    None(AndroidLogLevel.NONE),
    Error(AndroidLogLevel.ERROR),
    Warning(AndroidLogLevel.WARNING),
    Debug(AndroidLogLevel.DEBUG),
    Verbose(AndroidLogLevel.VERBOSE);

    companion object {
        fun getLogLevel(android: AndroidLogLevel): LogLevel {
            return values().firstOrNull { it.android == android }!!
        }
    }
}