#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPTModelsConfigResponseMessage, MPTApiMParticleOptions, MPTApiClientPlatform, MPTBaseTest, MPTPlatforms, MPTKotlinEnumCompanion, MPTKotlinEnum<E>, MPTLifecycleEvent, MPTKotlinArray<T>, MPTKotlinByteArray, NSData, MPTResponse<ResponseType>, MPTMockServer, MPTEndpointType<T, R>, MPTEndpoint<RequestType, ResponseType>, MPTRequest<T>, MPTReceivedRequests<T, R>, MPTEndpointTypeCompanion, MPTModelsAliasRequestMessage, MPTModelsEmpty, MPTModelsBatchMessage, MPTModelsIdentityRequestMessage, MPTModelsIdentityResponseMessage, MPTMockServerCompanion, MPTKotlinThrowable, MPTServer, MPTServerServerEndpoint<RequestType, ResponseType>, MPTServerServerEndpointNegation<RequestType, RequestType_, ResponseType>, MPTThreadingUtil, MPTRandomUtils, MPTApiIdentityType, MPTApiEventType, MPTTestingUtils, MPTApiMPEvent, MPTApiPlatform, MPTSuccessResponse<R>, MPTKotlinx_serialization_jsonJsonElement, MPTModelsTriggerItemsMessage, MPTModelsKitConfigMessage, MPTModelsConfigResponseMessageCompanion, MPTApiDataplanOptions, MPTApiEnvironment, MPTApiIdentityApiRequest, MPTApiIdentityResponse, MPTApiInstallType, MPTApiLocationTracking, MPTApiLogLevel, MPTApiNetworkOptions, MParticleOptions, MPTKotlinByteIterator, MPTModelsAliasDataMessage, MPTModelsAliasRequestMessageCompanion, MPTModelsServerMessageObject, MPTModelsEmptyCompanion, MPTModelsConsentStateMessage, MPTModelsDataplanContextMessage, MPTModelsBaseEvent, MPTModelsReportingMessageMessage, MPTModelsAppInfoMessage, MPTModelsDeviceInfoMessage, MPTModelsUserIdentities, MPTModelsBatchMessageCompanion, MPTModelsClientSdkMessage, MPTModelsIdentityChange, MPTModelsIdentityRequestMessageCompanion, MPTModelsError, MPTModelsIdentityResponseMessageCompanion, MPTApiMessageType, MPBaseEvent, MPTApiBaseEvent, MPTApiCustomEvent, MPTKotlinx_serialization_jsonJsonElementCompanion, MPTModelsTriggerItemsMessageCompanion, MPTModelsAttributeValueFilter, MPTModelsFilterMessage, MPTModelsBracketMessage, MPTModelsConsentForwardingRuleMessage, MPTModelsKitConfigMessageCompanion, MPDataPlanOptions, MPTApiMParticleUser, MPIdentityApiRequest, MPTApiIdentityHttpResponse, MPTKotlinUnit, MPNetworkOptions, MPTModelsAliasDataMessageCompanion, MPTModelsConsentStateInstanceMessage, MPTModelsConsentStateMessageCompanion, MPTModelsDataplan, MPTModelsDataplanContextMessageCompanion, MPTModelsBaseEventCompanion, MPTModelsLocationMessage, MPTModelsStateInfoMessage, MPTModelsProjectionReportMessage, MPTModelsReportingMessageMessageCompanion, MPTModelsAppInfoMessageCompanion, MPTModelsDeviceRootedObject, MPTModelsDeviceInfoMessageCompanion, MPTModelsUserIdentitiesCompanion, MPTModelsClientSdkMessageCompanion, MPTModelsIdentityChangeCompanion, MPTModelsErrorCompanion, MPTApiMessageTypeCompanion, MPTModelsAttributeValueFilterCompanion, MPTModelsFilterMessageCompanion, MPTModelsBracketMessageCompanion, MPTModelsRules, MPTModelsConsentForwardingRuleMessageCompanion, MParticleUser, MPTApiConsentState, MPTApiError, MPTModelsConsentStateInstanceMessageCompanion, MPTModelsDataplanCompanion, MPTModelsLocationMessageCompanion, MPTModelsStateInfoMessageCompanion, MPTModelsEventType, MPTModelsProjectionReportMessageCompanion, MPTModelsDeviceRootedObjectCompanion, MPTModelsRulesCompanion, MPTKotlinx_serialization_coreSerializersModule, MPTKotlinx_serialization_coreSerialKind, MPTKotlinNothing, MPConsentState, MPCCPAConsent, MPTApiConsent, MPGDPRConsent, MPTModelsEventTypeCompanion;

@protocol MPTAwaiter, MPTKotlinComparable, MPTRawConnection, MPTIRequestFilter, MPTIResponseLogic, MPTKotlinIterator, MPTKotlinx_serialization_coreKSerializer, MPTKotlinx_serialization_coreEncoder, MPTKotlinx_serialization_coreSerialDescriptor, MPTKotlinx_serialization_coreSerializationStrategy, MPTKotlinx_serialization_coreDecoder, MPTKotlinx_serialization_coreDeserializationStrategy, MPTApiUserAttributeListener, MPTKotlinx_serialization_coreCompositeEncoder, MPTKotlinAnnotation, MPTKotlinx_serialization_coreCompositeDecoder, MPTKotlinx_serialization_coreSerializersModuleCollector, MPTKotlinKClass, MPTKotlinKDeclarationContainer, MPTKotlinKAnnotatedElement, MPTKotlinKClassifier;

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
@interface MPTBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MPTBase (MPTBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MPTMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPTMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMPTKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MPTNumber : NSNumber
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
@interface MPTByte : MPTNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MPTUByte : MPTNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MPTShort : MPTNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MPTUShort : MPTNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MPTInt : MPTNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MPTUInt : MPTNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MPTLong : MPTNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MPTULong : MPTNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MPTFloat : MPTNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MPTDouble : MPTNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MPTBoolean : MPTNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Awaiter")))
@protocol MPTAwaiter
@required
- (void)awaitDescription:(NSString *)description timeout:(double)timeout __attribute__((swift_name("await(description:timeout:)")));
- (void)countdownDescription:(NSString *)description __attribute__((swift_name("countdown(description:)")));
- (void)initializeExpectationDescription:(NSString *)description __attribute__((swift_name("initializeExpectation(description:)")));
@end;

__attribute__((swift_name("BaseTest")))
@interface MPTBaseTest : MPTBase
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer));
- (void)afterBeforeAll __attribute__((swift_name("afterBeforeAll()")));
- (void)beforeAll __attribute__((swift_name("beforeAll()")));
- (void)beforeAllAwaiter:(id<MPTAwaiter>)awaiter __attribute__((swift_name("beforeAll(awaiter:)")));
- (void)initialConfigResponseConfigResponse:(MPTModelsConfigResponseMessage *)configResponse __attribute__((swift_name("initialConfigResponse(configResponse:)")));
- (void)initializeTestServer __attribute__((swift_name("initializeTestServer()")));
- (void)startMParticleOptions:(MPTApiMParticleOptions *)options defaultConfigResponse:(MPTModelsConfigResponseMessage * _Nullable)defaultConfigResponse __attribute__((swift_name("startMParticle(options:defaultConfigResponse:)")));
@property MPTApiClientPlatform *clientPlatform __attribute__((swift_name("clientPlatform")));
@property (readonly) BOOL keepSdkInstance __attribute__((swift_name("keepSdkInstance")));
@property int64_t mStartingMpid __attribute__((swift_name("mStartingMpid")));
@end;

__attribute__((swift_name("BaseStartedTest")))
@interface MPTBaseStartedTest : MPTBaseTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)afterBeforeAll __attribute__((swift_name("afterBeforeAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailureLatch")))
@interface MPTFailureLatch : MPTBase
- (instancetype)initWithDescription:(NSString *)description __attribute__((swift_name("init(description:)"))) __attribute__((objc_designated_initializer));
- (void)await __attribute__((swift_name("await()")));
- (void)awaitTimeout:(int64_t)timeout __attribute__((swift_name("await(timeout:)")));
- (void)countDown __attribute__((swift_name("countDown()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) MPTPlatforms *platforms __attribute__((swift_name("platforms")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MPTKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MPTKotlinEnum<E> : MPTBase <MPTKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleEvent")))
@interface MPTLifecycleEvent : MPTKotlinEnum<MPTLifecycleEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTLifecycleEvent *applicationstart __attribute__((swift_name("applicationstart")));
@property (class, readonly) MPTLifecycleEvent *applicationstop __attribute__((swift_name("applicationstop")));
@property (class, readonly) MPTLifecycleEvent *screenstart __attribute__((swift_name("screenstart")));
@property (class, readonly) MPTLifecycleEvent *screenstop __attribute__((swift_name("screenstop")));
+ (MPTKotlinArray<MPTLifecycleEvent *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestLifecycleContext")))
@interface MPTTestLifecycleContext : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)sendBackground __attribute__((swift_name("sendBackground()")));
- (void)sendForeground __attribute__((swift_name("sendForeground()")));
- (void)triggerActivityLifecycleEventState:(MPTLifecycleEvent *)state __attribute__((swift_name("triggerActivityLifecycleEvent(state:)")));
- (void)triggerOnLowMemory __attribute__((swift_name("triggerOnLowMemory()")));
@end;

__attribute__((swift_name("RawConnection")))
@protocol MPTRawConnection
@required
- (NSString * _Nullable)getError __attribute__((swift_name("getError()")));
- (NSDictionary<NSString *, id> *)getHeaderFields __attribute__((swift_name("getHeaderFields()")));
- (NSString *)getRequestBody __attribute__((swift_name("getRequestBody()")));
- (NSString * _Nullable)getResponseBody __attribute__((swift_name("getResponseBody()")));
- (int32_t)getResponseCode __attribute__((swift_name("getResponseCode()")));
- (NSDictionary<id, id> *)getResponseHeaders __attribute__((swift_name("getResponseHeaders()")));
- (NSString *)getUrl __attribute__((swift_name("getUrl()")));
- (void)setErrorResponseError:(NSString * _Nullable)responseError __attribute__((swift_name("setError(responseError:)")));
- (void)setResponseBodyResponseBody:(NSString * _Nullable)responseBody __attribute__((swift_name("setResponseBody(responseBody:)")));
- (void)setResponseCodeResponseCode:(int32_t)responseCode __attribute__((swift_name("setResponseCode(responseCode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AsyncRawConnectionImpl")))
@interface MPTAsyncRawConnectionImpl : MPTBase <MPTRawConnection>
- (instancetype)initWithUrl:(NSString *)url message:(NSString * _Nullable)message __attribute__((swift_name("init(url:message:)"))) __attribute__((objc_designated_initializer));
- (void)failMessage:(NSString *)message __attribute__((swift_name("fail(message:)")));
- (NSString * _Nullable)getError __attribute__((swift_name("getError()")));
- (NSDictionary<NSString *, id> *)getHeaderFields __attribute__((swift_name("getHeaderFields()")));
- (NSString *)getRequestBody __attribute__((swift_name("getRequestBody()")));
- (NSString * _Nullable)getResponseBody __attribute__((swift_name("getResponseBody()")));
- (int32_t)getResponseCode __attribute__((swift_name("getResponseCode()")));
- (NSDictionary<id, id> *)getResponseHeaders __attribute__((swift_name("getResponseHeaders()")));
- (NSString *)getUrl __attribute__((swift_name("getUrl()")));
- (void)setErrorResponseError:(NSString * _Nullable)responseError __attribute__((swift_name("setError(responseError:)")));
- (void)setResponseBodyResponseBody:(NSString * _Nullable)responseBody __attribute__((swift_name("setResponseBody(responseBody:)")));
- (void)setResponseCodeResponseCode:(int32_t)responseCode __attribute__((swift_name("setResponseCode(responseCode:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPTKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@property NSString * _Nullable responseBody __attribute__((swift_name("responseBody")));
@property MPTInt * _Nullable responseCode __attribute__((swift_name("responseCode")));
@property NSString * _Nullable responseError __attribute__((swift_name("responseError")));
@property NSDictionary<id, id> *responseHeaders __attribute__((swift_name("responseHeaders")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Response")))
@interface MPTResponse<ResponseType> : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property NSDictionary<id, id> *headers __attribute__((swift_name("headers")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL isError __attribute__((swift_name("isError")));
@property ResponseType _Nullable responseObject __attribute__((swift_name("responseObject")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultResponse")))
@interface MPTDefaultResponse<ResponseType> : MPTResponse<ResponseType>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property NSDictionary<id, id> *headers __attribute__((swift_name("headers")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL isError __attribute__((swift_name("isError")));
@property ResponseType _Nullable responseObject __attribute__((swift_name("responseObject")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Endpoint")))
@interface MPTEndpoint<RequestType, ResponseType> : MPTBase
- (instancetype)initWithMockServer:(MPTMockServer *)mockServer endpointType:(MPTEndpointType<RequestType, ResponseType> *)endpointType __attribute__((swift_name("init(mockServer:endpointType:)"))) __attribute__((objc_designated_initializer));
- (MPTEndpoint<RequestType, ResponseType> *)addRequestResponseLogicFilter:(id<MPTIRequestFilter> _Nullable)filter logic:(id<MPTIResponseLogic>)logic __attribute__((swift_name("addRequestResponseLogic(filter:logic:)")));
- (MPTEndpoint<RequestType, ResponseType> *)addRequestResponseLogicFilter:(MPTBoolean *(^ _Nullable)(MPTRequest<RequestType> *))filter logic_:(MPTResponse<ResponseType> *(^)(MPTRequest<RequestType> *))logic __attribute__((swift_name("addRequestResponseLogic(filter:logic_:)")));
- (void)clearRequestFilter __attribute__((swift_name("clearRequestFilter()")));
- (void)clearRequestResponseLogic __attribute__((swift_name("clearRequestResponseLogic()")));
- (void)nextResponseResponse:(MPTResponse<ResponseType> *(^)(MPTRequest<RequestType> *))response __attribute__((swift_name("nextResponse(response:)")));
- (MPTEndpoint<RequestType, ResponseType> *)onRequestFinishedRequestFilter:(MPTBoolean *(^ _Nullable)(MPTRequest<RequestType> *))requestFilter onRequestCallback:(MPTBoolean *(^ _Nullable)(MPTRequest<RequestType> *, MPTResponse<ResponseType> *))onRequestCallback __attribute__((swift_name("onRequestFinished(requestFilter:onRequestCallback:)")));
@property (readonly) NSArray<MPTReceivedRequests<RequestType, ResponseType> *> *receivedRequests __attribute__((swift_name("receivedRequests")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndpointType")))
@interface MPTEndpointType<T, R> : MPTBase
@property (class, readonly, getter=companion) MPTEndpointTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndpointTypeCompanion")))
@interface MPTEndpointTypeCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTEndpointTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MPTEndpointType<MPTModelsAliasRequestMessage *, MPTModelsEmpty *> *Alias __attribute__((swift_name("Alias")));
@property (readonly) MPTEndpointType<MPTModelsEmpty *, MPTModelsConfigResponseMessage *> *Config __attribute__((swift_name("Config")));
@property (readonly) MPTEndpointType<MPTModelsBatchMessage *, MPTModelsEmpty *> *Events __attribute__((swift_name("Events")));
@property (readonly) MPTEndpointType<MPTModelsIdentityRequestMessage *, MPTModelsIdentityResponseMessage *> *Identity_Identify __attribute__((swift_name("Identity_Identify")));
@property (readonly) MPTEndpointType<MPTModelsIdentityRequestMessage *, MPTModelsIdentityResponseMessage *> *Identity_Login __attribute__((swift_name("Identity_Login")));
@property (readonly) MPTEndpointType<MPTModelsIdentityRequestMessage *, MPTModelsIdentityResponseMessage *> *Identity_Logout __attribute__((swift_name("Identity_Logout")));
@property (readonly) MPTEndpointType<MPTModelsIdentityRequestMessage *, MPTModelsIdentityResponseMessage *> *Identity_Modify __attribute__((swift_name("Identity_Modify")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface MPTErrorResponse<R> : MPTResponse<R>
- (instancetype)initWithHttpCode:(int32_t)httpCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(httpCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property NSString *errorMessage __attribute__((swift_name("errorMessage")));
@property NSDictionary<id, id> *headers __attribute__((swift_name("headers")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL isError __attribute__((swift_name("isError")));
@property R _Nullable responseObject __attribute__((swift_name("responseObject")));
@end;

__attribute__((swift_name("IOnRequestCallback")))
@protocol MPTIOnRequestCallback
@required
- (BOOL)onRequestRequest:(MPTRequest<id> *)request response:(MPTResponse<id> *)response __attribute__((swift_name("onRequest(request:response:)")));
@end;

__attribute__((swift_name("IRequestFilter")))
@protocol MPTIRequestFilter
@required
- (BOOL)isMatchRequest:(MPTRequest<id> *)request __attribute__((swift_name("isMatch(request:)")));
@end;

__attribute__((swift_name("IResponseLogic")))
@protocol MPTIResponseLogic
@required
- (MPTResponse<id> *)generateResponseRequest:(MPTRequest<id> *)request __attribute__((swift_name("generateResponse(request:)")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MockConnector")))
@interface MPTMockConnector : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MockConnectorFactory")))
@interface MPTMockConnectorFactory : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MockConnectorResponse")))
@interface MPTMockConnectorResponse : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockServer")))
@interface MPTMockServer : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPTMockServerCompanion *companion __attribute__((swift_name("companion")));
- (void)failHardMessage:(NSString *)message __attribute__((swift_name("failHard(message:)")));
- (void)failHardException:(MPTKotlinThrowable *)exception __attribute__((swift_name("failHard(exception:)")));
- (MPTEndpoint<id, id> *)getEndpointEndpointType:(MPTEndpointType<id, id> *)endpointType __attribute__((swift_name("getEndpoint(endpointType:)")));
- (id<MPTRawConnection>)onRequestMadeConnection:(id<MPTRawConnection>)connection __attribute__((swift_name("onRequestMade(connection:)")));
@property NSArray<MPTReceivedRequests<id, id> *> *receivedRequests __attribute__((swift_name("receivedRequests")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockServer.Companion")))
@interface MPTMockServerCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTMockServerCompanion *shared __attribute__((swift_name("shared")));
- (void)startPlatforms:(MPTPlatforms *)platforms __attribute__((swift_name("start(platforms:)")));
@end;

__attribute__((swift_name("Platforms")))
@interface MPTPlatforms : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)currentThread __attribute__((swift_name("currentThread()")));
- (NSDictionary<NSString *, id> *)getDatabaseContents __attribute__((swift_name("getDatabaseContents()")));
- (NSDictionary<NSString *, id> *)getDatabaseContentsTables:(NSArray<NSString *> * _Nullable)tables __attribute__((swift_name("getDatabaseContents(tables:)")));
- (NSDictionary<NSString *, id> *)getDatabaseSchema __attribute__((swift_name("getDatabaseSchema()")));
- (NSDictionary<NSString *, id> *)getDatabaseSchemaTables:(NSArray<NSString *> * _Nullable)tables __attribute__((swift_name("getDatabaseSchema(tables:)")));
- (void)injectMockServer __attribute__((swift_name("injectMockServer()")));
- (BOOL)isServerThread __attribute__((swift_name("isServerThread()")));
- (void)prepareThread __attribute__((swift_name("prepareThread()")));
- (id _Nullable)runInForegroundRunnable:(id _Nullable (^)(void))runnable __attribute__((swift_name("runInForeground(runnable:)")));
- (void)sendBackground __attribute__((swift_name("sendBackground()")));
- (void)sendForeground __attribute__((swift_name("sendForeground()")));
- (void)setCachedConfigConfigMessage:(MPTModelsConfigResponseMessage *)configMessage __attribute__((swift_name("setCachedConfig(configMessage:)")));
- (void)sleepMillis:(int64_t)millis __attribute__((swift_name("sleep(millis:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceivedRequests")))
@interface MPTReceivedRequests<T, R> : MPTBase
- (instancetype)initWithEndpointType:(MPTEndpointType<id, id> *)endpointType request:(MPTRequest<T> *)request response:(MPTResponse<R> *)response __attribute__((swift_name("init(endpointType:request:response:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPTEndpointType<id, id> *endpointType __attribute__((swift_name("endpointType")));
@property (readonly) MPTRequest<T> *request __attribute__((swift_name("request")));
@property MPTResponse<R> *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request")))
@interface MPTRequest<T> : MPTBase
- (instancetype)initWithBody:(T _Nullable)body connection:(id<MPTRawConnection>)connection __attribute__((swift_name("init(body:connection:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrl:(NSString *)url headers:(NSDictionary<NSString *, id> * _Nullable)headers body:(T _Nullable)body __attribute__((swift_name("init(url:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server")))
@interface MPTServer : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)server __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTServer *shared __attribute__((swift_name("shared")));
- (MPTServerServerEndpoint<id, id> *)endpointEndpointType:(MPTEndpointType<id, id> *)endpointType __attribute__((swift_name("endpoint(endpointType:)")));
- (id<MPTRawConnection>)onRequestMadeConnection:(id<MPTRawConnection>)connection __attribute__((swift_name("onRequestMade(connection:)")));
- (void)startPlatforms:(MPTPlatforms *)platforms __attribute__((swift_name("start(platforms:)")));
@property int64_t defaultTimeout __attribute__((swift_name("defaultTimeout")));
@property (readonly) NSArray<MPTReceivedRequests<id, id> *> *requests __attribute__((swift_name("requests")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerServerEndpoint")))
@interface MPTServerServerEndpoint<RequestType, ResponseType> : MPTBase
- (instancetype)initWithEndpointType:(MPTEndpointType<RequestType, ResponseType> *)endpointType __attribute__((swift_name("init(endpointType:)"))) __attribute__((objc_designated_initializer));
- (MPTServerServerEndpointNegation<RequestType, RequestType, ResponseType> *)assertHasNotReceivedAssertion:(MPTBoolean *(^)(MPTRequest<RequestType> *))assertion __attribute__((swift_name("assertHasNotReceived(assertion:)")));
- (void)assertHasReceivedAssertion:(MPTBoolean *(^)(MPTRequest<RequestType> *))assertion __attribute__((swift_name("assertHasReceived(assertion:)")));
- (MPTBoolean *(^)(MPTRequest<RequestType> *))assertWillNotReceiveFilter:(MPTBoolean *(^)(MPTRequest<RequestType> *))filter __attribute__((swift_name("assertWillNotReceive(filter:)")));
- (MPTBoolean *(^)(MPTRequest<RequestType> *))assertWillReceiveFilter:(MPTBoolean *(^)(MPTRequest<RequestType> *))filter __attribute__((swift_name("assertWillReceive(filter:)")));
- (void)nextResponseResponseLogic:(MPTResponse<ResponseType> *(^)(MPTRequest<RequestType> *))responseLogic __attribute__((swift_name("nextResponse(responseLogic:)")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("ServerServerEndpointAssertion")))
@interface MPTServerServerEndpointAssertion : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerServerEndpointNegation")))
@interface MPTServerServerEndpointNegation<RequestType, RequestType_, ResponseType> : MPTBase
- (instancetype)initWith:(MPTServerServerEndpoint<RequestType_, ResponseType> *)receiver assertion:(MPTBoolean *(^)(MPTRequest<RequestType> *))assertion serverEndpoint:(MPTServerServerEndpoint<RequestType, ResponseType> *)serverEndpoint __attribute__((swift_name("init(_:assertion:serverEndpoint:)"))) __attribute__((objc_designated_initializer));
- (MPTBoolean *(^)(MPTRequest<RequestType> *))butWill __attribute__((swift_name("butWill()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessResponse")))
@interface MPTSuccessResponse<R> : MPTResponse<R>
- (instancetype)initWithResponseObject:(R _Nullable)responseObject httpCode:(int32_t)httpCode headers:(NSDictionary<id, id> *)headers __attribute__((swift_name("init(responseObject:httpCode:headers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property NSDictionary<id, id> *headers __attribute__((swift_name("headers")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL isError __attribute__((swift_name("isError")));
@property R _Nullable responseObject __attribute__((swift_name("responseObject")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThreadingUtil")))
@interface MPTThreadingUtil : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)threadingUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTThreadingUtil *shared __attribute__((swift_name("shared")));
- (id _Nullable)runBlockingServerRunnable:(id _Nullable (^)(void))runnable __attribute__((swift_name("runBlockingServer(runnable:)")));
@property (readonly) MPTPlatforms *platforms __attribute__((swift_name("platforms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThreadsafeRawConnection")))
@interface MPTThreadsafeRawConnection : MPTBase <MPTRawConnection>
- (instancetype)initWithUrl:(NSString *)url message:(NSString * _Nullable)message __attribute__((swift_name("init(url:message:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getError __attribute__((swift_name("getError()")));
- (NSDictionary<NSString *, id> *)getHeaderFields __attribute__((swift_name("getHeaderFields()")));
- (NSString *)getRequestBody __attribute__((swift_name("getRequestBody()")));
- (NSString * _Nullable)getResponseBody __attribute__((swift_name("getResponseBody()")));
- (int32_t)getResponseCode __attribute__((swift_name("getResponseCode()")));
- (NSDictionary<id, id> *)getResponseHeaders __attribute__((swift_name("getResponseHeaders()")));
- (NSString *)getUrl __attribute__((swift_name("getUrl()")));
- (void)setErrorResponseError:(NSString * _Nullable)responseError __attribute__((swift_name("setError(responseError:)")));
- (void)setResponseBodyResponseBody:(NSString * _Nullable)responseBody __attribute__((swift_name("setResponseBody(responseBody:)")));
- (void)setResponseCodeResponseCode:(int32_t)responseCode __attribute__((swift_name("setResponseCode(responseCode:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleRawConnection")))
@interface MPTSimpleRawConnection : MPTBase <MPTRawConnection>
- (instancetype)initWithUrl:(NSString *)url requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(url:requestBody:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrl:(NSString *)url requestBody:(NSString * _Nullable (^)(void))requestBody responseCode:(MPTInt * _Nullable)responseCode error:(NSString * _Nullable)error responseBody:(NSString * _Nullable)responseBody responseHeaders:(NSDictionary<id, id> *)responseHeaders __attribute__((swift_name("init(url:requestBody:responseCode:error:responseBody:responseHeaders:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getError __attribute__((swift_name("getError()")));
- (NSDictionary<NSString *, id> *)getHeaderFields __attribute__((swift_name("getHeaderFields()")));
- (NSString *)getRequestBody __attribute__((swift_name("getRequestBody()")));
- (NSString * _Nullable)getResponseBody __attribute__((swift_name("getResponseBody()")));
- (int32_t)getResponseCode __attribute__((swift_name("getResponseCode()")));
- (NSDictionary<id, id> *)getResponseHeaders __attribute__((swift_name("getResponseHeaders()")));
- (NSString *)getUrl __attribute__((swift_name("getUrl()")));
- (void)setErrorResponseError:(NSString * _Nullable)responseError __attribute__((swift_name("setError(responseError:)")));
- (void)setResponseBodyResponseBody:(NSString * _Nullable)responseBody __attribute__((swift_name("setResponseBody(responseBody:)")));
- (void)setResponseCodeResponseCode:(int32_t)responseCode __attribute__((swift_name("setResponseCode(responseCode:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityRequestFilter")))
@interface MPTIdentityRequestFilter : MPTBase <MPTIRequestFilter>
- (instancetype)initWithMpid:(int64_t)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isMatchRequest:(MPTRequest<MPTModelsIdentityRequestMessage *> *)request __attribute__((swift_name("isMatch(request:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityResponseLogic")))
@interface MPTIdentityResponseLogic : MPTBase <MPTIResponseLogic>
- (instancetype)initWithMpid:(int64_t)mpid isLoggedIn:(BOOL)isLoggedIn __attribute__((swift_name("init(mpid:isLoggedIn:)"))) __attribute__((objc_designated_initializer));
- (MPTResponse<MPTModelsIdentityResponseMessage *> *)generateResponseRequest:(MPTRequest<MPTModelsIdentityRequestMessage *> *)request __attribute__((swift_name("generateResponse(request:)")));
@property (readonly) BOOL isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifyRequestFilter")))
@interface MPTModifyRequestFilter : MPTBase <MPTIRequestFilter>
- (instancetype)initWithMpid:(int64_t)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isMatchRequest:(MPTRequest<MPTModelsIdentityRequestMessage *> *)request __attribute__((swift_name("isMatch(request:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutable")))
@interface MPTMutable<T> : MPTBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RandomUtils")))
@interface MPTRandomUtils : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)randomUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTRandomUtils *shared __attribute__((swift_name("shared")));
- (NSString *)getAlphaNumericStringLength:(int32_t)length __attribute__((swift_name("getAlphaNumericString(length:)")));
- (NSString * _Nullable)getAlphaNumericStringLengthLowerBound:(int32_t)lengthLowerBound lengthUpperBound:(int32_t)lengthUpperBound __attribute__((swift_name("getAlphaNumericString(lengthLowerBound:lengthUpperBound:)")));
- (NSString *)getAlphaStringLength:(int32_t)length __attribute__((swift_name("getAlphaString(length:)")));
- (NSDictionary<id, id> *)getRandomAttributesCount:(int32_t)count __attribute__((swift_name("getRandomAttributes(count:)")));
- (NSDictionary<id, NSArray<id> *> * _Nullable)getRandomCustomFlagsCount:(int32_t)count __attribute__((swift_name("getRandomCustomFlags(count:)")));
- (NSDictionary<MPTApiIdentityType *, NSString *> * _Nullable)getRandomUserIdentitiesCount:(int32_t)count __attribute__((swift_name("getRandomUserIdentities(count:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (MPTMutableDictionary<NSString *, NSString *> *)randomAttributes __attribute__((swift_name("randomAttributes()")));
- (MPTApiEventType *)randomEventType __attribute__((swift_name("randomEventType()")));
- (MPTMutableDictionary<MPTApiIdentityType *, NSString *> *)randomIdentities __attribute__((swift_name("randomIdentities()")));
- (int32_t)randomIntFrom:(int32_t)from to:(int32_t)to __attribute__((swift_name("randomInt(from:to:)")));
- (NSSet<MPTInt *> *)randomIntSetFromRange:(int32_t)fromRange toRange:(int32_t)toRange num:(int32_t)num __attribute__((swift_name("randomIntSet(fromRange:toRange:num:)")));
- (int64_t)randomLongFrom:(int64_t)from to:(int64_t)to __attribute__((swift_name("randomLong(from:to:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestingUtils")))
@interface MPTTestingUtils : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)testingUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTTestingUtils *shared __attribute__((swift_name("shared")));
@property (readonly) BOOL isFirebasePresent __attribute__((swift_name("isFirebasePresent")));
@property (readonly) MPTApiMPEvent *randomMPEventRich __attribute__((swift_name("randomMPEventRich")));
@end;

@interface MPTRequest (Extensions)
- (int64_t)modifyMpid __attribute__((swift_name("modifyMpid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailureLatchKt")))
@interface MPTFailureLatchKt : MPTBase
@property (class) id<MPTAwaiter> _Nullable awaiterInstance __attribute__((swift_name("awaiterInstance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface MPTUtilsKt : MPTBase
+ (void)assertPlatformDifferenceValue:(id _Nullable)value message:(NSString * _Nullable)message assertion:(id _Nullable (^)(MPTApiPlatform *))assertion __attribute__((swift_name("assertPlatformDifference(value:message:assertion:)")));
+ (id _Nullable)andLog:(id _Nullable)receiver logAction:(NSString *(^)(void))logAction __attribute__((swift_name("andLog(_:logAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseTestKt")))
@interface MPTBaseTestKt : MPTBase
+ (void)beforeTest __attribute__((swift_name("beforeTest()")));
+ (MPTApiClientPlatform *)getClientPlatform __attribute__((swift_name("getClientPlatform()")));
+ (void)setAwaiterAwaiter:(id<MPTAwaiter>)awaiter __attribute__((swift_name("setAwaiter(awaiter:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockServerKt")))
@interface MPTMockServerKt : MPTBase
+ (MPTResponse<id> *)ResponseInitializer:(void (^)(MPTResponse<id> *))initializer __attribute__((swift_name("Response(initializer:)")));
+ (MPTSuccessResponse<id> *)SuccessResponseInitializer:(void (^)(MPTSuccessResponse<id> *))initializer __attribute__((swift_name("SuccessResponse(initializer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConfigResponseMessage")))
@interface MPTModelsConfigResponseMessage : MPTBase
- (instancetype)initWithType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPTBoolean * _Nullable)debug timeStamp:(MPTLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPTInt * _Nullable)ramp optOut:(MPTBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPTLong * _Nullable)sessionTimeout uploadInterval:(MPTLong * _Nullable)uploadInterval triggerItems:(MPTModelsTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPTLong * _Nullable)influenceOpenMessage aaidLat:(MPTBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPTBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPTInt * _Nullable)aliasMaxWindow kits:(NSArray<MPTModelsKitConfigMessage *> * _Nullable)kits __attribute__((swift_name("init(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsConfigResponseMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPTLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MPTLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (MPTModelsTriggerItemsMessage * _Nullable)component12 __attribute__((swift_name("component12()")));
- (MPTLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (MPTBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (MPTBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (MPTInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<MPTModelsKitConfigMessage *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPTBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPTLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPTInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPTBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MPTModelsConfigResponseMessage *)doCopyType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPTBoolean * _Nullable)debug timeStamp:(MPTLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPTInt * _Nullable)ramp optOut:(MPTBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPTLong * _Nullable)sessionTimeout uploadInterval:(MPTLong * _Nullable)uploadInterval triggerItems:(MPTModelsTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPTLong * _Nullable)influenceOpenMessage aaidLat:(MPTBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPTBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPTInt * _Nullable)aliasMaxWindow kits:(NSArray<MPTModelsKitConfigMessage *> * _Nullable)kits __attribute__((swift_name("doCopy(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (MPTModelsConfigResponseMessage *)fromFrom:(NSString *)from __attribute__((swift_name("from(from:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPTBoolean * _Nullable aaidLat __attribute__((swift_name("aaidLat")));
@property (readonly) MPTInt * _Nullable aliasMaxWindow __attribute__((swift_name("aliasMaxWindow")));
@property (readonly) MPTBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property (readonly) MPTBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MPTLong * _Nullable influenceOpenMessage __attribute__((swift_name("influenceOpenMessage")));
@property (readonly) NSArray<MPTModelsKitConfigMessage *> * _Nullable kits __attribute__((swift_name("kits")));
@property (readonly) NSString * _Nullable logUnhandledExceptions __attribute__((swift_name("logUnhandledExceptions")));
@property (readonly) MPTBoolean * _Nullable optOut __attribute__((swift_name("optOut")));
@property (readonly) NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property (readonly) NSArray<id> * _Nullable pushMessages __attribute__((swift_name("pushMessages")));
@property (readonly) MPTInt * _Nullable ramp __attribute__((swift_name("ramp")));
@property (readonly) MPTLong * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property (readonly) MPTLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) MPTModelsTriggerItemsMessage * _Nullable triggerItems __attribute__((swift_name("triggerItems")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) MPTLong * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@property (readonly) NSString * _Nullable workspaceToken __attribute__((swift_name("workspaceToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMParticleOptions")))
@interface MPTApiMParticleOptions : MPTBase
- (instancetype)initWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret clientPlatform:(MPTApiClientPlatform *)clientPlatform __attribute__((swift_name("init(apiKey:apiSecret:clientPlatform:)"))) __attribute__((objc_designated_initializer));
@property MPTBoolean * _Nullable androidIdDisabled __attribute__((swift_name("androidIdDisabled")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString *apiSecret __attribute__((swift_name("apiSecret")));
@property MPTApiClientPlatform *clientPlatform __attribute__((swift_name("clientPlatform")));
@property NSString * _Nullable dataplanId __attribute__((swift_name("dataplanId")));
@property MPTApiDataplanOptions * _Nullable dataplanOptions __attribute__((swift_name("dataplanOptions")));
@property MPTInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@property MPTBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property MPTBoolean * _Nullable enableUncaughtExceptionLogging __attribute__((swift_name("enableUncaughtExceptionLogging")));
@property MPTApiEnvironment * _Nullable environment __attribute__((swift_name("environment")));
@property MPTApiIdentityApiRequest * _Nullable identifyRequest __attribute__((swift_name("identifyRequest")));
@property MPTApiIdentityResponse * _Nullable identifyTask __attribute__((swift_name("identifyTask")));
@property MPTInt * _Nullable identityConnectionTimeout __attribute__((swift_name("identityConnectionTimeout")));
@property MPTApiInstallType * _Nullable installType __attribute__((swift_name("installType")));
@property MPTApiLocationTracking * _Nullable locationTracking __attribute__((swift_name("locationTracking")));
@property MPTApiLogLevel * _Nullable logLevel __attribute__((swift_name("logLevel")));
@property MPTApiNetworkOptions * _Nullable networkOptions __attribute__((swift_name("networkOptions")));
@property (readonly) MParticleOptions *options __attribute__((swift_name("options")));
@property NSString * _Nullable pushRegistrationInstanceId __attribute__((swift_name("pushRegistrationInstanceId")));
@property NSString * _Nullable pushRegistrationSenderId __attribute__((swift_name("pushRegistrationSenderId")));
@property MPTInt * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property MPTInt * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@end;

__attribute__((swift_name("ApiClientPlatform")))
@interface MPTApiClientPlatform : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MPTKotlinEnumCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPTKotlinArray<T> : MPTBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPTInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPTKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MPTKotlinByteArray : MPTBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MPTByte *(^)(MPTInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPTKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasRequestMessage")))
@interface MPTModelsAliasRequestMessage : MPTBase
- (instancetype)initWithStartTime:(MPTLong * _Nullable)startTime endTime:(MPTLong * _Nullable)endTime data:(MPTModelsAliasDataMessage *)data requestType:(NSString * _Nullable)requestType requestId:(NSString * _Nullable)requestId aliasEnvironment:(NSString * _Nullable)aliasEnvironment apiKey:(NSString *)apiKey __attribute__((swift_name("init(startTime:endTime:data:requestType:requestId:aliasEnvironment:apiKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsAliasRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable aliasEnvironment __attribute__((swift_name("aliasEnvironment")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) MPTModelsAliasDataMessage *data __attribute__((swift_name("data")));
@property (readonly) MPTLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) NSString * _Nullable requestType __attribute__((swift_name("requestType")));
@property (readonly) MPTLong * _Nullable startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((swift_name("ModelsServerMessageObject")))
@interface MPTModelsServerMessageObject : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("ModelsEmpty")))
@interface MPTModelsEmpty : MPTModelsServerMessageObject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPTModelsEmptyCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBatchMessage")))
@interface MPTModelsBatchMessage : MPTBase
- (instancetype)initWithEcho:(MPTBoolean * _Nullable)echo type:(NSString * _Nullable)type id:(NSString * _Nullable)id timestamp:(MPTLong * _Nullable)timestamp mparticleVersion:(NSString * _Nullable)mparticleVersion optOutHeader:(MPTBoolean * _Nullable)optOutHeader configUploadInterval:(MPTInt * _Nullable)configUploadInterval configSessionTimeout:(MPTInt * _Nullable)configSessionTimeout mpid:(NSString * _Nullable)mpid sandbox:(MPTBoolean * _Nullable)sandbox deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp deletedUserAttributes:(NSArray<NSString *> * _Nullable)deletedUserAttributes cookies:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)cookies providerPersistence:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence integrationAttributes:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)integrationAttributes consentState:(MPTModelsConsentStateMessage * _Nullable)consentState dataplanContext:(MPTModelsDataplanContextMessage * _Nullable)dataplanContext messages:(NSArray<MPTModelsBaseEvent *> *)messages reportingMessages:(NSArray<MPTModelsReportingMessageMessage *> * _Nullable)reportingMessages appInfo:(MPTModelsAppInfoMessage * _Nullable)appInfo deviceInfo:(MPTModelsDeviceInfoMessage * _Nullable)deviceInfo identities:(NSArray<MPTModelsUserIdentities *> * _Nullable)identities attributes:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes sessionHistory:(NSArray<MPTModelsBaseEvent *> *)sessionHistory __attribute__((swift_name("init(echo:type:id:timestamp:mparticleVersion:optOutHeader:configUploadInterval:configSessionTimeout:mpid:sandbox:deviceApplicationStamp:deletedUserAttributes:cookies:providerPersistence:integrationAttributes:consentState:dataplanContext:messages:reportingMessages:appInfo:deviceInfo:identities:attributes:sessionHistory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsBatchMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTModelsAppInfoMessage * _Nullable appInfo __attribute__((swift_name("appInfo")));
@property (readonly) NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) MPTInt * _Nullable configSessionTimeout __attribute__((swift_name("configSessionTimeout")));
@property (readonly) MPTInt * _Nullable configUploadInterval __attribute__((swift_name("configUploadInterval")));
@property (readonly) MPTModelsConsentStateMessage * _Nullable consentState __attribute__((swift_name("consentState")));
@property (readonly) NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable cookies __attribute__((swift_name("cookies")));
@property (readonly) MPTModelsDataplanContextMessage * _Nullable dataplanContext __attribute__((swift_name("dataplanContext")));
@property (readonly) NSArray<NSString *> * _Nullable deletedUserAttributes __attribute__((swift_name("deletedUserAttributes")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPTModelsDeviceInfoMessage * _Nullable deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) MPTBoolean * _Nullable echo __attribute__((swift_name("echo")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<MPTModelsUserIdentities *> * _Nullable identities __attribute__((swift_name("identities")));
@property (readonly) NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable integrationAttributes __attribute__((swift_name("integrationAttributes")));
@property (readonly) NSArray<MPTModelsBaseEvent *> *messages __attribute__((swift_name("messages")));
@property (readonly) NSString * _Nullable mparticleVersion __attribute__((swift_name("mparticleVersion")));
@property (readonly) NSString * _Nullable mpid __attribute__((swift_name("mpid")));
@property (readonly) MPTBoolean * _Nullable optOutHeader __attribute__((swift_name("optOutHeader")));
@property (readonly) NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property (readonly) NSArray<MPTModelsReportingMessageMessage *> * _Nullable reportingMessages __attribute__((swift_name("reportingMessages")));
@property (readonly) MPTBoolean * _Nullable sandbox __attribute__((swift_name("sandbox")));
@property (readonly) NSArray<MPTModelsBaseEvent *> *sessionHistory __attribute__((swift_name("sessionHistory")));
@property (readonly) MPTLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityRequestMessage")))
@interface MPTModelsIdentityRequestMessage : MPTBase
- (instancetype)initWithClientSdk:(MPTModelsClientSdkMessage * _Nullable)clientSdk context:(NSString * _Nullable)context environment:(NSString * _Nullable)environment requestId:(NSString * _Nullable)requestId requestTimestamp:(MPTLong * _Nullable)requestTimestamp previousMpid:(MPTLong * _Nullable)previousMpid knownIdentities:(NSDictionary<NSString *, id> * _Nullable)knownIdentities identityChanges:(NSArray<MPTModelsIdentityChange *> * _Nullable)identityChanges __attribute__((swift_name("init(clientSdk:context:environment:requestId:requestTimestamp:previousMpid:knownIdentities:identityChanges:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsIdentityRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTModelsClientSdkMessage * _Nullable clientSdk __attribute__((swift_name("clientSdk")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) NSArray<MPTModelsIdentityChange *> * _Nullable identityChanges __attribute__((swift_name("identityChanges")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable knownIdentities __attribute__((swift_name("knownIdentities")));
@property (readonly) MPTLong * _Nullable previousMpid __attribute__((swift_name("previousMpid")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) MPTLong * _Nullable requestTimestamp __attribute__((swift_name("requestTimestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityResponseMessage")))
@interface MPTModelsIdentityResponseMessage : MPTBase
- (instancetype)initWithMpid:(NSString *)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMpid:(MPTLong * _Nullable)mpid context:(NSString * _Nullable)context errors:(NSArray<MPTModelsError *> * _Nullable)errors isLoggedIn:(MPTBoolean * _Nullable)isLoggedIn __attribute__((swift_name("init(mpid:context:errors:isLoggedIn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsIdentityResponseMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSArray<MPTModelsError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) MPTBoolean * _Nullable isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) MPTLong * _Nullable mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MPTKotlinThrowable : MPTBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPTKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPTKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityType")))
@interface MPTApiIdentityType : MPTKotlinEnum<MPTApiIdentityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTApiIdentityType *other __attribute__((swift_name("other")));
@property (class, readonly) MPTApiIdentityType *customerid __attribute__((swift_name("customerid")));
@property (class, readonly) MPTApiIdentityType *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) MPTApiIdentityType *twitter __attribute__((swift_name("twitter")));
@property (class, readonly) MPTApiIdentityType *google __attribute__((swift_name("google")));
@property (class, readonly) MPTApiIdentityType *microsoft __attribute__((swift_name("microsoft")));
@property (class, readonly) MPTApiIdentityType *yahoo __attribute__((swift_name("yahoo")));
@property (class, readonly) MPTApiIdentityType *email __attribute__((swift_name("email")));
@property (class, readonly) MPTApiIdentityType *alias __attribute__((swift_name("alias")));
@property (class, readonly) MPTApiIdentityType *facebookcustomaudienceid __attribute__((swift_name("facebookcustomaudienceid")));
@property (class, readonly) MPTApiIdentityType *other2 __attribute__((swift_name("other2")));
@property (class, readonly) MPTApiIdentityType *other3 __attribute__((swift_name("other3")));
@property (class, readonly) MPTApiIdentityType *other4 __attribute__((swift_name("other4")));
@property (class, readonly) MPTApiIdentityType *other5 __attribute__((swift_name("other5")));
@property (class, readonly) MPTApiIdentityType *other6 __attribute__((swift_name("other6")));
@property (class, readonly) MPTApiIdentityType *other7 __attribute__((swift_name("other7")));
@property (class, readonly) MPTApiIdentityType *other8 __attribute__((swift_name("other8")));
@property (class, readonly) MPTApiIdentityType *other9 __attribute__((swift_name("other9")));
@property (class, readonly) MPTApiIdentityType *other10 __attribute__((swift_name("other10")));
@property (class, readonly) MPTApiIdentityType *mobilenumber __attribute__((swift_name("mobilenumber")));
@property (class, readonly) MPTApiIdentityType *phonenumber2 __attribute__((swift_name("phonenumber2")));
@property (class, readonly) MPTApiIdentityType *phonenumber3 __attribute__((swift_name("phonenumber3")));
+ (MPTKotlinArray<MPTApiIdentityType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiEventType")))
@interface MPTApiEventType : MPTKotlinEnum<MPTApiEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTApiEventType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPTApiEventType *navigation __attribute__((swift_name("navigation")));
@property (class, readonly) MPTApiEventType *location __attribute__((swift_name("location")));
@property (class, readonly) MPTApiEventType *search __attribute__((swift_name("search")));
@property (class, readonly) MPTApiEventType *transaction __attribute__((swift_name("transaction")));
@property (class, readonly) MPTApiEventType *usercontent __attribute__((swift_name("usercontent")));
@property (class, readonly) MPTApiEventType *userpreference __attribute__((swift_name("userpreference")));
@property (class, readonly) MPTApiEventType *social __attribute__((swift_name("social")));
@property (class, readonly) MPTApiEventType *other __attribute__((swift_name("other")));
@property (class, readonly) MPTApiEventType *media __attribute__((swift_name("media")));
+ (MPTKotlinArray<MPTApiEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ApiBaseEvent")))
@interface MPTApiBaseEvent : MPTBase
- (instancetype)initWithType:(MPTApiMessageType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseEvent:(MPBaseEvent *)baseEvent __attribute__((swift_name("init(baseEvent:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPBaseEvent *baseEvent __attribute__((swift_name("baseEvent")));
@property NSDictionary<NSString *, id> *customAttributes __attribute__((swift_name("customAttributes")));
@property NSDictionary<NSString *, NSArray<NSString *> *> *customFlags __attribute__((swift_name("customFlags")));
@property (readonly) MPTApiMessageType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("ApiCustomEvent")))
@interface MPTApiCustomEvent : MPTApiBaseEvent
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPTApiEventType *)eventType type:(MPTApiMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(MPTApiMessageType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseEvent:(MPBaseEvent *)baseEvent __attribute__((swift_name("init(baseEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property NSString *eventName __attribute__((swift_name("eventName")));
@property MPTApiEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@property MPTDouble * _Nullable length __attribute__((swift_name("length")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMPEvent")))
@interface MPTApiMPEvent : MPTApiCustomEvent
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPTApiEventType *)eventType __attribute__((swift_name("init(eventName:eventType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPTApiEventType *)eventType type:(MPTApiMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiPlatform")))
@interface MPTApiPlatform : MPTKotlinEnum<MPTApiPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTApiPlatform *android __attribute__((swift_name("android")));
@property (class, readonly) MPTApiPlatform *ios __attribute__((swift_name("ios")));
+ (MPTKotlinArray<MPTApiPlatform *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MPTKotlinx_serialization_jsonJsonElement : MPTBase
@property (class, readonly, getter=companion) MPTKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsTriggerItemsMessage")))
@interface MPTModelsTriggerItemsMessage : MPTBase
- (instancetype)initWithTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("init(triggerMatches:triggerMessageHashes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsTriggerItemsMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPTModelsTriggerItemsMessage *)doCopyTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("doCopy(triggerMatches:triggerMessageHashes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable triggerMatches __attribute__((swift_name("triggerMatches")));
@property (readonly) NSArray<NSString *> * _Nullable triggerMessageHashes __attribute__((swift_name("triggerMessageHashes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsKitConfigMessage")))
@interface MPTModelsKitConfigMessage : MPTBase
- (instancetype)initWithId:(int32_t)id a:(MPTModelsAttributeValueFilter * _Nullable)a properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPTModelsFilterMessage * _Nullable)keyFilters bracketing:(MPTModelsBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPTModelsConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPTBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("init(id:a:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsKitConfigMessageCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (MPTModelsAttributeValueFilter * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPTModelsFilterMessage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MPTModelsBracketMessage * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPTModelsConsentForwardingRuleMessage * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPTBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MPTModelsKitConfigMessage *)doCopyId:(int32_t)id a:(MPTModelsAttributeValueFilter * _Nullable)a properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPTModelsFilterMessage * _Nullable)keyFilters bracketing:(MPTModelsBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPTModelsConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPTBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("doCopy(id:a:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPTModelsAttributeValueFilter * _Nullable a __attribute__((swift_name("a")));
@property (readonly) MPTModelsBracketMessage * _Nullable bracketing __attribute__((swift_name("bracketing")));
@property (readonly) MPTModelsConsentForwardingRuleMessage * _Nullable consentForwardingRules __attribute__((swift_name("consentForwardingRules")));
@property (readonly) MPTBoolean * _Nullable excludeAnnonymousUsers __attribute__((swift_name("excludeAnnonymousUsers")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) MPTModelsFilterMessage * _Nullable keyFilters __attribute__((swift_name("keyFilters")));
@property (readonly) NSArray<NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> *> * _Nullable projections __attribute__((swift_name("projections")));
@property (readonly) NSDictionary<id, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConfigResponseMessage.Companion")))
@interface MPTModelsConfigResponseMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsConfigResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiDataplanOptions")))
@interface MPTApiDataplanOptions : MPTBase
- (instancetype)initWithDataplanOptions:(MPDataPlanOptions *)dataplanOptions __attribute__((swift_name("init(dataplanOptions:)"))) __attribute__((objc_designated_initializer));
@property BOOL blockEventAttributes __attribute__((swift_name("blockEventAttributes")));
@property BOOL blockEvents __attribute__((swift_name("blockEvents")));
@property BOOL blockUserAttributes __attribute__((swift_name("blockUserAttributes")));
@property BOOL blockUserIdentities __attribute__((swift_name("blockUserIdentities")));
@property NSString * _Nullable dataplan __attribute__((swift_name("dataplan")));
@property (readonly) MPDataPlanOptions *dataplanOptions __attribute__((swift_name("dataplanOptions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiEnvironment")))
@interface MPTApiEnvironment : MPTKotlinEnum<MPTApiEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTApiEnvironment *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPTApiEnvironment *development __attribute__((swift_name("development")));
@property (class, readonly) MPTApiEnvironment *production __attribute__((swift_name("production")));
+ (MPTKotlinArray<MPTApiEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityApiRequest")))
@interface MPTApiIdentityApiRequest : MPTBase
- (instancetype)initWithUser:(MPTApiMParticleUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIdentityApiRequest:(MPIdentityApiRequest *)identityApiRequest __attribute__((swift_name("init(identityApiRequest:)"))) __attribute__((objc_designated_initializer));
- (void)addIdentityKey:(MPTApiIdentityType *)key value:(NSString * _Nullable)value __attribute__((swift_name("addIdentity(key:value:)")));
@property NSDictionary<MPTApiIdentityType *, id> *identities __attribute__((swift_name("identities")));
@property (readonly) MPIdentityApiRequest *identityApiRequest __attribute__((swift_name("identityApiRequest")));
@end;

__attribute__((swift_name("ApiIdentityResponse")))
@interface MPTApiIdentityResponse : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPTApiIdentityResponse *)addFailureListenerListener:(void (^)(MPTApiIdentityHttpResponse * _Nullable))listener __attribute__((swift_name("addFailureListener(listener:)")));
- (MPTApiIdentityResponse *)addSuccessListenerListener:(void (^)(MPTApiMParticleUser *, MPTApiMParticleUser * _Nullable))listener __attribute__((swift_name("addSuccessListener(listener:)")));
@property (readonly) NSMutableArray<MPTKotlinUnit *(^)(MPTApiIdentityHttpResponse * _Nullable)> *failureListeners __attribute__((swift_name("failureListeners")));
@property (readonly) NSMutableArray<MPTKotlinUnit *(^)(MPTApiMParticleUser *, MPTApiMParticleUser * _Nullable)> *successListeners __attribute__((swift_name("successListeners")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiInstallType")))
@interface MPTApiInstallType : MPTKotlinEnum<MPTApiInstallType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTApiInstallType *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPTApiInstallType *kowninstall __attribute__((swift_name("kowninstall")));
@property (class, readonly) MPTApiInstallType *knownupgrde __attribute__((swift_name("knownupgrde")));
+ (MPTKotlinArray<MPTApiInstallType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiLocationTracking")))
@interface MPTApiLocationTracking : MPTBase
- (instancetype)initWithProvider:(NSString *)provider minTime:(MPTLong * _Nullable)minTime minDistance:(MPTLong * _Nullable)minDistance __attribute__((swift_name("init(provider:minTime:minDistance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPTLong * _Nullable minDistance __attribute__((swift_name("minDistance")));
@property (readonly) MPTLong * _Nullable minTime __attribute__((swift_name("minTime")));
@property (readonly) NSString *provider __attribute__((swift_name("provider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiLogLevel")))
@interface MPTApiLogLevel : MPTKotlinEnum<MPTApiLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPTApiLogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) MPTApiLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MPTApiLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) MPTApiLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MPTApiLogLevel *verbose __attribute__((swift_name("verbose")));
+ (MPTKotlinArray<MPTApiLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiNetworkOptions")))
@interface MPTApiNetworkOptions : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithNetworkOptions:(MPNetworkOptions *)networkOptions __attribute__((swift_name("init(networkOptions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPNetworkOptions *networkOptions __attribute__((swift_name("networkOptions")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPTKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MPTKotlinByteIterator : MPTBase <MPTKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPTByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasDataMessage")))
@interface MPTModelsAliasDataMessage : MPTBase
- (instancetype)initWithSourceMpid:(MPTLong * _Nullable)sourceMpid destinationMpid:(MPTLong * _Nullable)destinationMpid deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp __attribute__((swift_name("init(sourceMpid:destinationMpid:deviceApplicationStamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsAliasDataMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTLong * _Nullable destinationMpid __attribute__((swift_name("destinationMpid")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPTLong * _Nullable sourceMpid __attribute__((swift_name("sourceMpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasRequestMessage.Companion")))
@interface MPTModelsAliasRequestMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsAliasRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (MPTModelsAliasRequestMessage *)fromStringMessage:(NSString *)message __attribute__((swift_name("fromString(message:)")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) MPTModelsAliasRequestMessage *(^parser)(NSString *) __attribute__((swift_name("parser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEmpty.Companion")))
@interface MPTModelsEmptyCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsEmptyCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateMessage")))
@interface MPTModelsConsentStateMessage : MPTBase
- (instancetype)initWithConsentStateGdpr:(NSDictionary<NSString *, MPTModelsConsentStateInstanceMessage *> * _Nullable)consentStateGdpr consentStateCcpa:(NSDictionary<NSString *, MPTModelsConsentStateInstanceMessage *> * _Nullable)consentStateCcpa __attribute__((swift_name("init(consentStateGdpr:consentStateCcpa:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsConsentStateMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, MPTModelsConsentStateInstanceMessage *> * _Nullable consentStateCcpa __attribute__((swift_name("consentStateCcpa")));
@property (readonly) NSDictionary<NSString *, MPTModelsConsentStateInstanceMessage *> * _Nullable consentStateGdpr __attribute__((swift_name("consentStateGdpr")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplanContextMessage")))
@interface MPTModelsDataplanContextMessage : MPTBase
- (instancetype)initWithDataplan:(MPTModelsDataplan *)dataplan __attribute__((swift_name("init(dataplan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsDataplanContextMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTModelsDataplan *dataplan __attribute__((swift_name("dataplan")));
@end;

__attribute__((swift_name("ModelsBaseEvent")))
@interface MPTModelsBaseEvent : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPTModelsBaseEventCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property NSString * _Nullable dataConnection __attribute__((swift_name("dataConnection")));
@property NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> * _Nullable eventFlags __attribute__((swift_name("eventFlags")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPTModelsLocationMessage * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property MPTLong * _Nullable sessionStartTimestamp __attribute__((swift_name("sessionStartTimestamp")));
@property MPTModelsStateInfoMessage * _Nullable stateInfo __attribute__((swift_name("stateInfo")));
@property MPTLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsReportingMessageMessage")))
@interface MPTModelsReportingMessageMessage : MPTBase
- (instancetype)initWithModuleId:(int32_t)moduleId messageType:(NSString * _Nullable)messageType timestamp:(int64_t)timestamp attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes eventOrScreenName:(NSString * _Nullable)eventOrScreenName eventType:(NSString * _Nullable)eventType projectionReports:(NSArray<MPTModelsProjectionReportMessage *> * _Nullable)projectionReports isPushRegistrationEvent:(MPTBoolean * _Nullable)isPushRegistrationEvent optout:(MPTBoolean * _Nullable)optout exceptionClassName:(NSString * _Nullable)exceptionClassName __attribute__((swift_name("init(moduleId:messageType:timestamp:attributes:eventOrScreenName:eventType:projectionReports:isPushRegistrationEvent:optout:exceptionClassName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsReportingMessageMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable eventOrScreenName __attribute__((swift_name("eventOrScreenName")));
@property (readonly) NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString * _Nullable exceptionClassName __attribute__((swift_name("exceptionClassName")));
@property (readonly) MPTBoolean * _Nullable isPushRegistrationEvent __attribute__((swift_name("isPushRegistrationEvent")));
@property (readonly) NSString * _Nullable messageType __attribute__((swift_name("messageType")));
@property (readonly) int32_t moduleId __attribute__((swift_name("moduleId")));
@property (readonly) MPTBoolean * _Nullable optout __attribute__((swift_name("optout")));
@property (readonly) NSArray<MPTModelsProjectionReportMessage *> * _Nullable projectionReports __attribute__((swift_name("projectionReports")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAppInfoMessage")))
@interface MPTModelsAppInfoMessage : MPTBase
- (instancetype)initWithPackageName:(NSString * _Nullable)packageName version:(NSString * _Nullable)version versionCode:(NSString * _Nullable)versionCode installerName:(NSString * _Nullable)installerName name:(NSString * _Nullable)name buildId:(NSString * _Nullable)buildId debugSigning:(MPTBoolean * _Nullable)debugSigning pirated:(MPTBoolean * _Nullable)pirated mparticleInstallTime:(MPTLong * _Nullable)mparticleInstallTime launchCount:(MPTInt * _Nullable)launchCount lastUseDate:(MPTLong * _Nullable)lastUseDate launchCountSinceUpgrade:(MPTInt * _Nullable)launchCountSinceUpgrade upgradeDate:(MPTLong * _Nullable)upgradeDate environment:(MPTInt * _Nullable)environment installReferrer:(NSString * _Nullable)installReferrer firstSeenInstall:(MPTBoolean * _Nullable)firstSeenInstall __attribute__((swift_name("init(packageName:version:versionCode:installerName:name:buildId:debugSigning:pirated:mparticleInstallTime:launchCount:lastUseDate:launchCountSinceUpgrade:upgradeDate:environment:installReferrer:firstSeenInstall:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsAppInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable buildId __attribute__((swift_name("buildId")));
@property (readonly) MPTBoolean * _Nullable debugSigning __attribute__((swift_name("debugSigning")));
@property (readonly) MPTInt * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) MPTBoolean * _Nullable firstSeenInstall __attribute__((swift_name("firstSeenInstall")));
@property (readonly) NSString * _Nullable installReferrer __attribute__((swift_name("installReferrer")));
@property (readonly) NSString * _Nullable installerName __attribute__((swift_name("installerName")));
@property (readonly) MPTLong * _Nullable lastUseDate __attribute__((swift_name("lastUseDate")));
@property (readonly) MPTInt * _Nullable launchCount __attribute__((swift_name("launchCount")));
@property (readonly) MPTInt * _Nullable launchCountSinceUpgrade __attribute__((swift_name("launchCountSinceUpgrade")));
@property (readonly) MPTLong * _Nullable mparticleInstallTime __attribute__((swift_name("mparticleInstallTime")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable packageName __attribute__((swift_name("packageName")));
@property (readonly) MPTBoolean * _Nullable pirated __attribute__((swift_name("pirated")));
@property (readonly) MPTLong * _Nullable upgradeDate __attribute__((swift_name("upgradeDate")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@property (readonly) NSString * _Nullable versionCode __attribute__((swift_name("versionCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceInfoMessage")))
@interface MPTModelsDeviceInfoMessage : MPTBase
- (instancetype)initWithBuildId:(NSString * _Nullable)buildId brand:(NSString * _Nullable)brand product:(NSString * _Nullable)product device:(NSString * _Nullable)device manufacturer:(NSString * _Nullable)manufacturer platform:(NSString * _Nullable)platform osVersion:(NSString * _Nullable)osVersion osVersionInt:(MPTInt * _Nullable)osVersionInt model:(NSString * _Nullable)model releaseVersion:(NSString * _Nullable)releaseVersion deviceId:(NSString * _Nullable)deviceId androidId:(NSString * _Nullable)androidId openUdid:(NSString * _Nullable)openUdid deviceBluetoothEnabled:(MPTBoolean * _Nullable)deviceBluetoothEnabled deviceBluetoothVersion:(NSString * _Nullable)deviceBluetoothVersion deviceSupportsNfc:(MPTBoolean * _Nullable)deviceSupportsNfc deviceSupportsTelephony:(MPTBoolean * _Nullable)deviceSupportsTelephony deviceRootedObject:(MPTModelsDeviceRootedObject * _Nullable)deviceRootedObject screenHeight:(MPTInt * _Nullable)screenHeight screenWidth:(MPTInt * _Nullable)screenWidth screenDpi:(MPTInt * _Nullable)screenDpi deviceCountry:(NSString * _Nullable)deviceCountry deviceLocaleCountry:(NSString * _Nullable)deviceLocaleCountry deviceLocaleLanguage:(NSString * _Nullable)deviceLocaleLanguage deviceTimezoneName:(NSString * _Nullable)deviceTimezoneName timezone:(MPTInt * _Nullable)timezone networkCarrier:(NSString * _Nullable)networkCarrier networkCountry:(NSString * _Nullable)networkCountry countryCode:(NSString * _Nullable)countryCode mobileNetworkCode:(NSString * _Nullable)mobileNetworkCode isTablet:(MPTBoolean * _Nullable)isTablet isInDst:(MPTBoolean * _Nullable)isInDst deviceImei:(NSString * _Nullable)deviceImei isPushSoundEnabled:(MPTBoolean * _Nullable)isPushSoundEnabled isPushVibrationEnabled:(MPTBoolean * _Nullable)isPushVibrationEnabled __attribute__((swift_name("init(buildId:brand:product:device:manufacturer:platform:osVersion:osVersionInt:model:releaseVersion:deviceId:androidId:openUdid:deviceBluetoothEnabled:deviceBluetoothVersion:deviceSupportsNfc:deviceSupportsTelephony:deviceRootedObject:screenHeight:screenWidth:screenDpi:deviceCountry:deviceLocaleCountry:deviceLocaleLanguage:deviceTimezoneName:timezone:networkCarrier:networkCountry:countryCode:mobileNetworkCode:isTablet:isInDst:deviceImei:isPushSoundEnabled:isPushVibrationEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsDeviceInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable androidId __attribute__((swift_name("androidId")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable buildId __attribute__((swift_name("buildId")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString * _Nullable device __attribute__((swift_name("device")));
@property (readonly) MPTBoolean * _Nullable deviceBluetoothEnabled __attribute__((swift_name("deviceBluetoothEnabled")));
@property (readonly) NSString * _Nullable deviceBluetoothVersion __attribute__((swift_name("deviceBluetoothVersion")));
@property (readonly) NSString * _Nullable deviceCountry __attribute__((swift_name("deviceCountry")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NSString * _Nullable deviceImei __attribute__((swift_name("deviceImei")));
@property (readonly) NSString * _Nullable deviceLocaleCountry __attribute__((swift_name("deviceLocaleCountry")));
@property (readonly) NSString * _Nullable deviceLocaleLanguage __attribute__((swift_name("deviceLocaleLanguage")));
@property (readonly) MPTModelsDeviceRootedObject * _Nullable deviceRootedObject __attribute__((swift_name("deviceRootedObject")));
@property (readonly) MPTBoolean * _Nullable deviceSupportsNfc __attribute__((swift_name("deviceSupportsNfc")));
@property (readonly) MPTBoolean * _Nullable deviceSupportsTelephony __attribute__((swift_name("deviceSupportsTelephony")));
@property (readonly) NSString * _Nullable deviceTimezoneName __attribute__((swift_name("deviceTimezoneName")));
@property (readonly) MPTBoolean * _Nullable isInDst __attribute__((swift_name("isInDst")));
@property (readonly) MPTBoolean * _Nullable isPushSoundEnabled __attribute__((swift_name("isPushSoundEnabled")));
@property (readonly) MPTBoolean * _Nullable isPushVibrationEnabled __attribute__((swift_name("isPushVibrationEnabled")));
@property (readonly) MPTBoolean * _Nullable isTablet __attribute__((swift_name("isTablet")));
@property (readonly) NSString * _Nullable manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString * _Nullable mobileNetworkCode __attribute__((swift_name("mobileNetworkCode")));
@property (readonly) NSString * _Nullable model __attribute__((swift_name("model")));
@property (readonly) NSString * _Nullable networkCarrier __attribute__((swift_name("networkCarrier")));
@property (readonly) NSString * _Nullable networkCountry __attribute__((swift_name("networkCountry")));
@property (readonly) NSString * _Nullable openUdid __attribute__((swift_name("openUdid")));
@property (readonly) NSString * _Nullable osVersion __attribute__((swift_name("osVersion")));
@property (readonly) MPTInt * _Nullable osVersionInt __attribute__((swift_name("osVersionInt")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable product __attribute__((swift_name("product")));
@property (readonly) NSString * _Nullable releaseVersion __attribute__((swift_name("releaseVersion")));
@property (readonly) MPTInt * _Nullable screenDpi __attribute__((swift_name("screenDpi")));
@property (readonly) MPTInt * _Nullable screenHeight __attribute__((swift_name("screenHeight")));
@property (readonly) MPTInt * _Nullable screenWidth __attribute__((swift_name("screenWidth")));
@property (readonly) MPTInt * _Nullable timezone __attribute__((swift_name("timezone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsUserIdentities")))
@interface MPTModelsUserIdentities : MPTBase
- (instancetype)initWithValue:(NSString * _Nullable)value identityType:(MPTInt * _Nullable)identityType __attribute__((swift_name("init(value:identityType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsUserIdentitiesCompanion *companion __attribute__((swift_name("companion")));
@property MPTInt * _Nullable identityType __attribute__((swift_name("identityType")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBatchMessage.Companion")))
@interface MPTModelsBatchMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsBatchMessageCompanion *shared __attribute__((swift_name("shared")));
- (MPTModelsBatchMessage *)fromStringBatch:(NSString *)batch __attribute__((swift_name("fromString(batch:)")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) MPTModelsBatchMessage *(^parser)(NSString *) __attribute__((swift_name("parser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsClientSdkMessage")))
@interface MPTModelsClientSdkMessage : MPTBase
- (instancetype)initWithPlatform:(NSString * _Nullable)platform sdkVendor:(NSString * _Nullable)sdkVendor sdkVersion:(NSString * _Nullable)sdkVersion __attribute__((swift_name("init(platform:sdkVendor:sdkVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsClientSdkMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable sdkVendor __attribute__((swift_name("sdkVendor")));
@property (readonly) NSString * _Nullable sdkVersion __attribute__((swift_name("sdkVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityChange")))
@interface MPTModelsIdentityChange : MPTBase
- (instancetype)initWithNewValue:(NSString * _Nullable)newValue oldValue:(NSString * _Nullable)oldValue identityType:(NSString * _Nullable)identityType __attribute__((swift_name("init(newValue:oldValue:identityType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsIdentityChangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable identityType __attribute__((swift_name("identityType")));
@property (readonly, getter=doNewValue) NSString * _Nullable newValue __attribute__((swift_name("newValue")));
@property (readonly) NSString * _Nullable oldValue __attribute__((swift_name("oldValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityRequestMessage.Companion")))
@interface MPTModelsIdentityRequestMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsIdentityRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (MPTModelsIdentityRequestMessage *)fromStringMessage:(NSString *)message __attribute__((swift_name("fromString(message:)")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) MPTModelsIdentityRequestMessage *(^parser)(NSString *) __attribute__((swift_name("parser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsError")))
@interface MPTModelsError : MPTBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPTModelsError *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityResponseMessage.Companion")))
@interface MPTModelsIdentityResponseMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsIdentityResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMessageType")))
@interface MPTApiMessageType : MPTKotlinEnum<MPTApiMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPTApiMessageTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPTApiMessageType *sessionstart __attribute__((swift_name("sessionstart")));
@property (class, readonly) MPTApiMessageType *sessionend __attribute__((swift_name("sessionend")));
@property (class, readonly) MPTApiMessageType *event __attribute__((swift_name("event")));
@property (class, readonly) MPTApiMessageType *screenview __attribute__((swift_name("screenview")));
@property (class, readonly) MPTApiMessageType *commerceevent __attribute__((swift_name("commerceevent")));
@property (class, readonly) MPTApiMessageType *optout __attribute__((swift_name("optout")));
@property (class, readonly) MPTApiMessageType *error __attribute__((swift_name("error")));
@property (class, readonly) MPTApiMessageType *pushregistration __attribute__((swift_name("pushregistration")));
@property (class, readonly) MPTApiMessageType *firstrun __attribute__((swift_name("firstrun")));
@property (class, readonly) MPTApiMessageType *appstatetransition __attribute__((swift_name("appstatetransition")));
@property (class, readonly) MPTApiMessageType *pushreceived __attribute__((swift_name("pushreceived")));
@property (class, readonly) MPTApiMessageType *breadcrumb __attribute__((swift_name("breadcrumb")));
@property (class, readonly) MPTApiMessageType *networkperformance __attribute__((swift_name("networkperformance")));
@property (class, readonly) MPTApiMessageType *profile __attribute__((swift_name("profile")));
@property (class, readonly) MPTApiMessageType *userattributechange __attribute__((swift_name("userattributechange")));
@property (class, readonly) MPTApiMessageType *useridentitychange __attribute__((swift_name("useridentitychange")));
@property (class, readonly) MPTApiMessageType *media __attribute__((swift_name("media")));
+ (MPTKotlinArray<MPTApiMessageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t iosMessageType __attribute__((swift_name("iosMessageType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MPTKotlinx_serialization_jsonJsonElementCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsTriggerItemsMessage.Companion")))
@interface MPTModelsTriggerItemsMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsTriggerItemsMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAttributeValueFilter")))
@interface MPTModelsAttributeValueFilter : MPTBase
- (instancetype)initWithShouldIncludeMatches:(MPTBoolean * _Nullable)shouldIncludeMatches attribute:(MPTInt * _Nullable)attribute value:(NSString * _Nullable)value __attribute__((swift_name("init(shouldIncludeMatches:attribute:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsAttributeValueFilterCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTInt * _Nullable attribute __attribute__((swift_name("attribute")));
@property (readonly) MPTBoolean * _Nullable shouldIncludeMatches __attribute__((swift_name("shouldIncludeMatches")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsFilterMessage")))
@interface MPTModelsFilterMessage : MPTBase
- (instancetype)initWithEventTypesFilter:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)eventTypesFilter eventNameFilters:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)eventNameFilters eventAttributeFilter:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)eventAttributeFilter screenNameFilters:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)screenNameFilters screenAttributeFilters:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)screenAttributeFilters userIdentityFilter:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)userIdentityFilter userAttributeFilter:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)userAttributeFilter commerceAttributeFilter:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)commerceAttributeFilter commerceEntityFilter:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)commerceEntityFilter commerceEntityAttributeFilters:(NSDictionary<MPTInt *, NSDictionary<MPTInt *, MPTBoolean *> *> * _Nullable)commerceEntityAttributeFilters eventAttributeAddUser:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)eventAttributeAddUser eventAttributeSingleItemUser:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)eventAttributeSingleItemUser eventAttributeRemoveUser:(NSDictionary<MPTInt *, MPTBoolean *> * _Nullable)eventAttributeRemoveUser __attribute__((swift_name("init(eventTypesFilter:eventNameFilters:eventAttributeFilter:screenNameFilters:screenAttributeFilters:userIdentityFilter:userAttributeFilter:commerceAttributeFilter:commerceEntityFilter:commerceEntityAttributeFilters:eventAttributeAddUser:eventAttributeSingleItemUser:eventAttributeRemoveUser:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsFilterMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable commerceAttributeFilter __attribute__((swift_name("commerceAttributeFilter")));
@property (readonly) NSDictionary<MPTInt *, NSDictionary<MPTInt *, MPTBoolean *> *> * _Nullable commerceEntityAttributeFilters __attribute__((swift_name("commerceEntityAttributeFilters")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable commerceEntityFilter __attribute__((swift_name("commerceEntityFilter")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable eventAttributeAddUser __attribute__((swift_name("eventAttributeAddUser")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable eventAttributeFilter __attribute__((swift_name("eventAttributeFilter")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable eventAttributeRemoveUser __attribute__((swift_name("eventAttributeRemoveUser")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable eventAttributeSingleItemUser __attribute__((swift_name("eventAttributeSingleItemUser")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable eventNameFilters __attribute__((swift_name("eventNameFilters")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable eventTypesFilter __attribute__((swift_name("eventTypesFilter")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable screenAttributeFilters __attribute__((swift_name("screenAttributeFilters")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable screenNameFilters __attribute__((swift_name("screenNameFilters")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable userAttributeFilter __attribute__((swift_name("userAttributeFilter")));
@property (readonly) NSDictionary<MPTInt *, MPTBoolean *> * _Nullable userIdentityFilter __attribute__((swift_name("userIdentityFilter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBracketMessage")))
@interface MPTModelsBracketMessage : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPTModelsBracketMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTInt * _Nullable highBracket __attribute__((swift_name("highBracket")));
@property (readonly) MPTInt * _Nullable lowBracket __attribute__((swift_name("lowBracket")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentForwardingRuleMessage")))
@interface MPTModelsConsentForwardingRuleMessage : MPTBase
- (instancetype)initWithShouldIncludeMatches:(MPTBoolean * _Nullable)shouldIncludeMatches rules:(NSArray<MPTModelsRules *> * _Nullable)rules __attribute__((swift_name("init(shouldIncludeMatches:rules:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsConsentForwardingRuleMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<MPTModelsRules *> * _Nullable rules __attribute__((swift_name("rules")));
@property (readonly) MPTBoolean * _Nullable shouldIncludeMatches __attribute__((swift_name("shouldIncludeMatches")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsKitConfigMessage.Companion")))
@interface MPTModelsKitConfigMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsKitConfigMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MPTKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MPTKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MPTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MPTKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MPTKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MPTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MPTKotlinx_serialization_coreKSerializer <MPTKotlinx_serialization_coreSerializationStrategy, MPTKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMParticleUser")))
@interface MPTApiMParticleUser : MPTBase
- (instancetype)initWithUser:(MParticleUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (MPTApiConsentState *)getConsentState __attribute__((swift_name("getConsentState()")));
- (int64_t)getFirstSeenTime __attribute__((swift_name("getFirstSeenTime()")));
- (int64_t)getLastSeenTime __attribute__((swift_name("getLastSeenTime()")));
- (NSDictionary<NSString *, id> *)getUserAttributes __attribute__((swift_name("getUserAttributes()")));
- (NSDictionary<NSString *, id> * _Nullable)getUserAttributesListener:(id<MPTApiUserAttributeListener> _Nullable)listener __attribute__((swift_name("getUserAttributes(listener:)")));
- (NSDictionary<MPTApiIdentityType *, NSString *> *)getUserIdentities __attribute__((swift_name("getUserIdentities()")));
- (BOOL)incrementUserAttributeKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("incrementUserAttribute(key:value:)")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (BOOL)removeUserAttributeKey:(NSString *)key __attribute__((swift_name("removeUserAttribute(key:)")));
- (void)setConsentStateState:(MPTApiConsentState * _Nullable)state __attribute__((swift_name("setConsentState(state:)")));
- (BOOL)setUserAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttribute(key:value:)")));
- (BOOL)setUserAttributeListKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttributeList(key:value:)")));
- (BOOL)setUserAttributesUserAttributes:(NSDictionary<NSString *, id> *)userAttributes __attribute__((swift_name("setUserAttributes(userAttributes:)")));
- (BOOL)setUserTagTag:(NSString *)tag __attribute__((swift_name("setUserTag(tag:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@property (readonly) MParticleUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityHttpResponse")))
@interface MPTApiIdentityHttpResponse : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable context __attribute__((swift_name("context")));
@property NSArray<MPTApiError *> *errors __attribute__((swift_name("errors")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MPTKotlinUnit : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasDataMessage.Companion")))
@interface MPTModelsAliasDataMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsAliasDataMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateInstanceMessage")))
@interface MPTModelsConsentStateInstanceMessage : MPTBase
- (instancetype)initWithConsented:(BOOL)consented document:(NSString * _Nullable)document timestamp:(int64_t)timestamp location:(NSString * _Nullable)location hardwareId:(NSString * _Nullable)hardwareId __attribute__((swift_name("init(consented:document:timestamp:location:hardwareId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsConsentStateInstanceMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL consented __attribute__((swift_name("consented")));
@property (readonly) NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateMessage.Companion")))
@interface MPTModelsConsentStateMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsConsentStateMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplan")))
@interface MPTModelsDataplan : MPTBase
- (instancetype)initWithDataplanId:(NSString *)dataplanId dataplanVersion:(MPTInt * _Nullable)dataplanVersion __attribute__((swift_name("init(dataplanId:dataplanVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsDataplanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *dataplanId __attribute__((swift_name("dataplanId")));
@property (readonly) MPTInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplanContextMessage.Companion")))
@interface MPTModelsDataplanContextMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsDataplanContextMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBaseEvent.Companion")))
@interface MPTModelsBaseEventCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsBaseEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MPTKotlinArray<id<MPTKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsLocationMessage")))
@interface MPTModelsLocationMessage : MPTBase
- (instancetype)initWithLatitude:(MPTDouble * _Nullable)latitude longitude:(MPTDouble * _Nullable)longitude accuracy:(MPTFloat * _Nullable)accuracy __attribute__((swift_name("init(latitude:longitude:accuracy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsLocationMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTFloat * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) MPTDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) MPTDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsStateInfoMessage")))
@interface MPTModelsStateInfoMessage : MPTBase
- (instancetype)initWithAvailableDisk:(MPTLong * _Nullable)availableDisk externalDisk:(MPTLong * _Nullable)externalDisk appMemoryUsage:(MPTLong * _Nullable)appMemoryUsage freeMemory:(MPTLong * _Nullable)freeMemory maxMemory:(MPTLong * _Nullable)maxMemory avaialableMemery:(MPTLong * _Nullable)avaialableMemery totalMemory:(MPTLong * _Nullable)totalMemory batteryLevel:(MPTDouble * _Nullable)batteryLevel timeSinceStart:(MPTLong * _Nullable)timeSinceStart hasGps:(MPTBoolean * _Nullable)hasGps activeNetworkName:(NSString * _Nullable)activeNetworkName orientation:(MPTInt * _Nullable)orientation barOrientation:(MPTInt * _Nullable)barOrientation isMemoryLow:(MPTBoolean * _Nullable)isMemoryLow systemMemoryThreshold:(MPTLong * _Nullable)systemMemoryThreshold networkType:(NSString * _Nullable)networkType __attribute__((swift_name("init(availableDisk:externalDisk:appMemoryUsage:freeMemory:maxMemory:avaialableMemery:totalMemory:batteryLevel:timeSinceStart:hasGps:activeNetworkName:orientation:barOrientation:isMemoryLow:systemMemoryThreshold:networkType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsStateInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable activeNetworkName __attribute__((swift_name("activeNetworkName")));
@property MPTLong * _Nullable appMemoryUsage __attribute__((swift_name("appMemoryUsage")));
@property MPTLong * _Nullable avaialableMemery __attribute__((swift_name("avaialableMemery")));
@property MPTLong * _Nullable availableDisk __attribute__((swift_name("availableDisk")));
@property MPTInt * _Nullable barOrientation __attribute__((swift_name("barOrientation")));
@property MPTDouble * _Nullable batteryLevel __attribute__((swift_name("batteryLevel")));
@property MPTLong * _Nullable externalDisk __attribute__((swift_name("externalDisk")));
@property MPTLong * _Nullable freeMemory __attribute__((swift_name("freeMemory")));
@property MPTBoolean * _Nullable hasGps __attribute__((swift_name("hasGps")));
@property MPTBoolean * _Nullable isMemoryLow __attribute__((swift_name("isMemoryLow")));
@property MPTLong * _Nullable maxMemory __attribute__((swift_name("maxMemory")));
@property NSString * _Nullable networkType __attribute__((swift_name("networkType")));
@property MPTInt * _Nullable orientation __attribute__((swift_name("orientation")));
@property MPTLong * _Nullable systemMemoryThreshold __attribute__((swift_name("systemMemoryThreshold")));
@property MPTLong * _Nullable timeSinceStart __attribute__((swift_name("timeSinceStart")));
@property MPTLong * _Nullable totalMemory __attribute__((swift_name("totalMemory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProjectionReportMessage")))
@interface MPTModelsProjectionReportMessage : MPTBase
- (instancetype)initWithProjectionId:(NSString *)projectionId messageType:(NSString *)messageType name:(NSString *)name eventType:(MPTModelsEventType *)eventType __attribute__((swift_name("init(projectionId:messageType:name:eventType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsProjectionReportMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTModelsEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *projectionId __attribute__((swift_name("projectionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsReportingMessageMessage.Companion")))
@interface MPTModelsReportingMessageMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsReportingMessageMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAppInfoMessage.Companion")))
@interface MPTModelsAppInfoMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsAppInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceRootedObject")))
@interface MPTModelsDeviceRootedObject : MPTBase
- (instancetype)initWithDeviceRootedCYDIA:(MPTBoolean * _Nullable)deviceRootedCYDIA __attribute__((swift_name("init(deviceRootedCYDIA:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsDeviceRootedObjectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPTBoolean * _Nullable deviceRootedCYDIA __attribute__((swift_name("deviceRootedCYDIA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceInfoMessage.Companion")))
@interface MPTModelsDeviceInfoMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsDeviceInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsUserIdentities.Companion")))
@interface MPTModelsUserIdentitiesCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsUserIdentitiesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsClientSdkMessage.Companion")))
@interface MPTModelsClientSdkMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsClientSdkMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityChange.Companion")))
@interface MPTModelsIdentityChangeCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsIdentityChangeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsError.Companion")))
@interface MPTModelsErrorCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMessageType.Companion")))
@interface MPTApiMessageTypeCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTApiMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (MPTApiMessageType *)forMessageTypeMessageType:(uint64_t)messageType __attribute__((swift_name("forMessageType(messageType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAttributeValueFilter.Companion")))
@interface MPTModelsAttributeValueFilterCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsAttributeValueFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsFilterMessage.Companion")))
@interface MPTModelsFilterMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsFilterMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBracketMessage.Companion")))
@interface MPTModelsBracketMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsBracketMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsRules")))
@interface MPTModelsRules : MPTBase
- (instancetype)initWithValueHash:(int32_t)valueHash consented:(BOOL)consented __attribute__((swift_name("init(valueHash:consented:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPTModelsRulesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL consented __attribute__((swift_name("consented")));
@property (readonly) int32_t valueHash __attribute__((swift_name("valueHash")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentForwardingRuleMessage.Companion")))
@interface MPTModelsConsentForwardingRuleMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsConsentForwardingRuleMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MPTKotlinx_serialization_coreEncoder
@required
- (id<MPTKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MPTKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MPTKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MPTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MPTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MPTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MPTKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MPTKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MPTKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MPTKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MPTKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MPTKotlinx_serialization_coreDecoder
@required
- (id<MPTKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MPTKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MPTKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MPTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MPTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MPTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConsentState")))
@interface MPTApiConsentState : MPTBase
- (instancetype)initWithConsentState:(MPConsentState *)consentState __attribute__((swift_name("init(consentState:)"))) __attribute__((objc_designated_initializer));
- (MPCCPAConsent *)toCCPAConsent:(MPTApiConsent *)receiver __attribute__((swift_name("toCCPAConsent(_:)")));
- (MPGDPRConsent *)toGDPRConsent:(MPTApiConsent *)receiver __attribute__((swift_name("toGDPRConsent(_:)")));
@property MPTApiConsent * _Nullable ccpaConsent __attribute__((swift_name("ccpaConsent")));
@property (readonly) MPConsentState *consentState __attribute__((swift_name("consentState")));
@property MPTMutableDictionary<NSString *, MPTApiConsent *> * _Nullable gdprConsentState __attribute__((swift_name("gdprConsentState")));
@end;

__attribute__((swift_name("ApiUserAttributeListener")))
@protocol MPTApiUserAttributeListener
@required
- (void)onUserAttributesReceivedUserAttributes:(NSDictionary<NSString *, id> * _Nullable)userAttributes userAttributeLists:(NSDictionary<NSString *, NSArray<id> *> * _Nullable)userAttributeLists mpid:(MPTLong * _Nullable)mpid __attribute__((swift_name("onUserAttributesReceived(userAttributes:userAttributeLists:mpid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError")))
@interface MPTApiError : MPTBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateInstanceMessage.Companion")))
@interface MPTModelsConsentStateInstanceMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsConsentStateInstanceMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplan.Companion")))
@interface MPTModelsDataplanCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsDataplanCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsLocationMessage.Companion")))
@interface MPTModelsLocationMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsLocationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsStateInfoMessage.Companion")))
@interface MPTModelsStateInfoMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsStateInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEventType")))
@interface MPTModelsEventType : MPTKotlinEnum<MPTModelsEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPTModelsEventTypeCompanion *companion __attribute__((swift_name("companion")));
+ (MPTKotlinArray<MPTModelsEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProjectionReportMessage.Companion")))
@interface MPTModelsProjectionReportMessageCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsProjectionReportMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceRootedObject.Companion")))
@interface MPTModelsDeviceRootedObjectCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsDeviceRootedObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsRules.Companion")))
@interface MPTModelsRulesCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsRulesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MPTKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MPTKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MPTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MPTKotlinx_serialization_coreSerializersModule : MPTBase
- (void)dumpToCollector:(id<MPTKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MPTKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MPTKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MPTKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MPTKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPTKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MPTKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPTKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MPTKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MPTKotlinx_serialization_coreSerialKind : MPTBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MPTKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MPTKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MPTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MPTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPTKotlinNothing : MPTBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConsent")))
@interface MPTApiConsent : MPTBase
- (instancetype)initWithGdprConsentInstance:(MPGDPRConsent * _Nullable)gdprConsentInstance ccpaConsentInstance:(MPCCPAConsent * _Nullable)ccpaConsentInstance __attribute__((swift_name("init(gdprConsentInstance:ccpaConsentInstance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPCCPAConsent * _Nullable ccpaConsentInstance __attribute__((swift_name("ccpaConsentInstance")));
@property NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) MPGDPRConsent * _Nullable gdprConsentInstance __attribute__((swift_name("gdprConsentInstance")));
@property NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property BOOL isConsented __attribute__((swift_name("isConsented")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property MPTLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEventType.Companion")))
@interface MPTModelsEventTypeCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTModelsEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPTKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPTKotlinKClass>)kClass provider:(id<MPTKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPTKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPTKotlinKClass>)kClass serializer:(id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPTKotlinKClass>)baseClass actualClass:(id<MPTKotlinKClass>)actualClass actualSerializer:(id<MPTKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPTKotlinKClass>)baseClass defaultSerializerProvider:(id<MPTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MPTKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MPTKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MPTKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MPTKotlinKClass <MPTKotlinKDeclarationContainer, MPTKotlinKAnnotatedElement, MPTKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
