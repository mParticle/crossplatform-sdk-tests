import java.io.File

//fun main(args: Array<String>) {

val targetFile = "/Users/wpassidomo/Downloads/MarvelLogcat.txt"
    println("Starting")
    File(targetFile)
        .readLines()
        .filter {
            println("checking line...")
            it.lowercase().contains("mparticle")
        }
        .joinToString("\n")
        .let {
            File("${targetFile.replace(".txt", "-mparticle.txt")}")
                .apply {
                    if (exists()) {
                        delete()
                    }
                    writeText(it)
                }
            println(it)
        }
//}