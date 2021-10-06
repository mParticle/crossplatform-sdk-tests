package com.mparticle.api.commerce

import cocoapods.mParticle_Apple_SDK.MPPromotion
import com.mparticle.api.property

actual class Promotion(val promotion: MPPromotion) {
    actual constructor(): this(MPPromotion())

    actual var creative: String? by property(promotion::creative)
    actual var id: String? by property(promotion::promotionId)
    actual var name: String? by property(promotion::name)
    actual var position: String? by property(promotion::position)
}