rootProject.name = "sdk-multiplatform-test"
include("models", "api", "testing", "Tests")
includeBuild(".sdks/android") {
    dependencySubstitution {
        substitute(module("group:android-core")).with(project(":android-core"))
    }
}
pluginManagement {
    repositories {
        jcenter()
        google()
        gradlePluginPortal()
        mavenCentral()
        maven("https://dl.bintray.com/kotlin/kotlin-eap")
    }
    plugins {
        id("com.android.library") version("4.0.1")
        id("kotlin-android-extensions") version ("1.4.21")
        kotlin("multiplatform") version ("1.4.21")
        kotlin("plugin.serialization") version ("1.4.0")
        kotlin("native.cocoapods") version ("1.4.21")
    }
    resolutionStrategy {
        eachPlugin {
            if (requested.id.namespace == "com.android" || requested.id.name == "kotlin-android-extensions") {
                useModule("com.android.tools.build:gradle:4.0.1")
            }
        }
    }
}
enableFeaturePreview("GRADLE_METADATA")