package com.mparticle.api.media.events

import com.mparticle.media.events.Options as OptionsAndroid
actual class Options {
    val optionsAndroid: OptionsAndroid = OptionsAndroid()

    actual var currentPlayheadPosition: Long? by optionsAndroid::currentPlayheadPosition
    actual var customAttributes: Map<String, String> by optionsAndroid::customAttributes
}

