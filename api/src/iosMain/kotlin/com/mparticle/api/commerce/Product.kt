package com.mparticle.api.commerce

import cocoapods.mParticle_Apple_SDK.MPProduct
import com.mparticle.api.*

actual class Product(val product: MPProduct) {
    actual constructor(): this(MPProduct())

    actual var customAttributes: Map<String, String>?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var name: String? by nullableProperty(product::name)
    actual var category: String? by property(product::category)
    actual var couponCode: String? by property(product::couponCode)
    actual var sku: String? by nullableProperty(product::sku)
    actual var position: Int? by TransformDelegate(product::position, intULongTransformer)
    actual var price: Double by TransformDelegate(product::price, doubleNSNumberTransformer)
    actual var quantity: Double by TransformDelegate(product::quantity, doubleNonNullNSNumberTransformer)
    actual var brand: String? by property(product::brand)
    actual var variant: String? by property(product::variant)
}