package com.mparticle.messages.events

import com.mparticle.messages.DTO
import com.mparticle.messages.EventType
import com.mparticle.messages.UserIdentities
import kotlinx.serialization.Polymorphic
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject

@Serializable
class BatchMessage(
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
    @SerialName("ctx") val dataplanContext: DataplanContextMessage? = null,
    @SerialName("msgs") val messages: List<@Polymorphic BaseEvent> = listOf(),
    @SerialName("fsr") val reportingMessages: List<ReportingMessageMessage>? = null,
    @SerialName("ai") val appInfo: AppInfoMessage? = null,
    @SerialName("di") val deviceInfo: DeviceInfoMessage? = null,
    @SerialName("ui") val identities: List<UserIdentities>? = null,
    @SerialName("ua") val attributes: JsonObject? = null,
    @SerialName("sh") val sessionHistory: List<@Polymorphic BaseEvent> = listOf(),
    @SerialName("mb") val modifiedBatch: Boolean? = null
): DTO()

@Serializable
class DataplanContextMessage(
    @SerialName("dpln") val dataplan: Dataplan
)

@Serializable
class Dataplan (
    @SerialName("id") val dataplanId: String,
    @SerialName("v") val dataplanVersion: Int? = null
)

@Serializable
class DeviceInfoMessage (
    @SerialName("bid") val buildId: String? = null,
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
    @SerialName("ve") val isPushVibrationEnabled: Boolean? = null)

@Serializable
class DeviceRootedObject(
    @SerialName("cydia") val deviceRootedCYDIA: Boolean?
)

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
)

@Serializable
class ReportingMessageMessage (
    @SerialName("mid") val moduleId: Int = 0,
    @SerialName("dt") val messageType: String? = null,
    @SerialName("ct") val timestamp: Long = 0,
    @SerialName("attrs") val attributes: Map<String, String>? = null,
    @SerialName("n") val eventOrScreenName: String? = null,
    @SerialName("et") val eventType: String? = null,
    @SerialName("proj") val projectionReports: List<ProjectionReportMessage>? = null,
    @SerialName("r") val isPushRegistrationEvent: Boolean? = false,
    @SerialName("s") val optout: Boolean?,
    @SerialName("c") val exceptionClassName: String?
)

@Serializable
class ProjectionReportMessage (
    @SerialName("pid") val projectionId: String,
    @SerialName("dt") val messageType: String,
    @SerialName("name") val name: String,
    @SerialName("et") val eventType: EventType
)

@Serializable
class ConsentStateMessage(
    @SerialName("gdpr") val consentStateGdpr: Map<String, ConsentStateInstanceMessage>? = null,
    @SerialName("ccpa") val consentStateCcpa: Map<String, ConsentStateInstanceMessage>? = null
)

@Serializable
class ConsentStateInstanceMessage(
    @SerialName("c") val consented: Boolean,
    @SerialName("d") val document: String?,
    @SerialName("ts") val timestamp: Long,
    @SerialName("l") val location: String?,
    @SerialName("h") val hardwareId: String?
)

