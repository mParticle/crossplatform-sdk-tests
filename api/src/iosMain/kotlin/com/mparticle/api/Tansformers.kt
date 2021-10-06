package com.mparticle.api

import cocoapods.mParticle_Apple_SDK.*
import com.mparticle.api.commerce.TransactionAttributes
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.toIdentityType
import platform.Foundation.*

val dataplanOptionsTransformer = TransformBuilder
    .from<DataplanOptions?, MPDataPlanOptions?> { this!!.dataplanOptions}
    .to { this?.let { DataplanOptions(it) } }

val networkOptionsTransformer = TransformBuilder
    .from<NetworkOptions?, MPNetworkOptions> { this!!.networkOptions }
    .to { NetworkOptions(this) as NetworkOptions? }

val identityRequestTransformer = TransformBuilder
    .from <IdentityApiRequest?, MPIdentityApiRequest> { this!!.identityApiRequest}
    .to {
        IdentityApiRequest(null).also { request ->
            identities?.forEach { (key, value) ->
                if (key != null) request.addIdentity(
                    key.toIdentityType(),
                    value.toString()
                )
            }
        } as IdentityApiRequest?
    }

val intNSNumberTransformer = TransformBuilder
    .from<Int?, NSNumber?> { this?.let { NSNumber(it) } }
    .to { this?.intValue }

val intLongTransformer = TransformBuilder
    .from<Int?, Long> { this!!.toLong() }
    .to { this.toInt() as Int? }

val intULongTransformer = TransformBuilder
    .from<Int?, ULong> { this!!.toULong() }
    .to { this.toInt() as Int? }

val intDoubleTransformer = TransformBuilder
    .from<Int?, Double>{ this!!.toDouble() }
    .to { toInt() as Int? }

val doubleNSNumberTransformer = TransformBuilder
    .from<Double, NSNumber?> { this.let { NSNumber(it) } }
    .to { this?.doubleValue ?: 0.0 }

val doubleNonNullNSNumberTransformer = TransformBuilder
    .from<Double, NSNumber> { this.let { NSNumber(it!!) } }
    .to { this.doubleValue }

val nullableDoubleNSNumberTransformer = TransformBuilder
    .from<Double?, NSNumber?> { this.let { NSNumber(it!!) } }
    .to { this?.doubleValue }

val installTypeTransformer = TransformBuilder
    .from<InstallType?, MPInstallationType> { this!!.ordinal.toLong() }
    .to { InstallType.values().firstOrNull { it.ordinal == this.toInt() } }

val logLevelTransformer = TransformBuilder
    .from<LogLevel?, MPILogLevel> { this!!.level.toULong() }
    .to { LogLevel.values().firstOrNull { it.level == this.toInt() } }

val environmentTransformer = TransformBuilder
    .from<Environment?, MPEnvironment> { this!!.ordinal.toULong() }
    .to { Environment.values().firstOrNull { it.ordinal == this.toInt() } }

val jsonStringMapTransformer = TransformBuilder
    .from<String?, Map<Any?, *>?> {
        (this as NSString?)
            ?.dataUsingEncoding(NSUTF8StringEncoding)
            ?.let {
                NSJSONSerialization.JSONObjectWithData(it, 0, null) as Map<Any?, *>
            }
    }
    .to {
        this?.let { NSJSONSerialization.dataWithJSONObject(it, 0, null) as NSData }
            ?.let { it.toByteArray().contentToString() }
    }

val transactionAttributesTransformer = TransformBuilder
    .from<TransactionAttributes?, MPTransactionAttributes?> { this?.transactionAttributes }
    .to { this?.let{ TransactionAttributes(it) } }
