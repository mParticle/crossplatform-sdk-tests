package com.mparticle.mockserver

import com.mparticle.*
import com.mparticle.api.Logger
import com.mparticle.mockserver.model.RawConnection
import com.mparticle.testing.FailureLatch
import com.mparticle.mockserver.model.SimpleRawConnection
import com.mparticle.mockserver.*
import kotlinx.serialization.json.Json
import kotlin.jvm.JvmOverloads
import kotlin.jvm.JvmSynthetic
import kotlin.native.concurrent.ThreadLocal


class Endpoint<T, R> (private val mockServer: MockServer2, private val endpointType: EndpointType<T, R>) {


    private val requestFinishedFilters: MutableList<(T, Response<R>, RawConnection) -> Boolean> = mutableListOf()
    internal val responseLogic: MutableMap<RequestFilter<T>, ResponseLogic<T, R>> = mutableMapOf()
    private var _receivedRequests = mutableListOf<ReceivedRequests<T, R>>()


    val receivedRequests: List<ReceivedRequests<T, R>>
        get() {
            return ArrayList(_receivedRequests)
        }

    /**
     * internal method for processing a request to this endpoing
     */
    internal fun onReceive(request: T, connection: RawConnection): RawConnection {
        //reverse so the most recently registered logic gets precidence
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
        Logger().error("Response: $response")
        //add request/response to the receivedRequests list
        try {
            _receivedRequests.add(
                ReceivedRequests<T, R>(
                    endpointType,
                    Request(request, connection),
                    response
                )
            )
        } catch (e: Exception) {
            Logger().error("Could not modify receivedRequests: ${e.message}")
        }

        Logger().error("Copying over to new response object")
        val returnConnection =
            SimpleRawConnection(
                connection.getUrl(),
                { connection.getRequestBody() },
                response.httpCode,
                response.errorMessage,
                responseBody = if (response.responseObject != null) {
                    Json.encodeToString(endpointType.responseSerializer, response.responseObject)
                } else {
                    null
                },
                responseHeaders = response.headers
            )
        Logger().error("Removing request finished filters for Endpoint ${endpointType.name}. Count = ${requestFinishedFilters.size}...")
        //loop through all the registered callbacks, remove any matches after they have been invoked
        try {
            requestFinishedFilters.removeAll {
                Logger().error("testing requestFinisheddFilter..")
                val result = it(request, response, returnConnection)
                Logger().error("result, isMatch = $result")
                result
            }
        }
        catch (ex: Exception) {
            Logger().error(ex.message ?: ex.toString())
        }
        Logger().error("Returning connection: $returnConnection")
        return returnConnection
    }

    @JvmOverloads
    fun onRequestFinishedBlocking(requestFilter: IRequestFilter<T>? = null, onRequestCallback: IOnRequestCallback<T, R>? = null): Endpoint<T, R> {
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
    fun onRequestFinished(requestFilter: IRequestFilter<T>? = null, onRequestCallback: IOnRequestCallback<T, R>? = null): Endpoint<T, R> {
        onRequestFinished({ requestFilter?.isMatch(it) ?: true}) { req, resp -> onRequestCallback?.onRequest(req, resp)}
        return this
    }

    @JvmSynthetic
    fun onRequestFinished(requestFilter: RequestFilter<T>?, onRequestCallback: OnRequestCallback<T, R>?): Endpoint<T, R> {
        Logger().error("log")
        Logger().error("Adding request finished filters for Endpoint ${endpointType.name}. Count = ${requestFinishedFilters.size}...")
        requestFinishedFilters.add ({ request, response, connection ->
            Logger().error("Request filter is null = ${requestFilter == null}")
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
        Logger().error("ADDED request finished filters for Endpoint ${endpointType.name}. Count = ${requestFinishedFilters.size}...")
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
    fun addRequestResponseLogic(filter: IRequestFilter<T>?, logic: IResponseLogic<T, R>): Endpoint<T, R> {
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