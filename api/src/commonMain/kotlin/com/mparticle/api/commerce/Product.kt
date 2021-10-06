package com.mparticle.api.commerce

expect class Product() {
    var customAttributes: Map<String, String>?
    var name: String?
    var category: String?
    var couponCode: String?
    var sku: String?
    var position: Int?
    var price: Double
    var quantity: Double
    var brand: String?
    var variant: String?
}

fun Product(initializer: Product.() -> Unit): Product =
    Product().apply(initializer)

