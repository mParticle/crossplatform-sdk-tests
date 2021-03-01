package com.google.firebase.iid;

import com.mparticle.mockserver.utils.TestingUtils

class FirebaseInstanceIdService {

    init {
        if (!TestingUtils.isFirebasePresent) {
            throw RuntimeException(ClassCastException());
        }
    }
}
