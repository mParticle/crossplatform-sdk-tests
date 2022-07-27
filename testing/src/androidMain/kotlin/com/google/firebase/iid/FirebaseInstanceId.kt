package com.google.firebase.iid

class FirebaseInstanceId {
    companion object {
        @JvmField
        var currentToken: String? = null

        @JvmStatic
        fun setToken(token: String?) {
            currentToken = token
        }

        @JvmStatic
        var instance = FirebaseInstanceId()
    }

    fun getToken(senderId: String, type: String) = currentToken
}