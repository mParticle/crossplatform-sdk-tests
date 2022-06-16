package com.mparticle.api

import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.identity.IdentityResponse
import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.MParticleOptions

expect class MParticle {

    val environment: Environment
    val currentSession: Session?
    val sessionTimeout: Int
    val autoTrackingEnabled: Boolean
    val devicePerformanceMetricsEnabled: Boolean
    val uncaughtExceptionLogging: Boolean
    var installReferrer: String?
    var isOptOut: Boolean
    val logLevel: LogLevel?
    val uploadInterval: Long

    val identity: IdentityApi

    fun logEvent(event: BaseEvent)
    fun logLtvIncrease(valueIncreased: Double, eventName: String, contextInfo: Map<String, String?>?)
    fun logScreen(screenName: String, eventData: Map<String, String?>?)
    fun logScreen(screen: MPEvent): kotlin.Unit
    fun leaveBreadcrumb(breadcrumb: String)
    fun logError(message: String, errorAttributes: Map<String, String?>?)
    fun logNetworkPerformance(url: String, startTime: Long, method: String, length: Long, bytesSent: Long, bytesReceived: Long, requestString: String?, responseCode: Int)
    fun logException(exception: Exception?, eventData: Map<String?, String?>?, message: String?)
    fun logPushRegistration(instanceId: String?, senderId: String?)

    fun upload()

    fun kitInstance(kitId: Int): Any?
    fun isKitActive(serviceProviderId: Int): Boolean
    fun isProviderActive(serviceProviderId: Int): Boolean


    fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?)
    fun setSessionAttribute(key: String, value: Any?)
    fun incrementSessionAttribute(key: String, value: Int)
    fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?)
    fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>?

    fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long)
    fun disableLocationTracking()
    fun isLocationTrackingEnabled(): Boolean


    companion object {
        fun start(options: MParticleOptions)
        fun getInstance(): MParticle?
        fun clearInstance()
        fun reset(clientPlatform: ClientPlatform)
    }
}

expect class MParticleOptions private constructor(apiKey: String = "api key", apiSecret: String = "api secret", clientPlatform: ClientPlatform) {

    var apiKey: String
    var apiSecret: String
    var installType: InstallType?

    var pushRegistrationInstanceId: String?
    var pushRegistrationSenderId: String?

    var dataplanId: String?
    var dataplanVersion: Int?

    var identifyRequest: IdentityApiRequest?
    var identifyTask: IdentityResponse?

    var enableUncaughtExceptionLogging: Boolean?
    var androidIdDisabled: Boolean?
    var devicePerformanceMetricsDisabled: Boolean?
    var locationTracking: LocationTracking?
    var sessionTimeout: Int?
    var uploadInterval: Int?
    var identityConnectionTimeout: Int?

    var networkOptions: NetworkOptions?
    var dataplanOptions: DataplanOptions?
    var environment: Environment?

    var logLevel: LogLevel?
}

fun MParticleOptions(apiKey: String = "api key", apiSecret: String = "api secret", clientPlatform: ClientPlatform, initializer: (MParticleOptions.() -> Unit) = {}): MParticleOptions {
    return MParticleOptions(apiKey, apiSecret, clientPlatform).apply(initializer)
}

class LocationTracking(
    val provider: String,
    val minTime: Long,
    val minDistance: Long
)

expect enum class LogLevel {
    None,
    Error,
    Warning,
    Debug,
    Verbose
}

expect enum class Environment {
    AutoDetect,
    Development,
    Production
}

expect class Session {
    val uusd: String
    val id: Long
    val startTime: Long
}

class Location {
    var enabled = true
    var provider: String? = null
    var minTime: Long = 0
    var minDistance: Long = 0
}

enum class InstallType {
    AutoDetect,
    KownInstall,
    KnownUpgrde
}

expect class NetworkOptions() {

}

expect class DataplanOptions {
    var dataplan: String?
    var blockUserAttributes: Boolean
    var blockUserIdentities: Boolean
    var blockEventAttributes: Boolean
    var blockEvents: Boolean
}
