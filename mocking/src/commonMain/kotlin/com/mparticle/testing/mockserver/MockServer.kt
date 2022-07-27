package com.mparticle.testing.mockserver

import co.touchlab.stately.isolate.IsolateState
import com.mparticle.api.Logger
import com.mparticle.messages.*
import com.mparticle.testing.mockserver.ThreadingUtil.platforms
import com.mparticle.testing.mockserver.ThreadingUtil.runBlockingServer
import com.mparticle.testing.mockserver.model.RawConnection
import com.mparticle.testing.FailureLatch
import com.mparticle.testing.Mutable
import kotlin.native.concurrent.ThreadLocal
import kotlin.random.Random
import kotlin.test.assertTrue


typealias RequestFilter<T> = (Request<T>) -> Boolean
typealias OnRequestCallback<T, R> = (Request<T>, Response<R>) -> Boolean
typealias ResponseLogic<T, R> = (Request<T>) -> Response<R>


object Server {
    private val _defaultTimeout = IsolateState { Mutable(5 * 1000L) }

    var defaultTimeout: Long
        get() = _defaultTimeout.access { it.value }
        set(value) = _defaultTimeout.access { it.value = value }

    fun start(platforms: Platforms) {
        val runnable = {
            MockServer.start(platforms)
        }
        runBlockingServer { runnable() }
    }

    val requests: List<ReceivedRequests<*, *>>
        get() { return runOnServerAndReturn { receivedRequests } }

    fun <RequestType, ResponseType> endpoint(endpointType: EndpointType<RequestType, ResponseType>): ServerEndpoint<RequestType, ResponseType> {
        return ServerEndpoint(endpointType)
    }

    fun onRequestMade(connection: RawConnection): RawConnection {
        return runOnServerAndReturn {
            onRequestMade(connection)
        }
    }

    class ServerEndpoint<RequestType, ResponseType>(internal val endpointType: EndpointType<RequestType, ResponseType>, val childAssertion: Assertion<RequestType, ResponseType>? = null) {

        val requests: List<ReceivedRequests<RequestType, ResponseType>>
            get() = runOnServerAndReturn { getEndpoint(endpointType).receivedRequests }

        fun nextResponse(responseLogic: ResponseLogic<RequestType, ResponseType>): ServerEndpoint<RequestType, ResponseType> {
            runOnServer {
                getEndpoint(endpointType).nextResponse(responseLogic)
            }
            return this
        }

        fun addResponseLogic(requestFilter: RequestFilter<RequestType>? = null, responseLogic: ResponseLogic<RequestType, ResponseType>): ServerEndpoint<RequestType, ResponseType> {
            runOnServer {
                getEndpoint(endpointType).addRequestResponseLogic(requestFilter, responseLogic)
            }
            return this
        }

        fun assertHasReceived(assertion: RequestFilter<RequestType>) {
            runOnServerAndReturn {
                getEndpoint(endpointType).receivedRequests.any { assertion(it.request) }
            }.also {
                if (!it) {
                    throw (AssertionError("Request matching filter has not been received"))
                }
            }
        }

        fun assertHasNotReceived(assertion: RequestFilter<RequestType>): Negation<RequestType> {
            runOnServerAndReturn {
                getEndpoint(endpointType).receivedRequests.any { assertion(it.request) }
            }.also {
                if (it) {
                    throw AssertionError("Request matching filter HAS been received")
                }
            }
            return Negation(assertion, this)
        }

        fun assertNextRequest(filter: RequestFilter<RequestType>): Assertion<RequestType, ResponseType> {
            val nextRequestFilter: RequestFilter<RequestType> = {
                filter(it)
                    .apply { assertTrue(this) }
            }
            return Assertion(nextRequestFilter, endpointType, childAssertion).also {
                runOnServer {
                    getEndpoint(endpointType).onRequestFinished(it) { _, _ -> true }
                }
            }
        }

        fun assertWillReceive(filter: RequestFilter<RequestType>): Assertion<RequestType, ResponseType> =
            Assertion(filter, endpointType, childAssertion).also {
                runOnServer {
                    getEndpoint(endpointType).onRequestFinished(it) { _, _ -> true }
                }
            }

        fun assertWillNotReceive(filter: RequestFilter<RequestType>): Assertion<RequestType, ResponseType> =
            Assertion(filter, endpointType, childAssertion, true).also {
                runOnServer {
                    getEndpoint(endpointType).onRequestFinished(it) { _, _ -> true }
                }
            }


        open class Assertion<RequestType, ResponseType>(
            private val assertion: RequestFilter<RequestType>?,
            private val endpointType: EndpointType<RequestType, ResponseType>,
            private val childAssertion: Assertion<RequestType, ResponseType>? = null,
            private val isInverse: Boolean = false) : RequestFilter<RequestType> {
            private val finished = IsolateState { Mutable(false) }
            private val latch by lazy { FailureLatch() }

            val and: ServerEndpoint<RequestType, ResponseType>
                get() {
                    return ServerEndpoint(endpointType, this)
                }

            fun orHasAlready(): Assertion<RequestType, ResponseType> {
                runOnServerAndReturn {
                    if (getEndpoint(endpointType).receivedRequests.any { assertion?.invoke(it.request) == true }) {
                        finished.access { it.value = true }
                    }
                }
                return this
            }

            override fun invoke(p1: Request<RequestType>): Boolean =
                com.mparticle.testing.Platforms().runInForeground {
                    try {
                        when (assertion?.invoke(p1)) {
                            true -> {
                                latch.countDown()
                                Logger.error("Isolate finished = true")
                                    .let { finished.access { it.value = true } }
                                if (isInverse) {
                                    throw AssertionError("Received Request when matching one wasn't expected: $p1")
                                }
                                true
                            }
                            else -> false
                        }
                    } catch (throwable: Throwable) {
                        Logger.error("Assertion logic threw an Exception!")
                        Logger.error(throwable.message?: "no message")
                        Logger.error(throwable.stackTraceToString())
                        false
                    }
                }

            fun blockUntilFinished() = assertions
                    .all { child -> child.finished.access { it.value } }
                    .let { finished ->
                        if (finished) {
                            Logger.info("Latch already counted down, will not wait")
                        } else {
                            Logger.error("BLOCK UNTIL FINISHED")
                            assertions.forEach {
                                if (!it.isInverse) {
                                    try {
                                        it.latch.await()
                                        Logger.error("Latched released")
                                    } catch (e: Throwable) {
                                        throw AssertionError(e)
                                    }
                                }
                            }
                            Logger.error("All latches released")
                            assertions.forEach { it.assertFinished() }
                        }
                    }

            fun cancel() = assertions.forEach {
                Logger.error("cancelling assertion")
                it.latch.countDown()
            }

            fun assertFinished() {
                if (finished.access { it.value } == isInverse) {
                    throw AssertionError("Assertion was not finished when ${this::assertFinished.name} was called")
                }
            }

            fun after(lambda: () -> Unit): Assertion<RequestType, ResponseType> =
                lambda().let { this }

            private val assertions: List<Assertion<RequestType, ResponseType>>
                get() {
                    val assertions = mutableListOf(this)
                    var child = childAssertion
                    while (child != null) {
                        assertions.add(child)
                        child = child.childAssertion
                    }
                    return assertions
                }
        }

        inner class Negation<RequestType>(
            private val assertion: RequestFilter<RequestType>,
            private val serverEndpoint: ServerEndpoint<RequestType, ResponseType>
        ) {
            fun butWill(): ServerEndpoint.Assertion<RequestType, ResponseType> {
                return serverEndpoint.assertWillReceive(assertion)
            }
        }
    }

    private fun <T> runOnServer(runnable: MockServer.() -> T) {
        val runnable: () -> Unit = {
            instance!!.access {
                it.runnable()
                Unit
            }
        }
        runBlockingServer { runnable() }
    }

    private fun <T> runOnServerAndReturn(runnable: MockServer.() -> T): T {
        Logger.error("Run on server")
        val runnable: () -> T = {
            val result = instance?.access(runnable) ?: throw IllegalStateException("MockServer is NULL")
            result
        }
        return runBlockingServer { runnable() }
    }
}

@ThreadLocal
private var _instance: IsolateState<MockServer>? = null

internal var instance: IsolateState<MockServer>?
    get() = _instance

    set(value) {
        _instance = value
    }

class MockServer {

    private val endpointMap: Map<EndpointType<*, *>, Endpoint<*, *>> = EndpointType.values
        .associate {
            it to Endpoint(this, it)
        }
    private val onRequestCallbacks: MutableList<OnRequestCallback<Any?, out Any?>> = mutableListOf()
    var receivedRequests: List<ReceivedRequests<out Any?, out Any?>> = listOf()
        get() = endpointMap.values.flatMap { it.receivedRequests }

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
        com.mparticle.testing.Platforms().sleep(100)
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
            Logger.error(ex.message ?: "error receiving request")
            Logger.error(ex.stackTraceToString())
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
            getEndpoint(it).onRequestFinished(requestFilter = null) { any, response ->
                onRequestCallbacks.forEach { callback -> callback(any as Request<Any?>, response) }
                false
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
    fun onRequest(request: Request<T>, response: Response<R>): Boolean
}

class Request<T>(
    val url: String,
    val headers: Map<String, String?>?,
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
