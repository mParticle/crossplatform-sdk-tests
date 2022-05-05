package com.mparticle.api

actual val platform: Platform
    get() = TODO("Not yet implemented")

//supposed to be empty. This is the hack to get Android a Context object for startup
actual abstract class ClientPlatform actual constructor() {
}