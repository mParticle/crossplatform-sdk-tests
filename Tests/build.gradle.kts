import org.jetbrains.kotlin.gradle.plugin.KotlinSourceSet
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}

kotlin {
    androidTarget {
        publishLibraryVariants("release")
    }
    val xcFramework = XCFramework()
    ios {
        binaries.framework(listOf(NativeBuildType.RELEASE)) {
            baseName = "MP_Tests"
            xcFramework.add(this)
        }
    }

    cocoapods {
        framework {
            summary = "Cross Platform Testing"
            homepage = "."
            baseName = "mParticle_Multiplatform_Tests"
            ios.deploymentTarget = "14.3"
            transitiveExport = true
        }
        podfile = project.file("helpers/XCodeTest/Podfile")

    }

    sourceSets {
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
            kotlin.srcDirs("CommonTests")
        }
        val commonMain by getting {
            dependencies {
                implementation(project(":mocking"))
                implementation(project(":testing"))
                implementation(project(":api"))
                implementation(project(":models"))
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
            kotlin.srcDir("CommonTests")
        }
    }
}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile>().configureEach {
    kotlinOptions.jvmTarget = "1.8"
}

android {
    namespace = "com.mparticle.cpt.testing"
    compileSdk = 31
    sourceSets["main"].manifest.srcFile("helpers/AndroidManifest.xml")
    sourceSets["androidTest"].java.srcDirs("CommonTests")

    defaultConfig {
        minSdk= 14
        targetSdk = 31
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}

// mParticle_Apple_SDK is declared in :api and its framework search path is
// not propagated automatically to this module's link task in Kotlin 1.9.20.
// Apply the -F flag after all plugin configuration (including CocoaPods) completes.
afterEvaluate {
    val mParticleFrameworkDir = "${project.rootDir}/api/build/cocoapods/synthetic/ios/build/Release-iphonesimulator"
    (tasks.findByName("linkReleaseFrameworkIosX64") as? org.jetbrains.kotlin.gradle.tasks.KotlinNativeLink)
        ?.binary?.linkerOpts?.add("-F$mParticleFrameworkDir")
}

val installTestPods by tasks.creating(Exec::class.java) {
    dependsOn("podspec")
    dependsOn("generateDummyFramework")
    workingDir = project.file("helpers/XCodeTest")
    setCommandLine("pod")
    args("install")
}


val runIos by tasks.creating(Exec::class.java) {
    val linkReleaseFrameworkIos = tasks.findByName("linkReleaseFrameworkIosX64")
    dependsOn(linkReleaseFrameworkIos)
    linkReleaseFrameworkIos?.dependsOn(installTestPods)
    description = "Builds the iOS application bundle using Xcode."
    workingDir = project.file("helpers/XCodeTest")
    setCommandLine("xcrun")
    args("xcodebuild",
        "-scheme", "XCodeTestUITests",
        "-workspace", "XCodeTest.xcworkspace",
        "-configuration", "Debug",
        "-destination", "platform=iOS Simulator,name=iPhone 14,OS=latest",
        "test")
}

val runAndroid by tasks.creating() {
    dependsOn("connectedAndroidTest")
}

val runTests by tasks.creating() {
    dependsOn(runAndroid)
    dependsOn(runIos)
}
