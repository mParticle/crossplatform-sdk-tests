package com.mparticle.identity

import com.mparticle.api.MParticle
import com.mparticle.api.Platform
import com.mparticle.api.identity.UserAttributeListener
import com.mparticle.api.mParticle
import com.mparticle.api.platform
import com.mparticle.messages.DTO
import com.mparticle.testing.BaseStartedTest
import com.mparticle.testing.assertPlatformDifference
import com.mparticle.testing.mockserver.EndpointType
import com.mparticle.testing.mockserver.Server
import com.mparticle.testing.mustEqual
import kotlinx.serialization.SerializationStrategy
import kotlinx.serialization.builtins.MapSerializer
import kotlinx.serialization.builtins.serializer
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonPrimitive
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertTrue

class MPUserTests: BaseStartedTest() {

    @Test
    fun testGetAttributeSync() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            setUserAttribute("foo", "1")
            assertPlatformDifference(
                getUserAttributes().size,
                "Android does not do this writes synchronously!"
            ) {
                when (it) {
                    Platform.Android -> 0
                    Platform.iOS -> 1
                }
            }
        }
    }

    @Test
    fun testGetAttributeSyncWithAndroidHack() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            setUserAttribute("foo", "bar")

            android_test_hack()

            getUserAttributes().size mustEqual 1
        }
    }

    @Test
    fun testGetAttributeAsync() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            setUserAttribute("foo", "bar")
            getUserAttributes(object: UserAttributeListener {
                override fun onUserAttributesReceived(
                    userAttributes: Map<String, String?>?,
                    userAttributeLists: Map<String, List<String?>>?,
                    mpid: Long?
                ) {
                    assertPlatformDifference(userAttributes?.size, "Android does not do this writes synchronously!") {
                        when (it) {
                            Platform.Android -> 0
                            Platform.iOS -> 1
                        }
                    }
                    assertPlatformDifference(userAttributes?.get("foo"), "Android does not do this writes synchronously!") {
                        when (it) {
                            Platform.Android -> null
                            Platform.iOS -> "bar"
                        }
                    }
                }
            })

            android_test_hack()

            getUserAttributes(object: UserAttributeListener {
                override fun onUserAttributesReceived(
                    userAttributes: Map<String, String?>?,
                    userAttributeLists: Map<String, List<String?>>?,
                    mpid: Long?
                ) {
                    userAttributes?.size mustEqual 1
                    userAttributes?.get("foo") mustEqual "bar"
                }

            })
        }
    }



    @Test
    fun testIncrementIntegerAttribute() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            setUserAttribute("foo", 1)

            android_test_hack()
            getUserAttributes().size mustEqual  1
            incrementUserAttribute("foo", 3)

            android_test_hack()
            getUserAttributes()["foo"] mustEqual 4


            //test negative increment
            incrementUserAttribute("foo", -2)
            android_test_hack()
            getUserAttributes()["foo"] mustEqual 2

            //test remove incremented attribute
            removeUserAttribute("foo")
            android_test_hack()
            getUserAttributes().size mustEqual 0
        }
    }

    @Test
    fun testIncrementDoubleAttribute() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            android_test_hack()

            setUserAttribute("foo", 1.5)

            android_test_hack()
            getUserAttributes().size mustEqual  1
            incrementUserAttribute("foo", 3.2)

            android_test_hack()
            getUserAttributes()["foo"] mustEqual 4.7

            android_test_hack()

            //test negative increment
            incrementUserAttribute("foo", -2.1)
            android_test_hack()
            getUserAttributes()["foo"] mustEqual 2.6

            //test remove incremented attribute
            removeUserAttribute("foo")
            android_test_hack()
            getUserAttributes().size mustEqual 0
        }
    }

    @Test
    fun testIncrementLongAttribute() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            setUserAttribute("foo", 10L)

            android_test_hack()
            getUserAttributes().size mustEqual  1
            getUserAttributes()["foo"] mustEqual 10
            incrementUserAttribute("foo", 37L)

            android_test_hack()
            getUserAttributes()["foo"] mustEqual 47


            //test negative increment
            incrementUserAttribute("foo", -21L)
            android_test_hack()
            getUserAttributes()["foo"] mustEqual 26

            //test remove incremented attribute
            removeUserAttribute("foo")
            android_test_hack()
            getUserAttributes().size mustEqual 0
        }
    }

    @Test
    fun testRemoveUserAttribute() {
        mParticle.identity.currentUser!!.apply {
            assertTrue { getUserAttributes().isEmpty() }
            setUserAttribute("foo", "bar")
            removeUserAttribute("foo")

            android_test_hack()
            getUserAttributes().size mustEqual 0

            setUserAttribute("foo", "bar")
            setUserAttribute("fuzz", "baz")

            android_test_hack()
            getUserAttributes().size mustEqual 2
            getUserAttributes()["foo"] mustEqual "bar"
            getUserAttributes()["fuzz"] mustEqual "baz"

            //remove just 1
            removeUserAttribute("fuzz")
            android_test_hack()
            getUserAttributes().size mustEqual 1
            getUserAttributes()["foo"] mustEqual "bar"

            //remove last
            removeUserAttribute("foo")
            android_test_hack()
            getUserAttributes().size mustEqual 0


        }
    }

    @Test
    fun testUserAttributeBatchValues() {
        MParticle.getInstance()?.identity?.currentUser?.apply {
            setUserAttribute("foo", "bar")
            setUserAttribute("fooInt", 123)
            setUserAttribute("fooLong", 12345L)
            setUserAttribute("fooDouble", 10.15)
            setUserAttribute("fooNegInt", -10L)
            setUserAttribute("fooNegLong", -1010L)
            setUserAttribute("fooNegDouble", -20.1)
            android_test_hack()
        }
        Server
            .endpoint(EndpointType.Events)
            .assertNextRequest {
                it.body.attributes.let { attributes ->
                    assertNotNull(attributes)
                    attributes.size mustEqual 7
                    attributes["foo"] mustEqual JsonPrimitive("bar")
                    attributes["fooInt"] mustEqual JsonPrimitive("123")
                    attributes["fooLong"] mustEqual JsonPrimitive("12345")
                    attributes["fooDouble"] mustEqual JsonPrimitive("10.15")
                    attributes["fooNegInt"] mustEqual JsonPrimitive("-10")
                    attributes["fooNegLong"] mustEqual JsonPrimitive("-1010")
                    attributes["fooNegDouble"] mustEqual JsonPrimitive("-20.1")
                    true
                }
            }
            .after {
                MParticle.getInstance()?.upload()
            }
            .blockUntilFinished()
    }

    private fun android_test_hack() {
        //force sync attribute writes to complete for Android
        testingPlatform.sleep(1000)
        mParticle.upload()
    }
}