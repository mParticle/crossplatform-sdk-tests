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


kotlin {
    val iOSTarget = if (System.getenv("SDK_NAME")?.startsWith("iphoneos") == true) presets.getByName("iosArm64") else presets.getByName("iosX64")

    android()
    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
    if (onPhone) {
        iosArm64("ios") {
            binaries.getFramework(DEBUG).compilation = compilations.maybeCreate("test")
        }
    } else {
        iosX64("ios") {
            binaries.getFramework(DEBUG).compilation = compilations.maybeCreate("test")
        }
    }
    cocoapods {
        summary = "Cross Platform Testing"
        homepage = "."
        frameworkName = "mParticle_testing"
        setVersion(1.0)
        ios.deploymentTarget= "14.3"

        pod("mParticle-Apple-SDK", path = project.file("../.sdks/apple"))
        pod("mParticle-Apple-Media-SDK", path = project.file("../.sdks/apple-media"))
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":api"))
                api(project(":api-media"))
                api(project(":models"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.2.2")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.2.2")
            }
        }
        val androidMain by getting {
            dependencies {
                api(project(":api"))
                api(project(":api-media"))
                compileOnly("group:android-core")
                compileOnly("group:media")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.2")

                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core-jvm:1.2.2")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json-jvm:1.2.2")

                api("androidx.test:runner:1.4.0")
                api("androidx.test.ext:junit:1.1.3")
                api("androidx.test:rules:1.4.0")
            }
        }
        val iosMain by getting {
            dependencies {
                api(project(":api"))
                api(project(":api-media"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.2.2")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.2.2")
            }
        }
        val iosTest by getting

    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(14)
        targetSdkVersion(29)
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
}
dependencies {
    implementation("androidx.lifecycle:lifecycle-common:2.2.0")
}