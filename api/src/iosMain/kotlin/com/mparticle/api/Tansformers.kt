package com.mparticle.api

import cocoapods.mParticle_Apple_SDK.*
import com.mparticle.api.commerce.TransactionAttributes
import com.mparticle.api.identity.IdentityApiRequest
import com.mparticle.api.identity.toIdentityType
import platform.Foundation.*
import kotlin.native.concurrent.SharedImmutable

@SharedImmutable
val dataplanOptionsTransformer = TransformBuilder
    .from<DataplanOptions?, MPDataPlanOptions?> { this!!.dataplanOptions}
    .to { this?.let { DataplanOptions(it) } }

@SharedImmutable
val networkOptionsTransformer = TransformBuilder
    .from<NetworkOptions?, MPNetworkOptions> { this!!.networkOptions }
    .to { NetworkOptions(this) as NetworkOptions? }

@SharedImmutable
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

@SharedImmutable
val intNSNumberTransformer = TransformBuilder
    .from<Int?, NSNumber?> { this?.let { NSNumber(it) } }
    .to { this?.intValue }

@SharedImmutable
val intLongTransformer = TransformBuilder
    .from<Int?, Long> { this!!.toLong() }
    .to { this.toInt() as Int? }

@SharedImmutable
val intULongTransformer = TransformBuilder
    .from<Int?, ULong> { this!!.toULong() }
    .to { this.toInt() as Int? }

@SharedImmutable
val intDoubleTransformer = TransformBuilder
    .from<Int?, Double>{ this!!.toDouble() }
    .to { toInt() as Int? }

@SharedImmutable
val doubleNSNumberTransformer = TransformBuilder
    .from<Double, NSNumber?> { this.let { NSNumber(it) } }
    .to { this?.doubleValue ?: 0.0 }

@SharedImmutable
val doubleNonNullNSNumberTransformer = TransformBuilder
    .from<Double, NSNumber> { this.let { NSNumber(it!!) } }
    .to { this.doubleValue }

@SharedImmutable
val nullableDoubleNSNumberTransformer = TransformBuilder
    .from<Double?, NSNumber?> { this.let { NSNumber(it!!) } }
    .to { this?.doubleValue }

@SharedImmutable
val installTypeTransformer = TransformBuilder
    .from<InstallType?, MPInstallationType> { this!!.ordinal.toLong() }
    .to { InstallType.values().firstOrNull { it.ordinal == this.toInt() } }

@SharedImmutable
val logLevelTransformer = TransformBuilder
    .from<LogLevel?, MPILogLevel> { this!!.apple }
    .to { LogLevel.values().firstOrNull { it.apple == this } }

@SharedImmutable
val environmentTransformer = TransformBuilder
    .from<Environment?, MPEnvironment> { this!!.apple }
    .to { Environment.values().firstOrNull { it.apple == this } }

@SharedImmutable
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

@SharedImmutable
val transactionAttributesTransformer = TransformBuilder
    .from<TransactionAttributes?, MPTransactionAttributes?> { this?.transactionAttributes }
    .to { this?.let{ TransactionAttributes(it) } }
