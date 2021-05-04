rootProject.name = "sdk-multiplatform-test"
include("models", "api", "api-media", "testing", "Tests")
includeBuild(".sdks/android") {
    dependencySubstitution {
        substitute(module("group:android-core")).with(project(":android-core"))
    }
}
includeBuild(".sdks/android-media") {
    dependencySubstitution {
        substitute(module("group:media")).with(project(":media"))
    }
}
pluginManagement {
    repositories {
        google()
        gradlePluginPortal()
        mavenCentral()
    }
    plugins {
        id("com.android.library") version("7.1.3")
        kotlin("multiplatform") version ("1.6.20")
        kotlin("plugin.serialization") version ("1.6.20")
        kotlin("native.cocoapods") version ("1.6.20")
    }
    resolutionStrategy {
        eachPlugin {
            if (requested.id.namespace == "com.android" || requested.id.name == "kotlin-android-extensions") {
                useModule("com.android.tools.build:gradle:7.1.3")
            }
        }
    }
}