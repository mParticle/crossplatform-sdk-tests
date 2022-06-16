package com.mparticle.testing

import com.mparticle.api.events.EventType
import com.mparticle.api.events.MPEvent

object TestingUtils {
    var isFirebasePresent = false
        private set

    private val randomMPEventSimple: MPEvent
        private get() = MPEvent(
            RandomUtils.getAlphaNumericString(RandomUtils.randomInt(1, 55)),
            EventType.values()[RandomUtils.randomInt(0, EventType.values().size - 1)]
        )

    // 50/50 chance, that if the string is shorter than 5 characters, we will replace it with "null"
    //put in a null map sometimes
    val randomMPEventRich: MPEvent
        get() {
            val event = randomMPEventSimple
            if (RandomUtils.nextBoolean()) {
                event.category = RandomUtils.getAlphaNumericString(RandomUtils.randomInt(5, 55))
            }
            if (RandomUtils.nextBoolean()) {
                event.length = RandomUtils.randomLong(1000L, 1000L * 100).toDouble()
            }
            if (RandomUtils.nextBoolean()) {
                var infoMap: HashMap<String, String?> = HashMap()
                for (i in 0 until RandomUtils.randomInt(-5, 20)) {
                    val key: String =
                        RandomUtils.getAlphaNumericString(RandomUtils.randomInt(0, 55))
                    val value: String =
                        RandomUtils.getAlphaNumericString(RandomUtils.randomInt(0, 55))
                    // 50/50 chance, that if the string is shorter than 5 characters, we will replace it with "null"
                    infoMap[key] = if (value.length < 5 && RandomUtils.nextBoolean()) null else value
                }
                event.customAttributes = infoMap
            }
            if (RandomUtils.nextBoolean()) {
                (0 until RandomUtils.randomInt(0, 10)).map {
                    val key: String =
                        RandomUtils.getAlphaNumericString(RandomUtils.randomInt(0, 55))
                    (0..RandomUtils.randomInt(0, 5))
                        .map { RandomUtils.getAlphaNumericString(RandomUtils.randomInt(0, 55)) }
                        .let { key to it}
                }
                    .associate { it.first to it.second }
                    .let { event.customFlags = it }
            }
            return event
        }

//    TODO, add AliasRequest class to api/common
//    @JvmStatic
//    val randomAliasRequest: AliasRequest
//        get() {
//            val destinationMpid = RandomUtils.randomLong()
//            val sourceMpid = RandomUtils.randomLong()
//            val startTime: Long = RandomUtils.randomLong(0, System.currentTimeMillis())
//            val endTime: Long = RandomUtils.randomLong(startTime, System.currentTimeMillis())
//            return AliasRequest.builder()
//                .destinationMpid(destinationMpid)
//                .sourceMpid(sourceMpid)
//                .sourceMpid(startTime)
//                .endTime(endTime)
//                .build()
//        }


//    TODO make this a true "common" function
//    @JvmStatic
//    fun assertJsonEqual(object1: JSONObject, object2: JSONObject) {
//        if (object1 === object2) {
//            return
//        }
//        assertEquals(object1.length(), object2.length())
//        val keys: MutableIterator<String> = object1.keys()
//        while (keys.hasNext()) {
//            val key = keys.next()
//            try {
//                val obj1Val: Any? = object1.get(key)
//                val obj2Val: Any? = object2.get(key)
//                //dealing with nested JSONObjects, not going to deal with nested JSONArray's
//                if (obj1Val is JSONObject && obj2Val is JSONObject) {
//                    assertJsonEqual(obj1Val as JSONObject, obj2Val as JSONObject)
//                } else if (obj1Val is JSONArray && obj2Val is JSONArray) {
//                    assertJsonArrayEqual(obj1Val as JSONArray, obj2Val as JSONArray)
//                } else {
//                    assertEquals(obj1Val, obj2Val)
//                }
//            } catch (jse: JSONException) {
//                fail(jse.message)
//            }
//        }
//    }
//
//    TODO make this a true "common" function
//    // This method does NOT account for repeated elements in the JSONArray.
//    // We don't need to for our current use case, but keep this in mind if the
//    // method is going to be ported for a more general use case
//    @JvmStatic
//    fun assertJsonArrayEqual(jsonArray1: JSONArray, jsonArray2: JSONArray) {
//        if (jsonArray1 === jsonArray2) {
//            return
//        }
//        assertEquals(jsonArray1.length(), jsonArray2.length())
//        val jsonObject1 = JSONObject()
//        val jsonObject2 = JSONObject()
//        for (i in 0 until jsonArray1.length()) {
//            val object1: Any = jsonArray1.opt(i)
//            val object2: Any = jsonArray2.opt(i)
//            try {
//                jsonObject1.put(object1?.toString(), object1)
//            } catch (jse: JSONException) {
//                fail(jse.message)
//            }
//            try {
//                jsonObject2.put(object2?.toString(), object2)
//            } catch (jse: JSONException) {
//                fail(jse.message)
//            }
//        }
//        assertJsonEqual(jsonObject1, jsonObject2)
//    }

//    TODO, make this a true "common" function
//     fun setStrictMode(logLevelLimit: LogLevel, vararg exclusions: String) {
//            val logListener: Logger.DefaultLogHandler?
//            logListener = object : Logger.DefaultLogHandler() {
//                override fun log(logLevel: LogLevel, error: Throwable?, messages: String) {
//                    super.log(logLevel, error, messages)
//                    if (logLevel.ordinal <= logLevelLimit.ordinal) {
//                        for (exclude in exclusions) {
//                            if (messages == exclude) {
//                                return
//                            }
//                            throw RuntimeException(
//                                """
//                                    Unacceptable Log of level "${logLevel.name}":
//                                        $messages
//                                    """
//                            )
//                        }
//                    }
//                }
//            }
//            Logger.setLogHandler(logListener)
//        }
//    }
}
