package com.mparticle.api.events

import cocoapods.mParticle_Apple_SDK.setProducts
import cocoapods.mParticle_Apple_SDK.setUserDefinedAttributes
import platform.Foundation.NSMutableDictionary
import platform.Foundation.NSNumber
import platform.Foundation.addEntriesFromDictionary
import cocoapods.mParticle_Apple_SDK.MPBaseEvent as BaseEventIOS
import cocoapods.mParticle_Apple_SDK.MPCommerceEvent as CommerceEventIOS
import cocoapods.mParticle_Apple_SDK.MPEvent as MPEventIOS
import cocoapods.mParticle_Apple_SDK.MPProduct as ProductIOS
import cocoapods.mParticle_Apple_SDK.MPEventType as MPEventTypeIOS

fun BaseEvent.toBaseEvent(): BaseEventIOS {
    val event = when (this) {
        is CommerceEvent -> {
            this.getEvent()
        }
        is MPEvent -> {
            this.getEvent()
        }
        else -> {

        }
    }
    return event as BaseEventIOS
}

fun MPEvent.getEvent(): MPEventIOS {
    return MPEventIOS().also {
        it.category = category
        it.customAttributes = customAttributes.entries.associate { it.key to it.value }
        it.name = eventName
        it.type = eventType.ordinal.toULong()
    }
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