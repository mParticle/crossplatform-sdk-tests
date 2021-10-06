package com.mparticle.api.commerce

import com.mparticle.commerce.Product
import com.mparticle.commerce.Promotion

actual enum class Commerce {
    Impression;
    actual enum class PromotionActionEnum(actual val platformValue: Any) {
        Click(Promotion.CLICK),
        View(Promotion.VIEW)
    }

    actual enum class ProductActionEnum(actual val platformValue: Any) {
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