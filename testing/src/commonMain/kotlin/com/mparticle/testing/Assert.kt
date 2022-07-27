package com.mparticle.testing

import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertTrue


infix fun <T> T.assertEquals(other: () -> T?) = assertEquals(other(), this)
infix fun <T> T.mustEqual(other: T) = assertEquals(other, this)
infix fun <T> T.equals(t: T): Boolean = this == t
infix fun <T> T.isNot(t: T): Boolean = this != t

infix fun <T> T.asserts(assertion: (T) -> Boolean) {
    assertTrue { assertion(this) }
}

infix fun <T> T?.mustHave(assertion: T.() -> Boolean) {
    assertNotNull(this)
    assertTrue { assertion(this) }
}

private fun examples() {
    val theString: String? = "null"

    theString asserts { it isNot null}
    theString asserts { it equals "null" }
    theString mustHave { length equals 4 }
    theString mustEqual theString
}



// This method does NOT account for repeated elements in the JSONArray.
// We don't need to for our current use case, but keep this in mind if the
// method is going to be ported for a more general use case
fun assertJsonArrayEqual(jsonArray1: JsonArray, jsonArray2: JsonArray) {
    if (jsonArray1 === jsonArray2) {
        return
    }
    assertEquals(jsonArray1.size.toLong(), jsonArray2.size.toLong())
    val sorted1 = jsonArray1.sortedBy { it.toString() }
    val sorted2 = jsonArray2.sortedBy { it.toString() }
    (0 until jsonArray1.size).forEach { assertEqualJsonElement(sorted1[it], sorted2[it]) }
}


fun assertJsonEqual(object1: JsonObject, object2: JsonObject) {
    if (object1 === object2) {
        return
    }
    assertEquals(object1.size.toLong(), object2.size.toLong())
    object1.keys.forEach { key ->
        assertEqualJsonElement(object1[key], object2[key])
    }
}

fun assertEqualJsonElement(jsonElement1: JsonElement?, jsonElement2: JsonElement?) {
    when {
        jsonElement1 == null || jsonElement2 == null -> assertEquals(jsonElement1, jsonElement2)
        jsonElement1 is JsonObject && jsonElement2 is JsonObject -> assertJsonEqual(jsonElement1, jsonElement2)
        jsonElement1 is JsonArray && jsonElement2 is JsonArray -> assertJsonArrayEqual(jsonElement1, jsonElement2)
        else -> assertEquals(jsonElement1, jsonElement2)
    }
}
