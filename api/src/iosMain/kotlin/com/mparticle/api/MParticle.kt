package com.mparticle.api

import cocoapods.mParticle_Apple_SDK.*
import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.toBaseEvent
import com.mparticle.api.identity.*
import com.mparticle.api.identity.MParticleUser
import com.mparticle.utils.ThreadsafeMutable
import kotlinx.cinterop.ObjCAction
import platform.Foundation.*
import kotlin.reflect.KMutableProperty0

actual class MParticle(val mparticle: cocoapods.mParticle_Apple_SDK.MParticle) {

    actual fun logEvent(event: BaseEvent) {
        mparticle.logEvent(event.toBaseEvent())
    }

    actual fun logLtvIncrease(valueIncreased: Double, eventName: String, contextInfo: Map<String, String?>?) {
        mparticle.logLTVIncrease(valueIncreased, eventName, contextInfo as Map<Any?, *>)
    }

    actual fun logScreen(screenName: String, eventData: Map<String, String?>?) {
        mparticle.logScreen(screenName, eventData as Map<Any?, *>)
    }

    actual fun logScreen(screen: MPEvent) {
        mparticle.logEvent(screen.toBaseEvent())
    }

    actual fun leaveBreadcrumb(breadcrumb: String) {
        mparticle.leaveBreadcrumb(breadcrumb)
    }

    actual fun logError(message: String, errorAttributes: Map<String, String?>?) {
        TODO("Not yet implemented")
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
        TODO("Not yet implemented")
    }

    actual fun logException(exception: Exception?, eventData: Map<String?, String?>?, message: String?) {
        TODO("Not yet implemented")
    }

    actual fun logPushRegistration(instanceId: String?, senderId: String?) {
        TODO("Not yet implemented")
    }

    actual fun upload() {
        mparticle.upload()
    }

    actual var isOptOut: Boolean by property(mparticle::optOut)


    actual val identity: IdentityApi
        get() = IdentityApi(mparticle.identity)

    actual val automaticSessionTracking
        get() = mparticle.automaticSessionTracking

    actual fun kitInstance(kitId: Int): Any? {
        TODO("Not yet implemented")
    }

    actual fun isKitActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }

    actual fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?) {
        TODO("Not yet implemented")
    }

    actual fun setSessionAttribute(key: String, value: Any?) {
        mparticle.setSessionAttribute(key, value)
    }

    actual fun incrementSessionAttribute(key: String, value: Int) {
        mparticle.incrementSessionAttribute(key, NSNumber(value))
    }

    actual fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?) {
        mparticle.setIntegrationAttributes(attributes?.entries?.associate { it.key to it.value } ?: mapOf<Any?, Any>(), NSNumber(integrationId))
    }

    actual fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>? {
        TODO("Not yet implemented")
    }

    actual fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long) {
        TODO("Not yet implemented")
    }

    actual fun disableLocationTracking() {
        mparticle.endLocationTracking()
    }

    actual fun isLocationTrackingEnabled(): Boolean {
        TODO("Not yet implemented")
    }

    actual val logLevel: LogLevel? by TransformDelegate(mparticle::logLevel, logLevelTransformer)

    actual val uploadInterval
        get() = mparticle.uploadInterval.toLong()

    actual val uncaughtExceptionLogging: Boolean
        get() = TODO("Not yet implemented")

    actual var installReferrer: String?
        get() = TODO("Not yet implemented")
        set(value) {
            TODO("Not yet implemented")
        }

    actual val environment: Environment
        get() = environmentTransformer.to(mparticle.environment)!!

    actual val currentSession: Session?
        get() = mparticle.currentSession?.let { Session(it) }

    actual val autoTrackingEnabled: Boolean
        get() = mparticle.trackNotifications

    actual val devicePerformanceMetricsEnabled: Boolean
        get() = TODO("Not yet implemented")

    actual val sessionTimeout: Int
        get() = mparticle.sessionTimeout.toInt()

    actual fun isProviderActive(serviceProviderId: Int): Boolean = mparticle.isKitActive(NSNumber(serviceProviderId))

    actual fun startSession() {
        mparticle.beginSession()
    }

    actual fun endSession(){

        mparticle.endSession()
    }

    actual companion object {
        val observers = ThreadsafeMutable{ mutableMapOf<String, Any>() }

        actual fun start(options: MParticleOptions) {
            Logger.info("Starting MParticle SDK with loglevel: ${options.logLevel} aka ${options.options.logLevel}")

            Logger.info("Starting MParticle SDK with environment: ${options.environment} aka ${options.options.environment}")
            cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().startWithOptions(options.options)
        }

        actual fun getInstance(): MParticle? {
            return cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().let { MParticle(it )}
        }

        actual fun clearInstance() {

        }

        actual fun reset(clientPlatform: ClientPlatform) {
            cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().reset()
            observers.mutate {
                entries.forEach {
                    NSNotificationCenter.defaultCenter.removeObserver(
                        observer = it.value,
                        name = it.key,
                        null
                    )
                }
            }
            observers.setValue { mutableMapOf() }
        }

        actual fun onSessionStart(onSession: (Session) -> Unit) {
            NSNotificationCenter.defaultCenter.addObserverForName(name = mParticleSessionDidBeginNotification, null, NSOperationQueue.mainQueue) {
                Logger.error("ON SESSION BEGIN CALLBACK IN MPARTICLE API")
                onSession(
                    Session(
                        id = it?.userInfo?.get(mParticleSessionId).toString().toLong(),
                        uusd = it?.userInfo?.get(mParticleSessionUUID).toString()
                    )
                )
            }.let { observers.mutate { put(mParticleSessionDidBeginNotification, it) } }
        }
        actual fun onSessionEnd(onSession: (Session) -> Unit) {
            NSNotificationCenter.defaultCenter.addObserverForName(mParticleSessionDidEndNotification, null, NSOperationQueue.mainQueue) {
                Logger.error("ON SESSION BEGIN CALLBACK IN MPARTICLE API")
                onSession(
                    Session(
                        id = it?.userInfo?.get(mParticleSessionId).toString().toLong(),
                        uusd = it?.userInfo?.get(mParticleSessionUUID).toString()
                    )
                )
            }.let { observers.mutate { put(mParticleSessionDidEndNotification, it) } }
        }
    }
}

actual class MParticleOptions(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform, logLevel: LogLevel) {
    actual constructor(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform): this(apiKey, apiSecret, clientPlatform, LogLevel.Verbose)

    val options: cocoapods.mParticle_Apple_SDK.MParticleOptions = MParticleOptions()

    init {
        options.apiKey = apiKey
        options.apiSecret = apiSecret
        options.logLevel = MPILogLevelVerbose
    }

    actual var clientPlatform = clientPlatform

    actual var apiKey: String by property(options::apiKey)
    actual var apiSecret: String by property(options::apiSecret)
    actual var installType: InstallType? by TransformDelegate(options::installType, installTypeTransformer)
    actual var sessionTimeout: Int? by TransformDelegate(options::sessionTimeout, intDoubleTransformer)
    actual var uploadInterval: Int? by TransformDelegate(options::uploadInterval, intDoubleTransformer)
    actual var environment: Environment? by TransformDelegate(options::environment, environmentTransformer)
    actual var logLevel: LogLevel? by TransformDelegate(options::logLevel, logLevelTransformer)
    actual var dataplanId: String? by property(options::dataPlanId)
    actual var dataplanVersion: Int? by TransformDelegate(options::dataPlanVersion, intNSNumberTransformer)
    actual var shouldBeginSession: Boolean by property(options::shouldBeginSession)

    actual var identifyTask: IdentityResponse? = null
        get() = field
        set(value) {
            field = value
            when (value) {
                null -> options.onIdentifyComplete = { _, _ -> }
                else ->
                    options.onIdentifyComplete = { result: MPIdentityApiResult?, error: NSError? ->
                        when {
                            error != null -> {
                                val errorResponse =
                                    IdentityHttpResponse().apply { errors = listOf(Error(error.toString(), "-1")) }
                                value.failureListeners.forEach { it.invoke(errorResponse) }
                            }
                            result != null -> {
                                value.successListeners.forEach {
                                    it.invoke(
                                        MParticleUser(result.user),
                                        result.previousUser?.let { MParticleUser(it) }
                                    )
                                }
                            }
                        }
                    }
            }
        }

    //TODO
    actual var identifyRequest: IdentityApiRequest? by TransformDelegate(options::identifyRequest, identityRequestTransformer)
    actual var networkOptions: NetworkOptions? by TransformDelegate(options::networkOptions, networkOptionsTransformer)
    actual var dataplanOptions: DataplanOptions? by TransformDelegate(options::dataPlanOptions, dataplanOptionsTransformer)

    //NOT IMPLEMENTED ON IOS
    actual var identityConnectionTimeout: Int?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var enableUncaughtExceptionLogging: Boolean?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var androidIdDisabled: Boolean?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var devicePerformanceMetricsDisabled: Boolean?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var locationTracking: LocationTracking?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var pushRegistrationInstanceId: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var pushRegistrationSenderId: String?
        get() = TODO("Not yet implemented")
        set(value) {}

    actual var automaticSessionTracking: Boolean? by NullableDelegate { options.automaticSessionTracking = it ?: true }
}


actual class NetworkOptions (val networkOptions: MPNetworkOptions) {
    actual constructor(): this(MPNetworkOptions())
}

actual class Session(actual val uusd: String, actual val id: Long, actual val startTime: Long = 0) {
    constructor(session: MParticleSession = MParticleSession()): this(session.UUID, session.sessionID.longValue, session.startTime.longValue)

    override fun toString(): String {
        return """
            Session:
                id: $id
                uuid: $uusd
                startTime: $startTime
        """.trimIndent()
    }
}

actual class DataplanOptions(val dataplanOptions: MPDataPlanOptions) {

    actual var dataplan: String? by TransformDelegate(dataplanOptions::dataPlan, jsonStringMapTransformer)
    actual var blockUserAttributes: Boolean by property(dataplanOptions::blockUserAttributes)
    actual var blockUserIdentities: Boolean by property(dataplanOptions::blockUserIdentities)
    actual var blockEventAttributes: Boolean by property(dataplanOptions::blockEventAttributes)
    actual var blockEvents: Boolean by property(dataplanOptions::blockEvents)
}

actual enum class Environment(val apple: MPEnvironment) {
    AutoDetect(MPEnvironmentAutoDetect),
    Development(MPEnvironmentDevelopment),
    Production(MPEnvironmentProduction)
}

actual enum class LogLevel(val apple: MPILogLevel) {
    None(MPILogLevelNone),
    Error(MPILogLevelError),
    Warning(MPILogLevelWarning),
    Debug(MPILogLevelDebug),
    Verbose(MPILogLevelVerbose)
}