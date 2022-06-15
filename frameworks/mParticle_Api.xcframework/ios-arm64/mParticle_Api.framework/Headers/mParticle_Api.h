#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPAClientPlatform, MPDataPlanOptions, MPAKotlinEnumCompanion, MPAKotlinEnum<E>, MPAEnvironment, MPAKotlinArray<T>, MPAInstallType, MPALogLevel, MPALogger, MParticle, MPAMParticleCompanion, MPABaseEvent, MPAKotlinException, MPAMPEvent, MPASession, MPAIdentityApi, MPAMParticle, MPAMParticleOptions, MPADataplanOptions, MPAIdentityApiRequest, MPAIdentityResponse, MPALocationTracking, MPANetworkOptions, MParticleOptions, MPNetworkOptions, MPAPlatform, MParticleSession, MPATransformBuilder, MPGDPRConsent, MPCCPAConsent, MPConsentState, MPAConsent, MPIdentityApi, MPAMParticleUser, MPAIdentityApiIdentityRequestType, MPIdentityApiRequest, MPAIdentityType, MPAError, MPAIdentityHttpResponse, MPAKotlinUnit, MParticleUser, MPAConsentState, MPAMessageType, MPBaseEvent, MPAEventType, MPACustomEvent, MPAMessageTypeCompanion, MPACommerce, MPACommerceProductActionEnum, MPACommercePromotionActionEnum, MPCommerceEvent, MPAProduct, MPACommerceEvent, MPAImpression, MPProduct, MPATransactionAttributes, MPPromotion, MPAPromotion, MPTransactionAttributes, MPAKotlinByteIterator, MPAKotlinByteArray, NSData, MPEvent, MPATransformDelegate<Kotlin, Native>, NSMutableDictionary, MPAImpressionBuilder, MPAProductBuilder, MPAPromotionBuilder, MPAKotlinThrowable, MPAKotlinKTypeProjection, MPAKotlinKVariance, MPAKotlinKTypeProjectionCompanion;

@protocol MPAKotlinComparable, MPATransformer, MPAKotlinKProperty, MPAUserAttributeListener, MPAKotlinIterator, MPAKotlinKType, MPAKotlinKAnnotatedElement, MPAKotlinKCallable, MPAKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MPABase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MPABase (MPABaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MPAMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPAMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMPAKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MPANumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface MPAByte : MPANumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MPAUByte : MPANumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MPAShort : MPANumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MPAUShort : MPANumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MPAInt : MPANumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MPAUInt : MPANumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MPALong : MPANumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MPAULong : MPANumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MPAFloat : MPANumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MPADouble : MPANumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MPABoolean : MPANumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("ClientPlatform")))
@interface MPAClientPlatform : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("ClientPlatformImpl")))
@interface MPAClientPlatformImpl : MPAClientPlatform
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataplanOptions")))
@interface MPADataplanOptions : MPABase
- (instancetype)initWithDataplanOptions:(MPDataPlanOptions *)dataplanOptions __attribute__((swift_name("init(dataplanOptions:)"))) __attribute__((objc_designated_initializer));
@property BOOL blockEventAttributes __attribute__((swift_name("blockEventAttributes")));
@property BOOL blockEvents __attribute__((swift_name("blockEvents")));
@property BOOL blockUserAttributes __attribute__((swift_name("blockUserAttributes")));
@property BOOL blockUserIdentities __attribute__((swift_name("blockUserIdentities")));
@property NSString * _Nullable dataplan __attribute__((swift_name("dataplan")));
@property (readonly) MPDataPlanOptions *dataplanOptions __attribute__((swift_name("dataplanOptions")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MPAKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MPAKotlinEnum<E> : MPABase <MPAKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPAKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface MPAEnvironment : MPAKotlinEnum<MPAEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAEnvironment *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPAEnvironment *development __attribute__((swift_name("development")));
@property (class, readonly) MPAEnvironment *production __attribute__((swift_name("production")));
+ (MPAKotlinArray<MPAEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstallType")))
@interface MPAInstallType : MPAKotlinEnum<MPAInstallType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAInstallType *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPAInstallType *kowninstall __attribute__((swift_name("kowninstall")));
@property (class, readonly) MPAInstallType *knownupgrde __attribute__((swift_name("knownupgrde")));
+ (MPAKotlinArray<MPAInstallType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface MPALocation : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@property int64_t minDistance __attribute__((swift_name("minDistance")));
@property int64_t minTime __attribute__((swift_name("minTime")));
@property NSString * _Nullable provider __attribute__((swift_name("provider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationTracking")))
@interface MPALocationTracking : MPABase
- (instancetype)initWithProvider:(NSString *)provider minTime:(MPALong * _Nullable)minTime minDistance:(MPALong * _Nullable)minDistance __attribute__((swift_name("init(provider:minTime:minDistance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPALong * _Nullable minDistance __attribute__((swift_name("minDistance")));
@property (readonly) MPALong * _Nullable minTime __attribute__((swift_name("minTime")));
@property (readonly) NSString *provider __attribute__((swift_name("provider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface MPALogLevel : MPAKotlinEnum<MPALogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPALogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) MPALogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MPALogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) MPALogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MPALogLevel *verbose __attribute__((swift_name("verbose")));
+ (MPAKotlinArray<MPALogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface MPALogger : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPALogger *shared __attribute__((swift_name("shared")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warningMessage:(NSString *)message __attribute__((swift_name("warning(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MParticle")))
@interface MPAMParticle : MPABase
- (instancetype)initWithMparticle:(MParticle *)mparticle __attribute__((swift_name("init(mparticle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPAMParticleCompanion *companion __attribute__((swift_name("companion")));
- (void)disableLocationTracking __attribute__((swift_name("disableLocationTracking()")));
- (void)enableLocationTrackingProvider:(NSString *)provider minTime:(int64_t)minTime minDistance:(int64_t)minDistance __attribute__((swift_name("enableLocationTracking(provider:minTime:minDistance:)")));
- (MPAMutableDictionary<id, id> * _Nullable)getIntegrationAttributesIntegrationId:(int32_t)integrationId __attribute__((swift_name("getIntegrationAttributes(integrationId:)")));
- (void)incrementSessionAttributeKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("incrementSessionAttribute(key:value:)")));
- (BOOL)isKitActiveServiceProviderId:(int32_t)serviceProviderId __attribute__((swift_name("isKitActive(serviceProviderId:)")));
- (BOOL)isLocationTrackingEnabled __attribute__((swift_name("isLocationTrackingEnabled()")));
- (BOOL)isProviderActiveServiceProviderId:(int32_t)serviceProviderId __attribute__((swift_name("isProviderActive(serviceProviderId:)")));
- (id _Nullable)kitInstanceKitId:(int32_t)kitId __attribute__((swift_name("kitInstance(kitId:)")));
- (void)leaveBreadcrumbBreadcrumb:(NSString *)breadcrumb __attribute__((swift_name("leaveBreadcrumb(breadcrumb:)")));
- (void)logErrorMessage:(NSString *)message errorAttributes:(NSDictionary<NSString *, id> * _Nullable)errorAttributes __attribute__((swift_name("logError(message:errorAttributes:)")));
- (void)logEventEvent:(MPABaseEvent *)event __attribute__((swift_name("logEvent(event:)")));
- (void)logExceptionException:(MPAKotlinException * _Nullable)exception eventData:(NSDictionary<id, id> * _Nullable)eventData message:(NSString * _Nullable)message __attribute__((swift_name("logException(exception:eventData:message:)")));
- (void)logLtvIncreaseValueIncreased:(double)valueIncreased eventName:(NSString *)eventName contextInfo:(NSDictionary<NSString *, id> * _Nullable)contextInfo __attribute__((swift_name("logLtvIncrease(valueIncreased:eventName:contextInfo:)")));
- (void)logNetworkPerformanceUrl:(NSString *)url startTime:(int64_t)startTime method:(NSString *)method length:(int64_t)length bytesSent:(int64_t)bytesSent bytesReceived:(int64_t)bytesReceived requestString:(NSString * _Nullable)requestString responseCode:(int32_t)responseCode __attribute__((swift_name("logNetworkPerformance(url:startTime:method:length:bytesSent:bytesReceived:requestString:responseCode:)")));
- (void)logPushRegistrationInstanceId:(NSString * _Nullable)instanceId senderId:(NSString * _Nullable)senderId __attribute__((swift_name("logPushRegistration(instanceId:senderId:)")));
- (void)logScreenScreen:(MPAMPEvent *)screen __attribute__((swift_name("logScreen(screen:)")));
- (void)logScreenScreenName:(NSString *)screenName eventData:(NSDictionary<NSString *, id> * _Nullable)eventData __attribute__((swift_name("logScreen(screenName:eventData:)")));
- (void)setIntegrationAttributesIntegrationId:(int32_t)integrationId attributes:(NSDictionary<NSString *, id> * _Nullable)attributes __attribute__((swift_name("setIntegrationAttributes(integrationId:attributes:)")));
- (void)setLocationProvider:(NSString *)provider latitude:(MPADouble * _Nullable)latitude longitude:(MPADouble * _Nullable)longitude accuracy:(MPAFloat * _Nullable)accuracy __attribute__((swift_name("setLocation(provider:latitude:longitude:accuracy:)")));
- (void)setSessionAttributeKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("setSessionAttribute(key:value:)")));
- (void)upload __attribute__((swift_name("upload()")));
@property (readonly) BOOL autoTrackingEnabled __attribute__((swift_name("autoTrackingEnabled")));
@property (readonly) MPASession * _Nullable currentSession __attribute__((swift_name("currentSession")));
@property (readonly) BOOL devicePerformanceMetricsEnabled __attribute__((swift_name("devicePerformanceMetricsEnabled")));
@property (readonly) MPAEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) MPAIdentityApi *identity __attribute__((swift_name("identity")));
@property NSString * _Nullable installReferrer __attribute__((swift_name("installReferrer")));
@property BOOL isOptOut __attribute__((swift_name("isOptOut")));
@property (readonly) MPALogLevel * _Nullable logLevel __attribute__((swift_name("logLevel")));
@property (readonly) MParticle *mparticle __attribute__((swift_name("mparticle")));
@property (readonly) int32_t sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property (readonly) BOOL uncaughtExceptionLogging __attribute__((swift_name("uncaughtExceptionLogging")));
@property (readonly) int64_t uploadInterval __attribute__((swift_name("uploadInterval")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MParticle.Companion")))
@interface MPAMParticleCompanion : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPAMParticleCompanion *shared __attribute__((swift_name("shared")));
- (void)clearInstance __attribute__((swift_name("clearInstance()")));
- (MPAMParticle * _Nullable)getInstance __attribute__((swift_name("getInstance()")));
- (void)resetClientPlatform:(MPAClientPlatform *)clientPlatform __attribute__((swift_name("reset(clientPlatform:)")));
- (void)startOptions:(MPAMParticleOptions *)options __attribute__((swift_name("start(options:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MParticleOptions")))
@interface MPAMParticleOptions : MPABase
- (instancetype)initWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret clientPlatform:(MPAClientPlatform *)clientPlatform __attribute__((swift_name("init(apiKey:apiSecret:clientPlatform:)"))) __attribute__((objc_designated_initializer));
@property MPABoolean * _Nullable androidIdDisabled __attribute__((swift_name("androidIdDisabled")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString *apiSecret __attribute__((swift_name("apiSecret")));
@property MPAClientPlatform *clientPlatform __attribute__((swift_name("clientPlatform")));
@property NSString * _Nullable dataplanId __attribute__((swift_name("dataplanId")));
@property MPADataplanOptions * _Nullable dataplanOptions __attribute__((swift_name("dataplanOptions")));
@property MPAInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@property MPABoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property MPABoolean * _Nullable enableUncaughtExceptionLogging __attribute__((swift_name("enableUncaughtExceptionLogging")));
@property MPAEnvironment * _Nullable environment __attribute__((swift_name("environment")));
@property MPAIdentityApiRequest * _Nullable identifyRequest __attribute__((swift_name("identifyRequest")));
@property MPAIdentityResponse * _Nullable identifyTask __attribute__((swift_name("identifyTask")));
@property MPAInt * _Nullable identityConnectionTimeout __attribute__((swift_name("identityConnectionTimeout")));
@property MPAInstallType * _Nullable installType __attribute__((swift_name("installType")));
@property MPALocationTracking * _Nullable locationTracking __attribute__((swift_name("locationTracking")));
@property MPALogLevel * _Nullable logLevel __attribute__((swift_name("logLevel")));
@property MPANetworkOptions * _Nullable networkOptions __attribute__((swift_name("networkOptions")));
@property (readonly) MParticleOptions *options __attribute__((swift_name("options")));
@property NSString * _Nullable pushRegistrationInstanceId __attribute__((swift_name("pushRegistrationInstanceId")));
@property NSString * _Nullable pushRegistrationSenderId __attribute__((swift_name("pushRegistrationSenderId")));
@property MPAInt * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property MPAInt * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkOptions")))
@interface MPANetworkOptions : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithNetworkOptions:(MPNetworkOptions *)networkOptions __attribute__((swift_name("init(networkOptions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPNetworkOptions *networkOptions __attribute__((swift_name("networkOptions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface MPAPlatform : MPAKotlinEnum<MPAPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAPlatform *android __attribute__((swift_name("android")));
@property (class, readonly) MPAPlatform *ios __attribute__((swift_name("ios")));
+ (MPAKotlinArray<MPAPlatform *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session")))
@interface MPASession : MPABase
- (instancetype)initWithSession:(MParticleSession *)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString *uusd __attribute__((swift_name("uusd")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformBuilder")))
@interface MPATransformBuilder : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transformBuilder __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPATransformBuilder *shared __attribute__((swift_name("shared")));
- (id _Nullable (^)(id _Nullable))fromFromFunction:(id _Nullable (^)(id _Nullable))fromFunction __attribute__((swift_name("from(fromFunction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformDelegate")))
@interface MPATransformDelegate<Kotlin, Native> : MPABase
- (instancetype)initWithProperty:(Native _Nullable (^)(void))property transformer:(id<MPATransformer>)transformer __attribute__((swift_name("init(property:transformer:)"))) __attribute__((objc_designated_initializer));
- (Kotlin _Nullable)getValueRef:(id _Nullable)ref kProp:(id<MPAKotlinKProperty>)kProp __attribute__((swift_name("getValue(ref:kProp:)")));
- (void)setValueRef:(id _Nullable)ref kProp:(id<MPAKotlinKProperty>)kProp value:(Kotlin _Nullable)value __attribute__((swift_name("setValue(ref:kProp:value:)")));
@end;

__attribute__((swift_name("Transformer")))
@protocol MPATransformer
@required
- (id _Nullable)fromTarget:(id _Nullable)target __attribute__((swift_name("from(target:)")));
- (id _Nullable)toTarget:(id _Nullable)target __attribute__((swift_name("to(target:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Consent")))
@interface MPAConsent : MPABase
- (instancetype)initWithGdprConsentInstance:(MPGDPRConsent * _Nullable)gdprConsentInstance ccpaConsentInstance:(MPCCPAConsent * _Nullable)ccpaConsentInstance __attribute__((swift_name("init(gdprConsentInstance:ccpaConsentInstance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPCCPAConsent * _Nullable ccpaConsentInstance __attribute__((swift_name("ccpaConsentInstance")));
@property NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) MPGDPRConsent * _Nullable gdprConsentInstance __attribute__((swift_name("gdprConsentInstance")));
@property NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property BOOL isConsented __attribute__((swift_name("isConsented")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property MPALong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentState")))
@interface MPAConsentState : MPABase
- (instancetype)initWithConsentState:(MPConsentState *)consentState __attribute__((swift_name("init(consentState:)"))) __attribute__((objc_designated_initializer));
- (MPCCPAConsent *)toCCPAConsent:(MPAConsent *)receiver __attribute__((swift_name("toCCPAConsent(_:)")));
- (MPGDPRConsent *)toGDPRConsent:(MPAConsent *)receiver __attribute__((swift_name("toGDPRConsent(_:)")));
@property MPAConsent * _Nullable ccpaConsent __attribute__((swift_name("ccpaConsent")));
@property (readonly) MPConsentState *consentState __attribute__((swift_name("consentState")));
@property MPAMutableDictionary<NSString *, MPAConsent *> * _Nullable gdprConsentState __attribute__((swift_name("gdprConsentState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface MPAError : MPABase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityApi")))
@interface MPAIdentityApi : MPABase
- (instancetype)initWithIdentityApi:(MPIdentityApi *)identityApi __attribute__((swift_name("init(identityApi:)"))) __attribute__((objc_designated_initializer));
- (MPAMParticleUser * _Nullable)getUserMpid:(int64_t)mpid __attribute__((swift_name("getUser(mpid:)")));
- (MPAIdentityResponse *)identifyRequest:(MPAIdentityApiRequest * _Nullable)request __attribute__((swift_name("identify(request:)")));
- (MPAIdentityResponse *)loginRequest:(MPAIdentityApiRequest * _Nullable)request __attribute__((swift_name("login(request:)")));
- (MPAIdentityResponse *)logoutRequest:(MPAIdentityApiRequest * _Nullable)request __attribute__((swift_name("logout(request:)")));
- (MPAIdentityResponse *)modifyRequest:(MPAIdentityApiRequest *)request __attribute__((swift_name("modify(request:)")));
@property (readonly) NSArray<MPAMParticleUser *> *allUsers __attribute__((swift_name("allUsers")));
@property (readonly) MPAMParticleUser * _Nullable currentUser __attribute__((swift_name("currentUser")));
@property (readonly) MPIdentityApi *identityApi __attribute__((swift_name("identityApi")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityApi.IdentityRequestType")))
@interface MPAIdentityApiIdentityRequestType : MPAKotlinEnum<MPAIdentityApiIdentityRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAIdentityApiIdentityRequestType *identify __attribute__((swift_name("identify")));
@property (class, readonly) MPAIdentityApiIdentityRequestType *login __attribute__((swift_name("login")));
@property (class, readonly) MPAIdentityApiIdentityRequestType *logout __attribute__((swift_name("logout")));
@property (class, readonly) MPAIdentityApiIdentityRequestType *modify __attribute__((swift_name("modify")));
+ (MPAKotlinArray<MPAIdentityApiIdentityRequestType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityApiRequest")))
@interface MPAIdentityApiRequest : MPABase
- (instancetype)initWithUser:(MPAMParticleUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIdentityApiRequest:(MPIdentityApiRequest *)identityApiRequest __attribute__((swift_name("init(identityApiRequest:)"))) __attribute__((objc_designated_initializer));
- (void)addIdentityKey:(MPAIdentityType *)key value:(NSString * _Nullable)value __attribute__((swift_name("addIdentity(key:value:)")));
@property NSDictionary<MPAIdentityType *, id> *identities __attribute__((swift_name("identities")));
@property (readonly) MPIdentityApiRequest *identityApiRequest __attribute__((swift_name("identityApiRequest")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityHttpResponse")))
@interface MPAIdentityHttpResponse : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable context __attribute__((swift_name("context")));
@property NSArray<MPAError *> *errors __attribute__((swift_name("errors")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((swift_name("IdentityResponse")))
@interface MPAIdentityResponse : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPAIdentityResponse *)addFailureListenerListener:(void (^)(MPAIdentityHttpResponse * _Nullable))listener __attribute__((swift_name("addFailureListener(listener:)")));
- (MPAIdentityResponse *)addSuccessListenerListener:(void (^)(MPAMParticleUser *, MPAMParticleUser * _Nullable))listener __attribute__((swift_name("addSuccessListener(listener:)")));
@property (readonly) NSMutableArray<MPAKotlinUnit *(^)(MPAIdentityHttpResponse * _Nullable)> *failureListeners __attribute__((swift_name("failureListeners")));
@property (readonly) NSMutableArray<MPAKotlinUnit *(^)(MPAMParticleUser *, MPAMParticleUser * _Nullable)> *successListeners __attribute__((swift_name("successListeners")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityType")))
@interface MPAIdentityType : MPAKotlinEnum<MPAIdentityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAIdentityType *other __attribute__((swift_name("other")));
@property (class, readonly) MPAIdentityType *customerid __attribute__((swift_name("customerid")));
@property (class, readonly) MPAIdentityType *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) MPAIdentityType *twitter __attribute__((swift_name("twitter")));
@property (class, readonly) MPAIdentityType *google __attribute__((swift_name("google")));
@property (class, readonly) MPAIdentityType *microsoft __attribute__((swift_name("microsoft")));
@property (class, readonly) MPAIdentityType *yahoo __attribute__((swift_name("yahoo")));
@property (class, readonly) MPAIdentityType *email __attribute__((swift_name("email")));
@property (class, readonly) MPAIdentityType *alias __attribute__((swift_name("alias")));
@property (class, readonly) MPAIdentityType *facebookcustomaudienceid __attribute__((swift_name("facebookcustomaudienceid")));
@property (class, readonly) MPAIdentityType *other2 __attribute__((swift_name("other2")));
@property (class, readonly) MPAIdentityType *other3 __attribute__((swift_name("other3")));
@property (class, readonly) MPAIdentityType *other4 __attribute__((swift_name("other4")));
@property (class, readonly) MPAIdentityType *other5 __attribute__((swift_name("other5")));
@property (class, readonly) MPAIdentityType *other6 __attribute__((swift_name("other6")));
@property (class, readonly) MPAIdentityType *other7 __attribute__((swift_name("other7")));
@property (class, readonly) MPAIdentityType *other8 __attribute__((swift_name("other8")));
@property (class, readonly) MPAIdentityType *other9 __attribute__((swift_name("other9")));
@property (class, readonly) MPAIdentityType *other10 __attribute__((swift_name("other10")));
@property (class, readonly) MPAIdentityType *mobilenumber __attribute__((swift_name("mobilenumber")));
@property (class, readonly) MPAIdentityType *phonenumber2 __attribute__((swift_name("phonenumber2")));
@property (class, readonly) MPAIdentityType *phonenumber3 __attribute__((swift_name("phonenumber3")));
+ (MPAKotlinArray<MPAIdentityType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MParticleUser")))
@interface MPAMParticleUser : MPABase
- (instancetype)initWithUser:(MParticleUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (MPAConsentState *)getConsentState __attribute__((swift_name("getConsentState()")));
- (int64_t)getFirstSeenTime __attribute__((swift_name("getFirstSeenTime()")));
- (int64_t)getLastSeenTime __attribute__((swift_name("getLastSeenTime()")));
- (NSDictionary<NSString *, id> *)getUserAttributes __attribute__((swift_name("getUserAttributes()")));
- (NSDictionary<NSString *, id> * _Nullable)getUserAttributesListener:(id<MPAUserAttributeListener> _Nullable)listener __attribute__((swift_name("getUserAttributes(listener:)")));
- (NSDictionary<MPAIdentityType *, NSString *> *)getUserIdentities __attribute__((swift_name("getUserIdentities()")));
- (BOOL)incrementUserAttributeKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("incrementUserAttribute(key:value:)")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (BOOL)removeUserAttributeKey:(NSString *)key __attribute__((swift_name("removeUserAttribute(key:)")));
- (void)setConsentStateState:(MPAConsentState * _Nullable)state __attribute__((swift_name("setConsentState(state:)")));
- (BOOL)setUserAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttribute(key:value:)")));
- (BOOL)setUserAttributeListKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttributeList(key:value:)")));
- (BOOL)setUserAttributesUserAttributes:(NSDictionary<NSString *, id> *)userAttributes __attribute__((swift_name("setUserAttributes(userAttributes:)")));
- (BOOL)setUserTagTag:(NSString *)tag __attribute__((swift_name("setUserTag(tag:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@property (readonly) MParticleUser *user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("UserAttributeListener")))
@protocol MPAUserAttributeListener
@required
- (void)onUserAttributesReceivedUserAttributes:(NSDictionary<NSString *, id> * _Nullable)userAttributes userAttributeLists:(NSDictionary<NSString *, NSArray<id> *> * _Nullable)userAttributeLists mpid:(MPALong * _Nullable)mpid __attribute__((swift_name("onUserAttributesReceived(userAttributes:userAttributeLists:mpid:)")));
@end;

__attribute__((swift_name("BaseEvent")))
@interface MPABaseEvent : MPABase
- (instancetype)initWithType:(MPAMessageType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseEvent:(MPBaseEvent *)baseEvent __attribute__((swift_name("init(baseEvent:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPBaseEvent *baseEvent __attribute__((swift_name("baseEvent")));
@property NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes")));
@property NSDictionary<NSString *, NSArray<NSString *> *> *customFlags __attribute__((swift_name("customFlags")));
@property (readonly) MPAMessageType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("CustomEvent")))
@interface MPACustomEvent : MPABaseEvent
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPAEventType *)eventType type:(MPAMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(MPAMessageType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseEvent:(MPBaseEvent *)baseEvent __attribute__((swift_name("init(baseEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property NSString *eventName __attribute__((swift_name("eventName")));
@property MPAEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@property MPADouble * _Nullable length __attribute__((swift_name("length")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface MPAEventType : MPAKotlinEnum<MPAEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAEventType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPAEventType *navigation __attribute__((swift_name("navigation")));
@property (class, readonly) MPAEventType *location __attribute__((swift_name("location")));
@property (class, readonly) MPAEventType *search __attribute__((swift_name("search")));
@property (class, readonly) MPAEventType *transaction __attribute__((swift_name("transaction")));
@property (class, readonly) MPAEventType *usercontent __attribute__((swift_name("usercontent")));
@property (class, readonly) MPAEventType *userpreference __attribute__((swift_name("userpreference")));
@property (class, readonly) MPAEventType *social __attribute__((swift_name("social")));
@property (class, readonly) MPAEventType *other __attribute__((swift_name("other")));
@property (class, readonly) MPAEventType *media __attribute__((swift_name("media")));
+ (MPAKotlinArray<MPAEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MPEvent")))
@interface MPAMPEvent : MPACustomEvent
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPAEventType *)eventType __attribute__((swift_name("init(eventName:eventType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPAEventType *)eventType type:(MPAMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageType")))
@interface MPAMessageType : MPAKotlinEnum<MPAMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPAMessageTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPAMessageType *sessionstart __attribute__((swift_name("sessionstart")));
@property (class, readonly) MPAMessageType *sessionend __attribute__((swift_name("sessionend")));
@property (class, readonly) MPAMessageType *event __attribute__((swift_name("event")));
@property (class, readonly) MPAMessageType *screenview __attribute__((swift_name("screenview")));
@property (class, readonly) MPAMessageType *commerceevent __attribute__((swift_name("commerceevent")));
@property (class, readonly) MPAMessageType *optout __attribute__((swift_name("optout")));
@property (class, readonly) MPAMessageType *error __attribute__((swift_name("error")));
@property (class, readonly) MPAMessageType *pushregistration __attribute__((swift_name("pushregistration")));
@property (class, readonly) MPAMessageType *firstrun __attribute__((swift_name("firstrun")));
@property (class, readonly) MPAMessageType *appstatetransition __attribute__((swift_name("appstatetransition")));
@property (class, readonly) MPAMessageType *pushreceived __attribute__((swift_name("pushreceived")));
@property (class, readonly) MPAMessageType *breadcrumb __attribute__((swift_name("breadcrumb")));
@property (class, readonly) MPAMessageType *networkperformance __attribute__((swift_name("networkperformance")));
@property (class, readonly) MPAMessageType *profile __attribute__((swift_name("profile")));
@property (class, readonly) MPAMessageType *userattributechange __attribute__((swift_name("userattributechange")));
@property (class, readonly) MPAMessageType *useridentitychange __attribute__((swift_name("useridentitychange")));
@property (class, readonly) MPAMessageType *media __attribute__((swift_name("media")));
+ (MPAKotlinArray<MPAMessageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t iosMessageType __attribute__((swift_name("iosMessageType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageType.Companion")))
@interface MPAMessageTypeCompanion : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPAMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (MPAMessageType *)forMessageTypeMessageType:(uint64_t)messageType __attribute__((swift_name("forMessageType(messageType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenEvent")))
@interface MPAScreenEvent : MPACustomEvent
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPAEventType *)eventType type:(MPAMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Commerce")))
@interface MPACommerce : MPAKotlinEnum<MPACommerce *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPACommerce *impression __attribute__((swift_name("impression")));
+ (MPAKotlinArray<MPACommerce *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Commerce.ProductActionEnum")))
@interface MPACommerceProductActionEnum : MPAKotlinEnum<MPACommerceProductActionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPACommerceProductActionEnum *addtocart __attribute__((swift_name("addtocart")));
@property (class, readonly) MPACommerceProductActionEnum *removefromcart __attribute__((swift_name("removefromcart")));
@property (class, readonly) MPACommerceProductActionEnum *addtowishlist __attribute__((swift_name("addtowishlist")));
@property (class, readonly) MPACommerceProductActionEnum *removefromwishlist __attribute__((swift_name("removefromwishlist")));
@property (class, readonly) MPACommerceProductActionEnum *checkout __attribute__((swift_name("checkout")));
@property (class, readonly) MPACommerceProductActionEnum *click __attribute__((swift_name("click")));
@property (class, readonly) MPACommerceProductActionEnum *detail __attribute__((swift_name("detail")));
@property (class, readonly) MPACommerceProductActionEnum *purchase __attribute__((swift_name("purchase")));
@property (class, readonly) MPACommerceProductActionEnum *refund __attribute__((swift_name("refund")));
@property (class, readonly) MPACommerceProductActionEnum *checkoutoption __attribute__((swift_name("checkoutoption")));
+ (MPAKotlinArray<MPACommerceProductActionEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) id platformValue __attribute__((swift_name("platformValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Commerce.PromotionActionEnum")))
@interface MPACommercePromotionActionEnum : MPAKotlinEnum<MPACommercePromotionActionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPACommercePromotionActionEnum *click __attribute__((swift_name("click")));
@property (class, readonly) MPACommercePromotionActionEnum *view __attribute__((swift_name("view")));
+ (MPAKotlinArray<MPACommercePromotionActionEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) id platformValue __attribute__((swift_name("platformValue")));
@end;

__attribute__((swift_name("CommerceEvent")))
@interface MPACommerceEvent : MPABaseEvent
- (instancetype)initWithCommerceEvent:(MPCommerceEvent *)commerceEvent __attribute__((swift_name("init(commerceEvent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(MPAMessageType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseEvent:(MPBaseEvent *)baseEvent __attribute__((swift_name("init(baseEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) MPCommerceEvent *commerceEvent __attribute__((swift_name("commerceEvent")));
@property NSString * _Nullable internalEventName __attribute__((swift_name("internalEventName")));
@property BOOL nonIteraction __attribute__((swift_name("nonIteraction")));
@property NSString * _Nullable screen __attribute__((swift_name("screen")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Impression")))
@interface MPAImpression : MPABase
- (instancetype)initWithListName:(NSString *)listName product:(MPAProduct *)product __attribute__((swift_name("init(listName:product:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithListName:(NSString *)listName products:(NSArray<MPAProduct *> *)products __attribute__((swift_name("init(listName:products:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *listName __attribute__((swift_name("listName")));
@property NSArray<MPAProduct *> *products __attribute__((swift_name("products")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImpressionBuilder")))
@interface MPAImpressionBuilder : MPACommerceEvent
- (instancetype)initWithImpressionName:(NSString *)impressionName __attribute__((swift_name("init(impressionName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCommerceEvent:(MPCommerceEvent *)commerceEvent __attribute__((swift_name("init(commerceEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSArray<MPAImpression *> *impressions __attribute__((swift_name("impressions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Product")))
@interface MPAProduct : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithProduct:(MPProduct *)product __attribute__((swift_name("init(product:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable brand __attribute__((swift_name("brand")));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property NSString * _Nullable couponCode __attribute__((swift_name("couponCode")));
@property NSDictionary<NSString *, NSString *> * _Nullable customAttributes __attribute__((swift_name("customAttributes")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property MPAInt * _Nullable position __attribute__((swift_name("position")));
@property double price __attribute__((swift_name("price")));
@property (readonly) MPProduct *product __attribute__((swift_name("product")));
@property double quantity __attribute__((swift_name("quantity")));
@property NSString * _Nullable sku __attribute__((swift_name("sku")));
@property NSString * _Nullable variant __attribute__((swift_name("variant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductBuilder")))
@interface MPAProductBuilder : MPACommerceEvent
- (instancetype)initWithProductAction:(MPACommerceProductActionEnum *)productAction __attribute__((swift_name("init(productAction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCommerceEvent:(MPCommerceEvent *)commerceEvent __attribute__((swift_name("init(commerceEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSString * _Nullable checkoutOptions __attribute__((swift_name("checkoutOptions")));
@property MPAInt * _Nullable checkoutStep __attribute__((swift_name("checkoutStep")));
@property NSString * _Nullable currency __attribute__((swift_name("currency")));
@property NSString * _Nullable productListName __attribute__((swift_name("productListName")));
@property NSString * _Nullable productListSource __attribute__((swift_name("productListSource")));
@property NSArray<MPAProduct *> *products __attribute__((swift_name("products")));
@property MPATransactionAttributes * _Nullable transactionAttributes __attribute__((swift_name("transactionAttributes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductListBuilder")))
@interface MPAProductListBuilder : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)productProductInitializer:(void (^)(MPAProduct *))productInitializer __attribute__((swift_name("product(productInitializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Promotion")))
@interface MPAPromotion : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPromotion:(MPPromotion *)promotion __attribute__((swift_name("init(promotion:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable creative __attribute__((swift_name("creative")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable position __attribute__((swift_name("position")));
@property (readonly) MPPromotion *promotion __attribute__((swift_name("promotion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionBuilder")))
@interface MPAPromotionBuilder : MPACommerceEvent
- (instancetype)initWithPromotionAction:(MPACommercePromotionActionEnum *)promotionAction __attribute__((swift_name("init(promotionAction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCommerceEvent:(MPCommerceEvent *)commerceEvent __attribute__((swift_name("init(commerceEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSArray<MPAPromotion *> *promotions __attribute__((swift_name("promotions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionAttributes")))
@interface MPATransactionAttributes : MPABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTransactionAttributes:(MPTransactionAttributes *)transactionAttributes __attribute__((swift_name("init(transactionAttributes:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable affiliation __attribute__((swift_name("affiliation")));
@property NSString * _Nullable couponCode __attribute__((swift_name("couponCode")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPADouble * _Nullable revenue __attribute__((swift_name("revenue")));
@property MPADouble * _Nullable shipping __attribute__((swift_name("shipping")));
@property MPADouble * _Nullable tax __attribute__((swift_name("tax")));
@property (readonly) MPTransactionAttributes *transactionAttributes __attribute__((swift_name("transactionAttributes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MPAKotlinByteArray : MPABase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MPAByte *(^)(MPAInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPAKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface MPAKotlinByteArray (Extensions)
- (NSData *)toNSData __attribute__((swift_name("toNSData()")));
@end;

@interface MPAMPEvent (Extensions)
- (MPEvent *)getEvent __attribute__((swift_name("getEvent()")));
@end;

@interface MPABaseEvent (Extensions)
- (MPBaseEvent *)toBaseEvent __attribute__((swift_name("toBaseEvent()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformersKt")))
@interface MPATransformersKt : MPABase
@property (class, readonly) id<MPATransformer> dataplanOptionsTransformer __attribute__((swift_name("dataplanOptionsTransformer")));
@property (class, readonly) id<MPATransformer> doubleNSNumberTransformer __attribute__((swift_name("doubleNSNumberTransformer")));
@property (class, readonly) id<MPATransformer> doubleNonNullNSNumberTransformer __attribute__((swift_name("doubleNonNullNSNumberTransformer")));
@property (class, readonly) id<MPATransformer> environmentTransformer __attribute__((swift_name("environmentTransformer")));
@property (class, readonly) id<MPATransformer> identityRequestTransformer __attribute__((swift_name("identityRequestTransformer")));
@property (class, readonly) id<MPATransformer> installTypeTransformer __attribute__((swift_name("installTypeTransformer")));
@property (class, readonly) id<MPATransformer> intDoubleTransformer __attribute__((swift_name("intDoubleTransformer")));
@property (class, readonly) id<MPATransformer> intLongTransformer __attribute__((swift_name("intLongTransformer")));
@property (class, readonly) id<MPATransformer> intNSNumberTransformer __attribute__((swift_name("intNSNumberTransformer")));
@property (class, readonly) id<MPATransformer> intULongTransformer __attribute__((swift_name("intULongTransformer")));
@property (class, readonly) id<MPATransformer> jsonStringMapTransformer __attribute__((swift_name("jsonStringMapTransformer")));
@property (class, readonly) id<MPATransformer> logLevelTransformer __attribute__((swift_name("logLevelTransformer")));
@property (class, readonly) id<MPATransformer> networkOptionsTransformer __attribute__((swift_name("networkOptionsTransformer")));
@property (class, readonly) id<MPATransformer> nullableDoubleNSNumberTransformer __attribute__((swift_name("nullableDoubleNSNumberTransformer")));
@property (class, readonly) id<MPATransformer> transactionAttributesTransformer __attribute__((swift_name("transactionAttributesTransformer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface MPAUtilsKt : MPABase
+ (MPATransformDelegate<id, id> *)nullablePropertyProperty:(id _Nullable (^)(void))property __attribute__((swift_name("nullableProperty(property:)")));
+ (id _Nullable (^)(void))propertyProperty:(id _Nullable (^)(void))property __attribute__((swift_name("property(property:)")));
+ (id<MPATransformer>)to:(id _Nullable (^)(id _Nullable))receiver toFunction:(id _Nullable (^)(id _Nullable))toFunction __attribute__((swift_name("to(_:toFunction:)")));
+ (MPAKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@property (class, readonly) MPAMParticle *mParticle __attribute__((swift_name("mParticle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientPlatformKt")))
@interface MPAClientPlatformKt : MPABase
@property (class, readonly) MPAPlatform *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MParticleKt")))
@interface MPAMParticleKt : MPABase
+ (MPAMParticleOptions *)MParticleOptionsApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret clientPlatform:(MPAClientPlatform *)clientPlatform initializer:(void (^)(MPAMParticleOptions *))initializer __attribute__((swift_name("MParticleOptions(apiKey:apiSecret:clientPlatform:initializer:)")));
+ (id _Nullable (^)(void))fieldd:(id _Nullable (^)(void))receiver __attribute__((swift_name("fieldd(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityApiRequestKt")))
@interface MPAIdentityApiRequestKt : MPABase
+ (MPAIdentityApiRequest *)IdentityApiRequestUser:(MPAMParticleUser * _Nullable)user initializer:(void (^)(MPAIdentityApiRequest *))initializer __attribute__((swift_name("IdentityApiRequest(user:initializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityKt")))
@interface MPAIdentityKt : MPABase
+ (MPAIdentityType *)toIdentityType:(id)receiver __attribute__((swift_name("toIdentityType(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEventImplKt")))
@interface MPABaseEventImplKt : MPABase
+ (NSMutableDictionary *)toMutableDictionary:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toMutableDictionary(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommerceEventKt")))
@interface MPACommerceEventKt : MPABase
+ (MPACommerceEvent *)CommerceEventImpressionAction:(MPACommerce *)impressionAction impressionName:(NSString *)impressionName initializer:(void (^)(MPAImpressionBuilder *))initializer __attribute__((swift_name("CommerceEvent(impressionAction:impressionName:initializer:)")));
+ (MPACommerceEvent *)CommerceEventProductAction:(MPACommerceProductActionEnum *)productAction initializer:(void (^)(MPAProductBuilder *))initializer __attribute__((swift_name("CommerceEvent(productAction:initializer:)")));
+ (MPACommerceEvent *)CommerceEventPromotionAction:(MPACommercePromotionActionEnum *)promotionAction initializer:(void (^)(MPAPromotionBuilder *))initializer __attribute__((swift_name("CommerceEvent(promotionAction:initializer:)")));
@property (class, readonly) id<MPATransformer> mapDictionaryTransformer __attribute__((swift_name("mapDictionaryTransformer")));
@property (class, readonly) id<MPATransformer> mapTransformer __attribute__((swift_name("mapTransformer")));
@property (class, readonly) id<MPATransformer> messageTypeTransformer __attribute__((swift_name("messageTypeTransformer")));
@property (class, readonly) MPAProduct *product __attribute__((swift_name("product")));
@property (class, readonly) id<MPATransformer> productTransformer __attribute__((swift_name("productTransformer")));
@property (class, readonly) id<MPATransformer> promotionListTransformDelegate __attribute__((swift_name("promotionListTransformDelegate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImpressionKt")))
@interface MPAImpressionKt : MPABase
+ (MPAImpression *)ImpressionListName:(NSString *)listName initializer:(void (^)(MPAImpression *))initializer __attribute__((swift_name("Impression(listName:initializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductKt")))
@interface MPAProductKt : MPABase
+ (MPAProduct *)ProductInitializer:(void (^)(MPAProduct *))initializer __attribute__((swift_name("Product(initializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionKt")))
@interface MPAPromotionKt : MPABase
+ (MPAPromotion *)PromotionInitializer:(void (^)(MPAPromotion *))initializer __attribute__((swift_name("Promotion(initializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionAttributesKt")))
@interface MPATransactionAttributesKt : MPABase
+ (MPATransactionAttributes *)TransactionAttributesInitializer:(void (^)(MPATransactionAttributes *))initializer __attribute__((swift_name("TransactionAttributes(initializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MPAKotlinEnumCompanion : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPAKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPAKotlinArray<T> : MPABase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPAInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPAKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MPAKotlinThrowable : MPABase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPAKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPAKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MPAKotlinException : MPAKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MPAKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKCallable")))
@protocol MPAKotlinKCallable <MPAKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<MPAKotlinKType> returnType __attribute__((swift_name("returnType")));
@end;

__attribute__((swift_name("KotlinKProperty")))
@protocol MPAKotlinKProperty <MPAKotlinKCallable>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MPAKotlinUnit : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPAKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPAKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MPAKotlinByteIterator : MPABase <MPAKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPAByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol MPAKotlinKType
@required
@property (readonly) NSArray<MPAKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<MPAKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MPAKotlinKTypeProjection : MPABase
- (instancetype)initWithVariance:(MPAKotlinKVariance * _Nullable)variance type:(id<MPAKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPAKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MPAKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<MPAKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPAKotlinKTypeProjection *)doCopyVariance:(MPAKotlinKVariance * _Nullable)variance type:(id<MPAKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MPAKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MPAKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MPAKotlinKClassifier
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MPAKotlinKVariance : MPAKotlinEnum<MPAKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPAKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MPAKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MPAKotlinKVariance *out __attribute__((swift_name("out")));
+ (MPAKotlinArray<MPAKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MPAKotlinKTypeProjectionCompanion : MPABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPAKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (MPAKotlinKTypeProjection *)contravariantType:(id<MPAKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (MPAKotlinKTypeProjection *)covariantType:(id<MPAKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (MPAKotlinKTypeProjection *)invariantType:(id<MPAKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MPAKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
