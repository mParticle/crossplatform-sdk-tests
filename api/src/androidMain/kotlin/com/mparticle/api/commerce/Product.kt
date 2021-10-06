package com.mparticle.api.commerce

import com.mparticle.api.NullableDelegate
import com.mparticle.commerce.ProductAndroidInit
import com.mparticle.commerce.Product as ProductAndroid

actual class Product(val product: ProductAndroid.Builder) {
    actual constructor(): this(ProductAndroidInit())
    actual var customAttributes: Map<String, String>? by  NullableDelegate { product.customAttributes(it) }
    actual var name: String? by NullableDelegate { product.name(it!!) }
    actual var category: String? by NullableDelegate { product.category(it) }
    actual var couponCode: String? by NullableDelegate { product.couponCode(it) }
    actual var sku: String? by NullableDelegate { product.sku(it!!) }
    actual var position: Int? by NullableDelegate { product.position(it) }
    actual var price: Double by NullableDelegate { product.unitPrice(it) }
    actual var quantity: Double by NullableDelegate { product.quantity(it) }
    actual var brand: String? by NullableDelegate { product.brand(it) }
    actual var variant: String? by NullableDelegate { product.variant(it) }
}