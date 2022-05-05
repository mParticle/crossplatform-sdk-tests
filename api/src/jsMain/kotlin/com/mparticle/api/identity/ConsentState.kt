package com.mparticle.api.identity

actual class ConsentState {
    actual var gdprConsentState: MutableMap<String, Consent>?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var ccpaConsent: Consent?
        get() = TODO("Not yet implemented")
        set(value) {}
}

actual class Consent {
    actual var isConsented: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var document: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var timestamp: Long?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var location: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var hardwareId: String?
        get() = TODO("Not yet implemented")
        set(value) {}
}