plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}

kotlin {

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
        summary = "MParticle Unified Media Api"
        homepage = "."
        frameworkName = "mParticle-Media-Api"
        setVersion(0.1)
        ios.deploymentTarget= "14.3"

        pod("mParticle-Apple-Media-SDK", path = project.file("../.sdks/apple-media"))
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(":api"))
                implementation(kotlin("stdlib-common"))
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
                compileOnly("group:media")
            }
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
    implementation("androidx.lifecycle:lifecycle-common:2.2.0")
}
