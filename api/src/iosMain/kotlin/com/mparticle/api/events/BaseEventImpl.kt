package com.mparticle.api.events

import cocoapods.mParticle_Apple_SDK.MPEventTypeOther
import cocoapods.mParticle_Apple_SDK.setProducts
import cocoapods.mParticle_Apple_SDK.setUserDefinedAttributes
import platform.Foundation.*
import cocoapods.mParticle_Apple_SDK.MPBaseEvent as BaseEventApple
import cocoapods.mParticle_Apple_SDK.MPCommerceEvent as CommerceEventIOS
import cocoapods.mParticle_Apple_SDK.MPEvent as MPEventApple
import cocoapods.mParticle_Apple_SDK.MPProduct as ProductIOS

actual abstract class BaseEvent(val baseEventApple: BaseEventApple) {

    actual val type: MessageType = MessageType.forMessageType(baseEventApple.type)
    actual var customFlags: Map<String, List<String>>?
        get() = mapOf()//mapOf(baseEventApple?.customFlags.keyEnumerator().for)
        set(value) {
            baseEventApple.customFlags?.removeAllObjects()
            value?.forEach {
                baseEventApple.customFlags?.setObject(it.key, it.value as NSCopyingProtocol)
            }
        }
    actual var customAttributes: Map<String, String?>?
        get() = baseEventApple.customAttributes?.entries?.associate { it.key.toString() to it.value.toString() }
        set(value) {
            baseEventApple.customAttributes = value?.toMap()
        }
}

actual abstract class CustomEvent(val mpEventApple: MPEventApple): BaseEvent(mpEventApple) {

    actual abstract val isScreenEvent: Boolean
    actual val eventName: String = mpEventApple.name
    actual val eventType: EventType = EventType.forEventType(mpEventApple.type())
    actual var category: String?
        get() = mpEventApple.category
        set(value) {
            mpEventApple.setCategory(value)
        }
    actual val length: Double?
        get() = -1.0

    actual var duration: Double?
        get() = mpEventApple.duration?.doubleValue
        set(value) {
            mpEventApple.duration = value?.let {
                NSNumber(double = it)
            }
        }


}

actual class MPEvent (mpEventApple: MPEventApple): CustomEvent(mpEventApple) {
    actual constructor(eventName: String, eventType: EventType): this(
        MPEventApple(eventName, eventType.eventTypeApple)
    )
    actual override val isScreenEvent: Boolean = TODO("wtf")
}

actual class ScreenEvent (mpEventApple: MPEventApple): CustomEvent(mpEventApple) {
    actual constructor(screenName: String): this(
        MPEventApple(screenName, MPEventTypeOther)
    )
    actual override val isScreenEvent: Boolean = TODO("wtf")
}



fun BaseEvent.toBaseEvent(): BaseEventApple {
    val event = when (this) {
//        is CommerceEvent -> {
//            this.getEvent()
//        }
        is MPEventApple -> {

        }
        else -> {

        }
    }
    return event as BaseEventApple
}

fun CommerceEvent.getEvent(): CommerceEventIOS {
    val event = this.productAction?.let { productAction ->
        CommerceEventIOS(productAction, products!!.get(0).toProduct()).also {
            it.setProducts(products.subList(1, products.size).toProducts())
//            it.setImpressions(impressions.toImpressions())
        }

    }


    return event!!
}

//fun Impression.toImpression(): ImpressionIOS

fun List<Product>.toProducts(): List<ProductIOS> {
    return map { it.toProduct() }
}

fun Product.toProduct(): ProductIOS {
    return ProductIOS().also { product ->
        brand?.let { product.name = it }
        category?.let { product.category = it }
        couponCode?.let { product.couponCode = it }
        name?.let { product.name = it }
        position?.let { product.position = it.toULong() }
        quantity?.let { product.quantity = NSNumber(it) }
        sku?.let { product.sku = it }
        variant?.let { product.variant = it }
        price?.let { product.price = NSNumber(it) }
        customAttributes?.let { product.setUserDefinedAttributes(it.toMutableDictionary()) }
    }
}

fun <K:Any?, V: Any?> Map<K, V>.toMutableDictionary(): NSMutableDictionary {
    return NSMutableDictionary()?.also {
        it.addEntriesFromDictionary(this as Map<Any?, *>)
    }
}