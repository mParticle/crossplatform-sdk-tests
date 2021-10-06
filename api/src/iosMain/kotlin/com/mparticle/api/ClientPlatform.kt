package com.mparticle.api

import kotlin.native.concurrent.SharedImmutable

@SharedImmutable
actual val platform = Platform.iOS
actual abstract class ClientPlatform {
}

open class ClientPlatformImpl: ClientPlatform()