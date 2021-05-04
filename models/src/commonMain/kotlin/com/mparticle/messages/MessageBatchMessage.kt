package com.mparticle.messages

import kotlinx.serialization.SerialName
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.Serializable

@Serializable
class MessageBatchMessage(
    @SerialName("echo") val echo: Boolean? = null,
    @SerialName("dt") val type: String? = null,
    @SerialName("id") val id:String? = null,
    @SerialName("ct") val timestamp: Long? = null,
    @SerialName("sdk") val mparticleVersion:String? = null,
    @SerialName("oo") val optOutHeader:Boolean? = null,
    @SerialName("uitl") val configUploadInterval:Int? = null,
    @SerialName("stl") val configSessionTimeout:Int? = null,
    @SerialName("mpid") val mpid:String? = null,
    @SerialName("dbg") val sandbox:Boolean? = null,
    @SerialName("das") val deviceApplicationStamp:String? = null,
    @SerialName("uad") val deletedUserAttributes: List<String>? = null,
    @SerialName("ck") val cookies: JsonObject? = null,
    @SerialName("cms") val providerPersistence: JsonObject? = null,
    @SerialName("ia") val integrationAttributes: JsonObject? = null,
    @SerialName("con") val consentState: ConsentStateMessage? = null,
    @SerialName("ctx")val dataplanContext: DataplanContextMessage? = null,
    @SerialName("sh")val sessionHistory: JsonObject? = null,
    @SerialName("msgs")val messages: List<EventMessage>? = null,
    @SerialName("fsr")val reportingMessages: List<ReportingMessageMessage>? = null,
    @SerialName("ai")val appInfo: AppInfoMessage? = null,
    @SerialName("di")val deviceInfo: DeviceInfoMessage? = null,
    @SerialName("ui")val identities: List<IdentityType>? = null,
    @SerialName("ua")val attributes: JsonObject? = null
): ServerMessageObject()


@Serializable
class LocationMessage(
    @SerialName("lat")val latitude: Double? = null,
    @SerialName("lng")val longitude: Double? = null,
    @SerialName("acc")val accuracy: Float? = null
): ServerMessageObject()

@Serializable
class EventMessage: ServerMessageObject() {
    @SerialName("ct")
    var timeStamp: Long? = null

    @SerialName("id")
    var id: String? = null

    @SerialName("sid")
    var sessionId: String? = null

    @SerialName("sct")
    var sessionStartTimestamp: Long? = null

    @SerialName("lc")
    var location: LocationMessage? = null

    @SerialName("attrs")
    var attributes: JsonObject? = null

    @SerialName("dt")
    var messageType: String? = null

    @SerialName("n")
    var name: String? = null

    @SerialName("dct")
    var dataConnection: String? = null

    @SerialName("cs")
    var stateInfo: StateInfoMessage? = null

    @SerialName("el")
    var eventDuration: Double? = null

    @SerialName("flags")
    var eventFlats: JsonObject? = null

    @SerialName("t")
    var stateTransitionType: String? = null

    @SerialName("pd")
    var commerceProductActionObject: ProductActionObject? = null

    @SerialName("sn")
    var commerceScreenName: String? = null

    @SerialName("ni")
    var commerceNonInteraction: Boolean? = null

    @SerialName("cu")
    var commerceCurrency: String? = null

    @SerialName("ti")
    var transactionId: String? = null

    @SerialName("ta")
    var transactionAffiliation: String? = null

    @SerialName("tt")
    var transactionTax: Double? = null

    @SerialName("ts")
    var transactionShipping: Double? = null

    @SerialName("tcc")
    var transactionCouponCode: String? = null


    @SerialName("pm")
    var promotionActionObject: PromotionActionObject? = null


    @SerialName("pi")
    var impressionObject: List<ImpressionMessage>? = null

    @SerialName("nsi")
    var interruptions: Int? = null

    @SerialName("ifr")
    var isFirstRun: Boolean? = null

    @SerialName("iu")
    var isAppUpgrade: Boolean? = null
}

@Serializable
class ProductActionObject(
    @SerialName("an")val action: String,
    @SerialName("pl")val productList: List<ProductMessage>,
    @SerialName("tr")var transactionRevenue: Double? = null): ServerMessageObject()

@Serializable
class PromotionActionObject(
    @SerialName("an")val action: String,
    @SerialName("pl")val promotions: List<PromotionMessage>? = null): ServerMessageObject()

@Serializable
class PromotionMessage(
    @SerialName("id")val id: String,
    @SerialName("nm")val name: String? = null,
    @SerialName("cr")val creative: String? = null,
    @SerialName("ps")val position: String? = null
): ServerMessageObject()


@Serializable
class ProductMessage(
    @SerialName("nm") val name: String,
    @SerialName("ca") val category: String? = null,
    @SerialName("cc") val couponCode: String? = null,
    @SerialName("id") val sku: String? = null,
    @SerialName("ps") val position: Int? = null,
    @SerialName("pr") val price: Double? = null,
    @SerialName("qt")val quantity: Double? = null,
    @SerialName("act") val timeAdded: Long? = null,
    @SerialName("tpa") val totalAmount: Double? = null,
    @SerialName("br") val brand: String? = null,
    @SerialName("va")val variant: String? = null,
    @SerialName("attrs") val customAtributes: JsonObject? = null
): ServerMessageObject()

@Serializable
class ImpressionMessage(
    @SerialName("pil")val location: String,
    @SerialName("pl")val productList: List<ProductMessage>
): ServerMessageObject()

@Serializable
class DataplanContextMessage(
    @SerialName("id") val dataplanId: String,
    @SerialName("v")val dataplanVersion: String?
): ServerMessageObject()

@Serializable
class DeviceInfoMessage (
    @SerialName("bid")val buildId: String? = null,
    @SerialName("b") val brand: String? = null,
    @SerialName("p") val product: String? = null,
    @SerialName("dn") val device: String? = null,
    @SerialName("dma") val manufacturer: String? = null,
    @SerialName("dp") val platform: String? = null,
    @SerialName("dosv") val osVersion: String? = null,
    @SerialName("dosvi") val osVersionInt: Int? = null,
    @SerialName("dmdl") val model: String? = null,
    @SerialName("vr") val releaseVersion: String? = null,
    @SerialName("duid") val deviceId: String? = null,
    @SerialName("anid") val androidId: String? = null,
    @SerialName("ouid") val openUdid: String? = null,
    @SerialName("dbe") val deviceBluetoothEnabled: Boolean? = null,
    @SerialName("dbv") val deviceBluetoothVersion: String? = null,
    @SerialName("dsnfc") val deviceSupportsNfc: Boolean? = null,
    @SerialName("dst") val deviceSupportsTelephony: Boolean? = null,
    @SerialName("jb") val deviceRootedObject: DeviceRootedObject? = null,
    @SerialName("dsh") val screenHeight: Int? = null,
    @SerialName("dsw") val screenWidth: Int? = null,
    @SerialName("dpi") val screenDpi: Int? = null,
    @SerialName("dc") val deviceCountry: String? = null,
    @SerialName("dlc") val deviceLocaleCountry: String? = null,
    @SerialName("dll") val deviceLocaleLanguage: String? = null,
    @SerialName("tzn") val deviceTimezoneName: String? = null,
    @SerialName("tz") val timezone: Int? = null,
    @SerialName("nca") val networkCarrier: String? = null,
    @SerialName("nc") val networkCountry: String? = null,
    @SerialName("mcc") val countryCode: String? = null,
    @SerialName("mnc") val mobileNetworkCode: String? = null,
    @SerialName("it") val isTablet: Boolean? = null,
    @SerialName("idst") val isInDst: Boolean? = null,
    @SerialName("imei") val deviceImei: String? = null,
    @SerialName("se") val isPushSoundEnabled: Boolean? = null,
    @SerialName("ve") val isPushVibrationEnabled: Boolean? = null): ServerMessageObject()

@Serializable
class DeviceRootedObject(
    @SerialName("cydia") val deviceRootedCYDIA: Boolean?
): ServerMessageObject()

@Serializable
class AppInfoMessage (
    @SerialName("apn") val packageName: String? = null,
    @SerialName("av") val version: String? = null,
    @SerialName("abn") val versionCode: String? = null,
    @SerialName("ain") val installerName: String? = null,
    @SerialName("an") val name: String? = null,
    @SerialName("bid") val buildId: String? = null,
    @SerialName("dbg") val debugSigning: Boolean? = null,
    @SerialName("pir") val pirated: Boolean? = null,
    @SerialName("ict") val mparticleInstallTime: Long? = null,
    @SerialName("lc") val launchCount: Int? = null,
    @SerialName("lud") val lastUseDate: Long? = null,
    @SerialName("lcu") val launchCountSinceUpgrade: Int? = null,
    @SerialName("ud") val upgradeDate: Long? = null,
    @SerialName("env") val environment: Int? = null,
    @SerialName("ir") val installReferrer: String? = null,
    @SerialName("fi") val firstSeenInstall: Boolean? = null
): ServerMessageObject()

@Serializable
class ReportingMessageMessage (
    @SerialName("mid")val moduleId: Int = 0,
    @SerialName("dt")val messageType: String? = null,
    @SerialName("ct")val timestamp: Long = 0,
    @SerialName("attrs")val attributes: Map<String, String>? = null,
    @SerialName("n")val eventOrScreenName: String? = null,
    @SerialName("et")val eventType: String? = null,
    @SerialName("proj")val projectionReports: List<ProjectionReportMessage>? = null,
    @SerialName("r")val isPushRegistrationEvent: Boolean? = false,
    @SerialName("s")val optout: Boolean?,
    @SerialName("c")val exceptionClassName: String?
): ServerMessageObject()

@Serializable
class ProjectionReportMessage (
    @SerialName("pid")val projectionId: String,
    @SerialName("dt")val messageType: String,
    @SerialName("name")val name: String,
    @SerialName("et")val eventType: EventType
): ServerMessageObject()

@Serializable
class ConsentStateMessage(
    @SerialName("gdpr")val consentStateGdpr: Map<String, ConsentStateInstanceMessage>? = null,
    @SerialName("ccpa")val consentStateCcpa: Map<String, ConsentStateInstanceMessage>? = null
): ServerMessageObject()

@Serializable
class ConsentStateInstanceMessage(
    @SerialName("c")val consented: Boolean,
    @SerialName("d")val document: String?,
    @SerialName("ts")val timestamp: Long,
    @SerialName("l")val location: String?,
    @SerialName("h")val hardwareId: String?
): ServerMessageObject()

@Serializable
class StateInfoMessage {
    @SerialName("fds")
    var availableDisk: Long? = null

    @SerialName("efds")
    var externalDisk: Long? = null

    @SerialName("amt")
    var appMemoryUsage: Long? = null
    @SerialName("ama")
    var freeMemory: Long? = null
    @SerialName("amm")
    var maxMemory: Long? = null

    @SerialName("sma")
    var avaialableMemery: Long? = null
    @SerialName("tsm")
    var totalMemory: Long? = null

    @SerialName("bl")
    var batteryLevel: Double? = null
    @SerialName("tss")
    var timeSinceStart: Long? = null

    @SerialName("gps")
    var hasGps: Boolean? = null

    @SerialName("dct")
    var activeNetworkName: String? = null

    @SerialName("so")
    var orientation: Int? = null
    @SerialName("sbo")
    var barOrientation: Int? = null
    @SerialName("sml")
    var isMemoryLow: Boolean? = null
    @SerialName("smt")
    var systemMemoryThreshold: Long? = null

    @SerialName("ant")
    var networkType: String? = null
}