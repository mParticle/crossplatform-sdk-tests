package com.mparticle

import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.Platform.Android
import com.mparticle.api.Platform.iOS
import com.mparticle.api.commerce.*
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.ScreenEvent
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

class EventTests: BaseStartedTest() {

    @Test
    @Throws(Throwable::class)
    fun testUnknownEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Unknown", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testNavigationEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Navigation)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Navigation", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testLocationEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Location)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Location", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testSearchEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Search)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Search", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testTransactionEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Transaction)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Transaction", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testUserContentEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.UserContent)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("UserContent", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testUserPreferenceEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.UserPreference)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("UserPreference", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testSocialEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Social)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Social", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testOtherEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Other)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Other", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testMediaEvent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Media)

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Some Event Name", eventMessage.name)
                        assertEquals("Media", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    @Throws(Throwable::class)
    fun testScreenEvent() {
        val mpEvent = ScreenEvent("Recommended Products View")

        Server
            .endpoint(EndpointType.Events)
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertEquals("Recommended Products View", eventMessage.name)
                        assertEquals("Other", eventMessage.eventType)
                        true
                    } ?: false
            }
            .after {
                mParticle.apply {
                    logEvent(mpEvent)
                    upload()
                }
            }
            .blockUntilFinished()
    }
}
