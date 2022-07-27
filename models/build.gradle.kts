import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.DEBUG
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}
apply(from = "../.scripts/maven.gradle")


repositories {
    mavenLocal()
}

val xcFramework = XCFramework()

kotlin {
    android {
        publishLibraryVariants("release")
        mavenPublication {
            artifactId = project.name
        }
    }
    ios {
        binaries.framework(listOf(NativeBuildType.RELEASE)) {
            baseName = "MP_Models_"
            xcFramework.add(this)
        }
    }

    cocoapods {
        summary = "MParticle SDK Server Models"
        homepage = "."
        frameworkName = "mParticle-Models"
        ios.deploymentTarget= "14.3"
    }
    sourceSets {
        val androidMain by getting
        val commonMain by getting {
            dependencies {
                api("org.jetbrains.kotlinx:kotlinx-serialization-core:1.3.2")
                api("org.jetbrains.kotlinx:kotlinx-serialization-json:1.3.2")
            }
        }
        val iosMain by getting
    }
}

android {
    compileSdk = 31
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdk = 14
        targetSdk = 31
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}
