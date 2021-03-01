package com.mparticle.api

import android.content.Context

actual abstract class ClientPlatform {
    abstract var context: Context
}

open class ClientPlatformImpl(override var context: Context): ClientPlatform() {

}