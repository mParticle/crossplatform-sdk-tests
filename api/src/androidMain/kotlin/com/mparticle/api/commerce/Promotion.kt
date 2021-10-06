package com.mparticle.api.commerce

import com.mparticle.commerce.Promotion as PromotionAndroid

actual class Promotion(val promotion: PromotionAndroid) {
    actual constructor(): this(PromotionAndroid())

    actual var creative: String? by promotion::creative
    actual var id: String? by promotion::id
    actual var name: String? by promotion::name
    actual var position: String? by promotion::position
}