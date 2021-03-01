package com.mparticle.api

import cocoapods.mParticle_Apple_SDK.MPEnvironment
import cocoapods.mParticle_Apple_SDK.MPILogLevel
import cocoapods.mParticle_Apple_SDK.MPIdentityApiResult
import cocoapods.mParticle_Apple_SDK.MPInstallationType
import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.toBaseEvent
import com.mparticle.api.identity.*
import platform.Foundation.NSError
import platform.Foundation.NSNumber

class MParticleImpl(val mparticle: cocoapods.mParticle_Apple_SDK.MParticle): MParticle {
    override fun upload() {
        mparticle.upload()
    }

    override fun setOptOut(optOutStatus: Boolean) {
        mparticle.setOptOut(optOutStatus)
    }

    override fun getOptOut(): Boolean {
        return mparticle.optOut
    }

    override fun logEvent(event: BaseEvent) {
        mparticle.logEvent(event.toBaseEvent())
    }

    override fun logLtvIncrease(valueIncreased: Double, eventName: String, contextInfo: Map<String, String?>?) {
        mparticle.logLTVIncrease(valueIncreased, eventName, contextInfo as Map<Any?, *>)
    }

    override fun logScreen(screenName: String, eventData: Map<String, String?>?) {
        mparticle.logScreen(screenName, eventData as Map<Any?, *>)
    }

    override fun logScreen(screen: MPEvent) {
        mparticle.logEvent(screen.toBaseEvent())
    }

    override fun leaveBreadcrumb(breadcrumb: String) {
        mparticle.leaveBreadcrumb(breadcrumb)
    }

    override fun logError(message: String, errorAttributes: Map<String, String?>?) {
        TODO("Not yet implemented")
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
        TODO("Not yet implemented")
    }

    override fun logException(exception: Exception?, eventData: Map<String?, String?>?, message: String?) {
        TODO("Not yet implemented")
    }

    override fun logPushRegistration(instanceId: String?, senderId: String?) {
        TODO("Not yet implemented")
    }

    override fun Identity(): IdentityApi? {
        TODO("Not yet implemented")
    }

    override fun getKitInstance(kitId: Int): Any? {
        TODO("Not yet implemented")
    }

    override fun isKitActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }

    override fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?) {
        TODO("Not yet implemented")
    }

    override fun setSessionAttribute(key: String, value: Any?) {
        TODO("Not yet implemented")
    }

    override fun incrementSessionAttribute(key: String, value: Int) {
        TODO("Not yet implemented")
    }

    override fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?) {
        TODO("Not yet implemented")
    }

    override fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>? {
        TODO("Not yet implemented")
    }

    override fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long) {
        TODO("Not yet implemented")
    }

    override fun disableLocationTracking() {
        TODO("Not yet implemented")
    }

    override fun isLocationTrackingEnabled(): Boolean {
        TODO("Not yet implemented")
    }

    override fun enableUncaughtExceptionLogging() {
        TODO("Not yet implemented")
    }

    override fun disableUncaughtExceptionLogging() {
        TODO("Not yet implemented")
    }

    override fun setInstallReferrer(referrer: String?) {
        TODO("Not yet implemented")
    }

    override fun getInstallReferrer(): String? {
        TODO("Not yet implemented")
    }

    override fun getEnvironment(): Environment? {
        return mparticle.environment.toEnvironment()
    }

    override fun getCurrentSession(): Session? {
        TODO("Not yet implemented")
    }

    override fun isAutoTrackingEnabled(): Boolean? {
        return mparticle.trackNotifications
    }

    override fun isDevicePerformanceMetricsDisabled(): Boolean {
        //TODO
        throw RuntimeException("Not Implemented")
    }

    override fun getSessionTimeout(): Int {
        return mparticle.sessionTimeout.toInt()
    }

    override fun isProviderActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }
}

actual class MParticleOptions actual constructor(apiKey: String, apiSecret: String, clientPlatform: ClientPlatform, initializer: (MParticleOptions.() -> Unit)?) {

    init {
        initializer?.invoke(this)
    }
    val options = cocoapods.mParticle_Apple_SDK.MParticleOptions()

    init {
        options.setApiKey(apiKey)
        options.setApiSecret(apiSecret)
    }

    actual var clientPlatform = clientPlatform

     actual var apiKey: String
         get() = options.apiKey()
        set(value) { options.apiKey = value }
     actual var apiSecret: String
         get() = options.apiSecret()
        set(value) { options.apiSecret = value }
     actual var installType: InstallType?
         get() = options.installType().toInstallType()
         set(value) { options.setInstallType(value!!.toInstallType())}
     actual var pushRegistrationInstanceId: String?
         get() = TODO("Not yet implemented")
         set(value) {}
     actual var pushRegistrationSenderId: String?
         get() = TODO("Not yet implemented")
         set(value) {}
     actual var dataplanId: String?
         get() = options.dataPlanId()
         set(value) { options.setDataPlanId(value)}
     actual var dataplanVersion: Int?
         get() = options.dataPlanVersion()?.intValue
         set(value) { options.setDataPlanVersion(value?.let { NSNumber(it) })}
     actual var identifyRequest: IdentityApiRequest?
         get() = TODO("Not yet implemented")
         set(value) {}
     actual var identifyTask: BaseIdentityTask? = null
         get() = field
         set(value) {
             field = value
             when (value) {
                 null -> options.onIdentifyComplete = { _, _  -> }
                 else ->
                     options.onIdentifyComplete = { result: MPIdentityApiResult?, error: NSError? ->
                         when {
                             error != null -> {
                                 val errorResponse =
                                     IdentityHttpResponse()?.apply { errors = listOf(Error(error.toString(), "-1")) }
                                 value?.failureListeners?.forEach { it.invoke(errorResponse) }
                             }
                             result != null -> {
                                 value?.successListeners?.forEach {
                                     it.invoke(
                                         MParticleUserImpl(result.user),
                                         result.previousUser?.let { MParticleUserImpl(it) }
                                     )
                                 }
                             }
                         }
                     }
             }
         }
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
     actual var sessionTimeout: Int?
         get() = options.sessionTimeout().toInt()
         set(value) { options.setSessionTimeout(value!!.toDouble())}
     actual var uploadInterval: Int?
         get() = options.uploadInterval().toInt()
         set(value) { options.setUploadInterval(value!!.toDouble())}
     actual var identityConnectionTimeout: Int?
         get() = TODO("Not yet implemented")
         set(value) {}
     actual var networkOptions: NetworkOptions?
         get() = TODO("Not yet implemented")
         set(value) {}
     actual var dataplanOptions: DataplanOptions?
         get() = TODO("Not yet implemented")
         set(value) {}
     actual var environment: Environment?
         get() = options.environment().toEnvironment()
         set(value) { options.setEnvironment(value!!.toEnvironment())}
     actual var logLevel: LogLevel?
         get() = options.logLevel().toLogLevel()
         set(value) { options.setLogLevel(value!!.toLogLevel())}
 }

fun MPEnvironment.toEnvironment(): Environment {
    return Environment.values().first { it.ordinal == this.toInt() }
}

fun MPInstallationType.toInstallType(): InstallType {
    return InstallType.values().first { it.ordinal == this.toInt() }
}

fun InstallType.toInstallType(): MPInstallationType {
    return ordinal.toLong()
}

fun MPILogLevel.toLogLevel(): LogLevel {
    return LogLevel.values().first { it.level == this.toInt() }
}

fun LogLevel.toLogLevel(): MPILogLevel {
    return this.level.toULong()
}

fun Environment.toEnvironment(): MPEnvironment {
    return ordinal.toULong()
}