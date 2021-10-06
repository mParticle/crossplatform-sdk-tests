package com.mparticle.api.commerce

expect class TransactionAttributes() {
    var affiliation: String?
    var revenue: Double?
    var shipping: Double?
    var tax: Double?
    var couponCode: String?
    var id: String?
}

fun TransactionAttributes(initializer: TransactionAttributes.() -> Unit): TransactionAttributes =
    TransactionAttributes().apply(initializer)