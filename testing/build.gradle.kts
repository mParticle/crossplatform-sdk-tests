import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import java.lang.System.getProperty

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")

}


kotlin {
    val iOSTarget = if (System.getenv("SDK_NAME")?.startsWith("iphoneos") == true) presets.getByName("iosArm64") else presets.getByName("iosX64")

    android()
    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
    if (onPhone) {
        iosArm64("ios") {
            binaries.framework()
        }
    } else {
        iosX64("ios") {
            binaries.framework()
        }
    }
    cocoapods {
        framework {
            summary = "Cross Platform Testing"
            homepage = "."
            baseName = "mParticle_testing"
            ios.deploymentTarget = "14.3"
        }
        pod("mParticle-Apple-SDK/mParticle", path = project.file("../.sdks/apple-testing"))
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":api"))
                api(project(":models"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.5.1-native-mt") {
                    version {
                        strictly("1.5.1-native-mt")
                    }
                }
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.2.2")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.2.2")

                implementation("co.touchlab:stately-isolate:1.1.4-a1")
                implementation("co.touchlab:stately-common:1.1.4")
                implementation("co.touchlab:stately-concurrency:1.1.4")
            }
        }
        val androidMain by getting {
            dependencies {
                api(project(":api"))
                compileOnly("group:android-core")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.2")

                api("androidx.test:runner:1.4.0")
                api("androidx.test.ext:junit:1.1.3")
                api("androidx.test:rules:1.4.0")
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
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}
dependencies {
    implementation("androidx.lifecycle:lifecycle-common:2.2.0")
}
