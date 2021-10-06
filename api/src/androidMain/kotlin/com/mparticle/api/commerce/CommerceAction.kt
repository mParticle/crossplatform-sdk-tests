package com.mparticle.api.commerce

import com.mparticle.commerce.Product
import com.mparticle.commerce.Promotion

actual enum class Commerce {
    Impression;
    actual enum class PromotionActionEnum(val value: String) {
        Click(Promotion.CLICK),
        View(Promotion.VIEW)
    }

    actual enum class ProductActionEnum(val value: String) {
        AddToCart(Product.ADD_TO_CART),
        RemoveFromCart(Product.REMOVE_FROM_CART),
        AddToWishlist(Product.ADD_TO_WISHLIST),
        RemoveFromWishList(Product.REMOVE_FROM_WISHLIST),
        Checkout(Product.CHECKOUT),
        Click(Product.CLICK),
        Detail(Product.DETAIL),
        Purchase(Product.PURCHASE),
        Refund(Product.REFUND),
        CheckoutOption(Product.CHECKOUT_OPTION)
    }
}