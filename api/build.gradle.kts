import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework
import java.lang.System.getProperty

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
    id("maven-publish")
}

kotlin {

    android {
        publishLibraryVariants("debug")
        mavenPublication {
            artifactId = project.name
        }
    }
    val xcFramework = XCFramework()
    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
    if (onPhone) {
        iosArm64("ios") {
            binaries.framework(listOf(NativeBuildType.DEBUG)) {
                xcFramework.add(this)
            }
        }
    } else {
        iosX64("ios") {
            binaries.framework(listOf(NativeBuildType.DEBUG)) {
                xcFramework.add(this)
            }
        }
    }

    js {
        browser {
        }
        binaries.executable()
    }

    cocoapods {
        framework {
            summary = "MParticle Cross-Platform API"
            homepage = "."
            baseName = "mParticle-API"
            ios.deploymentTarget = "14.3"
        }
        pod("mParticle-Apple-SDK/mParticle", path = project.file("../.sdks/apple-testing"))
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.2.2")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.2.2")

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

        val jsMain by getting {
            dependencies {
                implementation(npm("@mparticle/web-sdk", "2.15.4"))
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

publishing {
    repositories {
        maven {
            name = "github"
            setUrl("https://maven.pkg.github.com/mParticle/crossplatform-sdk-tests")
            credentials {
                username = System.getenv("githubUsername")
                password = System.getenv("githubToken")
            }
        }
    }
}
