package com.mparticle.api.jsApi

external class ECommerceJs {
    fun setCurrencyCode(code: String)
    fun createProduct(
        name: String,
        sku: String,
        price: Number,
        quantity: Number?,
        variant: String?,
        category: String?,
        brand: String?,
        position: Number?,
        coupon: String?,
        attributes: Map<String, String>
    )

    fun createPromotion(
        id: String,
        creative: String?,
        name: String?,
        position: Number?
    )

    fun createImpression(
        name: String,
        product: Any
    )

    fun createTransactionAttributes(
        id: String,
        affiliation: String?,
        couponCode: String?,
        revenue: Number,
        shipping: String,
        tax: Number
    )

    fun logCheckout(
        step: Number,
        option: String?,
        attrs: Map<String, String?>,
        customFlags: Map<String, String?>
    )

    fun logProductAction (
        productActionType: Number,
        product: Any,
        attrs: Map<String, String>?,
        customFlags: Map<String, List<String?>?>,
        transactionAttributes: TransactionAttributesJs,
        eventOptions: MPEventOptionsJs
    )

    fun logPurchase(
        transactionAttributes: TransactionAttributesJs,
        product: ProductJs,
        clearCart: Boolean,
        attrs: Map<String, String?>,
        customFlags: Map<String, List<String?>?>
    )

    fun logPromotion(
        type: Number,
        promotion: PromotionJs,
        attrs: Map<String, String?>,
        customFlags: Map<String, List<String?>?>,
        eventOptions: MPEventOptionsJs
    )

    fun logImpression(
        impression: ImpressionJs,
        attrs: Map<String, String?>,
        customFlags: Map<String, List<String?>?>,
        eventOptions: MPEventOptionsJs
    )

    fun logRefund(
        transactionAttributes: TransactionAttributesJs,
        product: ProductJs,
        clearCart: Boolean,
        attrs: Map<String, String?>,
        customFlags: Map<String, List<String?>?>
    )
}

class ProductJs: Map<String, String> by mutableMapOf()
class PromotionJs: Map<String, String> by mutableMapOf()
class ImpressionJs: Map<String, String> by mutableMapOf()
class TransactionAttributesJs: Map<String, String> by mutableMapOf()