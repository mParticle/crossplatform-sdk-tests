import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}
apply(from = "../.scripts/maven.gradle")

kotlin {
    android {
        publishLibraryVariants("release")
        mavenPublication {
            artifactId = "testing"
        }
    }
    val xcFramework = XCFramework()
    ios {
        binaries.framework(listOf(NativeBuildType.RELEASE)) {
            baseName = "MP_Testing_"
            xcFramework.add(this)
        }
    }

    cocoapods {
        framework {
            summary = "Cross Platform Testing"
            homepage = "."
            baseName = "mParticle_Testing"
            ios.deploymentTarget = "14.3"
        }
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":api"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core") {
                    version {
                        strictly("1.5.2-native-mt")
                    }
                }

                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.3.2")
                implementation("co.touchlab:stately-isolate:1.1.4-a1")
                implementation("co.touchlab:stately-common:1.1.4")
                implementation("co.touchlab:stately-concurrency:1.1.4")
            }
        }
        val androidMain by getting {
            dependencies {
                dependsOn(commonMain)
                compileOnly("group:android-core")
                api("androidx.test:runner:1.4.0")
                api("androidx.test.ext:junit:1.1.3")
                api("androidx.test:rules:1.4.0")
                api(kotlin("test-junit"))
                api("junit:junit:4.13.2")
            }
        }

        val iosMain by getting {
            dependsOn(commonMain)
        }
    }
}

android {
    namespace = "com.mparticle.testing"
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
    implementation("androidx.lifecycle:lifecycle-common:2.5.0")
}