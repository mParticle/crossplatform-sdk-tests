package com.mparticle.api.commerce

import com.mparticle.api.*
import com.mparticle.api.events.*
import com.mparticle.commerce.CommerceEventAndroidInit
import com.mparticle.commerce.CommerceEvent as CommerceEventAndroid
import com.mparticle.commerce.Impression as ImpressionAndroid


actual open class CommerceEvent(internal val commerceEventBuilder: CommerceEventAndroid.Builder):BaseEvent(commerceEventBuilder) {
    actual var screen: String? by NullableDelegate { commerceEventBuilder.screen(it) }
    actual var nonIteraction: Boolean by BooleanDelegate { commerceEventBuilder.nonInteraction(it)}
    actual var internalEventName: String? by NullableDelegate { commerceEventBuilder.internalEventName(it)}
}

actual class ProductBuilder(commerceEventBuilder: CommerceEventAndroid.Builder): CommerceEvent(commerceEventBuilder) {
    actual constructor(productAction: Commerce.ProductActionEnum) : this(CommerceEventAndroidInit())

    actual var products: List<Product> by GenericDelegate(listOf()) {
        it
            .map { product -> product.product.build() }
            .let { products -> commerceEventBuilder.products(products) }
    }
    actual var productListName: String? by NullableDelegate { commerceEventBuilder.productListName(it)}
    actual var productListSource: String? by NullableDelegate { commerceEventBuilder.productListSource(it)}
    actual var checkoutStep: Int? by NullableDelegate { commerceEventBuilder.checkoutStep(it)}
    actual var checkoutOptions: String? by NullableDelegate { commerceEventBuilder.checkoutOptions(it) }
    actual var currency: String? by NullableDelegate { commerceEventBuilder.currency(it) }
    actual var transactionAttributes: TransactionAttributes? by NullableDelegate { commerceEventBuilder.transactionAttributes(it!!.transactionAttributes)}
}

actual class PromotionBuilder(commerceEventBuilder: CommerceEventAndroid.Builder): CommerceEvent(commerceEventBuilder) {
    actual constructor(promotionAction: Commerce.PromotionActionEnum): this(CommerceEventAndroidInit())

    actual var promotions: List<Promotion> by GenericDelegate(listOf()) {
        it
            .map { promotion -> promotion.promotion }
            .let { promotions -> commerceEventBuilder.promotions(promotions) }
    }
}

actual class ImpressionBuilder actual constructor(impressionName: String): CommerceEvent(CommerceEventAndroidInit().apply { addImpression(ImpressionAndroid(impressionName, product.product.build())) }) {

    actual var impressions: List<Impression> by GenericDelegate(listOf()) {
        it.map { it.toImpression() }
            .let { commerceEventBuilder.impressions(it) }
    }

    fun Impression.toImpression(): com.mparticle.commerce.Impression? {
        return products?.let {
            if (it.size > 0) {
                val androidImpression = com.mparticle.commerce.Impression(listName, it[0].product.build())
                if (it.size > 1) {
                    it.subList(1, it.size)
                        .forEach { product ->
                            androidImpression.addProduct(product.product.build())
                        }
                }
                androidImpression
            } else {
                null
            }
        }
    }
}