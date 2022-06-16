package com.mparticle.messages.events

import com.mparticle.messages.DTO
import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject

@Serializable
@SerialName("cm")
class CommerceEventMessage(
    @SerialName("pd") var productActionObject: ProductActionObject? = null,
    @SerialName("sn") var commerceScreenName: String? = null,
    @SerialName("ni") var commerceNonInteraction: Boolean? = null,
    @SerialName("cu") var commerceCurrency: String? = null,
    @SerialName("ti") var transactionId: String? = null,
    @SerialName("ta") var transactionAffiliation: String? = null,
    @SerialName("tt") var transactionTax: Double? = null,
    @SerialName("ts") var transactionShipping: Double? = null,
    @SerialName("tcc") var transactionCouponCode: String? = null,
    @SerialName("pm") var promotionActionObject: PromotionActionObject? = null,
    @SerialName("pi") var impressionObject: List<ImpressionMessage>? = null,
): BaseEvent() {
    override val messageType: String = "cm"
}

@Serializable
class ProductActionObject(
    @SerialName("an") val action: String,
    @SerialName("pl") val productList: List<ProductMessage>,
    @SerialName("tr") val transactionRevenue: Double? = null
): DTO()

        @Serializable
class PromotionActionObject(
    @SerialName("an") val action: String,
    @SerialName("pl") val promotions: List<PromotionMessage>? = null
): DTO()

@Serializable
class PromotionMessage(
    @SerialName("id") val id: String,
    @SerialName("nm") val name: String? = null,
    @SerialName("cr") val creative: String? = null,
    @SerialName("ps") val position: String? = null
): DTO()


@Serializable
class ProductMessage(
    @SerialName("nm") val name: String,
    @SerialName("ca") val category: String? = null,
    @SerialName("cc") val couponCode: String? = null,
    @SerialName("id") val sku: String? = null,
    @SerialName("ps") val position: Int? = null,
    @SerialName("pr") val price: Double? = null,
    @SerialName("qt") val quantity: Double? = null,
    @SerialName("act") val timeAdded: Long? = null,
    @SerialName("tpa") val totalAmount: Double? = null,
    @SerialName("br") val brand: String? = null,
    @SerialName("va") val variant: String? = null,
    @SerialName("attrs") val customAttributes: JsonObject? = null
): DTO()

@Serializable
class ImpressionMessage(
    @SerialName("pil") val name: String,
    @SerialName("pl") val productList: List<ProductMessage>
): DTO()
