package com.mparticle.api.events

import com.mparticle.api.events.*
import com.mparticle.BaseEvent as BaseEventAndroid
import com.mparticle.MPEvent as MPEventAndroid
import com.mparticle.MParticle.EventType as EventTypeAndroid
import com.mparticle.commerce.CommerceEvent as CommerceEventAndroid
import com.mparticle.commerce.Product as ProductAndroid
import com.mparticle.commerce.Promotion as PromotionAndroid
import com.mparticle.commerce.Impression as ImpressionAndroid
import com.mparticle.commerce.TransactionAttributes as TransactionAttributesAndroid


fun getEvent(baseEvent: BaseEvent): BaseEventAndroid {
    return when (baseEvent) {
        is MPEvent -> getMPEvent(baseEvent)
        is CommerceEvent -> getCommerceEvent(baseEvent)
        else -> {
            BaseEventImpl(baseEvent)
        }
    }
}

fun getMPEvent(event: MPEvent): MPEventAndroid {
    val builder = MPEventAndroid.Builder(event.eventName, event.eventType.toEventType())
    event.apply {
        category?.let { builder.category(it) }
        customAttributes?.let { builder.customAttributes(it) }
        customFlags.forEach { builder.addCustomFlag(it.key, it.value.joinToString(",")) }
        length?.let { builder.duration(it) }
    }
    return builder.build()
}

fun getCommerceEvent(event: CommerceEvent): CommerceEventAndroid {
    val builder = event.productAction?.let {
        val products = event.products!!
        CommerceEventAndroid.Builder(it, products[0].toProduct() )
            .products(products.subList(1, products.size).toProducts())
            .promotions(event.promotions?.toPromotions() ?: listOf())
            .impressions(event.impressions?.toImpressions() ?: listOf())
    } ?:
    event.promotionAction?.let {
        CommerceEventAndroid.Builder(it, event.promotions!!.get(0).toPromotion())
            .promotions(event.promotions?.subList(1, event.promotions!!.size)?.toPromotions() ?: listOf())
            .products(event.products?.toProducts() ?: listOf())
            .impressions(event.impressions?.toImpressions() ?: listOf())
    } ?:
        CommerceEventAndroid.Builder(event.impressions!!.get(0).toImpression())
            .products(event.products?.toProducts() ?: listOf())
            .impressions(event.impressions?.subList(1, event.impressions!!.size)?.toImpressions() ?: listOf())
    event.customFlags?.let { it.forEach { flag -> builder.addCustomFlag(flag.key, flag.value.joinToString(",")) } }
    event.customAttributes?.let { builder.customAttributes(it) }
    event.checkoutOptions?.let { builder.checkoutOptions(it) }
    event.currency?.let { builder.currency(it) }
    event.nonInteraction?.let { builder.nonInteraction(it) }
    event.screen?.let { builder.screen(it) }
    event.transactionAttributes?.let { builder.transactionAttributes(it.toTransactionAttributes()) }
    return builder.build()
}

fun List<Product>.toProducts(): List<ProductAndroid> {
    return map {
        it.toProduct()
    }
}

fun Product.toProduct(): ProductAndroid {
    val builder = ProductAndroid.Builder(name!!, sku!!, price)
    category?.let { builder.category(it)}
    quantity?.let { builder.quantity(it)}
    couponCode?.let { builder.couponCode(it)}
    position?.let { builder.position(it) }
    brand?.let{builder.brand(it) }
    customAttributes?.let { builder.customAttributes(it) }
    return builder.build()
}

fun List<Promotion>.toPromotions(): List<PromotionAndroid> {
    return map {
        it.toPromotion()
    }
}

fun Promotion.toPromotion(): PromotionAndroid {
    val builder = PromotionAndroid()
    creative?.let {builder.setCreative(it)}
    id?.let { builder.setId(it) }
    name?.let { builder.setName(it) }
    position?.let { builder.setPosition(it) }
    return builder;
}

fun List<Impression>.toImpressions(): List<ImpressionAndroid> {
    return map {
        it.toImpression()
    }
}

fun Impression.toImpression(): ImpressionAndroid {
    val impression = ImpressionAndroid(this.listName!!, this.products!!.get(0).toProduct())
    if (products!!.size > 1) {
        products!!.subList(1, products!!.size).forEach { impression.addProduct(it.toProduct()) }
    }
    return impression
}

fun TransactionAttributes.toTransactionAttributes(): TransactionAttributesAndroid {
    val transactionAttributes = TransactionAttributesAndroid()
    affiliation?.let { transactionAttributes.affiliation = it }
    couponCode?.let {transactionAttributes.couponCode = it}
    id?.let { transactionAttributes.id = it}
    revenue?.let { transactionAttributes.revenue = it }
    shipping?.let { transactionAttributes.shipping = it }
    tax?.let { transactionAttributes.tax = it }
    return transactionAttributes;
}

class BaseEventImpl(baseEvent: BaseEvent): BaseEventAndroid(Type.values().first { it.messageType == baseEvent.type.messageType }) {
    init {
        customAttributes = baseEvent.customAttributes
        customFlags = baseEvent.customFlags
    }
}

fun EventType.toEventType(): EventTypeAndroid {
    return EventTypeAndroid.values().first { it.name.equals(this.name, ignoreCase = true) }
}



