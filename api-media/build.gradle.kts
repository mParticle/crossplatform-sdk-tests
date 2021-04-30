plugins {
    id("com.android.library")
    id("kotlin-android-extensions")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
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
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdkVersion(14)
        targetSdkVersion(29)
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
}
