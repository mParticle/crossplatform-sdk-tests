package com.mparticle.api.events

open class BaseEvent(var type: MessageType) {
    var customFlags = HashMap<String, List<String>>()
    var customAttributes = HashMap<String, String?>()
}

open class CustomEvent protected constructor(var eventName: String, var eventType: EventType, type: MessageType): BaseEvent(type) {
    open val isScreenEvent: Boolean = false
    var category: String? = null
    var length: Double? = null
}

class MPEvent(eventName: String, eventType: EventType): CustomEvent(eventName, eventType, Type.Event) {
    override val isScreenEvent: Boolean = false
}

class ScreenEvent(screenName: String): CustomEvent(screenName, EventType.Other, Type.ScreenView) {
    override val isScreenEvent: Boolean = true
}


enum class EventType {
    Unknown,
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

interface MessageType {
    val messageType: String?
}

enum class Type(override val messageType: String) : MessageType {
    SessionStart("ss"),
    SessionEnd("se"),
    Event("e"),
    ScreenView("v"),
    CommerceEvent("cm"),
    OptOut("o"),
    Error("x"),
    PushRegistration("pr"),
    RequestHeader("h"),
    FirstRun("fr"),
    AppStateTransition("ast"),
    PushReceived("pm"),
    BreadCrumb("bc"),
    NetworkPerformance("npe"),
    Profile("pro"),
    UserAttributeChange("uac"),
    UserIdentityChange("uic"),
    //place holder, should NOT be sent to server
    Media("media_event")
}


//TODO make an enum for ProductAction, PromotionAction
class CommerceEvent: BaseEvent(Type.CommerceEvent) {
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