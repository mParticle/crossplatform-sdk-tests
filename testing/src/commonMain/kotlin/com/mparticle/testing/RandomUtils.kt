package com.mparticle.testing

import com.mparticle.messages.EventType
import com.mparticle.api.identity.IdentityType
import kotlin.jvm.JvmOverloads
import kotlin.random.Random


object RandomUtils {
    private val alpha: List<Char> = ('a'..'z') + ('A'..'Z')
    private val numbers: List<Char> = ('0'..'9').toList()
    private val alphaNumeric = alpha + numbers

    fun randomAttributes(): MutableMap<String, String> {
        return (0..Random.Default.nextInt(0,5)).map {
            getAlphaString(4) to getAlphaString(8)
        }.toMap().toMutableMap()
    }

    fun randomIdentities(): MutableMap<IdentityType, String> {
        val identities = IdentityType.values()
        return (0..Random.Default.nextInt(3, 8)).map {
            identities[Random.Default.nextInt(0, identities.size - 1)] to getAlphaString(8)
        }.toMap().toMutableMap()
    }

    fun randomEventType(): EventType {
        return EventType.values()[Random.Default.nextInt(0, EventType.values().size - 1)]
    }

    @JvmOverloads
    fun getRandomUserIdentities(count: Int = randomInt(1, IdentityType.values().size)): Map<IdentityType, String> {
        val randomIdentities: MutableMap<IdentityType, String> = HashMap()
        val identityIndices = randomIntSet(0, IdentityType.values().size, count)
        for (identityIndex in identityIndices) {
            randomIdentities[IdentityType.values()[identityIndex]] = getAlphaNumericString(randomInt(1, 55))
        }
        randomIdentities.remove(IdentityType.Alias)
        return randomIdentities
    }

    fun getRandomCustomFlags(count: Int): Map<String?, List<String?>> {
        val customFlags: MutableMap<String?, List<String?>> = HashMap()
        for ((key, value) in getRandomAttributes(count)) {
            val flags: MutableList<String?> = ArrayList()
            if (value != null) {
                flags.add(value)
                flags.add(getAlphaNumericString(20))
                flags.add(getAlphaNumericString(20))
                customFlags[key] = flags
            } else {
                val nullList: MutableList<String?> = ArrayList()
                nullList.add(null)
                customFlags[key] = nullList
            }
        }
        return customFlags
    }

    fun getRandomAttributes(count: Int): Map<String?, String?> {
        val attributes: MutableMap<String?, String?> = HashMap()
        for (i in 0 until count) {
            var key: String? = ""
            var value: String? = ""
            key = if (randomInt(0, 5) == 0) {
                null
            } else {
                getAlphaNumericString(20)
            }
            value = if (randomInt(0, 5) == 0) {
                null
            } else {
                getAlphaNumericString(20)
            }
            attributes[key] = value
        }
        return attributes
    }

    @JvmOverloads
    fun getAlphaString(length: Int = 10): String {
        return getString(alpha, length)
    }

    fun getAlphaNumericString(lengthLowerBound: Int, lengthUpperBound: Int): String? {
        return getAlphaNumericString(randomInt(24, 256))
    }

    fun getAlphaNumericString(length: Int): String {
        return getString(alphaNumeric, length)
    }

    private fun getString(charSet: List<Char>, length: Int): String {
        val builder = StringBuilder()
        for (i in 0 until length) {
            builder.append(charSet[randomInt(0, charSet.size - 1)])
        }
        return builder.toString()
    }

    //inclusive of low range, less than high range
    @JvmOverloads
    fun randomInt(from: Int = Int.MIN_VALUE, to: Int = Int.MAX_VALUE) = Random.Default.nextInt(from, to)

    @JvmOverloads
    fun randomLong(from: Long = Long.MIN_VALUE, to: Long = Long.MAX_VALUE) = Random.Default.nextLong(from, to)

    fun nextBoolean() = Random.nextBoolean()

    fun randomIntSet(fromRange: Int, toRange: Int, num: Int): Set<Int> {
        require(toRange >= fromRange) { "toRange must be greater than fromRange." }
        require(toRange - fromRange >= num) { "Range must be grater than num, since a Set may only contain one instance of an Entry, you will be unable to fill the Set with these parameters." }
        val set = mutableSetOf<Int>()
        var i = 0
        while (i < num) {
            val randomInt = randomInt(fromRange, toRange)
            if (set.contains(randomInt)) {
                i--
            } else {
                set.add(randomInt)
            }
            i++
        }
        return set
    }
}