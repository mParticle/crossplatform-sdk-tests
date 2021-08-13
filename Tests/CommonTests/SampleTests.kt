package com.mparticle

import com.mparticle.api.Environment
import com.mparticle.api.Logger
import com.mparticle.api.MParticle
import com.mparticle.api.MParticleOptions
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.messages.events.BatchMessage
import com.mparticle.mockserver.*
import com.mparticle.testing.BaseTest
import com.mparticle.testing.FailureLatch
import kotlin.test.*

class SampleTests: BaseTest() {

    @Test
    @Throws(Throwable::class)
    fun testStarted() {
        Logger().error("Test Started!")
        startMParticle()
        Logger().error("MParticle instance: ${MParticle.getInstance()}")
        assertNotNull(MParticle.getInstance())
    }

    @Test
    @Throws(Throwable::class)
    fun testDefaultEnvironment() {
        startMParticle()
        val environment = MParticle.getInstance()?.getEnvironment()
        assertNotNull(environment)
    }

    @Test

    @Throws(Throwable::class)
    fun testSetEnvironment() {
        startMParticle(MParticleOptions("apiKey", "apiSecret", clientPlatform, {}).apply {
            environment = Environment.Development
        })
        val environment = MParticle.getInstance()?.getEnvironment()
        assertEquals(Environment.Development, environment)
    }

    @Test
    @Throws(Throwable::class)
    fun testSetMpid() {
        try {
            println("Setting request logic")
            MockServerAccessor.run {
                getEndpoint(EndpointType.Identity_Identify).addRequestResponseLogic(null) {
                    SuccessResponse(IdentityResponseMessage(123))
                }
            }
            startMParticle(MParticleOptions("apiKey", "apiSecret", clientPlatform, {}).apply {
                environment = Environment.Development
            })
            assertEquals(123, MParticle.getInstance()?.Identity()?.getCurrentUser()?.getId())
        }
        catch (e: Exception) {
            e.printStackTrace();
            Logger().error("""EXCEPTIOPn: 
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
            val latch = FailureLatch("Log Event Uploaded")
            Logger().error("Setting request logic")
            MockServerAccessor.run {
                Logger().error("Setting request logic on Endpoints Events")
                getEndpoint(EndpointType.Events).onRequestFinished(requestFilter = { messageBatch: Request<BatchMessage> ->
                    Logger().error("Event batch received. ${messageBatch.body.messages?.size ?: 0} messages included: ${messageBatch.body.messages?.joinToString { "${it::class.simpleName}(${it.messageType})" }}")
                    if (messageBatch.body.messages
                            ?.filterIsInstance<com.mparticle.messages.events.MPEvent>()
                            ?.any {
                                Logger().error("event named: ${it.name}")
                                it.name == "Some Event Name"
                            } == true
                    ) {
                        latch.countDown()
                    }
                } as RequestFilter<BatchMessage>, null)
            }
            println("Done setting request logic.")
            startMParticle(MParticleOptions("apiKey", "apiSecret", clientPlatform, {}).apply {
                environment = Environment.Development
            })
            Logger().error("About to log event... mparticle = ${MParticle.getInstance()}")
            MParticle.getInstance()?.apply {
                Logger().error("Logging Event...")
                logEvent(MPEvent("Some Event Name", EventType.Other))
                Logger().error("Event logged...")
                upload()
                Logger().error("Upload called...")
            }
            latch.await()
        }
        catch (e: Exception) {
            e.printStackTrace();
            Logger().error("""EXCEPTIOPn: 
                    message: ${e.message}, 
                    cause: ${e.cause}, 
                    stacktrace: ${e.stackTraceToString()}
                    """
            )
            throw e
        }
    }
}