package com.mparticle.api.events

import android.util.EventLog
import com.mparticle.MParticle
import com.mparticle.api.events.*
import com.mparticle.BaseEvent as BaseEventAndroid
import com.mparticle.MPEvent as MPEventAndroid
import com.mparticle.MParticle.EventType as EventTypeAndroid
import com.mparticle.commerce.CommerceEvent as CommerceEventAndroid
import com.mparticle.commerce.Product as ProductAndroid
import com.mparticle.commerce.Promotion as PromotionAndroid
import com.mparticle.commerce.Impression as ImpressionAndroid
import com.mparticle.commerce.TransactionAttributes as TransactionAttributesAndroid

//constructor is a hack..I realized marrying MediaEvent: BaseEvent with MPEvent.Builder is complicated..would use MPEvent instead, but it's immutable for the children in `api`
actual abstract class BaseEvent(private val mpEventAndroid: com.mparticle.MPEvent.Builder? = null, private val mediaEvent: BaseEventAndroid? = null) {

    val baseEventAndroid: BaseEventAndroid
        get() = mpEventAndroid?.build() ?: mediaEvent!!

    actual val type: MessageType = MessageType.forMessageType(baseEventAndroid.type as com.mparticle.BaseEvent.Type)
    actual var customFlags: Map<String, List<String>>?
        get() = baseEventAndroid?.customFlags ?: mediaEvent?.customFlags
        set(value) {
            baseEventAndroid.customFlags?.clear()
            value?.let { baseEventAndroid.customFlags?.putAll(it) }
        }
    actual var customAttributes: Map<String, String?>?
        get() = baseEventAndroid.customAttributes
        set(value) {
            baseEventAndroid.customAttributes?.clear()
            value?.let { baseEventAndroid.customAttributes?.putAll(it) }
        }

    override fun toString(): String {
        return baseEventAndroid.toString()
    }
}

actual abstract class CustomEvent(val mpEventAndroid: MPEventAndroid.Builder): BaseEvent(mpEventAndroid) {

    actual abstract val isScreenEvent: Boolean
    actual val eventName: String = mpEventAndroid.build().eventName
    actual val eventType: EventType = EventType.forEventType(mpEventAndroid.build().eventType)
    actual val length: Double? = mpEventAndroid.build().length

    actual var category: String?
        get() = mpEventAndroid.build().category
        set(value) {
            mpEventAndroid.category(value)
        }
    actual var duration: Double?
        get() = mpEventAndroid.build().length
        set(value) {
            mpEventAndroid.duration(value!!)
        }

    override fun toString(): String {
        return mpEventAndroid.toString()
    }

}

actual class MPEvent (mpEventAndroid: MPEventAndroid.Builder): CustomEvent(mpEventAndroid) {
    actual constructor(eventName: String, eventType: EventType): this(
        MPEventAndroid.Builder(eventName, eventType.eventTypeAndroid)
    )
    constructor(mpEventAndroid: MPEventAndroid): this(MPEventAndroid.Builder(mpEventAndroid))
    actual override val isScreenEvent: Boolean = mpEventAndroid.build().isScreenEvent
}

actual class ScreenEvent (mpEventAndroid: MPEventAndroid.Builder): CustomEvent(mpEventAndroid) {
    actual constructor(screenName: String): this(
        MPEventAndroid.Builder(screenName, MParticle.EventType.Other)
    )
    actual override val isScreenEvent: Boolean = mpEventAndroid.build().isScreenEvent
}



fun getEvent(baseEvent: BaseEvent): BaseEventAndroid {
    return when (baseEvent) {
        is MPEvent -> baseEvent.baseEventAndroid
        else -> {
            BaseEventImpl(baseEvent)
        }
    }
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
    //TODO
//    event.customFlags?.let { it.forEach { flag -> builder.addCustomFlag(flag.key, flag.value.joinToString(",")) } }
//    event.customAttributes?.let { builder.customAttributes(it) }
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

class BaseEventImpl(baseEvent: BaseEvent): BaseEventAndroid(baseEvent.type.androidMessageType) {
    init {
        customAttributes = baseEvent.customAttributes
        customFlags = baseEvent.customFlags
    }
}

fun EventType.toEventType(): EventTypeAndroid {
    return EventTypeAndroid.values().first { it.name.equals(this.name, ignoreCase = true) }
}



