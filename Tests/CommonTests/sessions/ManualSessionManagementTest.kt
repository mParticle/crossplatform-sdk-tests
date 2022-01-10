package com.mparticle.sessions

import com.mparticle.api.*
import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent
import com.mparticle.messages.events.MPEventMessage
import com.mparticle.mockserver.EndpointType
import com.mparticle.mockserver.Platforms
import com.mparticle.mockserver.Server
import com.mparticle.mockserver.utils.Sdk
import com.mparticle.utils.Mutable
import com.mparticle.testing.BaseTest
import com.mparticle.testing.FailureLatch
import com.mparticle.utils.ThreadsafeMutable
import kotlin.test.*

class ManualSessionManagementTest: BaseTest() {

    @Test
    fun testManualSessionManagementDoesNotAutomaticallyStartSession() {
        Sdk
            .sessions()
            .willNotStart()
            .after {
                MParticleOptions(clientPlatform = clientPlatform) {
                    automaticSessionTracking = false
                    shouldBeginSession = false
                }.let {
                    startMParticle(it)
                }
            }
            .assertFinished()
    }

    @Test
    fun testStartSessionManuallyStartsSession() {
        Sdk
            .sessions()
            .willNotStart()
            .after {
                MParticleOptions(clientPlatform = clientPlatform) {
                    automaticSessionTracking = false
                    shouldBeginSession = false
                }.let {
                    startMParticle(it)
                }
            }
            .assertFinished()

        Sdk
            .sessions()
            .willStart()
            .after {
                mParticle.startSession()
            }
            .blockUntilFinished()
    }

    @Test
    fun testEventManuallyStartsSession() {
        Sdk
            .sessions()
            .willNotStart()
            .after {
                MParticleOptions(clientPlatform = clientPlatform) {
                    automaticSessionTracking = false
                    shouldBeginSession = false
                }.let {
                    startMParticle(it)
                }
            }
            .assertFinished()

        Sdk
            .sessions()
            .willStart()
            .after {
                mParticle.apply {
                    logEvent(MPEvent("this", EventType.Other))
                    upload()
                }
            }
            .blockUntilFinished()
    }

    @Test
    fun testSessionlessEventDoesNotStartSession() {
        Sdk
            .sessions()
            .willNotStart()
            .after {
                MParticleOptions(clientPlatform = clientPlatform) {
                    automaticSessionTracking = false
                    shouldBeginSession = false
                }.let {
                    startMParticle(it)
                }
            }
            .assertFinished()

        Sdk
            .sessions()
            .willNotStart()
            .after {
                MPEvent("some event", EventType.Other) {
                    shouldStartSession = false
                    this.category = "no sessionstart category"
                }.let {
                    Server
                        .endpoint(EndpointType.Events)
                        .assertWillReceive { it.body.messages.filterIsInstance<MPEventMessage>().any { event -> event.name == "some event"} }
                        .after {
                            mParticle.apply {
                                logEvent(it)
                                upload()
                            } 
                        }
                        .blockUntilFinished()

                }
            }
            .assertFinished()
    }

    @Test
    fun testSessionManuallyEnds() {
        Sdk
            .sessions()
            .willNotStart()
            .after {
                MParticleOptions(clientPlatform = clientPlatform) {
                    automaticSessionTracking = false
                    shouldBeginSession = false
                }.let {
                    startMParticle(it)
                }
            }
            .assertFinished()

        Sdk
            .sessions()
            .willStart()
            .after {
                mParticle.startSession()
            }
            .blockUntilFinished()

        Sdk
            .sessions()
            .willEnd()
            .after {
                mParticle.endSession()
            }
            .blockUntilFinished()
    }
}