rootProject.name = "sdk-multiplatform-test"
include("models", "api", "testing", "Tests")
includeBuild(".sdks/android") {
    dependencySubstitution {
        substitute(module("group:android-core")).with(project(":android-core"))
    }
}
pluginManagement {
    repositories {
        google()
        gradlePluginPortal()
        mavenCentral()
    }
    plugins {
        id("com.android.library") version("7.1.0")
        kotlin("multiplatform") version ("1.6.10")
        kotlin("plugin.serialization") version ("1.6.10")
        kotlin("native.cocoapods") version ("1.6.10")
    }
    resolutionStrategy {
        eachPlugin {
            if (requested.id.namespace == "com.android" || requested.id.name == "kotlin-android-extensions") {
                useModule("com.android.tools.build:gradle:7.1.0")
            }
        }
    }
}