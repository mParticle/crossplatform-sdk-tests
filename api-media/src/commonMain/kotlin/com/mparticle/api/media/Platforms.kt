package com.mparticle.api.media

expect class Platforms() {
    fun currentTimeMillis(): Long
    fun randomUuid(): String
}