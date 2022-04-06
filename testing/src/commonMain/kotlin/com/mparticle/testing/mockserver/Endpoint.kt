package com.mparticle.testing.mockserver

import com.mparticle.api.Logger
import com.mparticle.testing.mockserver.model.RawConnection
import com.mparticle.testing.FailureLatch
import com.mparticle.testing.mockserver.model.SimpleRawConnection
import kotlinx.serialization.json.Json
import kotlin.jvm.JvmOverloads
import kotlin.jvm.JvmSynthetic


class Endpoint<RequestType, ResponseType> (private val mockServer: MockServer, private val endpointType: EndpointType<RequestType, ResponseType>) {


    private val requestFinishedFilters: MutableList<(RequestType, Response<ResponseType>, RawConnection) -> Boolean> = mutableListOf()
    internal val responseLogic: MutableMap<RequestFilter<RequestType>, ResponseLogic<RequestType, ResponseType>> = mutableMapOf()
    private var _receivedRequests = mutableListOf<ReceivedRequests<RequestType, ResponseType>>()


    val receivedRequests: List<ReceivedRequests<RequestType, ResponseType>>
        get() {
            Int.MAX_VALUE
            return ArrayList(_receivedRequests)
        }

    /**
     * internal method for processing a request to this endpoing
     */
    internal fun onReceive(request: RequestType, connection: RawConnection): RawConnection {
        //reverse so the most recently registered logic gets precedence
        val responseLogic = responseLogic.entries.reversed().firstOrNull { it.key(
            Request(
                request,
                connection
            )
        ) }?.value
        if (responseLogic == null) {
            mockServer.failHard(
                """
                    Request does not have corresponding response logic
                        url: ${connection.getUrl()}
                        """
            )
            return connection
        }

        val response = try {
            responseLogic(Request(request, connection))
        } catch (e: Exception) {
            mockServer.failHard(e)
            throw e
        }
        Logger.info("Response: $response")
        //add request/response to the receivedRequests list
        try {
            _receivedRequests.add(
                ReceivedRequests<RequestType, ResponseType>(
                    endpointType,
                    Request(request, connection),
                    response
                )
            )
        } catch (e: Exception) {
            Logger.error("Could not modify receivedRequests: ${e.message}")
        }

        Logger.info("Copying over to new response object")
        val returnConnection =
            SimpleRawConnection(
                connection.getUrl(),
                { connection.getRequestBody() },
                response.httpCode,
                response.errorMessage,
                responseBody = response.responseObject.let { responseObject ->
                    if (responseObject != null) {
                        Json.encodeToString(endpointType.responseSerializer, responseObject)
                    } else {
                        null
                    }
                },
                responseHeaders = response.headers
            )
        Logger.error("Removing request finished filters for Endpoint ${endpointType.name}. Count = ${requestFinishedFilters.size}...")
        //loop through all the registered callbacks, remove any matches after they have been invoked
//        try {
            requestFinishedFilters.removeAll {
                val result = it(request, response, returnConnection)
                result
            }
//        }
//        catch (ex: Exception) {
//            Logger.error(ex.message ?: ex.toString())
//        }
        Logger.info("Returning connection: $returnConnection")
        return returnConnection
    }

    @JvmOverloads
    fun onRequestFinishedBlocking(requestFilter: IRequestFilter<RequestType>? = null, onRequestCallback: IOnRequestCallback<RequestType, ResponseType>? = null): Endpoint<RequestType, ResponseType> {
        onRequestFinishedBlocking({ requestFilter?.isMatch(it) ?: true}) { req, resp -> onRequestCallback?.onRequest(req, resp)}
        return this
    }

    @JvmSynthetic
    fun onRequestFinishedBlocking(requestFilter: RequestFilter<RequestType>? = null, onRequestCallback: OnRequestCallback<RequestType, ResponseType>? = null): Endpoint<RequestType, ResponseType> {
        val latch = FailureLatch()
        Logger.error("Received Requests size: ${receivedRequests.size}")
        receivedRequests.forEach {
            try {
                Logger.error("Previously received request: ${it.request}")

                if (requestFilter?.invoke(it.request) == true) {
                    Logger.error("Found matching!!")
                    onRequestCallback?.invoke(it.request, it.response)
                    return this
                }
            } catch (ex: Exception) {
                Logger.error("Could not add onRequestFinishedBlocking filter: ${ex.message}")
            }
        }
        Logger.error("Adding blocking request filter..")
        onRequestFinished(requestFilter) { request, response ->
            onRequestCallback?.invoke(request, response)
            latch.countDown();
        }
        latch.await()
        return this
    }

    @JvmSynthetic
    fun onRequestFinished(requestFilter: RequestFilter<RequestType>?, onRequestCallback: OnRequestCallback<RequestType, ResponseType>? = null): Endpoint<RequestType, ResponseType> {
        Logger.info("Adding request finished filters for Endpoint ${endpointType.name}. Count = ${requestFinishedFilters.size}...")
        requestFinishedFilters.add ({ request, response, connection ->
            var isMatch = requestFilter?.invoke(Request(request, connection)) ?: true
            if (isMatch) {
                try {
                    onRequestCallback?.invoke(Request(request, connection), response)
                } catch (e: Throwable) {
                    mockServer.failHard(exception = e);
                }
            }
            isMatch
        })
        return this
    }


    fun clearRequestFilter() {
        requestFinishedFilters.clear()
    }

    /**
     * Add a piece of request-response logic that will trigger when `filter` is matched. Responses are generated based on the *most recently added matching function*
     * The default logic is added first, when the MockServer starts up, so any request-response logic added
     * during a test will be tested for a match, and the default will only be used if there are no other matches
     *
     * @param filter a filter to match the target request that logic will generate a response for, `null` will match all requests
     * @param logic a callback to generate a Response object for a given Request
     */
    @JvmOverloads
    fun addRequestResponseLogic(filter: IRequestFilter<RequestType>?, logic: IResponseLogic<RequestType, ResponseType>): Endpoint<RequestType, ResponseType> {
        addRequestResponseLogic({ filter?.isMatch(it) ?: true}) { req -> logic.generateResponse(req)}
        return this
    }

    @JvmSynthetic
    fun addRequestResponseLogic(filter: RequestFilter<RequestType>?, logic: ResponseLogic<RequestType, ResponseType>): Endpoint<RequestType, ResponseType> {
        responseLogic.put(filter ?: { true }, logic)
        return this
    }

    fun nextResponse(response: ResponseLogic<RequestType, ResponseType>) {
        addRequestResponseLogic(null, response)
    }

    fun clearRequestResponseLogic() {
        responseLogic.clear()
    }
}