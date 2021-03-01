package com.mparticle.mockserver

import com.mparticle.*
import com.mparticle.mockserver.model.RawConnection
import com.mparticle.testing.FailureLatch
import kotlinx.serialization.json.Json
import kotlin.jvm.JvmOverloads
import kotlin.jvm.JvmSynthetic

class Endpoint<T, R> (private val mockServer: MockServer2, private val endpointType: EndpointType<T, R>) {
    private val testingHandler = mockServer.testingHandler
    private val requestFinishedFilters: MutableList<(T, MockServer2.Response<R>, RawConnection) -> Boolean> = mutableListOf()
    internal val responseLogic: MutableMap<RequestFilter<T>, ResponseLogic<T, R>> = mutableMapOf()
    private var _receivedRequests = mutableListOf<MockServer2.ReceivedRequests<T, R>>()


    val receivedRequests: List<MockServer2.ReceivedRequests<T, R>>
        get() {
            return ArrayList(_receivedRequests)
        }

    /**
     * internal method for processing a request to this endpoing
     */
    internal fun onReceive(request: T, connection: RawConnection) {
        //reverse so the most recently registered logic gets precidence

        val responseLogic = responseLogic.entries.reversed().firstOrNull { it.key(
            MockServer2.Request(
                request,
                connection
            )
        ) }?.value
        if (responseLogic == null) {
            mockServer.failHard(
                """
                    Request does not have corresponding response logic
                        url: ${connection.getUrl()}
                        request: ${Json.encodeToString(endpointType.requestSerializer, request)}
                        """
            )
            return
        }

        val response = try {
            responseLogic(MockServer2.Request(request, connection))
        } catch (e: Exception) {
            mockServer.failHard(e)
            throw e
        }
        //add request/response to the receivedRequests list
        try {
            _receivedRequests.add(
                MockServer2.ReceivedRequests<T, R>(
                    endpointType,
                    MockServer2.Request(request, connection),
                    response
                )
            )
        } catch (e: Exception) {
        }

        //loop through all the registered callbacks, remove any matches after they have been invoked
        requestFinishedFilters.removeAll { it(request, response, connection) }

        connection.setResponseCode(response.httpCode)
        if (response.isError) {
            connection.setResponseError(response.errorMessage ?: "generic-error")
        } else {
            val responseString = if (response.responseObject != null) {
                Json.encodeToString(endpointType.responseSerializer, response.responseObject)
            } else {
                null
            }
            connection.setResponseBody(responseString)
        }
    }

    @JvmOverloads
    fun onRequestFinishedBlocking(requestFilter: MockServer2.IRequestFilter<T>? = null, onRequestCallback: MockServer2.IOnRequestCallback<T, R>? = null): Endpoint<T, R> {
        onRequestFinishedBlocking({ requestFilter?.isMatch(it) ?: true}) { req, resp -> onRequestCallback?.onRequest(req, resp)}
        return this
    }

    @JvmSynthetic
    fun onRequestFinishedBlocking(requestFilter: RequestFilter<T>? = null, onRequestCallback: OnRequestCallback<T, R>? = null): Endpoint<T, R> {
        val latch = FailureLatch()
        onRequestFinished(requestFilter) { request, response ->
            onRequestCallback?.invoke(request, response)
            latch.countDown();
        }
        latch.await()
        return this
    }

    @JvmOverloads
    fun onRequestFinished(requestFilter: MockServer2.IRequestFilter<T>? = null, onRequestCallback: MockServer2.IOnRequestCallback<T, R>? = null): Endpoint<T, R> {
        onRequestFinished({ requestFilter?.isMatch(it) ?: true}) { req, resp -> onRequestCallback?.onRequest(req, resp)}
        return this
    }

    @JvmSynthetic
    fun onRequestFinished(requestFilter: RequestFilter<T>?, onRequestCallback: OnRequestCallback<T, R>?): Endpoint<T, R> {
        requestFinishedFilters.add ({ request, response, connection ->
            var isMatch = requestFilter?.invoke(MockServer2.Request(request, connection)) ?: true
            if (isMatch) {
                try {
                    onRequestCallback?.invoke(MockServer2.Request(request, connection), response)
                } catch (e: Throwable) {
                    mockServer.failHard(exception = e);
                }
            } else {
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
    fun addRequestResponseLogic(filter: MockServer2.IRequestFilter<T>?, logic: MockServer2.IResponseLogic<T, R>): Endpoint<T, R> {
        addRequestResponseLogic({ filter?.isMatch(it) ?: true}) { req -> logic.generateResponse(req)}
        return this
    }

    @JvmSynthetic
    fun addRequestResponseLogic(filter: RequestFilter<T>?, logic: ResponseLogic<T, R>): Endpoint<T, R> {
        responseLogic.put(filter ?: { true }, logic)
        return this
    }

    fun clearRequestResponseLogic() {
        responseLogic.clear()
    }
}