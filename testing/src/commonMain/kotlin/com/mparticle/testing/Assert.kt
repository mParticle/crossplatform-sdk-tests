package com.mparticle.testing

import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertTrue


infix fun <T> T.assertEquals(other: () -> T?) = assertEquals(this, other())
infix fun <T> T.mustEqual(other: T) = assertEquals(this, other)
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

