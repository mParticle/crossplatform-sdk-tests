package com.mparticle.messages

import com.mparticle.messages.events.BatchMessage
import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonObject

@Serializable()
data class ConfigResponseMessage(
    @SerialName("dt") val type: String? = null,
    @SerialName("id") val id: String? = null,
    @SerialName("dbg") val debug: Boolean? = null,
    @SerialName("ct") val timeStamp: Long? = null,
    @SerialName("cue") val logUnhandledExceptions: String? = null,
    @SerialName("pmk") val pushMessages: List<String?>? = null,
    @SerialName("rp") val ramp: Int? = null,
    @SerialName("oo") val optOut: Boolean? = null,
    @SerialName("cms") val providerPersistence: JsonObject? = null,
    @SerialName("stl") val sessionTimeout: Long? = null,
    @SerialName("uitl") val uploadInterval: Long? = null,
    @SerialName("tri") val triggerItems: TriggerItemsMessage? = null,
    @SerialName("pio") val influenceOpenMessage: Long? = null,
    @SerialName("rdlat") val aaidLat: Boolean? = null,
    @SerialName("dpmd") val devicePerformanceMetricsDisabled: Boolean? = null,
    @SerialName("wst") val workspaceToken: String? = null,
    @SerialName("alias_max_window") val aliasMaxWindow: Int? = null,
    @SerialName("eks") val kits: List<KitConfigMessage>? = null,
    @SerialName("inhd") val includeSessionHistory: Boolean? = null
): DTO()

@Serializable
data class TriggerItemsMessage (
    @SerialName("mm") val triggerMatches: List<String>? = null,
    @SerialName("evts") val triggerMessageHashes: List<String>? = null
): DTO()

@Serializable
data class KitConfigMessage(
    @SerialName("id") val id: Int,
    @SerialName("avf") val a: AttributeValueFilter? = null,
    @SerialName("as") val properties: Map<String?, String?>? = null,
    @SerialName("hs") val keyFilters: FilterMessage? = null,
    @SerialName("bk") val bracketing: BracketMessage? = null,
    @SerialName("pr") val projections: List<JsonObject>? = null,
    @SerialName("crvf") val consentForwardingRules: ConsentForwardingRuleMessage? = null,
    @SerialName("eau") val excludeAnnonymousUsers: Boolean? = null
): DTO()

@Serializable
class ConsentForwardingRuleMessage(
    @SerialName("i") val shouldIncludeMatches: Boolean? = null,
    @SerialName("v") val rules: List<Rules>? = null,
): DTO()

@Serializable
class Rules(
    @SerialName("h") val valueHash: Int,
    @SerialName("c") val consented: Boolean
): DTO()

@Serializable
class BracketMessage (
    @SerialName("lo") val lowBracket: Int? = null,
    @SerialName("hi") val highBracket: Int? = null
): DTO()

@Serializable
class FilterMessage (
    @SerialName("et") val eventTypesFilter: Map<Int, Boolean>? = null,
    @SerialName("ec") val eventNameFilters: Map<Int, Boolean>? = null,
    @SerialName("ea") val eventAttributeFilter: Map<Int, Boolean>? = null,
    @SerialName("svec") val screenNameFilters: Map<Int, Boolean>? = null,
    @SerialName("svea") val screenAttributeFilters: Map<Int, Boolean>? = null,
    @SerialName("uid") val userIdentityFilter: Map<Int, Boolean>? = null,
    @SerialName("ua") val userAttributeFilter: Map<Int, Boolean>? = null,
    @SerialName("cea") val commerceAttributeFilter: Map<Int, Boolean>? = null,
    @SerialName("ent") val commerceEntityFilter: Map<Int, Boolean>? = null,
    @SerialName("afa") val commerceEntityAttributeFilters: Map<Int, Map<Int, Boolean>>? = null,
    @SerialName("eaa") val eventAttributeAddUser: Map<Int, Boolean>? = null,
    @SerialName("eas") val eventAttributeSingleItemUser: Map<Int, Boolean>? = null,
    @SerialName("ear") val eventAttributeRemoveUser: Map<Int, Boolean>? = null
): DTO()

@Serializable
class AttributeValueFilter (
    @SerialName("i") val shouldIncludeMatches: Boolean? = null,
    @SerialName("a") val attribute: Int? = null,
    @SerialName("v") val value: String? = null
): DTO()