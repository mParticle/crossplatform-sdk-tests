package com.mparticle.api

import com.mparticle.MParticle
import com.mparticle.api.identity.toBaseIdentityTask

fun MParticleOptions.toMParticleOptions(): com.mparticle.MParticleOptions {
    com.mparticle.internal.Logger.setLogHandler(object: com.mparticle.internal.Logger.AbstractLogHandler() {
        override fun verbose(error: Throwable?, message: String?) {
            Logger().info("$message, error: ${error?.stackTraceToString()}")
        }

        override fun info(error: Throwable?, message: String?) {
            Logger().info("$message, error: ${error?.stackTraceToString()}")

        }

        override fun debug(error: Throwable?, message: String?) {
            Logger().info("$message, error: ${error?.stackTraceToString()}")

        }

        override fun warning(error: Throwable?, message: String?) {
            Logger().warning("$message, error: ${error?.stackTraceToString()}")

        }

        override fun error(error: Throwable?, message: String?) {
            Logger().error("$message, error: ${error?.stackTraceToString()}")

        }

    })
    val builder = com.mparticle.MParticleOptions.builder(clientPlatform.context)
        .credentials(apiKey, apiSecret)
        .logLevel(com.mparticle.MParticle.LogLevel.INFO)
        .environment(com.mparticle.MParticle.Environment.Development)
        .dataplan(dataplanId, dataplanVersion)

    this.androidIdDisabled?.let { builder.androidIdDisabled(it) }
    this.dataplanOptions?.let {
        builder.dataplanOptions(
            com.mparticle.MParticleOptions.DataplanOptions.builder()
                .dataplanVersion(it.dataplan)
                .blockEventAttributes(it.blockEventAttributes)
                .blockEvents(it.blockEvents)
                .blockUserAttributes(it.blockUserAttributes)
                .blockUserIdentities(it.blockUserIdentities)
                .build()
        )
    }
    this.devicePerformanceMetricsDisabled?.let { builder.devicePerformanceMetricsDisabled(it) }
    this.enableUncaughtExceptionLogging?.let { builder.enableUncaughtExceptionLogging(it)}
    this.environment?.let { environment -> builder.environment(com.mparticle.MParticle.Environment.values().first {
        it.name.equals(environment.name, ignoreCase = true)
    }) }
    this.identifyRequest?.let {
        builder.identify(it.build())
    }
    this.identifyTask?.let { builder.identifyTask(it.toBaseIdentityTask()) }
    this.identityConnectionTimeout?.let { builder.identityConnectionTimeout(it) }
    this.sessionTimeout?.let { builder.sessionTimeout(it) }
    this.uploadInterval?.let { builder.uploadInterval(it) }
    this.logLevel?.let { logLevel -> builder.logLevel(logLevel.toLogLevel())}

    if (pushRegistrationInstanceId != null && pushRegistrationSenderId != null) {
        builder.pushRegistration(pushRegistrationInstanceId!!, pushRegistrationSenderId!!)
    }

    return builder.build()
}

fun InstallType.toInstallType(): MParticle.InstallType {
    return MParticle.InstallType.values().first {
        it.name == name
    }
}

fun LogLevel.toLogLevel(): MParticle.LogLevel {
    return MParticle.LogLevel.values().first {
        it.logLevel == level
    }
}
