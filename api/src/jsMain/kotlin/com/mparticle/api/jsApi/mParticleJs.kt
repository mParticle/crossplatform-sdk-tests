package com.mparticle.api.jsApi
external class mParticleJs {
    fun reset(mParticleJs: mParticleJs)
    fun getVersion(): String
    fun getAppVersion(): String
    fun setAppVersion(version: String)
    fun setDeviceId(deviceId: String)
    fun isInitialized(): Boolean
    fun getAppName()
    fun setAppName(name: String)
    fun stopTrackingLocation()
    fun startTrackingLocation(location: () -> LocationJs)
    fun setPosition(latitude: Number, longitude: Number)
    fun startNewSession()
    fun endSession()
    fun logBaseEvent(event: MPEventJs, eventOptions: MPEventOptionsJs?)
    fun logEvent(
        eventName: String,
        eventType: Number,
        eventInfo: Map<String, String?>?,
        customFlags: Map<String, List<String?>?>?,
        eventOptions: MPEventOptionsJs?
    )
    fun logError(error: String, attrs: Map<String, String>)
    fun logLink(selector: String, eventName: String, eventType: Number, eventInfo: Map<String, String?>?)
    fun logForm(selector: String, eventName: String, eventType: Number, eventInfo: Map<String, String?>?)
    fun logPageView(eventName: String, arrts: Map<String, String>, customFlags: Map<String, List<String?>?>?, eventOptions: MPEventOptionsJs)
    fun upload()

    fun setSessionAttributes(key: String, value: Any?)

    fun setOptOut(isOptingOut: Boolean)

    fun setIntegrationAttribute(integrationId: Number, attrs: Map<String, String?>?)
    fun getIntegrationAttributes(integrationId: Number): Map<String, String?>

    // Some (server) config settings need to be returned before they are set on SDKConfig in a self hosted environment
    fun completeSDKInitialization(apiKey: String, config: mParticleConfiguration, mpInstance: mParticleJs)

    fun createKitBlocker(config: mParticleConfiguration, mpInstance: mParticleJs)
    fun runPreConfigFetchInitialization(mpInstance: mParticleJs, apiKey: String, config: mParticleConfiguration)
}

external class LocationJs {
    var latitude: Number
    var longetude: Number
}

class MPEventOptionsJs: Map<String, String?> by mutableMapOf()
class MPEventJs: Map<String, String?> by mutableMapOf()
class mParticleConfiguration: Map<String, Any?> by mutableMapOf()
//    fun logEvent(name: String, type: Int = definedExternally, attributes: Any = definedExternally)
//    fun logPageView(name: String, attributes: Any = definedExternally)
//}