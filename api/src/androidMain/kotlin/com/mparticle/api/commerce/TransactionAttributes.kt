package com.mparticle.api.commerce

import com.mparticle.api.NullableDelegate
import com.mparticle.commerce.TransactionAttributes as TransactionAttributesAndroid

actual class TransactionAttributes(val transactionAttributes: TransactionAttributesAndroid) {
    actual constructor(): this(TransactionAttributesAndroid())

    actual var affiliation: String? by transactionAttributes::affiliation
    actual var revenue: Double? by transactionAttributes::revenue
    actual var shipping: Double? by transactionAttributes::shipping
    actual var tax: Double? by transactionAttributes::tax
    actual var couponCode: String? by transactionAttributes::couponCode
    actual var id: String? by NullableDelegate { transactionAttributes.id = it!! }
}