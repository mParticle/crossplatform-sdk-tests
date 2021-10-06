package com.mparticle.api

import cocoapods.mParticle_Apple_SDK.*
import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.toBaseEvent
import com.mparticle.api.identity.*
import com.mparticle.api.identity.MParticleUser
import platform.Foundation.*
import kotlin.reflect.KMutableProperty0

fun <T> KMutableProperty0<T>.fieldd(): KMutableProperty0<T> = this


actual class MParticle(val mparticle: cocoapods.mParticle_Apple_SDK.MParticle) {
    actual fun upload() {
        mparticle.upload()
    }

    actual fun setOptOut(optOutStatus: Boolean) {
        mparticle.setOptOut(optOutStatus)
    }

    actual fun getOptOut(): Boolean {
        return mparticle.optOut
    }

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

    actual fun Identity(): IdentityApi? = IdentityApiImpl(mparticle.identity)

    actual fun getKitInstance(kitId: Int): Any? {
        TODO("Not yet implemented")
    }

    actual fun isKitActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }

    actual fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?) {
        TODO("Not yet implemented")
    }

    actual fun setSessionAttribute(key: String, value: Any?) {
        TODO("Not yet implemented")
    }

    actual fun incrementSessionAttribute(key: String, value: Int) {
        TODO("Not yet implemented")
    }

    actual fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?) {
        TODO("Not yet implemented")
    }

    actual fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>? {
        TODO("Not yet implemented")
    }

    actual fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long) {
        TODO("Not yet implemented")
    }

    actual fun disableLocationTracking() {
        TODO("Not yet implemented")
    }

    actual fun isLocationTrackingEnabled(): Boolean {
        TODO("Not yet implemented")
    }

    actual fun enableUncaughtExceptionLogging() {
        TODO("Not yet implemented")
    }

    actual fun disableUncaughtExceptionLogging() {
        TODO("Not yet implemented")
    }

    actual fun setInstallReferrer(referrer: String?) {
        TODO("Not yet implemented")
    }

    actual fun getInstallReferrer(): String? {
        TODO("Not yet implemented")
    }

    actual fun getEnvironment(): Environment? {
        return environmentTransformer.to(mparticle.environment)
    }

    actual fun getCurrentSession(): Session? {
        TODO("Not yet implemented")
    }

    actual fun isAutoTrackingEnabled(): Boolean? {
        return mparticle.trackNotifications
    }

    actual fun isDevicePerformanceMetricsDisabled(): Boolean {
        //TODO
        throw RuntimeException("Not Implemented")
    }

    actual fun getSessionTimeout(): Int {
        return mparticle.sessionTimeout.toInt()
    }

    actual fun isProviderActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }

    actual companion object {
        actual fun start(options: MParticleOptions) {
            options.options.setLogLevel(MPILogLevelVerbose)
            cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().startWithOptions(options.options)
        }

        actual fun getInstance(): MParticle? {
            return cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().let { MParticle(it )}
        }

        actual fun clearInstance() {

        }

        actual fun reset(clientPlatform: ClientPlatform) {
            cocoapods.mParticle_Apple_SDK.MParticle.sharedInstance().reset()
        }
    }
}

actual class MParticleOptions actual constructor(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform) {

    val options: cocoapods.mParticle_Apple_SDK.MParticleOptions = MParticleOptions()

    init {
        options.apiKey = apiKey
        options.apiSecret = apiSecret
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
}


actual class NetworkOptions (val networkOptions: MPNetworkOptions) {
    actual constructor(): this(MPNetworkOptions())
}

actual class Session(session: MParticleSession) {
    actual val uusd: String = session.UUID
    actual val id: Long = session.sessionID.longValue
    actual val startTime: Long = throw NotImplementedError()
}

actual class DataplanOptions(val dataplanOptions: MPDataPlanOptions) {

    actual var dataplan: String? by TransformDelegate(dataplanOptions::dataPlan, jsonStringMapTransformer)
    actual var blockUserAttributes: Boolean by property(dataplanOptions::blockUserAttributes)
    actual var blockUserIdentities: Boolean by property(dataplanOptions::blockUserIdentities)
    actual var blockEventAttributes: Boolean by property(dataplanOptions::blockEventAttributes)
    actual var blockEvents: Boolean by property(dataplanOptions::blockEvents)
}