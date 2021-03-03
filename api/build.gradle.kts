import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import java.lang.System.getProperty

plugins {
    id("com.android.library") version("4.0.1")
    id("kotlin-android-extensions") version ("1.4.21")
    kotlin("multiplatform") version ("1.4.21")
    kotlin("plugin.serialization") version ("1.4.0")
    kotlin("native.cocoapods") version ("1.4.21")
}

repositories {
    mavenLocal()
    jcenter()
    maven { setUrl("https://dl.bintray.com/kotlin/kotlinx.html/") }
}

kotlin {

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
        summary = "MParticle Unified Api"
        homepage = "."
        frameworkName = "mParticle-Api"
        setVersion(0.1)
        ios.deploymentTarget= "14.3"

        pod("mParticle-Apple-SDK", path = project.file("../.sdks/apple"))
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.0.1")

            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                compileOnly("group:android-core")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")
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
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
}
dependencies {
    implementation("androidx.lifecycle:lifecycle-common:2.2.0")
}