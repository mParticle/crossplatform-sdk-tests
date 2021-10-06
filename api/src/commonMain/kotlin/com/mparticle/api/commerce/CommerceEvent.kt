package com.mparticle.api.commerce

import com.mparticle.api.events.*

expect enum class Commerce {
    Impression;
    enum class PromotionActionEnum {
        Click,
        View
    }
    enum class ProductActionEnum {
        AddToCart,
        RemoveFromCart,
        AddToWishlist,
        RemoveFromWishList,
        Checkout,
        Click,
        Detail,
        Purchase,
        Refund,
        CheckoutOption
    }
}

fun CommerceEvent(impressionAction: Commerce, impressionName: String, initializer: ImpressionBuilder.() -> Unit): CommerceEvent =
    ImpressionBuilder(impressionName)
        .apply(initializer)

fun CommerceEvent(productAction: Commerce.ProductActionEnum, initializer: ProductBuilder.() -> Unit): CommerceEvent =
    ProductBuilder(productAction)
        .apply(initializer)

fun CommerceEvent(promotionAction: Commerce.PromotionActionEnum, initializer: PromotionBuilder.() -> Unit): CommerceEvent =
    PromotionBuilder(promotionAction)
        .apply(initializer)

expect open class CommerceEvent: BaseEvent {
    var screen: String?
    var nonIteraction: Boolean
    var internalEventName: String?
}

expect class ProductBuilder(productAction: Commerce.ProductActionEnum): CommerceEvent {
    var products: List<Product>
    var productListName: String?
    var productListSource: String?
    var checkoutStep: Int?
    var checkoutOptions: String?
    var currency: String?
    var transactionAttributes: TransactionAttributes?
}

expect class PromotionBuilder(promotionAction: Commerce.PromotionActionEnum): CommerceEvent {
    var promotions: List<Promotion>
}

expect class ImpressionBuilder(impressionName: String) : CommerceEvent{
    var impressions: List<Impression>
}

val product: Product
    get() = Product {
    name = "someProduct"
    sku = "1234"
    price = 1.0
}