import org.gradle.internal.impldep.org.apache.commons.io.FileUtils.copyDirectory

subprojects {
    repositories {
        google()
        mavenCentral()
        maven { setUrl("https://dl.bintray.com/kotlin/kotlin-eap") }
    }
}

val appleSDKTempDirPath = "${project.rootDir.absolutePath}/.sdks/apple-testing"

if (File(appleSDKTempDirPath).exists()) {
    project.exec {
        commandLine = "rm -rf $appleSDKTempDirPath".split(" ")
    }
}


project.exec {
    commandLine = "cp -r ${project.rootDir.absolutePath}/.sdks/apple $appleSDKTempDirPath".split(" ")
}

val addTestingHeadersToAppleSDK by tasks.creating {
    doLast {
        File("${project.rootDir.absolutePath}/.sdks/apple-testing/mParticle-Apple-SDK.xcodeproj/project.pbxproj")
            .let { file ->
                file.readLines()
                    .let { makeTestingHeadersPublic(it) }
                    .let { file.writeText(it.joinToString("\n")) }
            }
    }
}


subprojects {
    afterEvaluate {
        tasks.findByName("podGenIOS")?.dependsOn(addTestingHeadersToAppleSDK)
    }
}

val additionalHeaders = listOf(
    "MPConnectorProtocol.h",
    "MPConnectorResponseProtocol.h",
    "MPConnectorFactoryProtocol.h",
    "MPNetworkCommunication.h",
    "MPURL.h"
)

fun String.containsIgnoreWhitespace(other: String) = this.replace(" ", "").contains(other.replace(" ", ""))

fun makeTestingHeadersPublic(appleSDKProjectFileLines: List<String>): List<String> {
    println("Adding Attribute: Public to missing file headers")
    return additionalHeaders
        .map { additionalHeader ->
            println("Locating PBX file reference for: $additionalHeader")
            appleSDKProjectFileLines
                .firstOrNull { it.contains("= $additionalHeader") }
                ?.split(" ")
                ?.first()
                ?.replace(" ", "")
                ?.replace("\t", "")
                ?.also {
                    println("Found PBX file reference of: $it for: $additionalHeader")
                }
                ?: null.apply {println("Project File is missing the additionalHeader: $additionalHeader")}
        }
        .fold(appleSDKProjectFileLines) { projectFileLines, fileKey ->
            projectFileLines.map {
                val itNoWhitespace = it.replace(" ", "")
                if (
                    it.contains("= $fileKey") &&
                    !itNoWhitespace.contains(" settings = {ATTRIBUTES = (Public, ); };".replace(" ", ""))
                ) {
                    println("Adding ATTRIBUTE:Public for: $fileKey")
                    "${it.subSequence(0, it.indexOfLast { it == '}' })} settings = {ATTRIBUTES = (Public, ); }; };"
                } else {
                    it
                }
            }
        }
}



