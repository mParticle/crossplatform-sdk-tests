package com.mparticle.testing

import android.os.Debug
import android.os.Looper
import android.os.Process
import android.util.Log
import androidx.test.platform.app.InstrumentationRegistry
import com.mparticle.api.ClientPlatform
import com.mparticle.api.ClientPlatformImpl
import com.mparticle.internal.AppStateManager
import com.mparticle.internal.Logger
import com.mparticle.mockserver.Server
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking

//awaiter only used for iOS
actual fun beforeTest() {
//    if (Looper.myLooper() == null) {
//        Looper.prepare()
//    }
    AppStateManager.mInitialized = false
    //set the timeout on the FailureLatch higher if developer is debugging. This way you won't have
    //as many annoying failures while trying to figure out whats happening in a breakpoint
    if (Debug.isDebuggerConnected() || Debug.waitingForDebugger()) {
        Log.e("MockServer2", "debug mode")
        Server.defaultTimeout = 60 * 1000
    }
}

actual fun getClientPlatform(): ClientPlatform {
    return ClientPlatformImpl(InstrumentationRegistry.getInstrumentation().context)
}

actual fun setAwaiter(awaiter: Awaiter) {

class CaptureLogcatOnFailingTest : TestRule {
    override fun apply(base: Statement, description: Description): Statement {
        return object : Statement() {
            @Throws(Throwable::class)
            override fun evaluate() {
                try {
                    base.evaluate()
                } catch (throwable: Throwable) {
                    if (throwable is AssumptionViolatedException) {
                        throw throwable
                    }
                    var message = getReleventLogsAfterTestStart(description.getMethodName())
                    val requestReceivedBuilder = StringBuilder()
//                    val mockServer: MockServer = MockServer.getInstance()
//                    if (mockServer != null) {
//                        for (connection in mockServer.Requests().requests) {
//                            requestReceivedBuilder.append(connection.getURL().toString())
//                                .append("\n")
//                                .append(connection.getBody())
//                                .append("\n")
//                                .append(connection.getResponseCode())
//                                .append(connection.getResponseMessage())
//                                .append("\n")
//                        }
//                    } else {
//                        requestReceivedBuilder.append("Mock Server not started")
//                    }
                    message = (throwable.message + ORIGINAL_CLASS_HEADER
                            + throwable.javaClass.name + LOGCAT_HEADER
                            + message + MOCKSERVER_HEADER +
                            requestReceivedBuilder.toString() + STACKTRACE_HEADER)
                    val modifiedThrowable = Throwable(message)
                    modifiedThrowable.stackTrace = throwable.stackTrace
                    throw modifiedThrowable
                }
            }
        }
    }

    private fun getReleventLogsAfterTestStart(testName: String): String {
        val testStartMessage = "TestRunner: started: $testName"
        val currentProcessId = Integer.toString(Process.myPid())
        var isRecording = false
        val builder = StringBuilder()
        var reader: BufferedReader? = null
        try {
            val process = Runtime.getRuntime().exec(arrayOf("logcat", "-d", "-v", "threadtime"))
            reader = BufferedReader(InputStreamReader(process.inputStream))
            var line: String? = null
            while (reader.readLine().also { line = it } != null) {
                if (line?.contains(currentProcessId) ?: false) {
                    if (line?.contains(testStartMessage) ?: false) {
                        isRecording = true
                    }
                }
                if (isRecording) {
                    builder.append(line)
                    builder.append("\n")
                }
            }
        } catch (e: IOException) {
            Logger.error(e)
        } finally {
            if (reader != null) {
                try {
                    reader.close()
                } catch (e: IOException) {
                    Logger.error(e)
                }
            }
        }
        try {
            Runtime.getRuntime().exec(arrayOf("logcat", "-b", "all", "-c"))
        } catch (e: IOException) {
            Logger.error(e)
        }
        return builder.toString()
    }

    companion object {
        private const val LOGCAT_HEADER = "\n============== Logcat Output =============\n"
        private const val STACKTRACE_HEADER = "\n============== Stacktrace ==============="
        private const val MOCKSERVER_HEADER = "\n ============== Mock Server Requests ==========\n"
        private const val ORIGINAL_CLASS_HEADER = "\nOriginal class: "
    }
}