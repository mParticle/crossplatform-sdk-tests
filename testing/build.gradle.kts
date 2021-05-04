import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.KotlinSourceSet
import java.lang.System.getProperty

plugins {
    id("com.android.library")
    id("kotlin-android-extensions")
    kotlin("multiplatform")
    kotlin("plugin.serialization")
    kotlin("native.cocoapods")
}

lateinit var commonTestSourceSet: KotlinSourceSet

kotlin {
    val iOSTarget = if (System.getenv("SDK_NAME")?.startsWith("iphoneos") == true) presets.getByName("iosArm64") else presets.getByName("iosX64")

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
        frameworkName = "multiplatform_testing"
        setVersion(1.0)
        ios.deploymentTarget= "14.3"

        pod("mParticle-Apple-SDK", path = project.file("../.sdks/apple"))

        podfile = project.file("XCodeProject/Podfile")

    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(project(":api"))
                implementation(project(":models"))
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.0.1")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        commonTest.kotlin.srcDirs("../Tests/kotlin")
        commonTestSourceSet = commonTest
        val androidMain by getting {
            dependencies {
                implementation(project(":api"))
                compileOnly("group:android-core")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")

                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core-jvm:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json-jvm:1.0.1")

                api("androidx.test:runner:1.3.0")
                api("androidx.test.ext:junit:1.1.2")
                api("androidx.test:rules:1.3.0")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation("group:android-core")
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")
                implementation("androidx.test:runner:1.1.0")
                implementation("androidx.test:rules:1.1.0")
            }
        }
        val iosMain by getting {
            dependencies {
                api(project(":api"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.0.1")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.0.1")

            }
        }
        val iosTest by getting

    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    sourceSets["androidTest"].java.srcDirs("src/androidTest", "src/commonTest")
    sourceSets["androidTest"].java.srcDirs(*commonTestSourceSet.kotlin.srcDirs.toTypedArray())

    defaultConfig {
        minSdkVersion(14)
        targetSdkVersion(29)
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
}
dependencies {
    implementation("androidx.lifecycle:lifecycle-common:2.2.0")
}
buildscript {
    val kotlin_version by extra("1.4.10")
    dependencies {
        "classpath"("org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlin_version")
    }
}

val runIos by tasks.creating(Exec::class.java) {
    dependsOn("linkDebugFrameworkIos")
    description = "Builds the iOS application bundle using Xcode."
    var testDir = File(".")
    workingDir = project.file("XCodeProject")
    setCommandLine("xcrun")
    args("xcodebuild",
            "-scheme", "XCodeProject",
            "-workspace", "XCodeProject.xcworkspace",
            "-configuration", "Debug",
            "-destination", "platform=iOS Simulator,name=iPhone 12,OS=latest",
             "test")
}

val runAndroid by tasks.creating() {
    dependsOn("connectedAndroidTest")
}

val runTests by tasks.creating() {
    dependsOn(runAndroid)
    dependsOn(runIos)
}
