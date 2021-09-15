import org.gradle.internal.impldep.org.apache.commons.io.FileUtils.copyDirectory

subprojects {
    repositories {
        google()
        mavenCentral()
        maven { setUrl("https://dl.bintray.com/kotlin/kotlin-eap") }
    }
}

val appleSDKTempDirPath = "${project.rootDir.absolutePath}/.sdks/apple-testing"

if (!File(appleSDKTempDirPath).exists()) {
    project.exec {
        commandLine = "cp -r ${project.rootDir.absolutePath}/.sdks/apple $appleSDKTempDirPath".split(" ")
    }
}

val addTestingHeadersToAppleSDK by tasks.creating {
    doLast {
        File("${project.rootDir.absolutePath}/.sdks/apple-testing/mParticle-Apple-SDK.xcodeproj/project.pbxproj")
            .let { file ->
                file.readLines()
                    .let { addMPConnectorFactoryProtocolHeaderToTarget(it) }
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

fun addMPConnectorFactoryProtocolHeaderToTarget(appleSDKProjectFileLines: List<String>): List<String>  {
    val PBXHeaderFileReferenceMPConnectorFactoryProtocol = "B22E194D26F24C790066AD47 /* MPConnectorFactoryProtocol.h in Headers */ = {isa = PBXBuildFile; fileRef = B26307BB26E2FF53000A12E9 /* MPConnectorFactoryProtocol.h */;  settings = {ATTRIBUTES = (Public, ); }; };"
    val hasMPConnectorFactoryProtocolHeaderLinker = appleSDKProjectFileLines.joinToString("").replace(" ", "").contains(PBXHeaderFileReferenceMPConnectorFactoryProtocol)
        .also {
            println("MPConnectorFactoryProtocol was ${if (!it) { "not" } else { "" }} found in the PBXBuild file. Adding reference not..")
        }
    return appleSDKProjectFileLines
        //add missing MPConnectorFactoryProtocol target :O (hack to avoid further changes to the core iOS SDK)
        .flatMap {
            if (it.contains("/* Begin PBXBuildFile section */") &&
                !hasMPConnectorFactoryProtocolHeaderLinker
            ) {
                listOf(
                    it,
                    "\t\tB22E194D26F24C790066AD47 /* MPConnectorFactoryProtocol.h in Headers */ = {isa = PBXBuildFile; fileRef = B26307BB26E2FF53000A12E9 /* MPConnectorFactoryProtocol.h */;  settings = {ATTRIBUTES = (Public, ); }; };"
                ).apply { println("Added MPConnectorFactoryProtocol to PBXBuild file...") }

            } else {
                listOf(it)
            }
        }
        .let {
            var inPBXHeadersBuildPhase = false
            var inFileBlock = false
            val MPConnectorFactoryProtocolHeaderReference = "B22E194D26F24C790066AD47 /* MPConnectorFactoryProtocol.h in Headers */,"
            var headerFound = false
            it.flatMap {
                when {
                    !inPBXHeadersBuildPhase && it.contains("/* Begin PBXHeadersBuildPhase section */") -> inPBXHeadersBuildPhase = true
                    inPBXHeadersBuildPhase && it.contains("/* End PBXHeadersBuildPhase section */") -> inPBXHeadersBuildPhase = false
                    inPBXHeadersBuildPhase && it.contains("files = (") -> inFileBlock = true
                    inPBXHeadersBuildPhase && inFileBlock && it.containsIgnoreWhitespace(MPConnectorFactoryProtocolHeaderReference) -> {
                        headerFound = true
                    }
                }
                when {
                    inPBXHeadersBuildPhase && inFileBlock && it.contains(")") -> {
                        if (headerFound) {
                            println("MPConnectorFactoryProtocol has already been added to Target's Headers build phase, ignoring")
                            listOf(it)
                        } else {
                            println("MPConnectorFactoryProtocol was not found in Targets Headers, adding reference now...")
                            listOf("\t\t\t\t$MPConnectorFactoryProtocolHeaderReference", it)
                        }.apply {
                            headerFound = false
                            inFileBlock = false
                        }
                    }
                    else -> listOf(it)
                }
            }
        }
}

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



