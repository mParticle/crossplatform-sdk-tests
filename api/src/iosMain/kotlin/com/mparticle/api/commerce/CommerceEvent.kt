package com.mparticle.api.commerce

import cocoapods.mParticle_Apple_SDK.*
import com.mparticle.api.*
import com.mparticle.api.events.*
import platform.Foundation.NSMutableDictionary
import platform.Foundation.allKeys
import platform.Foundation.valueForKey
import kotlin.reflect.KProperty0


actual open class CommerceEvent(val commerceEvent: MPCommerceEvent = MPCommerceEvent()): BaseEvent(commerceEvent) {
    actual var screen: String? by property(commerceEvent::screenName)
    actual var nonIteraction: Boolean by property(commerceEvent::nonInteractive)
    actual var internalEventName: String? = null
}

actual class ProductBuilder actual constructor(productAction: Commerce.ProductActionEnum) : CommerceEvent(MPCommerceEvent(productAction.value).apply { action = productAction.value }) {

    actual var products: List<Product>
        get() = commerceEvent.products?.map { Product(it as MPProduct) } ?: listOf()
        set(value) {
            value.forEach { commerceEvent.addProduct(it.product) }
        }

    actual var productListName: String? by property(commerceEvent::productListName)
    actual var productListSource: String? by property(commerceEvent::productListSource)
    actual var checkoutStep: Int? by TransformDelegate(commerceEvent::checkoutStep, intLongTransformer)
    actual var checkoutOptions: String? by property(commerceEvent::checkoutOptions)
    actual var currency: String? by property(commerceEvent::currency)
    actual var transactionAttributes: TransactionAttributes? by TransformDelegate(commerceEvent::transactionAttributes, transactionAttributesTransformer)

}

actual class PromotionBuilder actual constructor(promotionAction: Commerce.PromotionActionEnum): CommerceEvent(MPCommerceEvent(MPPromotionContainer(
    promotionAction.value, null
)).apply { action = promotionAction.value }) {
    actual var promotions: List<Promotion> by GenericDelegate(listOf()) { promotions ->
        commerceEvent.promotionContainer?.promotions ?: listOf<MPPromotion>()
            .let { mpPromotions ->
                promotions.filter { promotion ->
                    mpPromotions.any { it.name == promotion.name }
                }.forEach {
                    (commerceEvent.promotionContainer?: MPPromotionContainer().also { commerceEvent.promotionContainer = it })
                        .addPromotion(it.promotion)
                }
            }
    }
}
val promotionListTransformDelegate = TransformBuilder
        .from<List<Promotion>, List<MPPromotion>> { map { it.promotion} }
.to { map { Promotion(it) } }
actual class ImpressionBuilder actual constructor(impressionName: String) : CommerceEvent(MPCommerceEvent(impressionName, product.product)){
    actual var impressions: List<Impression>
        get() = TODO("Not yet implemented")
        set(value) {}
}

class ProductListBuilder {
    internal val products = mutableListOf<Product>()
    fun product(productInitializer: Product.() -> Unit) {
        Product(productInitializer).also { products.add(it)}
    }
}

val mapTransformer = TransformBuilder
    .from<Map<String, String?>, Map<Any?, *>?> { entries.associate { it.key to it.value } }
    .to { this?.entries?.associate { it.key.toString() to it.value.toString()} ?: mapOf() }

val mapDictionaryTransformer = TransformBuilder
    .from<Map<String, List<String>>?, NSMutableDictionary?>{ this?.toMutableDictionary() }
    .to { this?.allKeys?.associate { it.toString() to listOf(valueForKey(it.toString()).toString()) } ?: null }

val productTransformer = TransformBuilder
    .from<List<Product>, List<MPProduct>?>{ this.map { it.product } }
    .to { this?.map { Product(it) } ?: listOf() }

val messageTypeTransformer = TransformBuilder
    .from<MessageType, MPMessageType> { this.iosMessageType }
    .to { MessageType.forMessageType(this) }