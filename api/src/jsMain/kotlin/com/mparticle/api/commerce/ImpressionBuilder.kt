package com.mparticle.api.commerce

import com.mparticle.api.events.BaseEvent
import com.mparticle.api.events.MessageType

actual class ImpressionBuilder actual constructor(impressionName: String) :
    CommerceEvent() {
    actual var impressions: List<Impression>
        get() = TODO("Not yet implemented")
        set(value) {}
}

actual class PromotionBuilder actual constructor(promotionAction: Commerce.PromotionActionEnum) :
    CommerceEvent() {
    actual var promotions: List<Promotion>
        get() = TODO("Not yet implemented")
        set(value) {}
}

actual class ProductBuilder actual constructor(productAction: Commerce.ProductActionEnum) :
    CommerceEvent() {
    actual var products: List<Product>
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var productListName: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var productListSource: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var checkoutStep: Int?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var checkoutOptions: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var currency: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var transactionAttributes: TransactionAttributes?
        get() = TODO("Not yet implemented")
        set(value) {}
}

actual enum class Commerce {
    Impression;

    actual enum class PromotionActionEnum {
        Click, View;

        actual val platformValue: Any
            get() = TODO("Not yet implemented")

    }

    actual enum class ProductActionEnum {
        AddToCart, RemoveFromCart, AddToWishlist, RemoveFromWishList, Checkout, Click, Detail, Purchase, Refund, CheckoutOption;

        actual val platformValue: Any
            get() = TODO("Not yet implemented")

    }
}

actual open class CommerceEvent : BaseEvent(MessageType.CommerceEvent) {
    actual var screen: String?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var nonIteraction: Boolean
        get() = TODO("Not yet implemented")
        set(value) {}
    actual var internalEventName: String?
        get() = TODO("Not yet implemented")
        set(value) {}
}