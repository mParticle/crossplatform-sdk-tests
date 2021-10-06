package com.mparticle.api.commerce

class Impression(val listName: String, var products: List<Product> = listOf()) {
    constructor(listName: String, product: Product): this(listName, listOf(product))
}

fun Impression(listName: String, initializer: Impression.() -> Unit): Impression =
    Impression(listName).apply(initializer)