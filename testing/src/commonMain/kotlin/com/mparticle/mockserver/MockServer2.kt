package com.mparticle.mockserver

import com.mparticle.api.Logger
import com.mparticle.messages.*
import com.mparticle.mockserver.model.RawConnection
import kotlin.jvm.JvmOverloads
import kotlin.random.Random


typealias RequestFilter<T> = (MockServer2.Request<T>) -> Boolean
typealias OnRequestCallback<T, R> = (MockServer2.Request<T>, MockServer2.Response<R>) -> Unit
typealias ResponseLogic<T, R> = (MockServer2.Request<T>) -> MockServer2.Response<R>

class MockServer2 constructor(platforms: Platforms) {



    private var platforms: Platforms? = null

    internal val testingHandler = platforms?.mainThreadRunner

    private var started = false
    private val endpointMap: MutableMap<EndpointType<*, *>, Endpoint<*, *>> = mutableMapOf ()
    private val onRequestCallbacks: MutableList<OnRequestCallback<Any?, out Any?>> = mutableListOf()
    private val _receivedRequests = endpointMap.values.flatMap { it.receivedRequests }
    val receivedRequests: List<ReceivedRequests<out Any?, out Any?>>
        get() = ArrayList(_receivedRequests)

    init {
        start(platforms)
    }

    companion object {
        var defaultTimeout: Long = 5 * 1000
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
        testingHandler.run {
            exception.let { throw(it) }
        }
    }


    fun onRequestMade(connection: RawConnection) {
        Platforms().sleep(100)
        try {
            connection.setResponseCode(200)

            val url = connection.getUrl()
            val matchingEndpointType = EndpointType.values
                .associate {
                    if (it.urlMatch(url)) {
                        it to it.parse(this, connection)
                    } else {
                        it to null
                    }
                }
                .filter { it.value != null }
                .entries
                .toList()
            when (matchingEndpointType.size) {
                0 -> failHard("Unable to match url: " + url)
                1 -> {
                    val endpointType = matchingEndpointType[0].key
                    endpointType.onReceive(this, connection)
                }
                else -> failHard("multiple matches for url: $url\n${matchingEndpointType.joinToString { item -> item.key.name }}")
            }
        }
        catch(ex: Throwable) {
            failHard(ex)
        }
    }

    private fun start(platforms: Platforms): MockServer2 {
        platforms.injectMockServer(this)
        setDefaults()
        return this
    }

    private fun setDefaults() {
        getEndpoint(EndpointType.Config).addRequestResponseLogic(null) {
            SuccessResponse(ConfigResponseMessage())
        }
        getEndpoint(EndpointType.Events).addRequestResponseLogic(null) {
            SuccessResponse(Empty(),202)
        }
        getEndpoint(EndpointType.Alias).addRequestResponseLogic(null) {
            SuccessResponse(Empty(),202)
        }
        getEndpoint(EndpointType.Identity_Identify).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage().apply { mpid = it.body.previousMpid ?: Random.nextLong() })
        }
        getEndpoint(EndpointType.Identity_Login).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage().apply { mpid = it.body.previousMpid })
        }
        getEndpoint(EndpointType.Identity_Logout).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage().apply { mpid = it.body.previousMpid })
        }
        getEndpoint(EndpointType.Identity_Modify).addRequestResponseLogic(null) {
            SuccessResponse(IdentityResponseMessage().apply { mpid = it.body.previousMpid })
        }

        //make sure all defaults are set
        val missing = EndpointType.values.filter {
            getEndpoint(it).responseLogic.isEmpty()
        }
        if (!missing.isEmpty()) {
            throw IllegalStateException(
                    """
                        Missing default response for endpoint${if (missing.size > 1) "s" else "" }: ${missing.joinToString{ it.name}}
                        """)

        }

        //add listeners for streaming
        EndpointType.values.forEach {
            getEndpoint(it).onRequestFinished(null) { any, response ->
                onRequestCallbacks.forEach { callback -> callback(any as Request<Any?>, response) }
            }
        }
    }

    fun <T, R> getEndpoint(endpointType: EndpointType<T, R>): Endpoint<T, R> {
        val endpoint = (endpointMap[endpointType] as? Endpoint<T, R>) ?: Endpoint(this, endpointType)
        endpointMap[endpointType] = endpoint
        return endpoint
    }

    class ReceivedRequests<T, R>(
        val endpointType: EndpointType<*, *>,
        val request: Request<T>,
        var response: Response<R>,
    )

    class Request<T> (
            val url: String,
            val headers: Map<String, List<String?>?>?,
            val body: T
    ) {
        constructor(body:T, connection: RawConnection): this(connection.getUrl(), connection.getHeaderFields(), body)
    }

    abstract class Response<R> (
        val httpCode: Int,
        val responseObject: R?,
        val isError: Boolean,
        val errorMessage: String? = null
    )

    class SuccessResponse<R> @JvmOverloads constructor(
            responseObject: R,
            httpCode: Int = 200
    ): Response<R>(httpCode, responseObject, false)

    class ErrorResponse<R>(
        httpCode: Int,
        errorMessage: String): Response<R>(httpCode, null, true, errorMessage)

    interface IRequestFilter<T> {
        fun isMatch(request: Request<T>): Boolean
    }

    interface IResponseLogic<T, R> {
        fun generateResponse(request: Request<T>): Response<R>
    }

    interface IOnRequestCallback<T, R> {
        fun onRequest(request: Request<T>, response: Response<R>)
    }
}