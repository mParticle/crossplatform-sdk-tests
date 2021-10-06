package com.mparticle.commerce

import com.mparticle.api.commerce.Commerce


fun CommerceEventAndroidInit(productAction: Commerce.ProductActionEnum) = CommerceEvent.Builder().apply { mProductAction = productAction.platformValue.toString() }
fun CommerceEventAndroidInit(promotionAction: Commerce.PromotionActionEnum) = CommerceEvent.Builder().apply { mPromotionAction = promotionAction.platformValue.toString() }
fun CommerceEventAndroidInit() = CommerceEvent.Builder()
fun ProductAndroidInit() = Product.Builder()
