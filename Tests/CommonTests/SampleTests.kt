package com.mparticle

import com.mparticle.api.Environment
import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.api.mParticle
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.messages.events.BatchMessage
import com.mparticle.testing.mockserver.*
import com.mparticle.testing.BaseTest
import kotlin.test.*

class SampleTests: BaseTest() {

    @Test
    @Throws(Throwable::class)
    fun testStarted() {
        startMParticle()
        assertNotNull(MParticle.getInstance())
    }

    @Test
    @Throws(Throwable::class)
    fun testDefaultEnvironment() {
        startMParticle()
        val environment = mParticle.environment
        assertNotNull(environment)
    }

    @Test

    @Throws(Throwable::class)
    fun testSetEnvironment() {
        startMParticle()
        val environment = mParticle.environment
        assertEquals(Environment.Development, environment)
    }

    @Test
    @Throws(Throwable::class)
    fun testSetMpid() {
        try {
            println("Setting request logic")
            Server
                .endpoint(EndpointType.Identity_Identify)
                .nextResponse {
                    SuccessResponse {
                        responseObject = IdentityResponseMessage(123)
                    }
                }
            startMParticle()
            assertEquals(123, mParticle.identity.currentUser?.mpid)
        }
        catch (e: Exception) {
            e.printStackTrace();
            Logger.error("""EXCEPTIOPn: 
                    message: ${e.message}, 
                    cause: ${e.cause}, 
                    stacktrace: ${e.stackTraceToString()}
                    """
            )
            throw e
        }
    }

    @Test
    @Throws(Throwable::class)
    fun testLogEvent() {
        try {
            startMParticle()

            val mpEvent = MPEvent("Some Event Name", EventType.Other)

            Server
                .endpoint(EndpointType.Events)
                .assertWillReceive { messageBatch: Request<BatchMessage> ->
                    Logger.info("Event batch received. ${messageBatch.body.messages.size} messages included: ${messageBatch.body.messages?.joinToString { "${it::class.simpleName}(${it.messageType})" }}")
                    messageBatch.body.messages
                        .filterIsInstance<com.mparticle.messages.events.MPEventMessage>()
                        .any {
                            Logger.error("event named: ${it.name}")
                            it.name == "Some Event Name"
                        }
                }
                .after {
                    MParticle.getInstance()?.apply {
                        logEvent(mpEvent)
                        upload()
                    }
                }
                .blockUntilFinished()
        }
        catch (e: Exception) {
            e.printStackTrace();
            Logger.error("""EXCEPTIOPn: 
                    message: ${e.message}, 
                    cause: ${e.cause}, 
                    stacktrace: ${e.stackTraceToString()}
                    """
            )
            throw e
        }
    }
}