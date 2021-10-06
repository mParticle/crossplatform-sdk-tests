package com.mparticle.api.identity

expect class ConsentState {
    var gdprConsentState: MutableMap<String, Consent>?
    var ccpaConsent: Consent?
}

expect class Consent {
    var isConsented: Boolean
    var document: String?
    var timestamp: Long?
    var location: String?
    var hardwareId: String?
}