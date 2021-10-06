package com.mparticle

import com.mparticle.api.MParticle
import com.mparticle.api.Platform.Android
import com.mparticle.api.Platform.iOS
import com.mparticle.api.commerce.*
import com.mparticle.api.mParticle
import com.mparticle.messages.events.BatchMessage
import com.mparticle.messages.events.ImpressionMessage
import com.mparticle.messages.events.ProductMessage
import com.mparticle.messages.events.PromotionMessage
import com.mparticle.mockserver.*
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.FailureLatch
import com.mparticle.testing.assertPlatformDifference
import kotlin.test.*

class CommerceTests: BaseStartedTest() {

    //just verify that we can log an event and it will get sent to the server. Not testing the event message
    @Test
    @Throws(Throwable::class)
    fun testCommerceProductEvent() {
        val commerceEvent: CommerceEvent =
            CommerceEvent(Commerce.ProductActionEnum.Detail) {
                products = listOf(product)
                customAttributes = mapOf("this" to "that")
                productListName = "something"
            }
        mParticle.apply {
            logEvent(commerceEvent)
            upload()
        }

        MockServerWrapper.endpoint(EndpointType.Events)
            .onRequestFinishedBlocking(requestFilter = { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.CommerceEventMessage>()
                    .filter { it.productActionObject != null }
                    .firstOrNull()
                    ?.let { commerceMessage ->
                        assertNull(
                            commerceMessage.promotionActionObject,
                            commerceMessage.promotionActionObject.toString()
                        )
                        assertNull(commerceMessage.impressionObject, commerceMessage.impressionObject.toString())
                        commerceMessage.productActionObject.let { productActionObject ->
                            assertNotNull(productActionObject)
                            assertEquals(1, productActionObject.productList.size)
                            product.assertMatch(productActionObject.productList.first())
                        }
                        assertEquals("view_detail", commerceMessage.productActionObject?.action)
                        true
                    } ?: false
            })
    }

    //just verify that we can log an event and it will get sent to the server. Not testing the event message
    @Test
    @Throws(Throwable::class)
    fun testCommercePromotionEvent() {
        val promotion = Promotion {
            name = "name"
            id = "123"
            creative = "foo bar"
            position = "first"
        }
        val commerceEvent =
            CommerceEvent(Commerce.PromotionActionEnum.View) {
                promotions = listOf(promotion)
                customAttributes = mapOf("this" to "that")
            }

        mParticle.apply {
            logEvent(commerceEvent)
            upload()
        }

        MockServerWrapper.endpoint(EndpointType.Events)
            .onRequestFinishedBlocking { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.CommerceEventMessage>()
                    .filter { it.promotionActionObject != null }
                    .firstOrNull()
                    ?.let { commerceMessage ->
                        assertNull(commerceMessage.productActionObject, commerceMessage.productActionObject.toString())
                        assertNull(commerceMessage.impressionObject, commerceMessage.impressionObject.toString())
                        commerceMessage.promotionActionObject.let { promotionActionObject ->
                            assertNotNull(promotionActionObject, "promotion object is null")
                            promotionActionObject.promotions.let { promotions ->
                                assertNotNull(promotions, "no promotions attached")
                                assertEquals(1, promotions.size)
                                promotion.assertMatch(promotions.first())
                            }
                        }
                        assertEquals("view", commerceMessage.promotionActionObject?.action)
                        true
                    } ?: false
            }
    }

    //just verify that we can log an event and it will get sent to the server. Not testing the event message
    @Test
    @Throws(Throwable::class)
    fun testCommerceImpressionEvent() {
        val product = Product {
            name = "name"
            sku = "sku"
            quantity = 10.00
        }

        val impression: Impression = Impression("my impression") {
            products =  listOf(product)
        }
        val commerceEvent =
            CommerceEvent(Commerce.Impression, "impressionName") {
                impressions = listOf(impression)
            }
        mParticle.apply {
            logEvent(commerceEvent)
            upload()
        }

        MockServerWrapper.endpoint(EndpointType.Events)
            .onRequestFinishedBlocking { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.CommerceEventMessage>()
                    .filter { it.impressionObject != null }
                    .firstOrNull()
                    ?.let { commerceMessage ->
                        assertNull(commerceMessage.productActionObject)
                        assertNull(commerceMessage.promotionActionObject)
                        commerceMessage.impressionObject.let { impressionObject -> {
                            assertNotNull(impressionObject)
                            assertEquals(1, impressionObject.size)
                            impression.assertMatch(impressionObject.first())
                        }}
                        true
                    } ?: false
            }
    }
}

fun Impression.assertMatch(impressionMessage: ImpressionMessage) {
    assertEquals(listName, impressionMessage.name)
    assertEquals(products.size, impressionMessage.productList.size)
    products
        .sortedBy { it.name }
        .let { sortedProducts ->
            impressionMessage.productList.sortedBy { it.name }.let { sortedMessageProducts ->
                sortedProducts.forEachIndexed { index, product ->
                    product.assertMatch(sortedMessageProducts[index])
                }
            }
        }
}

fun Promotion.assertMatch(promotionMessage: PromotionMessage) {
    assertEquals(name, promotionMessage.name)
    assertEquals(creative, promotionMessage.creative)
    assertEquals(id, promotionMessage.id)
    assertEquals(position, promotionMessage.position)
}

fun Product.assertMatch(productMessage: ProductMessage) {
    assertEquals(name, productMessage.name, "name")
    assertEquals(brand, productMessage.brand, "branc")
    assertEquals(category, productMessage.category, "category")
    assertEquals(couponCode, productMessage.couponCode, "couponCode")
    assertPlatformDifference(position, "position") {
        when(it) {
            Android -> productMessage.position
            iOS -> 0
        }
    }
    assertEquals(price, productMessage.price, "price")
    assertPlatformDifference(position, "quantity") {
        when(it) {
            Android -> productMessage.position
            iOS -> 0
        }
    }
    assertEquals(sku, productMessage.sku, "sku")
    assertEquals(variant, productMessage.variant, "variant")

}

fun <K, V> Map<K, V>.assertMatch(otherMap: Map<K, V>) {
    assertEquals(size, otherMap.size)
    assertTrue {
        this.all { (key, value) -> otherMap[key] == value }
    }
}
