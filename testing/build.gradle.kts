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
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":api"))
                api(project(":models"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.0.1")
            }
        }
        val androidMain by getting {
            dependencies {
                api(project(":api"))
                compileOnly("group:android-core")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")

                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core-jvm:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json-jvm:1.0.1")

                api("androidx.test:runner:1.3.0")
                api("androidx.test.ext:junit:1.1.2")
                api("androidx.test:rules:1.3.0")
            }
        }
        val iosMain by getting {
            dependencies {
                api(project(":api"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.0.1")

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
buildscript {
    val kotlin_version by extra("1.4.10")
    dependencies {
        "classpath"("org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlin_version")
    }
}