package com.mparticle.testing.mockserver

import android.os.Handler
import com.mparticle.networking.MPUrl
import com.mparticle.networking.MPUrlMockImpl
import com.mparticle.networking.setMPUrlFactory
import android.os.Looper
import com.mparticle.internal.database.services.MParticleDBManager
import com.mparticle.messages.ConfigResponseMessage


actual open class Platforms {
    init {
        prepareThread()
    }

    actual fun prepareThread() {
        if (Looper.myLooper() == null) {
            Looper.prepare()
        }
        Handler(Looper.getMainLooper()).post {
            if (Looper.myLooper() == null) {
                Looper.prepare()
            }
        }
    }

    actual fun injectMockServer() {
        setMPUrlFactory {
            MPUrlMockImpl(it) as MPUrl
        }
    }
}