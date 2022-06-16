package com.mparticle.api

import com.mparticle.MParticle
import com.mparticle.api.identity.toBaseIdentityTask
import java.util.*
import kotlin.reflect.KCallable

fun InstallType.toInstallType(): MParticle.InstallType {
    return MParticle.InstallType.values().first {
        it.name == name
    }
}
