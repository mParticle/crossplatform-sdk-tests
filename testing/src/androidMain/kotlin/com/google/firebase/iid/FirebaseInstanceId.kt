package com.google.firebase.iid

class FirebaseInstanceId {

    fun getToken(): String?
    {
        return token
    }

    fun getToken(authority: String, scope: String): String?
    {
        return token
    }

    companion object {
        private var token: String? = null

        @JvmStatic
        fun getInstance(): FirebaseInstanceId {
            return FirebaseInstanceId()
        }

        @JvmStatic
        fun setToken(token: String?)
        {
            FirebaseInstanceId.token = token
        }
    }
}
