package com.mparticle.api.identity

import com.mparticle.consent.CCPAConsent
import com.mparticle.consent.ConsentInstance
import com.mparticle.consent.ConsentState
import com.mparticle.consent.GDPRConsent

actual class ConsentState(private val consentState: ConsentState? = null): ConsentState.Builder() {
    actual var gdprConsentState: MutableMap<String, Consent>? = null
        get() = consentState?.gdprConsentState?.entries?.associate { it.key to Consent(it.value) }?.toMutableMap() ?: field
        set(value) {
            field = value
            setGDPRConsentState(value?.entries?.associate { it.key to it.value.toGDPRConsent() })
        }
    actual var ccpaConsent: Consent? = null
        get() = field
        set(value) {
            field = value
            if (value == null) {
                removeCCPAConsentState()
            } else {
                setCCPAConsentState(value.toCCPAConsent())
            }
        }

}

fun Consent.toGDPRConsent(): GDPRConsent = GDPRConsent.builder(isConsented)
    .document(document)
    .hardwareId(hardwareId)
    .location(location)
    .timestamp(timestamp)
    .build()

fun Consent.toCCPAConsent(): CCPAConsent = CCPAConsent.builder(isConsented)
    .document(document)
    .hardwareId(hardwareId)
    .location(location)
    .timestamp(timestamp)
    .build()

actual class Consent(val consentInstance: ConsentInstance) {
    actual var isConsented: Boolean
        get() = consentInstance.isConsented
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    actual var document: String?
        get() = consentInstance.document
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    actual var timestamp: Long?
        get() = consentInstance.timestamp
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    actual var location: String?
        get() = consentInstance.location
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
    actual var hardwareId: String?
        get() = consentInstance.hardwareId
        set(value) { throw java.lang.RuntimeException("Read Only Instance!")}
}