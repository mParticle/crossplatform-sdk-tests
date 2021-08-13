package com.mparticle.mockserver

import co.touchlab.stately.concurrency.AtomicReference
import co.touchlab.stately.freeze
import co.touchlab.stately.isolate.IsolateState
import com.mparticle.api.Logger
import com.mparticle.messages.*
import com.mparticle.mockserver.ThreadingUtil.runBlockingServer
import com.mparticle.mockserver.model.RawConnection
import kotlin.jvm.JvmOverloads
import kotlin.native.concurrent.ThreadLocal
import kotlin.random.Random


typealias RequestFilter<T> = (Request<T>) -> Boolean
typealias OnRequestCallback<T, R> = (Request<T>, Response<R>) -> Unit
typealias ResponseLogic<T, R> = (Request<T>) -> Response<R>

object MockServerAccessor {
    fun <T> run(runnable: MockServer2.() -> T) {
        val runnable: () -> Unit = {
            Logger().error("Running runnable..")
            instance!!.access {
                it.runnable()
                Unit
            }
        }
        runBlockingServer { runnable() }
    }

    fun <T> runAndReturn(runnable: MockServer2.() -> T): T {
        val runnable: () -> T = {
            Logger().error("Running runnable..")
            val result = instance?.access(runnable) ?: throw IllegalStateException("MockServer is NULL")
            result
        }
        return runBlockingServer { runnable() }
    }

    fun start(platforms: Platforms) {
        Logger().error("Starting: ${platforms.currentThread()}")
        val runnable = {
            Logger().error("Starting (in thread): ${platforms.currentThread()}")
            MockServer2.start(platforms)
            Logger().error("Started (in thread): ${platforms.currentThread()}")
        }
        runBlockingServer { runnable() }
    }

    var defaultTimeout: Long = 5 * 1000
        set(value) {
            Logger().info("Setting default timeout:$value")
            val runnable = {
                Logger().info("Set!")
                field = value
            }
            runBlockingServer { runnable() }
        }
        get() = runBlockingServer { field }
}

@ThreadLocal
private var _instance: IsolateState<MockServer2>? = null

internal var instance: IsolateState<MockServer2>?
    get() = _instance.apply { Logger().error("Getting instance: $this") }

    set(value) {
        Logger().error("Setting instance: $value")
        _instance = value
    }

class MockServer2 constructor(platforms: Platforms) {

    internal val testingHandler = platforms.mainThreadRunner
    private val endpointMap: Map<EndpointType<*, *>, Endpoint<*, *>> = EndpointType.values
        .associate {
            it to Endpoint(this, it)
        }
    private val onRequestCallbacks: MutableList<OnRequestCallback<Any?, out Any?>> = mutableListOf()
    var receivedRequests: List<ReceivedRequests<out Any?, out Any?>> = listOf()
        get() = ArrayList(field)

    companion object {

        fun start(platforms: Platforms) {
            Logger().error("mockserver initialize")
            instance = IsolateState { MockServer2(platforms) }
            Logger().error("starting mockserver...")
            instance?.access { it.start(platforms) }
            Logger().error("STARTED Mockserver2: ${platforms.currentThread()}")
        }

        internal var defaultTimeout: Long = 5 * 1000
            set(value) {
                Logger().info("Setting default timeout:$value")
                field = value
            }
            get() = field
    }

    fun failHard(message: String) {
        failHard(RuntimeException(message))
    }

    fun failHard(exception: Throwable) {
        Logger().error("EXCEPTION: ${exception.message}")
        testingHandler.run {
            exception.let { throw(it.freeze()) }
        }
    }


    fun onRequestMade(connection: RawConnection): RawConnection {
        Logger().error("On request made: received")
        Platforms().sleep(100)
        try {
            Logger().error("Request made: ${connection.getUrl()}")
            val url = connection.getUrl()
            val matchingEndpointType = EndpointType.values
                .filter { it.urlMatch(url)}
            when (matchingEndpointType.size) {
                0 -> failHard("Unable to match url: " + url)
                1 -> {
                    val endpointType = matchingEndpointType[0]
                    return endpointType.onReceive(this, connection) ?: connection
                }
                else -> failHard("multiple matches for url: $url\n${matchingEndpointType.joinToString { item -> item.name }}")
            }
        } catch (ex: Throwable) {
            failHard(ex)
        }
        return connection
    }

    private fun start(platforms: Platforms){
        Logger().error("injecting mockserver..")
        platforms.injectMockServer()
        Logger().error("setting defaults..")
        setDefaults()
        Logger().error("done start()")
    }

    private fun setDefaults() {
        Logger().error("setting config endpoint default")
        getEndpoint(EndpointType.Config).addRequestResponseLogic(null) {
            SuccessResponse(ConfigResponseMessage(
                id = "1234578",
                debug = false,
                sessionTimeout = 1000,
                type = "ac"
            ), 200,
            headers = mapOf(
                "eTag" to Random.nextLong().toString()
            ))
        }
        Logger().error("setting Events endpoint default")
        getEndpoint(EndpointType.Events).addRequestResponseLogic(null) {
            SuccessResponse(Empty(), 202)
        }
        Logger().error("setting Alias endpoint default")
        getEndpoint(EndpointType.Alias).addRequestResponseLogic(null) {
            SuccessResponse(Empty(), 202)
        }
        getEndpoint(EndpointType.Identity_Identify).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage(it.body.previousMpid ?: Random.nextLong()))
        }
        getEndpoint(EndpointType.Identity_Login).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage(it.body.previousMpid))
        }
        getEndpoint(EndpointType.Identity_Logout).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage(it.body.previousMpid))
        }
        getEndpoint(EndpointType.Identity_Modify).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage(it.body.previousMpid))
        }

        //make sure all defaults are set
        val missing = EndpointType.values.filter {
            getEndpoint(it).responseLogic.isEmpty()
        }
        if (!missing.isEmpty()) {
            throw IllegalStateException(
                """
                        Missing default response for endpoint${if (missing.size > 1) "s" else ""}: ${missing.joinToString { it.name }}
                        """
            )

        }

        //add listeners for streaming
        EndpointType.values.forEach {
            getEndpoint(it).onRequestFinished(null) { any, response ->
                onRequestCallbacks.forEach { callback -> callback(any as Request<Any?>, response) }
            }
        }
    }

    fun <T, R> getEndpoint(endpointType: EndpointType<T, R>): Endpoint<T, R> {
        return endpointMap[endpointType] as Endpoint<T, R>
    }
}

class ReceivedRequests<T, R>(
    val endpointType: EndpointType<*, *>,
    val request: Request<T>,
    var response: Response<R>,
)

class SuccessResponse<R> @JvmOverloads constructor(
    responseObject: R,
    httpCode: Int = 200,
    headers: Map<Any?, Any?> = mapOf()
) : Response<R>(httpCode, responseObject, false, headers = headers)

class ErrorResponse<R>(
    httpCode: Int,
    errorMessage: String
) : Response<R>(httpCode, null, true, errorMessage)


interface IRequestFilter<T> {
    fun isMatch(request: Request<T>): Boolean
}

interface IResponseLogic<T, R> {
    fun generateResponse(request: Request<T>): Response<R>
}

interface IOnRequestCallback<T, R> {
    fun onRequest(request: Request<T>, response: Response<R>)
}

class Request<T>(
    val url: String,
    val headers: Map<String, List<String?>?>?,
    val body: T
) {
    constructor(body: T, connection: RawConnection) : this(connection.getUrl(), connection.getHeaderFields(), body)
}

abstract class Response<R>(
    val httpCode: Int,
    val responseObject: R?,
    val isError: Boolean,
    val errorMessage: String? = null,
    val headers: Map<Any?, Any?> = mapOf()
) {
    override fun toString(): String {
        return """
                    httpCode: $httpCode
                    isError: $isError
                    responseObject: $responseObject
                    errorMessage: $errorMessage
                    headers: ${headers.entries.joinToString("\n") { "${it.key} : ${it.value}"}}
                """.trimIndent()
    }
}