package com.mparticle.networking

import com.mparticle.mockserver.MockServer2
import java.net.MalformedURLException
import java.net.URL


class MPUrlTestImpl(var url: String, var mockServer: MockServer2) : com.mparticle.networking.MPUrl() {
    override fun openConnection(): MPConnection {
        return MPConnectionTestImpl(this, mockServer)
    }

    override fun getFile(): String {
        return url
    }

    override fun getAuthority(): String? {
        return try {
            URL(url).getAuthority()
        } catch (e: MalformedURLException) {
            null
        }
    }

    override fun getPath(): String? {
        return try {
            URL(url).getPath()
        } catch (e: MalformedURLException) {
            null
        }
    }

}
