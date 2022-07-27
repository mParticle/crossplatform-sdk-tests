package com.mparticle.messages

import com.mparticle.messages.events.BatchMessage
import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonObject

@Serializable()
data class ConfigResponseMessage(
    @SerialName("dt") var type: String? = null,
    @SerialName("id") var id: String? = null,
    @SerialName("dbg") var debug: Boolean? = null,
    @SerialName("ct") var timeStamp: Long? = null,
    @SerialName("cue") var logUnhandledExceptions: String? = null,
    @SerialName("pmk") var pushMessages: List<String?>? = null,
    @SerialName("rp") var ramp: Int? = null,
    @SerialName("oo") var optOut: Boolean? = null,
    @SerialName("cms") var providerPersistence: JsonObject? = null,
    @SerialName("stl") var sessionTimeout: Long? = null,
    @SerialName("uitl") var uploadInterval: Long? = null,
    @SerialName("tri") var triggerItems: TriggerItemsMessage? = null,
    @SerialName("pio") var influenceOpenMessage: Long? = null,
    @SerialName("rdlat") var aaidLat: Boolean? = null,
    @SerialName("dpmd") var devicePerformanceMetricsDisabled: Boolean? = null,
    @SerialName("wst") var workspaceToken: String? = null,
    @SerialName("alias_max_window") var aliasMaxWindow: Int? = null,
    @SerialName("eks") var kits: List<KitConfigMessage>? = null,
    @SerialName("inhd") var includeSessionHistory: Boolean? = null,
    @SerialName("soc") var soc: Long? = null
): DTO()

@Serializable
data class TriggerItemsMessage (
    @SerialName("mm") var triggerMatches: List<String>? = null,
    @SerialName("evts") var triggerMessageHashes: List<String>? = null
): DTO()

@Serializable
data class KitConfigMessage(
    @SerialName("id") val id: Int,
    @SerialName("avf") var attributeValueFilters: List<AttributeValueFilter?>? = null,
    @SerialName("as") var properties: Map<String?, String?>? = null,
    @SerialName("hs") var keyFilters: FilterMessage? = null,
    @SerialName("bk") var bracketing: BracketMessage? = null,
    @SerialName("pr") var projections: List<JsonObject>? = null,
    @SerialName("crvf") var consentForwardingRules: ConsentForwardingRuleMessage? = null,
    @SerialName("eau") var excludeAnnonymousUsers: Boolean? = null
): DTO()

@Serializable
class ConsentForwardingRuleMessage(
    @SerialName("i") var shouldIncludeMatches: Boolean? = null,
    @SerialName("v") var rules: List<Rules>? = null,
): DTO()

@Serializable
class Rules(
    @SerialName("h") var valueHash: Int,
    @SerialName("c") var consented: Boolean
): DTO()

@Serializable
class BracketMessage (
    @SerialName("lo") var lowBracket: Int? = null,
    @SerialName("hi") var highBracket: Int? = null
): DTO()

@Serializable
class FilterMessage (
    @SerialName("et") var eventTypesFilter: Map<Int, Boolean>? = null,
    @SerialName("ec") var eventNameFilters: Map<Int, Boolean>? = null,
    @SerialName("ea") var eventAttributeFilter: Map<Int, Boolean>? = null,
    @SerialName("svec") var screenNameFilters: Map<Int, Boolean>? = null,
    @SerialName("svea") var screenAttributeFilters: Map<Int, Boolean>? = null,
    @SerialName("uid") var userIdentityFilter: Map<Int, Boolean>? = null,
    @SerialName("ua") var userAttributeFilter: Map<Int, Boolean>? = null,
    @SerialName("cea") var commerceAttributeFilter: Map<Int, Boolean>? = null,
    @SerialName("ent") var commerceEntityFilter: Map<Int, Boolean>? = null,
    @SerialName("afa") var commerceEntityAttributeFilters: Map<Int, Map<Int, Boolean>>? = null,
    @SerialName("eaa") var eventAttributeAddUser: Map<Int, Boolean>? = null,
    @SerialName("eas") var eventAttributeSingleItemUser: Map<Int, Boolean>? = null,
    @SerialName("ear") var eventAttributeRemoveUser: Map<Int, Boolean>? = null
): DTO()

@Serializable
class AttributeValueFilter (
    @SerialName("i") var shouldIncludeMatches: Boolean? = null,
    @SerialName("a") var attribute: Int? = null,
    @SerialName("v") var value: String? = null
): DTO()