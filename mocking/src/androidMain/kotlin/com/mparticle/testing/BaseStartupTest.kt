package com.mparticle.testing

import android.Manifest
import android.content.Context
import android.os.Environment
import android.os.Looper
import androidx.test.platform.app.InstrumentationRegistry
import androidx.test.rule.GrantPermissionRule
import com.mparticle.OrchestratorOnly
import com.mparticle.internal.Logger
import com.mparticle.internal.MPUtility
import org.junit.AfterClass
import org.junit.Assert
import org.junit.Assume
import org.junit.Before
import org.junit.BeforeClass
import org.junit.FixMethodOrder
import org.junit.Rule
import org.junit.Test
import org.junit.runners.MethodSorters
import java.io.File
import java.io.FileInputStream
import java.io.FileNotFoundException
import java.io.FileOutputStream
import java.io.IOException


@OrchestratorOnly
@FixMethodOrder(MethodSorters.NAME_ASCENDING)
abstract class BaseStartupTest {
    @Rule
    var readExternaStoragePermissionRule =
        GrantPermissionRule.grant(Manifest.permission.READ_EXTERNAL_STORAGE)

    @Rule
    var writeExternaStoragePermissionRule =
        GrantPermissionRule.grant(Manifest.permission.WRITE_EXTERNAL_STORAGE)
    protected lateinit var context: Context
    @Before
    fun beforeBase() {
        context = InstrumentationRegistry.getInstrumentation().context
    }

    @Test
    fun _deleteFile() {
        file.delete()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime0() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime1() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime2() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime3() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime4() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime5() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime6() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime7() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime8() {
        startupAndRecord()
    }

    @Test
    @Throws(Exception::class)
    fun testStartupTime9() {
        startupAndRecord()
    }

    @Throws(Exception::class)
    private fun startupAndRecord() {
        val startTime = System.currentTimeMillis()
        startup()
        val runTime = System.currentTimeMillis() - startTime
        Logger.debug("Startup Result = $runTime")
        val stream = FileOutputStream(getFile(fileName()), true)
        stream.write("$runTime:".toByteArray())
        Logger.error(readFile())
    }

    protected abstract fun fileName(): String
    @Throws(Exception::class)
    protected abstract fun startup()
    @Throws(IOException::class)
    protected fun readFile(): String {
        return readFile(fileName())
    }

    private val file: File
        private get() = getFile(fileName())

    companion object {
        var LEGACY_FILE_NAME = "legacyStartupTimes.txt"
        var CURRENT_FILE_NAME = "startupTimes.txt"

        /**
         * To pull the startup file from the file dir, use:
         *
         * adb pull /storage/emulated/0/Android/data/com.mparticle.testutils.test/files/startupTimes.txt
         * adb pull /storage/emulated/0/Android/data/com.mparticle.testutils.test/files/legacyStartupTimes.txt
         */
        @BeforeClass
        fun beforeBaseClass() {
            Looper.prepare()
        }

        @AfterClass
        @Throws(Exception::class)
        fun testStartupTimeAcceptable() {
            var legacyFile = readFile(LEGACY_FILE_NAME)
            var currentFile = readFile(CURRENT_FILE_NAME)
            if (MPUtility.isEmpty(legacyFile) || MPUtility.isEmpty(currentFile)) {
                return
            }
            legacyFile = legacyFile.replace(" ", "")
            currentFile = currentFile.replace(" ", "")
            val legacyResults: MutableList<Long> = ArrayList()
            val currentResults: MutableList<Long> = ArrayList()
            for (resultString in legacyFile.split(":".toRegex()).toTypedArray()) {
                try {
                    legacyResults.add(resultString.toLong())
                } catch (ex: NumberFormatException) {
                }
            }
            for (resultString in currentFile.split(":".toRegex()).toTypedArray()) {
                try {
                    currentResults.add(resultString.toLong())
                } catch (ex: NumberFormatException) {
                }
            }
            Assume.assumeTrue(legacyResults.size == currentResults.size)
            Assume.assumeTrue(legacyResults.size == 10)
            var legacySum = 0L
            for (result in currentResults) {
                legacySum += result
            }
            var currentSum = 0L
            for (result in currentResults) {
                currentSum += result
            }
            val legacyAverage = legacySum / 10.0
            val currentAverage = currentSum / 10.0
            if (currentAverage > legacyAverage * 2) {
                Assert.fail(
                    String.format(
                        "Startup time is unacceptably slow, Current avg time is %s, which is more that twice as long as Legacy avg time (%s)",
                        currentAverage,
                        legacyAverage
                    )
                )
            }
        }

        @Throws(IOException::class)
        private fun readFile(fileName: String): String {
            return try {
                val inputStream = FileInputStream(getFile(fileName))
                val bytes = ByteArray(inputStream.read())
                inputStream.read(bytes)
                String(bytes)
            } catch (ex: FileNotFoundException) {
                ""
            }
        }

        private fun getFile(fileName: String): File {
            return File(
                Environment.getExternalStoragePublicDirectory(
                    Environment.DIRECTORY_DOWNLOADS
                ), fileName
            )
        }
    }
}
