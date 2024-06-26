package com.mparticle.testing.mockserver.utils

import com.mparticle.messages.IdentityRequestMessage
import com.mparticle.testing.mockserver.IRequestFilter
import com.mparticle.testing.mockserver.Request

class IdentityRequestFilter(val mpid: Long): IRequestFilter<IdentityRequestMessage> {
    override fun isMatch(request: Request<IdentityRequestMessage>): Boolean {
        return request.body.previousMpid == mpid
    }
}