package com.mparticle.api.media.events

expect class Options() {
    /**
     * Update the playhead position for the given event, and for the MediaSession
     */
    var currentPlayheadPosition: Long?

    /**
     * Custom Attributes to be included within the generated {@link MediaEvent}. The key values
     * can either be values defined in {@link com.mparticle.media.events.OptionsAttributeKeys}
     */
    var customAttributes: Map<String, String>
}