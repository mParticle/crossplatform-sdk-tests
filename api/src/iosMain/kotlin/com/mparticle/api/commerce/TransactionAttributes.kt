package com.mparticle.api.commerce

import cocoapods.mParticle_Apple_SDK.MPTransactionAttributes
import com.mparticle.api.TransformDelegate
import com.mparticle.api.doubleNSNumberTransformer
import com.mparticle.api.nullableDoubleNSNumberTransformer
import com.mparticle.api.property

actual class TransactionAttributes(val transactionAttributes: MPTransactionAttributes) {
    actual constructor(): this(MPTransactionAttributes())
    actual var affiliation: String? by property(transactionAttributes::affiliation)
    actual var revenue: Double? by TransformDelegate(transactionAttributes::revenue, nullableDoubleNSNumberTransformer)
    actual var shipping: Double? by TransformDelegate(transactionAttributes::shipping, nullableDoubleNSNumberTransformer)
    actual var tax: Double? by TransformDelegate(transactionAttributes::tax, nullableDoubleNSNumberTransformer)
    actual var couponCode: String? by property(transactionAttributes::couponCode)
    actual var id: String? by property(transactionAttributes::transactionId)
}