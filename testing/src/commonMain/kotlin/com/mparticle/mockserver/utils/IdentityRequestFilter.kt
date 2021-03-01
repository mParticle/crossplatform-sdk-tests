package com.mparticle.mockserver.utils

import com.mparticle.mockserver.MockServer2
import com.mparticle.mockserver.MockServer2.IRequestFilter
import com.mparticle.messages.IdentityRequestMessage

class IdentityRequestFilter(val mpid: Long): IRequestFilter<IdentityRequestMessage> {
    override fun isMatch(request: MockServer2.Request<IdentityRequestMessage>): Boolean {
        return request.body.previousMpid == mpid
    }
}