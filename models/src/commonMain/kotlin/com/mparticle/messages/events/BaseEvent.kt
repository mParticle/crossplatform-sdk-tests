package com.mparticle.messages.events

import com.mparticle.messages.LocationMessage
import kotlinx.serialization.*
import kotlinx.serialization.descriptors.SerialDescriptor
import kotlinx.serialization.encoding.Decoder
import kotlinx.serialization.encoding.Encoder
import kotlinx.serialization.json.*

@Polymorphic
@Serializable
abstract class BaseEvent {

    @SerialName("ct")
    var timeStamp: Long? = null

    @SerialName("cs")
    var stateInfo: StateInfoMessage? = null


    @SerialName("id")
    var id: String? = null

    @SerialName("sid")
    var sessionId: String? = null

    @SerialName("sct")
    var sessionStartTimestamp: Long? = null

    @SerialName("lc")
    var location: LocationMessage? = null


    @SerialName("dct")
    var dataConnection: String? = null


    @SerialName("attrs")
    var attributes: JsonObject? = null


    @SerialName("flags")
    var eventFlags: JsonObject? = null

}


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