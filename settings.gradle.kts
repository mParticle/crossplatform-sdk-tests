rootProject.name = "sdk-multiplatform-test"
include("api", "mocking", "models", "testing", "Tests")//, "braze-kit")
includeBuild(".sdks/android") {
    dependencySubstitution {
        substitute(module("group:android-core")).with(project(":android-core"))
        substitute(module("com.mparticle:android-core:+")).with(project(":android-core"))
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
        kotlin("multiplatform") version ("1.6.21")
        kotlin("plugin.serialization") version ("1.6.21")
        kotlin("native.cocoapods") version ("1.6.21")
    }
    resolutionStrategy {
        eachPlugin {
            if (requested.id.namespace == "com.android" || requested.id.name == "kotlin-android-extensions") {
                useModule("com.android.tools.build:gradle:7.1.3")
            }
        }
    }
}