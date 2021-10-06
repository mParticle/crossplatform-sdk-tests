package com.mparticle.api.commerce

class Impression(val listName: String, var products: List<Product> = listOf()) {
    constructor(listName: String, product: Product): this(listName, listOf(product))
}

fun Impression(listName: String, initializer: Impression.() -> Unit): Impression =
    Impression(listName).apply(initializer)



//ideal Commerce setup
//
//fun `log some events`() {
//    CommerceEvent(Product.AddToCart) {
//        product("my product") {
//            sku = "12345"
//            price = 1.23
//        }
//        product {
//            name = "some ohter product"
//            sku = "23232ff"
//            price = 3.22
//        }
//        product("Product3", "12321", 100.0)
//    }
//}