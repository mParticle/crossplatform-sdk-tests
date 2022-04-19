package com.mparticle.testing.mockserver.utils

import com.mparticle.messages.IdentityRequestMessage
import com.mparticle.messages.IdentityResponseMessage
import com.mparticle.testing.mockserver.*
import kotlin.jvm.JvmOverloads

class IdentityResponseLogic @JvmOverloads constructor(val mpid: Long, val isLoggedIn: Boolean = false):
    IResponseLogic<IdentityRequestMessage, IdentityResponseMessage> {
    override fun generateResponse(request: Request<IdentityRequestMessage>): Response<IdentityResponseMessage> {
        return SuccessResponse(IdentityResponseMessage(mpid = this.mpid, isLoggedIn = this.isLoggedIn))
    }
}