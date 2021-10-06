package com.mparticle.api.commerce

expect class Promotion() {
    var creative: String?
    var id: String?
    var name: String?
    var position: String?
}

fun Promotion(initializer: Promotion.() -> Unit): Promotion =
    Promotion().apply(initializer)
