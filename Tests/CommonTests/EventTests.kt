package com.mparticle

import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.Platform.Android
import com.mparticle.api.Platform.iOS
import com.mparticle.api.commerce.*
import com.mparticle.messages.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.api.events.ScreenEvent
import com.mparticle.api.mParticle
import com.mparticle.messages.events.BatchMessage
import com.mparticle.messages.events.ImpressionMessage
import com.mparticle.messages.events.ProductMessage
import com.mparticle.messages.events.PromotionMessage
import com.mparticle.testing.mockserver.EndpointType
import com.mparticle.testing.mockserver.Platforms
import com.mparticle.testing.mockserver.Server
import com.mparticle.testing.mockserver.SuccessResponse
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
                        assertNotNull(eventMessage, "no event message")
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
                        assertNotNull(eventMessage, "no event message")
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
                        assertNotNull(eventMessage, "no event message")
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
                        assertNotNull(eventMessage, "no event message")
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
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 400
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 401
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 403
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 404
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 408
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 429
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 500
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 501
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 502
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 503
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
                SuccessResponse {
                    httpCode = 511
                }
            }
            .assertWillReceive { request ->
                request.body.messages
                    .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                    .filter { it.messageType != null }
                    .firstOrNull()
                    ?.let { eventMessage ->
                        assertNotNull(eventMessage, "no event message")
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
