package com.mparticle.mockserver.utils

import com.mparticle.mockserver.MockServer2
import com.mparticle.messages.IdentityRequestMessage
import com.mparticle.messages.IdentityResponseMessage
import kotlin.jvm.JvmOverloads

class IdentityResponseLogic @JvmOverloads constructor(val mpid: Long, val isLoggedIn: Boolean = false): MockServer2.IResponseLogic<IdentityRequestMessage, IdentityResponseMessage> {
    override fun generateResponse(request: MockServer2.Request<IdentityRequestMessage>): MockServer2.Response<IdentityResponseMessage> {
        return MockServer2.SuccessResponse(IdentityResponseMessage(mpid = this.mpid, isLoggedIn = this.isLoggedIn))
    }
}