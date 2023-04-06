import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
    id("maven-publish")
}
apply(from = "../.scripts/maven.gradle")

kotlin {
    android {
        publishLibraryVariants("release")
        mavenPublication {
            artifactId = "mocking"
        }
    }
    val xcFramework = XCFramework()
    ios {
        binaries.framework(listOf(NativeBuildType.RELEASE)) {
            baseName = "MP_Mocking_"
            xcFramework.add(this)
        }
    }
    cocoapods {
        framework {
            summary = "Cross Platform Mocking"
            homepage = "."
            baseName = "mParticle_Mocking"
            ios.deploymentTarget = "14.3"
        }
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":testing")) {
                    setTransitive(true)
                }
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.4")
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))

                implementation("co.touchlab:stately-isolate:1.1.4-a1")
                implementation("co.touchlab:stately-common:1.1.4")
                implementation("co.touchlab:stately-concurrency:1.1.4")
            }
        }
        val androidMain by getting {
            dependencies {
                dependsOn(commonMain)
                compileOnly("group:android-core")
                compileOnly("androidx.test:runner:1.4.0")
                compileOnly("androidx.test.ext:junit:1.1.3")
                compileOnly("androidx.test:rules:1.4.0")
            }
        }

        val iosMain by getting {
            dependsOn(commonMain)
        }
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
    implementation("androidx.lifecycle:lifecycle-common:2.5.0")
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
    afterEvaluate {
        publications {
            try {
                named<MavenPublication>("androidDebug") {
                    artifactId = project.name
                }
            } catch (e: java.lang.Exception) {}
        }
    }
}
