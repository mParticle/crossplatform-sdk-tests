package com.mparticle.api.commerce

import cocoapods.mParticle_Apple_SDK.*

actual enum class Commerce {
    Impression;
    actual enum class PromotionActionEnum(val value: MPCommerceEventAction) {
        Click(MPPromotionActionClick),
        View(MPPromotionActionView)
    }

    actual enum class ProductActionEnum(val value: MPCommerceEventAction) {
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