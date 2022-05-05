package com.mparticle.api.jsApi

external class ConsentJs {
    fun createCCPAConsent(optOut: Boolean, timestamp: Number, consentDocument: String, location: String, hardwareId: String): CCPAConsentStateJs
    fun createGDPRConsent(optOut: Boolean, timestamp: Number, consentDocument: String, location: String, hardwareId: String): GDPRConsentStateJs
    fun createConsentState(): ConsentStateJs


}

class CCPAConsentStateJs: Map<String, Any> by mutableMapOf()
class GDPRConsentStateJs: Map<String, Any> by mutableMapOf()
class ConsentStateJs: Map<String, Any> by mutableMapOf()
