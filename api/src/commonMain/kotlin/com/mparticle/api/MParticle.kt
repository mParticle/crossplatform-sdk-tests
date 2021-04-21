package com.mparticle.api

import com.mparticle.Platforms
import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.identity.BaseIdentityTask
import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest

interface MParticle {
    //Actions
    fun upload()
    fun setOptOut(optOutStatus: Boolean)
    fun getOptOut(): kotlin.Boolean

    //Events
    fun logEvent(event: BaseEvent)
    fun logLtvIncrease(valueIncreased: Double, eventName: String, contextInfo: Map<String, String?>?)
    fun logScreen(screenName: String, eventData: Map<String, String?>?)
    fun logScreen(screen: MPEvent): kotlin.Unit
    fun leaveBreadcrumb(breadcrumb: String)
    fun logError(message: String, errorAttributes: Map<String, String?>?)
    fun logNetworkPerformance(url: String, startTime: Long, method: String, length: Long, bytesSent: Long, bytesReceived: Long, requestString: String?, responseCode: Int)
    fun logException(exception: Exception?, eventData: Map<String?, String?>?, message: String?)
    fun logPushRegistration(instanceId: String?, senderId: String?)

    //Other major APIs
    fun Identity(): IdentityApi?
    fun getKitInstance(kitId: Int): Any?
    fun isKitActive(serviceProviderId:kotlin.Int): kotlin.Boolean

    //Global properties
    fun setLocation(provider: String, latitude: Double?, longitude: Double?, accuracy: Float?)
    fun setSessionAttribute(key: String, value: Any?)
    fun incrementSessionAttribute(key:kotlin.String, value:kotlin.Int): kotlin.Unit
    fun setIntegrationAttributes(integrationId: Int, attributes: Map<String, String?>?)
    fun getIntegrationAttributes(integrationId:kotlin.Int): kotlin.collections.MutableMap<kotlin.String?, kotlin.String?>?

    //Configurations
    fun enableLocationTracking(provider: String, minTime: Long, minDistance: Long)
    fun disableLocationTracking(): kotlin.Unit
    fun isLocationTrackingEnabled(): Boolean
    fun enableUncaughtExceptionLogging()
    fun disableUncaughtExceptionLogging(): kotlin.Unit

    fun setInstallReferrer(referrer: String?)
    fun getInstallReferrer(): kotlin.String?
    fun getEnvironment(): Environment?
    fun getCurrentSession(): Session?

    fun isAutoTrackingEnabled(): Boolean?
    fun isDevicePerformanceMetricsDisabled(): Boolean
    fun getSessionTimeout(): Int

    fun isProviderActive(serviceProviderId: Int): Boolean

    companion object {
        fun start(options: MParticleOptions) {
            Platforms().start(options)
        }

        fun getInstance(): MParticle? {
            return Platforms().getInstance()
        }

        fun clearInstance() {
            Platforms().clearInstance()
        }

        fun reset(clientPlatform: ClientPlatform) {
            Platforms().reset(clientPlatform)
        }
    }
}


expect class MParticleOptions(apiKey: String = "api key", apiSecret: String = "api secret", clientPlatform: ClientPlatform, initializer: (MParticleOptions.() -> Unit)? = null) {

    var clientPlatform: ClientPlatform

    var apiKey: String
    var apiSecret: String
    var installType: InstallType?

    var pushRegistrationInstanceId: String?
    var pushRegistrationSenderId: String?

    var dataplanId: String?
    var dataplanVersion: Int?

    var identifyRequest: IdentityApiRequest?


    //direct action
    var identifyTask: BaseIdentityTask?
//    var attributionListener(attributionListener: AttributionListener?)

    //disable/enable collection
    var enableUncaughtExceptionLogging: Boolean?
    var androidIdDisabled: Boolean?
    var devicePerformanceMetricsDisabled: Boolean?

    var locationTracking: LocationTracking?

    // behavior, performance
    var sessionTimeout: Int?
    var uploadInterval: Int?
    var identityConnectionTimeout: Int?

    // behavior, data flow
    var networkOptions: NetworkOptions?
    var dataplanOptions: DataplanOptions?
    var environment: Environment?


    //developer tool
    var logLevel: LogLevel?



}

class LocationTracking(
    val provider: String,
    val minTime: Long? = null,
    val minDistance: Long? = null
)

enum class LogLevel(val level: Int) {
    Non(0),
    Error(1),
    Warning(2),
    Debug(3),
    Verbose(4),
    Info(5)
}

enum class Environment() {
    Production,
    Development,
    AutoDetect
}

interface Session {
    fun getSessionUUID(): String
    fun getSessionID(): Long
    fun getSessionStartTime(): Long
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

class NetworkOptions {

}

class DataplanOptions {
    var dataplan: String? = null
    var blockUserAttributes = false
    var blockUserIdentities = false
    var blockEventAttributes = false
    var blockEvents = false
}
