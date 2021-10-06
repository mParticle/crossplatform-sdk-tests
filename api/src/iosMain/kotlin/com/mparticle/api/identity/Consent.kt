package com.mparticle.api.identity

import cocoapods.mParticle_Apple_SDK.MPCCPAConsent
import cocoapods.mParticle_Apple_SDK.MPConsentState
import cocoapods.mParticle_Apple_SDK.MPGDPRConsent

actual class ConsentState(val consentState: MPConsentState = MPConsentState()) {

    actual var gdprConsentState: MutableMap<String, Consent>? = null
        get() = consentState.gdprConsentState()
            ?.map { it.key to it.value as MPGDPRConsent }
            ?.associate { it.first.toString() to Consent(it.second, null) }
            ?.toMutableMap()
            ?: field
        set(value) {
            field = value
            consentState.setGDPRConsentState(value?.entries?.associate { it.key to it.value.toGDPRConsent() })
        }
    actual var ccpaConsent: Consent? = null
        get() = consentState.ccpaConsentState()?.let { Consent(null, it) } ?: field
        set(value) {
            field = value
            if (value == null) {
                consentState.removeCCPAConsentState()
            } else {
                consentState.setCCPAConsentState(value.toCCPAConsent())
            }
        }

    fun Consent.toGDPRConsent(): MPGDPRConsent = MPGDPRConsent().apply {
        setConsented(isConsented)
        setDocument(document)
        setHardwareId(hardwareId)
        setLocation(location)
        setTimestamp(timestamp)
    }

    fun Consent.toCCPAConsent(): MPCCPAConsent = MPCCPAConsent().apply {
        setConsented(isConsented)
        setDocument(document)
        setHardwareId(hardwareId)
        setLocation(location)
        setTimestamp(timestamp)
    }
}


actual class Consent(val gdprConsentInstance: MPGDPRConsent?, val ccpaConsentInstance: MPCCPAConsent?) {

    actual var isConsented: Boolean
        get() = gdprConsentInstance?.consented ?: ccpaConsentInstance!!.consented
        set(value) { throw RuntimeException("Read Only Instance!")}
    actual var document: String?
        get() = gdprConsentInstance?.document ?: ccpaConsentInstance!!.document
        set(value) { throw RuntimeException("Read Only Instance!")}
    actual var timestamp: Long?
        get() = gdprConsentInstance?.timestamp?.timeIntervalSinceReferenceDate?.toLong() ?: ccpaConsentInstance!!.timestamp.timeIntervalSinceReferenceDate.toLong()
        set(value) { throw RuntimeException("Read Only Instance!")}
    actual var location: String?
        get() = gdprConsentInstance?.location ?: ccpaConsentInstance!!.location
        set(value) { throw RuntimeException("Read Only Instance!")}
    actual var hardwareId: String?
        get() = gdprConsentInstance?.hardwareId ?: ccpaConsentInstance!!.hardwareId
        set(value) { throw RuntimeException("Read Only Instance!")}
}