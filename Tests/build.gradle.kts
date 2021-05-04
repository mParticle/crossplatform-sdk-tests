//plugins {
//    id("com.android.library")
//    id("kotlin-android-extensions")
//    kotlin("multiplatform")
//    kotlin("plugin.serialization")
//    kotlin("native.cocoapods")
//}
//
//kotlin {
//    val iOSTarget = if (System.getenv("SDK_NAME")
//            ?.startsWith("iphoneos") == true
//    ) presets.getByName("iosArm64") else presets.getByName("iosX64")
//
//    android()
//    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
//    if (onPhone) {
//        iosArm64("ios") {
//            binaries.getFramework(DEBUG).compilation = compilations.maybeCreate("test")
//        }
//    } else {
//        iosX64("ios") {
//            binaries.getFramework(DEBUG).compilation = compilations.maybeCreate("test")
//        }
//    }
//    cocoapods {
//        summary = "Cross Platform Testing"
//        homepage = "."
//        frameworkName = "multiplatform_testing"
//        setVersion(1.0)
//        ios.deploymentTarget = "14.3"
//
//        pod("mParticle-Apple-SDK", path = project.file("../.sdks/apple"))
//
//        podfile = project.file("XCodeProject/Podfile")
//
//    }
//
//
//    sourceSets {
//        val commonTest by getting
//    }
//}