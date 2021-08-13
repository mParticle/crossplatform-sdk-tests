package com.mparticle.mockserver.utils

import com.mparticle.messages.IdentityRequestMessage
import com.mparticle.mockserver.IRequestFilter
import com.mparticle.mockserver.Request

class ModifyRequestFilter(val mpid: Long): IRequestFilter<IdentityRequestMessage> {
    override fun isMatch(request: Request<IdentityRequestMessage>): Boolean {
        return request.url.endsWith("$mpid/modify")
    }
}