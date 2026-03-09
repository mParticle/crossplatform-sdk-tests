import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework
import java.lang.System.getProperty

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}
apply(from = "../.scripts/maven.gradle")

kotlin {
    androidTarget {
        publishLibraryVariants("release")
        mavenPublication {
            artifactId = project.name
        }
    }
    val xcFramework = XCFramework()
    ios {
        binaries.framework(listOf(NativeBuildType.RELEASE)) {
            baseName = "MP_Api_"
            xcFramework.add(this)
        }
    }

    cocoapods {
        framework {
            summary = "MParticle Unified Api"
            homepage = "."
            baseName = "mParticle-Api"
            ios.deploymentTarget = "14.3"
        }
        pod("mParticle-Apple-SDK/mParticle") {
            source = path(project.file("../.sdks/apple-testing"))
            extraOpts += listOf("-compiler-option", "-fmodules")
        }
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":models"))
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
                compileOnly("com.mparticle:android-core:+")
            }
        }

        val iosMain by getting
    }

    targets.withType<org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget>().configureEach {
        compilations.all {
            compileTaskProvider.configure {
                compilerOptions {
                    optIn.add("kotlinx.cinterop.ExperimentalForeignApi")
                }
            }
        }
    }
}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile>().configureEach {
    kotlinOptions.jvmTarget = "1.8"
}

android {
    namespace = "testing"
    compileSdk = 33
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdk = 14
        targetSdk = 33
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}
dependencies {
//    implementation("androidx.lifecycle:lifecycle-common:2.2.0")
}