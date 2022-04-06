import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.DEBUG
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
    id("maven-publish")
}

repositories {
    mavenLocal()
}

val xcFramework = XCFramework()

kotlin {
    android {
        publishLibraryVariants("debug")
        mavenPublication {
            artifactId = project.name
        }
    }
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
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.2.2")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.2.2")
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
