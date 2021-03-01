import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import java.lang.System.getProperty

plugins {
    id("com.android.library")
    id("kotlin-android-extensions")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}

repositories {
    mavenLocal()
    jcenter()
    maven { setUrl("https://dl.bintray.com/kotlin/kotlinx.html/") }
}

kotlin {
    android()
    ios()

    cocoapods {
        summary = "MParticle SDK Server Models"
        homepage = "."
        frameworkName = "mParticle-Models"
        setVersion(1.0)
        ios.deploymentTarget= "14.3"
    }
    sourceSets {
        val androidMain by getting
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.0.1")
            }
        }
        val iosMain by getting
    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdkVersion(14)
        targetSdkVersion(29)
    }
}