package com.mparticle.api

import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.IdentityResponse

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