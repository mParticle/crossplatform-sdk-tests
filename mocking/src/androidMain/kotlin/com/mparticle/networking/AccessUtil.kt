package com.mparticle.networking

import com.mparticle.networking.MPUrl

internal fun setMPUrlFactory(urlFactory: (String) -> MPUrl) {
    MPUrl.setMPUrlFactory(object: MPUrl.UrlFactory {
        override fun getInstance(url: String): MPUrl {
            return urlFactory(url)
        }
    })
}