import org.jetbrains.kotlin.gradle.plugin.KotlinSourceSet

plugins {
    id("com.android.library")
    id("kotlin-android-extensions")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}

kotlin {
    val iOSTarget = if (System.getenv("SDK_NAME")
            ?.startsWith("iphoneos") == true
    ) presets.getByName("iosArm64") else presets.getByName("iosX64")

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
        summary = "Cross Platform Testing"
        homepage = "."
        frameworkName = "mParticle_Multiplatform_Tests"
        setVersion(1.0)
        ios.deploymentTarget = "14.3"

        pod("mParticle-Apple-SDK/mParticle", path = project.file("../.sdks/apple-testing"))

        podfile = project.file("helpers/XCodeTest/Podfile")

    }

    sourceSets {
        val commonTest by getting {
            dependencies {
                api(project(":testing"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        commonTest.kotlin.srcDirs("CommonTests")
        val commonMain by getting {
            dependencies {
                implementation(project(":testing"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation(project(":testing"))
                implementation("group:android-core")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")
                implementation("androidx.test:runner:1.1.0")
                implementation("androidx.test:rules:1.1.0")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation(project(":testing"))
            }
        }
    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("helpers/AndroidManifest.xml")
    sourceSets["androidTest"].java.srcDirs("CommonTests")

    defaultConfig {
        minSdkVersion(14)
        targetSdkVersion(29)
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}

val installTestPods by tasks.creating(Exec::class.java) {
    workingDir = project.file("helpers/XCodeTest")
    setCommandLine("pod")
    args("install")
}


val runIos by tasks.creating(Exec::class.java) {
    val linkDebugFrameworkIos = tasks.findByName("linkDebugFrameworkIos")
    dependsOn("linkDebugFrameworkIos")
    linkDebugFrameworkIos?.dependsOn(installTestPods)
    installTestPods.dependsOn("podImport")
    description = "Builds the iOS application bundle using Xcode."
    workingDir = project.file("helpers/XCodeTest")
    setCommandLine("xcrun")
    args("xcodebuild",
        "-scheme", "XCodeTestUITests",
        "-workspace", "XCodeTest.xcworkspace",
        "-configuration", "Debug",
        "-destination", "platform=iOS Simulator,name=iPhone 11,OS=latest",
        "test")
}

val runAndroid by tasks.creating() {
    dependsOn("connectedAndroidTest")
}

val runTests by tasks.creating() {
    dependsOn(runAndroid)
    dependsOn(runIos)
}
