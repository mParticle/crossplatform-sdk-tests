package com.mparticle.mockserver

import co.touchlab.stately.isolate.IsolateState
import com.mparticle.api.Logger
import com.mparticle.messages.*
import com.mparticle.mockserver.ThreadingUtil.runBlockingServer
import com.mparticle.mockserver.model.RawConnection
import com.mparticle.testing.FailureLatch
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import kotlin.jvm.JvmOverloads
import kotlin.native.concurrent.SharedImmutable
import kotlin.native.concurrent.ThreadLocal
import kotlin.random.Random


typealias RequestFilter<T> = (Request<T>) -> Boolean
typealias OnRequestCallback<T, R> = (Request<T>, Response<R>) -> Unit
typealias ResponseLogic<T, R> = (Request<T>) -> Response<R>

object MockServerAccessor {
    fun <T> run(runnable: MockServer.() -> T) {
        val runnable: () -> Unit = {
            instance!!.access {
                it.runnable()
                Unit
            }
        }
        runBlockingServer { runnable() }
    }

    fun <T> runAndReturn(runnable: MockServer.() -> T): T {
        val runnable: () -> T = {
            val result = instance?.access(runnable) ?: throw IllegalStateException("MockServer is NULL")
            result
        }
        return runBlockingServer { runnable() }
    }

    fun start(platforms: Platforms) {
        val runnable = {
            MockServer.start(platforms)
        }
        runBlockingServer { runnable() }
    }

    var defaultTimeout: Long = 5 * 1000
        set(value) {
            Logger.info("Setting default timeout:$value")
            val runnable = {
                Logger.info("Set!")
                field = value
            }
            runBlockingServer { runnable() }
        }
        get() = runBlockingServer { field }
}

@ThreadLocal
private var _instance: IsolateState<MockServer>? = null

internal var instance: IsolateState<MockServer>?
    get() = _instance

    set(value) {
        _instance = value
    }

interface MockServerInterface {
    fun <RequestType, ResponseType> endpoint(endpointType: EndpointType<RequestType, ResponseType>): EndpointInterface<RequestType, ResponseType>
}

interface EndpointInterface<RequestType, ResponseType> {
    fun onRequestFinished(requestFilter: RequestFilter<RequestType>): FailureLatch
    fun onRequestFinishedBlocking(requestFilter: RequestFilter<RequestType>)

    fun nextResponse(responseLogic: ResponseLogic<RequestType, ResponseType>)
}

object MockServerWrapper: MockServerInterface {
    override fun <RequestType, ResponseType> endpoint(endpointType: EndpointType<RequestType, ResponseType>): EndpointInterface<RequestType, ResponseType> {
        return EndpointWrapper { it.getEndpoint(endpointType) }
    }
}

class EndpointWrapper<RequestType, ResponseType>(private val endpoint: (MockServer) -> Endpoint<RequestType, ResponseType>): EndpointInterface<RequestType, ResponseType> {
    override fun onRequestFinished(requestFilter: RequestFilter<RequestType>): FailureLatch {
        return MockServerAccessor.runAndReturn {
            endpoint(this).onRequestFinished(requestFilter)
            FailureLatch()
        }
    }

    override fun onRequestFinishedBlocking(requestFilter: RequestFilter<RequestType>) {
        val latch = FailureLatch()
        MockServerAccessor.run {
            endpoint(this).onRequestFinished(requestFilter) { request, response -> latch.countDown() }
        }
        latch.await()
    }

    override fun nextResponse(responseLogic: ResponseLogic<RequestType, ResponseType>) {
        MockServerAccessor.run {
            endpoint(this).nextResponse(responseLogic)
        }
    }
}

class MockServer {

    private val endpointMap: Map<EndpointType<*, *>, Endpoint<*, *>> = EndpointType.values
        .associate {
            it to Endpoint(this, it)
        }
    private val onRequestCallbacks: MutableList<OnRequestCallback<Any?, out Any?>> = mutableListOf()
    var receivedRequests: List<ReceivedRequests<out Any?, out Any?>> = listOf()
        get() = ArrayList(field)

    companion object {

        fun start(platforms: Platforms) {
            Logger.info("mockserver initialize")
            instance = IsolateState { MockServer() }
            Logger.info("starting mockserver...")
            instance?.access { it.start(platforms) }
        }

        internal var defaultTimeout: Long = 5 * 1000
            set(value) {
                Logger.info("Setting default timeout:$value")
                field = value
            }
            get() = field
    }

    fun failHard(message: String) {
        failHard(RuntimeException(message))
    }

    fun failHard(exception: Throwable) {
        Logger.error("EXCEPTION: ${exception.message}\ntoString: ${exception.toString()}")
        exception.printStackTrace()
        throw exception
//        runBlocking(Dispatchers.Main) {
//            exception.let { throw(it) }
//        }
    }


    fun onRequestMade(connection: RawConnection): RawConnection {
        Platforms().sleep(100)
        try {
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
        Logger.info("injecting mockserver..")
        platforms.injectMockServer()
        setDefaults()
    }

    private fun setDefaults() {
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
        getEndpoint(EndpointType.Events).addRequestResponseLogic(null) {
            SuccessResponse(Empty(), 202)
        }
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

class SuccessResponse<R>(
    override var responseObject: R? = null,
    override var httpCode: Int = 200,
    override var headers: Map<Any?, Any?> = mapOf()
): Response<R>() {
    override var errorMessage: String? = null
    override var isError: Boolean = false
}

fun <ResponseType> SuccessResponse(initializer: SuccessResponse<ResponseType>.() -> Unit): SuccessResponse<ResponseType> = SuccessResponse<ResponseType>().apply(initializer)

class ErrorResponse<R>(
    override var httpCode: Int = 500,
    override var errorMessage: String = "DEFAULT ERROR MESSAGE FOR MOCKSERER RESPONSE. (@link MockServerKt.ErrorResponse}"
): Response<R>() {
    override var isError: Boolean = true
    override var responseObject: R? = null
    override var headers: Map<Any?, Any?> = mapOf()
}


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

fun Request<IdentityRequestMessage>.modifyMpid(): Long =
    url.split("/").let { segments ->
        segments[segments.size - 2].toLong()
    }

abstract class Response<ResponseType> {
    abstract var httpCode: Int
    abstract var responseObject: ResponseType?
    abstract var isError: Boolean
    abstract val errorMessage: String?
    abstract var headers: Map<Any?, Any?>

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

class DefaultResponse<ResponseType>() :Response<ResponseType>() {
    override var httpCode: Int = 0
    override var responseObject: ResponseType? = null
    override var isError: Boolean = false
    override val errorMessage: String? = null
    override var headers: Map<Any?, Any?> = mapOf()
}

fun <ResponseType> Response(initializer: Response<ResponseType>.() -> Unit): Response<ResponseType> = DefaultResponse<ResponseType>().apply(initializer)
