package com.mparticle.api.media.events

import com.mparticle.api.media.toNSNumber
import cocoapods.mParticle_Apple_Media_SDK.Options as OptionsApple
actual class Options {
    val optionsApple = OptionsApple()
    /**
     * Update the playhead position for the given event, and for the MediaSession
     */
    actual var currentPlayheadPosition: Long?
        get() = optionsApple.currentPlayheadPosition()?.longLongValue
        set(value) {
            optionsApple.setCurrentPlayheadPosition(value.toNSNumber())}

    /**
     * Custom Attributes to be included within the generated {@link MediaEvent}. The key values
     * can either be values defined in {@link com.mparticle.media.events.OptionsAttributeKeys}
     */
    actual var customAttributes: Map<String, String>
        get() = optionsApple.customAttributes()?.entries?.associate { it.key.toString() to it.value.toString() } ?: mapOf()
        set(value) {
            optionsApple.setCustomAttributes(value.toMap())
        }
}