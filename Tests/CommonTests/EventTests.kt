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
    fun testResponseCodeSuccess() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                SuccessResponse {
                    httpCode = 200
                }
            }
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
    fun testResponseCodeCreated() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                SuccessResponse {
                    httpCode = 201
                }
            }
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
    fun testResponseCodeAccepted() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                SuccessResponse {
                    httpCode = 202
                }
            }
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
    fun testResponseCodeNoContent() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                SuccessResponse {
                    httpCode = 204
                }
            }
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
    fun testResponseCodeNotModified() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                SuccessResponse {
                    httpCode = 304
                }
            }
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
    fun testResponseCodeBadRequest() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 400
                }
            }
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
    fun testResponseCodeUnauthorized() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 401
                }
            }
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
    fun testResponseCodeForbidden() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 403
                }
            }
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
    fun testResponseCodeNotFound() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 404
                }
            }
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
    fun testResponseCodeTimeout() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 408
                }
            }
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
    fun testResponseCodeTooManyRequests() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 429
                }
            }
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
    fun testResponseCodeServerError() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 500
                }
            }
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
    fun testResponseCodeNotImplemented() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 501
                }
            }
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
    fun testResponseCodeBadGateway() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 502
                }
            }
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
    fun testResponseCodeServiceUnavailable() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 503
                }
            }
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
    fun testResponseCodeNetworkAuthenticationRequired() {
        val mpEvent = MPEvent("Some Event Name", EventType.Unknown)

        Server
            .endpoint(EndpointType.Events)
            .nextResponse {
                FailureResponse {
                    httpCode = 511
                }
            }
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
