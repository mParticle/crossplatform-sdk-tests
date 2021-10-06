package com.mparticle.api.commerce

import cocoapods.mParticle_Apple_SDK.*

actual enum class Commerce {
    Impression;
    actual enum class PromotionActionEnum(actual val platformValue: Any) {
        Click(MPPromotionActionClick),
        View(MPPromotionActionView)
    }

    actual enum class ProductActionEnum(actual val platformValue: Any) {
        AddToCart(MPCommerceEventActionAddToCart),
        RemoveFromCart(MPCommerceEventActionRemoveFromCart),
        AddToWishlist(MPCommerceEventActionAddToWishList),
        RemoveFromWishList(MPCommerceEventActionRemoveFromWishlist),
        Checkout(MPCommerceEventActionCheckout),
        Click(MPCommerceEventActionClick),
        Detail(MPCommerceEventActionViewDetail),
        Purchase(MPCommerceEventActionPurchase),
        Refund(MPCommerceEventActionRefund),
        CheckoutOption(MPCommerceEventActionCheckoutOptions)
    }
}