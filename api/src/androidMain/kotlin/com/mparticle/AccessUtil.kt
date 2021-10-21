package com.mparticle

import com.mparticle.identity.BaseIdentityTask
import com.mparticle.internal.KitFrameworkWrapper
import com.mparticle.internal.MPUtility

fun MPEvent.setIsScreenEvent(screenEvent: Boolean) {
    this.isScreenEvent = screenEvent
}

fun BaseEventAndroidInit(type: BaseEvent.MessageType): BaseEvent = BaseEvent(type)

fun BaseEvent.setCustomFlags(map: Map<String, List<String>>?) {
    customFlags = map
}

fun MParticleOptions.Builder.getIdentityTask(): BaseIdentityTask? {
    return identityTask
}
