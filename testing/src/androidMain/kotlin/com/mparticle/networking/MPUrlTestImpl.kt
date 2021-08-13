package com.mparticle.networking

import java.net.MalformedURLException
import java.net.URL


class MPUrlTestImpl(var url: String) : com.mparticle.networking.MPUrl() {
    override fun openConnection(): MPConnection {
        return MPConnectionTestImpl(this)
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
