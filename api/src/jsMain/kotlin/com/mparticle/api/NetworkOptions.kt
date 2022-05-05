package com.mparticle.api

import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MPEvent
import com.mparticle.api.identity.IdentityApi
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse

actual class NetworkOptions actual constructor() {

}

actual class DataplanOptions {
    actual var dataplan: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var blockUserAttributes: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var blockUserIdentities: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var blockEventAttributes: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var blockEvents: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
}

actual class Session {
    actual val uusd: String
        get() = TODO("Not yet implemented")
    actual val id: Long
        get() = TODO("Not yet implemented")
    actual val startTime: Long
        get() = TODO("Not yet implemented")
}

actual enum class Environment {
    AutoDetect, Development, Production
}

actual enum class LogLevel {
    None, Error, Warning, Debug, Verbose
}

actual class MParticleOptions private actual constructor(
    apiKey: String,
    apiSecret: String,
    clientPlatform: ClientPlatform
) {
    actual var clientPlatform: ClientPlatform
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var apiKey: String
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var apiSecret: String
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var installType: InstallType?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var pushRegistrationInstanceId: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var pushRegistrationSenderId: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var dataplanId: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var dataplanVersion: Int?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var identifyRequest: IdentityApiRequest?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var identifyTask: IdentityResponse?
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
    actual var sessionTimeout: Int?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var uploadInterval: Int?
        get() = TODO("Not yet implemented")
        set(value) {}
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
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var logLevel: LogLevel?
        get() = TODO("Not yet implemented")
        set(value) {}

}

actual class MParticle {
    actual val environment: Environment
        get() = TODO("Not yet implemented")
    actual val currentSession: Session?
        get() = TODO("Not yet implemented")
    actual val sessionTimeout: Int
        get() = TODO("Not yet implemented")
    actual val autoTrackingEnabled: Boolean
        get() = TODO("Not yet implemented")
    actual val devicePerformanceMetricsEnabled: Boolean
        get() = TODO("Not yet implemented")
    actual val uncaughtExceptionLogging: Boolean
        get() = TODO("Not yet implemented")
    actual var installReferrer: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var isOptOut: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
    actual val logLevel: LogLevel?
        get() = TODO("Not yet implemented")
    actual val uploadInterval: Long
        get() = TODO("Not yet implemented")
    actual val identity: IdentityApi
        get() = TODO("Not yet implemented")

    actual fun logEvent(event: BaseEvent) {
    }

    actual fun logLtvIncrease(
        valueIncreased: Double,
        eventName: String,
        contextInfo: Map<String, String?>?
    ) {
    }

    actual fun logScreen(
        screenName: String,
        eventData: Map<String, String?>?
    ) {
    }

    actual fun logScreen(screen: MPEvent) {
    }

    actual fun leaveBreadcrumb(breadcrumb: String) {
    }

    actual fun logError(
        message: String,
        errorAttributes: Map<String, String?>?
    ) {
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
    }

    actual fun logException(
        exception: Exception?,
        eventData: Map<String?, String?>?,
        message: String?
    ) {
    }

    actual fun logPushRegistration(instanceId: String?, senderId: String?) {
    }

    actual fun upload() {
    }

    actual fun kitInstance(kitId: Int): Any? {
        TODO("Not yet implemented")
    }

    actual fun isKitActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }

    actual fun isProviderActive(serviceProviderId: Int): Boolean {
        TODO("Not yet implemented")
    }

    actual fun setLocation(
        provider: String,
        latitude: Double?,
        longitude: Double?,
        accuracy: Float?
    ) {
    }

    actual fun setSessionAttribute(key: String, value: Any?) {
    }

    actual fun incrementSessionAttribute(key: String, value: Int) {
    }

    actual fun setIntegrationAttributes(
        integrationId: Int,
        attributes: Map<String, String?>?
    ) {
    }

    actual fun getIntegrationAttributes(integrationId: Int): MutableMap<String?, String?>? {
        TODO("Not yet implemented")
    }

    actual fun enableLocationTracking(
        provider: String,
        minTime: Long,
        minDistance: Long
    ) {
    }

    actual fun disableLocationTracking() {
    }

    actual fun isLocationTrackingEnabled(): Boolean {
        TODO("Not yet implemented")
    }

    actual companion object {
        actual fun start(options: MParticleOptions) {
        }

        actual fun getInstance(): MParticle? {
            TODO("Not yet implemented")
        }

        actual fun clearInstance() {
        }

        actual fun reset(clientPlatform: ClientPlatform) {
        }
    }


}