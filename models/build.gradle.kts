plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}

repositories {
    mavenLocal()
}

kotlin {
    android()
    ios()

    cocoapods {
        summary = "MParticle SDK Server Models"
        homepage = "."
        frameworkName = "mParticle-Models"
        setVersion(1.0)
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