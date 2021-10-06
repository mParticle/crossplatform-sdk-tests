package com.mparticle.api

//supposed to be empty. This is the hack to get Android a Context object for startup
expect abstract class ClientPlatform() {
}

expect val platform: Platform