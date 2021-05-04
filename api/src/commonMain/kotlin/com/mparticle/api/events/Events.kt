package com.mparticle.api.events

expect abstract class BaseEvent {
    val type: MessageType
    //both of these have to be immutable because we are using MPEvent.Builder as the underlying (can't use MPEvent bc the other fields are immutable as well, want the `api` objects to remain mutable for better constructor patterns)
    var customFlags: Map<String, List<String>>?
    var customAttributes: Map<String, String?>?
}

expect abstract class CustomEvent: BaseEvent {
    abstract val isScreenEvent: Boolean

    val eventName: String
    val eventType: EventType
    val length: Double?

    var category: String?
    var duration: Double?

}

expect class MPEvent(eventName: String, eventType: EventType): CustomEvent {
    override val isScreenEvent: Boolean
}

expect class ScreenEvent(screenName: String): CustomEvent {
    override val isScreenEvent: Boolean
}


expect enum class EventType {
    Navigation,
    Location,
    Search,
    Transaction,
    UserContent,
    UserPreference,
    Social,
    Other,
    Media
}


//TODO make an enum for ProductAction, PromotionAction
class CommerceEvent {
    var screen: String? = null

    var nonInteraction: Boolean? = null
    var productAction: String? = null
    var checkoutStep: Int? = null
    var checkoutOptions: String? = null
    var productListName: String? = null
    var productListSource: String? = null
    var transactionAttributes: TransactionAttributes? = null
    val products: MutableList<Product> = mutableListOf()
    var promotionAction: String? = null
    val promotions: MutableList<Promotion> = mutableListOf()
    val impressions: MutableList<Impression> = mutableListOf()
    var currency: String? = null
}

class Product {
     var customAttributes: Map<String, String>? = null
     var name: String? = null
     var category: String? = null
     var couponCode: String? = null
     var sku: String? = null
     var position: Int? = null
     var price: Double = 0.0
     var quantity: Double? = null
     var brand: String? = null
     var variant: String? = null
}

class Promotion {
    var creative: String? = null
    var id: String? = null
    var name: String? = null
    var position: String? = null
}

class Impression {
    var listName: String? = null
    var products: List<Product>? = null
}

class TransactionAttributes {
    var affiliation: String? = null
    var revenue: Double? = null
    var shipping: Double? = null
    var tax: Double? = null
    var couponCode: String? = null
    var id: String? = null
}