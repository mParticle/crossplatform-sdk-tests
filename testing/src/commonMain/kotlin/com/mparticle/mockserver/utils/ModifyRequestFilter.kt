package com.mparticle.mockserver.utils

import com.mparticle.mockserver.MockServer2
import com.mparticle.messages.IdentityRequestMessage

class ModifyRequestFilter(val mpid: Long): MockServer2.IRequestFilter<IdentityRequestMessage> {
    override fun isMatch(request: MockServer2.Request<IdentityRequestMessage>): Boolean {
        return request.url.endsWith("$mpid/modify")
    }
}