#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPMModelsConfigResponseMessage, MPMApiMParticleOptions, MPMApiClientPlatform, MPMPlatforms, MPMTestingPlatforms, MPMBaseTest, MPMKotlinByteArray, NSData, MPMResponse<ResponseType>, MPMMockServer, MPMEndpointType<T, R>, MPMEndpoint<RequestType, ResponseType>, MPMRequest<T>, MPMReceivedRequests<T, R>, MPMEndpointTypeCompanion, MPMModelsAliasRequestMessage, MPMModelsEmpty, MPMModelsBatchMessage, MPMModelsIdentityRequestMessage, MPMModelsIdentityResponseMessage, MPMMockServerCompanion, MPMKotlinThrowable, MPMServer, MPMServerServerEndpoint<RequestType, ResponseType>, MPMServerServerEndpointNegation<RequestType, RequestType_, ResponseType>, MPMThreadingUtil, MPMSuccessResponse<R>, MPMModelsDTOCompanion, MPMModelsDTO, MPMKotlinx_serialization_jsonJsonElement, MPMModelsTriggerItemsMessage, MPMModelsKitConfigMessage, MPMModelsConfigResponseMessageCompanion, MPMApiDataplanOptions, MPMApiEnvironment, MPMApiIdentityApiRequest, MPMApiIdentityResponse, MPMApiInstallType, MPMApiLocationTracking, MPMApiLogLevel, MPMApiNetworkOptions, MParticleOptions, MPMKotlinByteIterator, MPMModelsAliasDataMessage, MPMModelsAliasRequestMessageCompanion, MPMModelsEmptyCompanion, MPMModelsConsentStateMessage, MPMModelsDataplanContextMessage, MPMModelsBaseEvent, MPMModelsReportingMessageMessage, MPMModelsAppInfoMessage, MPMModelsDeviceInfoMessage, MPMModelsUserIdentities, MPMModelsBatchMessageCompanion, MPMModelsClientSdkMessage, MPMModelsIdentityChange, MPMModelsIdentityRequestMessageCompanion, MPMModelsError, MPMModelsIdentityResponseMessageCompanion, MPMKotlinArray<T>, MPMKotlinx_serialization_jsonJson, MPMKotlinx_serialization_jsonJsonElementCompanion, MPMModelsTriggerItemsMessageCompanion, MPMModelsFilterMessage, MPMModelsBracketMessage, MPMModelsConsentForwardingRuleMessage, MPMModelsKitConfigMessageCompanion, MPDataPlanOptions, MPMKotlinEnumCompanion, MPMKotlinEnum<E>, MPMApiMParticleUser, MPIdentityApiRequest, MPMApiIdentityType, MPMApiIdentityHttpResponse, MPMKotlinUnit, MPNetworkOptions, MPMModelsAliasDataMessageCompanion, MPMModelsConsentStateInstanceMessage, MPMModelsConsentStateMessageCompanion, MPMModelsDataplan, MPMModelsDataplanContextMessageCompanion, MPMModelsStateInfoMessage, MPMModelsLocationMessage, MPMModelsBaseEventCompanion, MPMModelsProjectionReportMessage, MPMModelsReportingMessageMessageCompanion, MPMModelsAppInfoMessageCompanion, MPMModelsDeviceRootedObject, MPMModelsDeviceInfoMessageCompanion, MPMModelsUserIdentitiesCompanion, MPMModelsClientSdkMessageCompanion, MPMModelsIdentityChangeCompanion, MPMModelsErrorCompanion, MPMKotlinx_serialization_coreSerializersModule, MPMKotlinx_serialization_jsonJsonDefault, MPMKotlinx_serialization_jsonJsonConfiguration, MPMModelsFilterMessageCompanion, MPMModelsBracketMessageCompanion, MPMModelsRules, MPMModelsConsentForwardingRuleMessageCompanion, MParticleUser, MPMApiConsentState, NSNumber, MPMApiError, MPMModelsConsentStateInstanceMessageCompanion, MPMModelsDataplanCompanion, MPMModelsStateInfoMessageCompanion, MPMModelsLocationMessageCompanion, MPMModelsEventType, MPMModelsProjectionReportMessageCompanion, MPMModelsDeviceRootedObjectCompanion, MPMModelsRulesCompanion, MPMKotlinx_serialization_coreSerialKind, MPMKotlinNothing, MPConsentState, MPCCPAConsent, MPMApiConsent, MPGDPRConsent, MPMModelsEventTypeCompanion;

@protocol MPMTestingAwaiter, MPMRawConnection, MPMIRequestFilter, MPMIResponseLogic, MPMKotlinx_serialization_coreKSerializer, MPMKotlinComparable, MPMKotlinIterator, MPMKotlinx_serialization_coreDeserializationStrategy, MPMKotlinx_serialization_coreSerializationStrategy, MPMKotlinx_serialization_coreSerialFormat, MPMKotlinx_serialization_coreStringFormat, MPMKotlinx_serialization_coreEncoder, MPMKotlinx_serialization_coreSerialDescriptor, MPMKotlinx_serialization_coreDecoder, MPMApiUserAttributeListener, MPMKotlinx_serialization_coreSerializersModuleCollector, MPMKotlinKClass, MPMKotlinx_serialization_coreCompositeEncoder, MPMKotlinAnnotation, MPMKotlinx_serialization_coreCompositeDecoder, MPMKotlinKDeclarationContainer, MPMKotlinKAnnotatedElement, MPMKotlinKClassifier;

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
@interface MPMBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MPMBase (MPMBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MPMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMPMKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MPMNumber : NSNumber
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
@interface MPMByte : MPMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MPMUByte : MPMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MPMShort : MPMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MPMUShort : MPMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MPMInt : MPMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MPMUInt : MPMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MPMLong : MPMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MPMULong : MPMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MPMFloat : MPMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MPMDouble : MPMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MPMBoolean : MPMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("BaseTest")))
@interface MPMBaseTest : MPMBase
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer));
- (void)afterBeforeAll __attribute__((swift_name("afterBeforeAll()")));
- (void)beforeAll __attribute__((swift_name("beforeAll()")));
- (void)beforeAllAwaiter:(id<MPMTestingAwaiter>)awaiter __attribute__((swift_name("beforeAll(awaiter:)")));
- (void)initialConfigResponseConfigResponse:(MPMModelsConfigResponseMessage *)configResponse __attribute__((swift_name("initialConfigResponse(configResponse:)")));
- (void)initializeTestServer __attribute__((swift_name("initializeTestServer()")));
- (void)startMParticleOptions:(MPMApiMParticleOptions *)options defaultConfigResponse:(MPMModelsConfigResponseMessage * _Nullable)defaultConfigResponse __attribute__((swift_name("startMParticle(options:defaultConfigResponse:)")));
@property (readonly) MPMApiClientPlatform *clientPlatform __attribute__((swift_name("clientPlatform")));
@property (readonly) BOOL keepSdkInstance __attribute__((swift_name("keepSdkInstance")));
@property int64_t mStartingMpid __attribute__((swift_name("mStartingMpid")));
@property (readonly) MPMPlatforms *mockingPlatforms __attribute__((swift_name("mockingPlatforms")));
@property (readonly) MPMTestingPlatforms *testingPlatform __attribute__((swift_name("testingPlatform")));
@end;

__attribute__((swift_name("BaseStartedTest")))
@interface MPMBaseStartedTest : MPMBaseTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)afterBeforeAll __attribute__((swift_name("afterBeforeAll()")));
- (MPMApiMParticleOptions *)transformMParticleOptionsOptions:(MPMApiMParticleOptions *)options __attribute__((swift_name("transformMParticleOptions(options:)")));
@end;

__attribute__((swift_name("RawConnection")))
@protocol MPMRawConnection
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
@interface MPMAsyncRawConnectionImpl : MPMBase <MPMRawConnection>
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
- (MPMKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@property NSString * _Nullable responseBody __attribute__((swift_name("responseBody")));
@property MPMInt * _Nullable responseCode __attribute__((swift_name("responseCode")));
@property NSString * _Nullable responseError __attribute__((swift_name("responseError")));
@property NSDictionary<id, id> *responseHeaders __attribute__((swift_name("responseHeaders")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Response")))
@interface MPMResponse<ResponseType> : MPMBase
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
@interface MPMDefaultResponse<ResponseType> : MPMResponse<ResponseType>
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
@interface MPMEndpoint<RequestType, ResponseType> : MPMBase
- (instancetype)initWithMockServer:(MPMMockServer *)mockServer endpointType:(MPMEndpointType<RequestType, ResponseType> *)endpointType __attribute__((swift_name("init(mockServer:endpointType:)"))) __attribute__((objc_designated_initializer));
- (MPMEndpoint<RequestType, ResponseType> *)addRequestResponseLogicFilter:(id<MPMIRequestFilter> _Nullable)filter logic:(id<MPMIResponseLogic>)logic __attribute__((swift_name("addRequestResponseLogic(filter:logic:)")));
- (MPMEndpoint<RequestType, ResponseType> *)addRequestResponseLogicFilter:(MPMBoolean *(^ _Nullable)(MPMRequest<RequestType> *))filter logic_:(MPMResponse<ResponseType> *(^)(MPMRequest<RequestType> *))logic __attribute__((swift_name("addRequestResponseLogic(filter:logic_:)")));
- (void)clearRequestFilter __attribute__((swift_name("clearRequestFilter()")));
- (void)clearRequestResponseLogic __attribute__((swift_name("clearRequestResponseLogic()")));
- (void)nextResponseResponse:(MPMResponse<ResponseType> *(^)(MPMRequest<RequestType> *))response __attribute__((swift_name("nextResponse(response:)")));
- (MPMEndpoint<RequestType, ResponseType> *)onRequestFinishedRequestFilter:(MPMBoolean *(^ _Nullable)(MPMRequest<RequestType> *))requestFilter onRequestCallback:(MPMBoolean *(^ _Nullable)(MPMRequest<RequestType> *, MPMResponse<ResponseType> *))onRequestCallback __attribute__((swift_name("onRequestFinished(requestFilter:onRequestCallback:)")));
@property (readonly) NSArray<MPMReceivedRequests<RequestType, ResponseType> *> *receivedRequests __attribute__((swift_name("receivedRequests")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndpointType")))
@interface MPMEndpointType<T, R> : MPMBase
@property (class, readonly, getter=companion) MPMEndpointTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndpointTypeCompanion")))
@interface MPMEndpointTypeCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMEndpointTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MPMEndpointType<MPMModelsAliasRequestMessage *, MPMModelsEmpty *> *Alias __attribute__((swift_name("Alias")));
@property (readonly) MPMEndpointType<MPMModelsEmpty *, MPMModelsConfigResponseMessage *> *Config __attribute__((swift_name("Config")));
@property (readonly) MPMEndpointType<MPMModelsBatchMessage *, MPMModelsEmpty *> *Events __attribute__((swift_name("Events")));
@property (readonly) MPMEndpointType<MPMModelsIdentityRequestMessage *, MPMModelsIdentityResponseMessage *> *Identity_Identify __attribute__((swift_name("Identity_Identify")));
@property (readonly) MPMEndpointType<MPMModelsIdentityRequestMessage *, MPMModelsIdentityResponseMessage *> *Identity_Login __attribute__((swift_name("Identity_Login")));
@property (readonly) MPMEndpointType<MPMModelsIdentityRequestMessage *, MPMModelsIdentityResponseMessage *> *Identity_Logout __attribute__((swift_name("Identity_Logout")));
@property (readonly) MPMEndpointType<MPMModelsIdentityRequestMessage *, MPMModelsIdentityResponseMessage *> *Identity_Modify __attribute__((swift_name("Identity_Modify")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface MPMErrorResponse<R> : MPMResponse<R>
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
@protocol MPMIOnRequestCallback
@required
- (BOOL)onRequestRequest:(MPMRequest<id> *)request response:(MPMResponse<id> *)response __attribute__((swift_name("onRequest(request:response:)")));
@end;

__attribute__((swift_name("IRequestFilter")))
@protocol MPMIRequestFilter
@required
- (BOOL)isMatchRequest:(MPMRequest<id> *)request __attribute__((swift_name("isMatch(request:)")));
@end;

__attribute__((swift_name("IResponseLogic")))
@protocol MPMIResponseLogic
@required
- (MPMResponse<id> *)generateResponseRequest:(MPMRequest<id> *)request __attribute__((swift_name("generateResponse(request:)")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MockConnector")))
@interface MPMMockConnector : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MockConnectorFactory")))
@interface MPMMockConnectorFactory : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MockConnectorResponse")))
@interface MPMMockConnectorResponse : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockServer")))
@interface MPMMockServer : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMMockServerCompanion *companion __attribute__((swift_name("companion")));
- (void)failHardMessage:(NSString *)message __attribute__((swift_name("failHard(message:)")));
- (void)failHardException:(MPMKotlinThrowable *)exception __attribute__((swift_name("failHard(exception:)")));
- (MPMEndpoint<id, id> *)getEndpointEndpointType:(MPMEndpointType<id, id> *)endpointType __attribute__((swift_name("getEndpoint(endpointType:)")));
- (id<MPMRawConnection>)onRequestMadeConnection:(id<MPMRawConnection>)connection __attribute__((swift_name("onRequestMade(connection:)")));
@property NSArray<MPMReceivedRequests<id, id> *> *receivedRequests __attribute__((swift_name("receivedRequests")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockServer.Companion")))
@interface MPMMockServerCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMMockServerCompanion *shared __attribute__((swift_name("shared")));
- (void)startPlatforms:(MPMPlatforms *)platforms __attribute__((swift_name("start(platforms:)")));
@end;

__attribute__((swift_name("Platforms")))
@interface MPMPlatforms : MPMBase
- (instancetype)initWithClientPlatform:(MPMApiClientPlatform *)clientPlatform __attribute__((swift_name("init(clientPlatform:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, NSArray<NSDictionary<NSString *, id> *> *> *)getDatabaseContents __attribute__((swift_name("getDatabaseContents()")));
- (NSDictionary<NSString *, NSArray<NSDictionary<NSString *, id> *> *> *)getDatabaseContentsTables:(NSArray<NSString *> * _Nullable)tables __attribute__((swift_name("getDatabaseContents(tables:)")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)getDatabaseSchema __attribute__((swift_name("getDatabaseSchema()")));
- (void)injectMockServer __attribute__((swift_name("injectMockServer()")));
- (void)prepareThread __attribute__((swift_name("prepareThread()")));
- (void)sendBackground __attribute__((swift_name("sendBackground()")));
- (void)sendForeground __attribute__((swift_name("sendForeground()")));
- (void)setCachedConfigConfigMessage:(MPMModelsConfigResponseMessage * _Nullable)configMessage __attribute__((swift_name("setCachedConfig(configMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceivedRequests")))
@interface MPMReceivedRequests<T, R> : MPMBase
- (instancetype)initWithEndpointType:(MPMEndpointType<id, id> *)endpointType request:(MPMRequest<T> *)request response:(MPMResponse<R> *)response __attribute__((swift_name("init(endpointType:request:response:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPMEndpointType<id, id> *endpointType __attribute__((swift_name("endpointType")));
@property (readonly) MPMRequest<T> *request __attribute__((swift_name("request")));
@property MPMResponse<R> *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request")))
@interface MPMRequest<T> : MPMBase
- (instancetype)initWithBody:(T _Nullable)body connection:(id<MPMRawConnection>)connection __attribute__((swift_name("init(body:connection:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrl:(NSString *)url headers:(NSDictionary<NSString *, id> * _Nullable)headers body:(T _Nullable)body __attribute__((swift_name("init(url:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server")))
@interface MPMServer : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)server __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMServer *shared __attribute__((swift_name("shared")));
- (MPMServerServerEndpoint<id, id> *)endpointEndpointType:(MPMEndpointType<id, id> *)endpointType __attribute__((swift_name("endpoint(endpointType:)")));
- (id<MPMRawConnection>)onRequestMadeConnection:(id<MPMRawConnection>)connection __attribute__((swift_name("onRequestMade(connection:)")));
- (void)startPlatforms:(MPMPlatforms *)platforms __attribute__((swift_name("start(platforms:)")));
@property int64_t defaultTimeout __attribute__((swift_name("defaultTimeout")));
@property (readonly) NSArray<MPMReceivedRequests<id, id> *> *requests __attribute__((swift_name("requests")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerServerEndpoint")))
@interface MPMServerServerEndpoint<RequestType, ResponseType> : MPMBase
- (instancetype)initWithEndpointType:(MPMEndpointType<RequestType, ResponseType> *)endpointType childAssertion:(MPMBoolean *(^ _Nullable)(MPMRequest<RequestType> *))childAssertion __attribute__((swift_name("init(endpointType:childAssertion:)"))) __attribute__((objc_designated_initializer));
- (MPMServerServerEndpoint<RequestType, ResponseType> *)addResponseLogicRequestFilter:(MPMBoolean *(^ _Nullable)(MPMRequest<RequestType> *))requestFilter responseLogic:(MPMResponse<ResponseType> *(^)(MPMRequest<RequestType> *))responseLogic __attribute__((swift_name("addResponseLogic(requestFilter:responseLogic:)")));
- (MPMServerServerEndpointNegation<RequestType, RequestType, ResponseType> *)assertHasNotReceivedAssertion:(MPMBoolean *(^)(MPMRequest<RequestType> *))assertion __attribute__((swift_name("assertHasNotReceived(assertion:)")));
- (void)assertHasReceivedAssertion:(MPMBoolean *(^)(MPMRequest<RequestType> *))assertion __attribute__((swift_name("assertHasReceived(assertion:)")));
- (MPMBoolean *(^)(MPMRequest<RequestType> *))assertNextRequestFilter:(MPMBoolean *(^)(MPMRequest<RequestType> *))filter __attribute__((swift_name("assertNextRequest(filter:)")));
- (MPMBoolean *(^)(MPMRequest<RequestType> *))assertWillNotReceiveFilter:(MPMBoolean *(^)(MPMRequest<RequestType> *))filter __attribute__((swift_name("assertWillNotReceive(filter:)")));
- (MPMBoolean *(^)(MPMRequest<RequestType> *))assertWillReceiveFilter:(MPMBoolean *(^)(MPMRequest<RequestType> *))filter __attribute__((swift_name("assertWillReceive(filter:)")));
- (MPMServerServerEndpoint<RequestType, ResponseType> *)nextResponseResponseLogic:(MPMResponse<ResponseType> *(^)(MPMRequest<RequestType> *))responseLogic __attribute__((swift_name("nextResponse(responseLogic:)")));
@property (readonly) MPMBoolean *(^ _Nullable childAssertion)(MPMRequest<RequestType> *) __attribute__((swift_name("childAssertion")));
@property (readonly) NSArray<MPMReceivedRequests<RequestType, ResponseType> *> *requests __attribute__((swift_name("requests")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("ServerServerEndpointAssertion")))
@interface MPMServerServerEndpointAssertion : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerServerEndpointNegation")))
@interface MPMServerServerEndpointNegation<RequestType, RequestType_, ResponseType> : MPMBase
- (instancetype)initWith:(MPMServerServerEndpoint<RequestType_, ResponseType> *)receiver assertion:(MPMBoolean *(^)(MPMRequest<RequestType> *))assertion serverEndpoint:(MPMServerServerEndpoint<RequestType, ResponseType> *)serverEndpoint __attribute__((swift_name("init(_:assertion:serverEndpoint:)"))) __attribute__((objc_designated_initializer));
- (MPMBoolean *(^)(MPMRequest<RequestType> *))butWill __attribute__((swift_name("butWill()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessResponse")))
@interface MPMSuccessResponse<R> : MPMResponse<R>
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
@interface MPMThreadingUtil : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)threadingUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMThreadingUtil *shared __attribute__((swift_name("shared")));
- (id _Nullable)runBlockingServerRunnable:(id _Nullable (^)(void))runnable __attribute__((swift_name("runBlockingServer(runnable:)")));
@property (readonly) MPMTestingPlatforms *platforms __attribute__((swift_name("platforms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleRawConnection")))
@interface MPMSimpleRawConnection : MPMBase <MPMRawConnection>
- (instancetype)initWithUrl:(NSString *)url requestBody:(NSString * _Nullable)requestBody requestHeaders:(NSDictionary<NSString *, id> *)requestHeaders __attribute__((swift_name("init(url:requestBody:requestHeaders:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUrl:(NSString *)url requestBody:(NSString * _Nullable (^)(void))requestBody requestHeaders:(NSDictionary<NSString *, id> *(^)(void))requestHeaders responseCode:(MPMInt * _Nullable)responseCode error:(NSString * _Nullable)error responseBody:(NSString * _Nullable)responseBody responseHeaders:(NSDictionary<id, id> *)responseHeaders __attribute__((swift_name("init(url:requestBody:requestHeaders:responseCode:error:responseBody:responseHeaders:)"))) __attribute__((objc_designated_initializer));
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
@interface MPMIdentityRequestFilter : MPMBase <MPMIRequestFilter>
- (instancetype)initWithMpid:(int64_t)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isMatchRequest:(MPMRequest<MPMModelsIdentityRequestMessage *> *)request __attribute__((swift_name("isMatch(request:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityResponseLogic")))
@interface MPMIdentityResponseLogic : MPMBase <MPMIResponseLogic>
- (instancetype)initWithMpid:(int64_t)mpid isLoggedIn:(BOOL)isLoggedIn __attribute__((swift_name("init(mpid:isLoggedIn:)"))) __attribute__((objc_designated_initializer));
- (MPMResponse<MPMModelsIdentityResponseMessage *> *)generateResponseRequest:(MPMRequest<MPMModelsIdentityRequestMessage *> *)request __attribute__((swift_name("generateResponse(request:)")));
@property (readonly) BOOL isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifyRequestFilter")))
@interface MPMModifyRequestFilter : MPMBase <MPMIRequestFilter>
- (instancetype)initWithMpid:(int64_t)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isMatchRequest:(MPMRequest<MPMModelsIdentityRequestMessage *> *)request __attribute__((swift_name("isMatch(request:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@end;

@interface MPMRequest (Extensions)
- (int64_t)modifyMpid __attribute__((swift_name("modifyMpid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseTestKt")))
@interface MPMBaseTestKt : MPMBase
+ (void)beforeTest __attribute__((swift_name("beforeTest()")));
+ (MPMApiClientPlatform *)getClientPlatform __attribute__((swift_name("getClientPlatform()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockServerKt")))
@interface MPMMockServerKt : MPMBase
+ (MPMResponse<id> *)ResponseInitializer:(void (^)(MPMResponse<id> *))initializer __attribute__((swift_name("Response(initializer:)")));
+ (MPMSuccessResponse<id> *)SuccessResponseInitializer:(void (^)(MPMSuccessResponse<id> *))initializer __attribute__((swift_name("SuccessResponse(initializer:)")));
@end;

__attribute__((swift_name("TestingAwaiter")))
@protocol MPMTestingAwaiter
@required
- (void)awaitDescription:(NSString *)description timeout:(double)timeout __attribute__((swift_name("await(description:timeout:)")));
- (void)countdownDescription:(NSString *)description __attribute__((swift_name("countdown(description:)")));
- (void)initializeExpectationDescription:(NSString *)description __attribute__((swift_name("initializeExpectation(description:)")));
@end;

__attribute__((swift_name("ModelsDTO")))
@interface MPMModelsDTO : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMModelsDTOCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConfigResponseMessage")))
@interface MPMModelsConfigResponseMessage : MPMModelsDTO
- (instancetype)initWithType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPMBoolean * _Nullable)debug timeStamp:(MPMLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPMInt * _Nullable)ramp optOut:(MPMBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPMLong * _Nullable)sessionTimeout uploadInterval:(MPMLong * _Nullable)uploadInterval triggerItems:(MPMModelsTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPMLong * _Nullable)influenceOpenMessage aaidLat:(MPMBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPMBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPMInt * _Nullable)aliasMaxWindow kits:(NSArray<MPMModelsKitConfigMessage *> * _Nullable)kits includeSessionHistory:(MPMBoolean * _Nullable)includeSessionHistory soc:(MPMLong * _Nullable)soc __attribute__((swift_name("init(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:includeSessionHistory:soc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsConfigResponseMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPMLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MPMLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (MPMModelsTriggerItemsMessage * _Nullable)component12 __attribute__((swift_name("component12()")));
- (MPMLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (MPMBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (MPMBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (MPMInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<MPMModelsKitConfigMessage *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (MPMBoolean * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMLong * _Nullable)component20 __attribute__((swift_name("component20()")));
- (MPMBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPMLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPMInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPMBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MPMModelsConfigResponseMessage *)doCopyType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPMBoolean * _Nullable)debug timeStamp:(MPMLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPMInt * _Nullable)ramp optOut:(MPMBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPMLong * _Nullable)sessionTimeout uploadInterval:(MPMLong * _Nullable)uploadInterval triggerItems:(MPMModelsTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPMLong * _Nullable)influenceOpenMessage aaidLat:(MPMBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPMBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPMInt * _Nullable)aliasMaxWindow kits:(NSArray<MPMModelsKitConfigMessage *> * _Nullable)kits includeSessionHistory:(MPMBoolean * _Nullable)includeSessionHistory soc:(MPMLong * _Nullable)soc __attribute__((swift_name("doCopy(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:includeSessionHistory:soc:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MPMBoolean * _Nullable aaidLat __attribute__((swift_name("aaidLat")));
@property MPMInt * _Nullable aliasMaxWindow __attribute__((swift_name("aliasMaxWindow")));
@property MPMBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property MPMBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPMBoolean * _Nullable includeSessionHistory __attribute__((swift_name("includeSessionHistory")));
@property MPMLong * _Nullable influenceOpenMessage __attribute__((swift_name("influenceOpenMessage")));
@property NSArray<MPMModelsKitConfigMessage *> * _Nullable kits __attribute__((swift_name("kits")));
@property NSString * _Nullable logUnhandledExceptions __attribute__((swift_name("logUnhandledExceptions")));
@property MPMBoolean * _Nullable optOut __attribute__((swift_name("optOut")));
@property NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property NSArray<id> * _Nullable pushMessages __attribute__((swift_name("pushMessages")));
@property MPMInt * _Nullable ramp __attribute__((swift_name("ramp")));
@property MPMLong * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property MPMLong * _Nullable soc __attribute__((swift_name("soc")));
@property MPMLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@property MPMModelsTriggerItemsMessage * _Nullable triggerItems __attribute__((swift_name("triggerItems")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property MPMLong * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@property NSString * _Nullable workspaceToken __attribute__((swift_name("workspaceToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMParticleOptions")))
@interface MPMApiMParticleOptions : MPMBase
- (instancetype)initWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret clientPlatform:(MPMApiClientPlatform *)clientPlatform __attribute__((swift_name("init(apiKey:apiSecret:clientPlatform:)"))) __attribute__((objc_designated_initializer));
@property MPMBoolean * _Nullable androidIdDisabled __attribute__((swift_name("androidIdDisabled")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString *apiSecret __attribute__((swift_name("apiSecret")));
@property NSString * _Nullable dataplanId __attribute__((swift_name("dataplanId")));
@property MPMApiDataplanOptions * _Nullable dataplanOptions __attribute__((swift_name("dataplanOptions")));
@property MPMInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@property MPMBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property MPMBoolean * _Nullable enableUncaughtExceptionLogging __attribute__((swift_name("enableUncaughtExceptionLogging")));
@property MPMApiEnvironment * _Nullable environment __attribute__((swift_name("environment")));
@property MPMApiIdentityApiRequest * _Nullable identifyRequest __attribute__((swift_name("identifyRequest")));
@property MPMApiIdentityResponse * _Nullable identifyTask __attribute__((swift_name("identifyTask")));
@property MPMInt * _Nullable identityConnectionTimeout __attribute__((swift_name("identityConnectionTimeout")));
@property MPMApiInstallType * _Nullable installType __attribute__((swift_name("installType")));
@property MPMApiLocationTracking * _Nullable locationTracking __attribute__((swift_name("locationTracking")));
@property MPMApiLogLevel * _Nullable logLevel __attribute__((swift_name("logLevel")));
@property MPMApiNetworkOptions * _Nullable networkOptions __attribute__((swift_name("networkOptions")));
@property (readonly) MParticleOptions *options __attribute__((swift_name("options")));
@property NSString * _Nullable pushRegistrationInstanceId __attribute__((swift_name("pushRegistrationInstanceId")));
@property NSString * _Nullable pushRegistrationSenderId __attribute__((swift_name("pushRegistrationSenderId")));
@property MPMInt * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property MPMInt * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@end;

__attribute__((swift_name("ApiClientPlatform")))
@interface MPMApiClientPlatform : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("TestingPlatforms")))
@interface MPMTestingPlatforms : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)currentThread __attribute__((swift_name("currentThread()")));
- (BOOL)isServerThread __attribute__((swift_name("isServerThread()")));
- (void)prepareThread __attribute__((swift_name("prepareThread()")));
- (id _Nullable)runInForegroundRunnable:(id _Nullable (^)(void))runnable __attribute__((swift_name("runInForeground(runnable:)")));
- (void)sleepMillis:(int64_t)millis __attribute__((swift_name("sleep(millis:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MPMKotlinByteArray : MPMBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MPMByte *(^)(MPMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPMKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasRequestMessage")))
@interface MPMModelsAliasRequestMessage : MPMModelsDTO
- (instancetype)initWithStartTime:(MPMLong * _Nullable)startTime endTime:(MPMLong * _Nullable)endTime data:(MPMModelsAliasDataMessage *)data requestType:(NSString * _Nullable)requestType requestId:(NSString * _Nullable)requestId aliasEnvironment:(NSString * _Nullable)aliasEnvironment apiKey:(NSString *)apiKey __attribute__((swift_name("init(startTime:endTime:data:requestType:requestId:aliasEnvironment:apiKey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsAliasRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable aliasEnvironment __attribute__((swift_name("aliasEnvironment")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) MPMModelsAliasDataMessage *data __attribute__((swift_name("data")));
@property (readonly) MPMLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) NSString * _Nullable requestType __attribute__((swift_name("requestType")));
@property (readonly) MPMLong * _Nullable startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((swift_name("ModelsEmpty")))
@interface MPMModelsEmpty : MPMModelsDTO
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMModelsEmptyCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBatchMessage")))
@interface MPMModelsBatchMessage : MPMModelsDTO
- (instancetype)initWithEcho:(MPMBoolean * _Nullable)echo type:(NSString * _Nullable)type id:(NSString * _Nullable)id timestamp:(MPMLong * _Nullable)timestamp mparticleVersion:(NSString * _Nullable)mparticleVersion optOutHeader:(MPMBoolean * _Nullable)optOutHeader configUploadInterval:(MPMInt * _Nullable)configUploadInterval configSessionTimeout:(MPMInt * _Nullable)configSessionTimeout mpid:(NSString * _Nullable)mpid sandbox:(MPMBoolean * _Nullable)sandbox deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp deletedUserAttributes:(NSArray<NSString *> * _Nullable)deletedUserAttributes cookies:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)cookies providerPersistence:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence integrationAttributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)integrationAttributes consentState:(MPMModelsConsentStateMessage * _Nullable)consentState dataplanContext:(MPMModelsDataplanContextMessage * _Nullable)dataplanContext messages:(NSArray<MPMModelsBaseEvent *> *)messages reportingMessages:(NSArray<MPMModelsReportingMessageMessage *> * _Nullable)reportingMessages appInfo:(MPMModelsAppInfoMessage * _Nullable)appInfo deviceInfo:(MPMModelsDeviceInfoMessage * _Nullable)deviceInfo identities:(NSArray<MPMModelsUserIdentities *> * _Nullable)identities attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes sessionHistory:(NSArray<MPMModelsBaseEvent *> *)sessionHistory modifiedBatch:(MPMBoolean * _Nullable)modifiedBatch __attribute__((swift_name("init(echo:type:id:timestamp:mparticleVersion:optOutHeader:configUploadInterval:configSessionTimeout:mpid:sandbox:deviceApplicationStamp:deletedUserAttributes:cookies:providerPersistence:integrationAttributes:consentState:dataplanContext:messages:reportingMessages:appInfo:deviceInfo:identities:attributes:sessionHistory:modifiedBatch:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsBatchMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMModelsAppInfoMessage * _Nullable appInfo __attribute__((swift_name("appInfo")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) MPMInt * _Nullable configSessionTimeout __attribute__((swift_name("configSessionTimeout")));
@property (readonly) MPMInt * _Nullable configUploadInterval __attribute__((swift_name("configUploadInterval")));
@property (readonly) MPMModelsConsentStateMessage * _Nullable consentState __attribute__((swift_name("consentState")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable cookies __attribute__((swift_name("cookies")));
@property (readonly) MPMModelsDataplanContextMessage * _Nullable dataplanContext __attribute__((swift_name("dataplanContext")));
@property (readonly) NSArray<NSString *> * _Nullable deletedUserAttributes __attribute__((swift_name("deletedUserAttributes")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPMModelsDeviceInfoMessage * _Nullable deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) MPMBoolean * _Nullable echo __attribute__((swift_name("echo")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<MPMModelsUserIdentities *> * _Nullable identities __attribute__((swift_name("identities")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable integrationAttributes __attribute__((swift_name("integrationAttributes")));
@property (readonly) NSArray<MPMModelsBaseEvent *> *messages __attribute__((swift_name("messages")));
@property (readonly) MPMBoolean * _Nullable modifiedBatch __attribute__((swift_name("modifiedBatch")));
@property (readonly) NSString * _Nullable mparticleVersion __attribute__((swift_name("mparticleVersion")));
@property (readonly) NSString * _Nullable mpid __attribute__((swift_name("mpid")));
@property (readonly) MPMBoolean * _Nullable optOutHeader __attribute__((swift_name("optOutHeader")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property (readonly) NSArray<MPMModelsReportingMessageMessage *> * _Nullable reportingMessages __attribute__((swift_name("reportingMessages")));
@property (readonly) MPMBoolean * _Nullable sandbox __attribute__((swift_name("sandbox")));
@property (readonly) NSArray<MPMModelsBaseEvent *> *sessionHistory __attribute__((swift_name("sessionHistory")));
@property (readonly) MPMLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityRequestMessage")))
@interface MPMModelsIdentityRequestMessage : MPMModelsDTO
- (instancetype)initWithClientSdk:(MPMModelsClientSdkMessage * _Nullable)clientSdk context:(NSString * _Nullable)context environment:(NSString * _Nullable)environment requestId:(NSString * _Nullable)requestId requestTimestamp:(MPMLong * _Nullable)requestTimestamp previousMpid:(MPMLong * _Nullable)previousMpid knownIdentities:(NSDictionary<NSString *, id> * _Nullable)knownIdentities identityChanges:(NSArray<MPMModelsIdentityChange *> * _Nullable)identityChanges __attribute__((swift_name("init(clientSdk:context:environment:requestId:requestTimestamp:previousMpid:knownIdentities:identityChanges:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsIdentityRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMModelsClientSdkMessage * _Nullable clientSdk __attribute__((swift_name("clientSdk")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) NSArray<MPMModelsIdentityChange *> * _Nullable identityChanges __attribute__((swift_name("identityChanges")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable knownIdentities __attribute__((swift_name("knownIdentities")));
@property (readonly) MPMLong * _Nullable previousMpid __attribute__((swift_name("previousMpid")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) MPMLong * _Nullable requestTimestamp __attribute__((swift_name("requestTimestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityResponseMessage")))
@interface MPMModelsIdentityResponseMessage : MPMModelsDTO
- (instancetype)initWithMpid:(NSString *)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMpid:(MPMLong * _Nullable)mpid context:(NSString * _Nullable)context errors:(NSArray<MPMModelsError *> * _Nullable)errors isLoggedIn:(MPMBoolean * _Nullable)isLoggedIn __attribute__((swift_name("init(mpid:context:errors:isLoggedIn:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsIdentityResponseMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSArray<MPMModelsError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) MPMBoolean * _Nullable isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) MPMLong * _Nullable mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MPMKotlinThrowable : MPMBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPMKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPMKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDTO.Companion")))
@interface MPMModelsDTOCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsDTOCompanion *shared __attribute__((swift_name("shared")));
- (MPMModelsDTO *)fromString:(NSString *)string __attribute__((swift_name("from(string:)")));
@property (readonly) MPMKotlinx_serialization_jsonJson *batchJsonBuilder __attribute__((swift_name("batchJsonBuilder")));
@property (readonly) MPMKotlinx_serialization_jsonJson *jsonBuilder __attribute__((swift_name("jsonBuilder")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MPMKotlinx_serialization_jsonJsonElement : MPMBase
@property (class, readonly, getter=companion) MPMKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsTriggerItemsMessage")))
@interface MPMModelsTriggerItemsMessage : MPMModelsDTO
- (instancetype)initWithTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("init(triggerMatches:triggerMessageHashes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsTriggerItemsMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMModelsTriggerItemsMessage *)doCopyTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("doCopy(triggerMatches:triggerMessageHashes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable triggerMatches __attribute__((swift_name("triggerMatches")));
@property NSArray<NSString *> * _Nullable triggerMessageHashes __attribute__((swift_name("triggerMessageHashes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsKitConfigMessage")))
@interface MPMModelsKitConfigMessage : MPMModelsDTO
- (instancetype)initWithId:(int32_t)id attributeValueFilters:(NSArray<id> * _Nullable)attributeValueFilters properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPMModelsFilterMessage * _Nullable)keyFilters bracketing:(MPMModelsBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPMModelsConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPMBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("init(id:attributeValueFilters:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsKitConfigMessageCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<id> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPMModelsFilterMessage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MPMModelsBracketMessage * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPMModelsConsentForwardingRuleMessage * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPMBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MPMModelsKitConfigMessage *)doCopyId:(int32_t)id attributeValueFilters:(NSArray<id> * _Nullable)attributeValueFilters properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPMModelsFilterMessage * _Nullable)keyFilters bracketing:(MPMModelsBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPMModelsConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPMBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("doCopy(id:attributeValueFilters:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<id> * _Nullable attributeValueFilters __attribute__((swift_name("attributeValueFilters")));
@property MPMModelsBracketMessage * _Nullable bracketing __attribute__((swift_name("bracketing")));
@property MPMModelsConsentForwardingRuleMessage * _Nullable consentForwardingRules __attribute__((swift_name("consentForwardingRules")));
@property MPMBoolean * _Nullable excludeAnnonymousUsers __attribute__((swift_name("excludeAnnonymousUsers")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property MPMModelsFilterMessage * _Nullable keyFilters __attribute__((swift_name("keyFilters")));
@property NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable projections __attribute__((swift_name("projections")));
@property NSDictionary<id, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConfigResponseMessage.Companion")))
@interface MPMModelsConfigResponseMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsConfigResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiDataplanOptions")))
@interface MPMApiDataplanOptions : MPMBase
- (instancetype)initWithDataplanOptions:(MPDataPlanOptions *)dataplanOptions __attribute__((swift_name("init(dataplanOptions:)"))) __attribute__((objc_designated_initializer));
@property BOOL blockEventAttributes __attribute__((swift_name("blockEventAttributes")));
@property BOOL blockEvents __attribute__((swift_name("blockEvents")));
@property BOOL blockUserAttributes __attribute__((swift_name("blockUserAttributes")));
@property BOOL blockUserIdentities __attribute__((swift_name("blockUserIdentities")));
@property NSString * _Nullable dataplan __attribute__((swift_name("dataplan")));
@property (readonly) MPDataPlanOptions *dataplanOptions __attribute__((swift_name("dataplanOptions")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MPMKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MPMKotlinEnum<E> : MPMBase <MPMKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiEnvironment")))
@interface MPMApiEnvironment : MPMKotlinEnum<MPMApiEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMApiEnvironment *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPMApiEnvironment *development __attribute__((swift_name("development")));
@property (class, readonly) MPMApiEnvironment *production __attribute__((swift_name("production")));
+ (MPMKotlinArray<MPMApiEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityApiRequest")))
@interface MPMApiIdentityApiRequest : MPMBase
- (instancetype)initWithUser:(MPMApiMParticleUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIdentityApiRequest:(MPIdentityApiRequest *)identityApiRequest __attribute__((swift_name("init(identityApiRequest:)"))) __attribute__((objc_designated_initializer));
- (void)addIdentityKey:(MPMApiIdentityType *)key value:(NSString * _Nullable)value __attribute__((swift_name("addIdentity(key:value:)")));
@property NSDictionary<MPMApiIdentityType *, id> *identities __attribute__((swift_name("identities")));
@property (readonly) MPIdentityApiRequest *identityApiRequest __attribute__((swift_name("identityApiRequest")));
@end;

__attribute__((swift_name("ApiIdentityResponse")))
@interface MPMApiIdentityResponse : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPMApiIdentityResponse *)addFailureListenerListener:(void (^)(MPMApiIdentityHttpResponse * _Nullable))listener __attribute__((swift_name("addFailureListener(listener:)")));
- (MPMApiIdentityResponse *)addSuccessListenerListener:(void (^)(MPMApiMParticleUser *, MPMApiMParticleUser * _Nullable))listener __attribute__((swift_name("addSuccessListener(listener:)")));
@property (readonly) NSMutableArray<MPMKotlinUnit *(^)(MPMApiIdentityHttpResponse * _Nullable)> *failureListeners __attribute__((swift_name("failureListeners")));
@property (readonly) NSMutableArray<MPMKotlinUnit *(^)(MPMApiMParticleUser *, MPMApiMParticleUser * _Nullable)> *successListeners __attribute__((swift_name("successListeners")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiInstallType")))
@interface MPMApiInstallType : MPMKotlinEnum<MPMApiInstallType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMApiInstallType *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPMApiInstallType *kowninstall __attribute__((swift_name("kowninstall")));
@property (class, readonly) MPMApiInstallType *knownupgrde __attribute__((swift_name("knownupgrde")));
+ (MPMKotlinArray<MPMApiInstallType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiLocationTracking")))
@interface MPMApiLocationTracking : MPMBase
- (instancetype)initWithProvider:(NSString *)provider minTime:(int64_t)minTime minDistance:(int64_t)minDistance __attribute__((swift_name("init(provider:minTime:minDistance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t minDistance __attribute__((swift_name("minDistance")));
@property (readonly) int64_t minTime __attribute__((swift_name("minTime")));
@property (readonly) NSString *provider __attribute__((swift_name("provider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiLogLevel")))
@interface MPMApiLogLevel : MPMKotlinEnum<MPMApiLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMApiLogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) MPMApiLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MPMApiLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) MPMApiLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MPMApiLogLevel *verbose __attribute__((swift_name("verbose")));
+ (MPMKotlinArray<MPMApiLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiNetworkOptions")))
@interface MPMApiNetworkOptions : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithNetworkOptions:(MPNetworkOptions *)networkOptions __attribute__((swift_name("init(networkOptions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPNetworkOptions *networkOptions __attribute__((swift_name("networkOptions")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MPMKotlinByteIterator : MPMBase <MPMKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPMByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasDataMessage")))
@interface MPMModelsAliasDataMessage : MPMModelsDTO
- (instancetype)initWithSourceMpid:(MPMLong * _Nullable)sourceMpid destinationMpid:(MPMLong * _Nullable)destinationMpid deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp __attribute__((swift_name("init(sourceMpid:destinationMpid:deviceApplicationStamp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsAliasDataMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMLong * _Nullable destinationMpid __attribute__((swift_name("destinationMpid")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPMLong * _Nullable sourceMpid __attribute__((swift_name("sourceMpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasRequestMessage.Companion")))
@interface MPMModelsAliasRequestMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsAliasRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEmpty.Companion")))
@interface MPMModelsEmptyCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsEmptyCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateMessage")))
@interface MPMModelsConsentStateMessage : MPMBase
- (instancetype)initWithConsentStateGdpr:(NSDictionary<NSString *, MPMModelsConsentStateInstanceMessage *> * _Nullable)consentStateGdpr consentStateCcpa:(NSDictionary<NSString *, MPMModelsConsentStateInstanceMessage *> * _Nullable)consentStateCcpa __attribute__((swift_name("init(consentStateGdpr:consentStateCcpa:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsConsentStateMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, MPMModelsConsentStateInstanceMessage *> * _Nullable consentStateCcpa __attribute__((swift_name("consentStateCcpa")));
@property (readonly) NSDictionary<NSString *, MPMModelsConsentStateInstanceMessage *> * _Nullable consentStateGdpr __attribute__((swift_name("consentStateGdpr")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplanContextMessage")))
@interface MPMModelsDataplanContextMessage : MPMBase
- (instancetype)initWithDataplan:(MPMModelsDataplan *)dataplan __attribute__((swift_name("init(dataplan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsDataplanContextMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMModelsDataplan *dataplan __attribute__((swift_name("dataplan")));
@end;

__attribute__((swift_name("ModelsBaseEvent")))
@interface MPMModelsBaseEvent : MPMModelsDTO
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMModelsStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMModelsLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, id> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, id> * _Nullable)eventFlags eventStartTime:(MPMLong * _Nullable)eventStartTime eventCount:(MPMInt * _Nullable)eventCount __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:eventStartTime:eventCount:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsBaseEventCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<NSString *, id> * _Nullable attributes __attribute__((swift_name("attributes")));
@property NSString * _Nullable dataConnection __attribute__((swift_name("dataConnection")));
@property MPMInt * _Nullable eventCount __attribute__((swift_name("eventCount")));
@property NSDictionary<NSString *, id> * _Nullable eventFlags __attribute__((swift_name("eventFlags")));
@property MPMLong * _Nullable eventStartTime __attribute__((swift_name("eventStartTime")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPMModelsLocationMessage * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property MPMLong * _Nullable sessionStartTimestamp __attribute__((swift_name("sessionStartTimestamp")));
@property MPMModelsStateInfoMessage * _Nullable stateInfo __attribute__((swift_name("stateInfo")));
@property MPMLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsReportingMessageMessage")))
@interface MPMModelsReportingMessageMessage : MPMBase
- (instancetype)initWithModuleId:(int32_t)moduleId messageType:(NSString * _Nullable)messageType timestamp:(int64_t)timestamp attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes eventOrScreenName:(NSString * _Nullable)eventOrScreenName eventType:(NSString * _Nullable)eventType projectionReports:(NSArray<MPMModelsProjectionReportMessage *> * _Nullable)projectionReports isPushRegistrationEvent:(MPMBoolean * _Nullable)isPushRegistrationEvent optout:(MPMBoolean * _Nullable)optout exceptionClassName:(NSString * _Nullable)exceptionClassName __attribute__((swift_name("init(moduleId:messageType:timestamp:attributes:eventOrScreenName:eventType:projectionReports:isPushRegistrationEvent:optout:exceptionClassName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsReportingMessageMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable eventOrScreenName __attribute__((swift_name("eventOrScreenName")));
@property (readonly) NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString * _Nullable exceptionClassName __attribute__((swift_name("exceptionClassName")));
@property (readonly) MPMBoolean * _Nullable isPushRegistrationEvent __attribute__((swift_name("isPushRegistrationEvent")));
@property (readonly) NSString * _Nullable messageType __attribute__((swift_name("messageType")));
@property (readonly) int32_t moduleId __attribute__((swift_name("moduleId")));
@property (readonly) MPMBoolean * _Nullable optout __attribute__((swift_name("optout")));
@property (readonly) NSArray<MPMModelsProjectionReportMessage *> * _Nullable projectionReports __attribute__((swift_name("projectionReports")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAppInfoMessage")))
@interface MPMModelsAppInfoMessage : MPMBase
- (instancetype)initWithPackageName:(NSString * _Nullable)packageName version:(NSString * _Nullable)version versionCode:(NSString * _Nullable)versionCode installerName:(NSString * _Nullable)installerName name:(NSString * _Nullable)name buildId:(NSString * _Nullable)buildId debugSigning:(MPMBoolean * _Nullable)debugSigning pirated:(MPMBoolean * _Nullable)pirated mparticleInstallTime:(MPMLong * _Nullable)mparticleInstallTime launchCount:(MPMInt * _Nullable)launchCount lastUseDate:(MPMLong * _Nullable)lastUseDate launchCountSinceUpgrade:(MPMInt * _Nullable)launchCountSinceUpgrade upgradeDate:(MPMLong * _Nullable)upgradeDate environment:(MPMInt * _Nullable)environment installReferrer:(NSString * _Nullable)installReferrer firstSeenInstall:(MPMBoolean * _Nullable)firstSeenInstall __attribute__((swift_name("init(packageName:version:versionCode:installerName:name:buildId:debugSigning:pirated:mparticleInstallTime:launchCount:lastUseDate:launchCountSinceUpgrade:upgradeDate:environment:installReferrer:firstSeenInstall:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsAppInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable buildId __attribute__((swift_name("buildId")));
@property (readonly) MPMBoolean * _Nullable debugSigning __attribute__((swift_name("debugSigning")));
@property (readonly) MPMInt * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) MPMBoolean * _Nullable firstSeenInstall __attribute__((swift_name("firstSeenInstall")));
@property (readonly) NSString * _Nullable installReferrer __attribute__((swift_name("installReferrer")));
@property (readonly) NSString * _Nullable installerName __attribute__((swift_name("installerName")));
@property (readonly) MPMLong * _Nullable lastUseDate __attribute__((swift_name("lastUseDate")));
@property (readonly) MPMInt * _Nullable launchCount __attribute__((swift_name("launchCount")));
@property (readonly) MPMInt * _Nullable launchCountSinceUpgrade __attribute__((swift_name("launchCountSinceUpgrade")));
@property (readonly) MPMLong * _Nullable mparticleInstallTime __attribute__((swift_name("mparticleInstallTime")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable packageName __attribute__((swift_name("packageName")));
@property (readonly) MPMBoolean * _Nullable pirated __attribute__((swift_name("pirated")));
@property (readonly) MPMLong * _Nullable upgradeDate __attribute__((swift_name("upgradeDate")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@property (readonly) NSString * _Nullable versionCode __attribute__((swift_name("versionCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceInfoMessage")))
@interface MPMModelsDeviceInfoMessage : MPMBase
- (instancetype)initWithBuildId:(NSString * _Nullable)buildId brand:(NSString * _Nullable)brand product:(NSString * _Nullable)product device:(NSString * _Nullable)device manufacturer:(NSString * _Nullable)manufacturer platform:(NSString * _Nullable)platform osVersion:(NSString * _Nullable)osVersion osVersionInt:(MPMInt * _Nullable)osVersionInt model:(NSString * _Nullable)model releaseVersion:(NSString * _Nullable)releaseVersion deviceId:(NSString * _Nullable)deviceId androidId:(NSString * _Nullable)androidId openUdid:(NSString * _Nullable)openUdid deviceBluetoothEnabled:(MPMBoolean * _Nullable)deviceBluetoothEnabled deviceBluetoothVersion:(NSString * _Nullable)deviceBluetoothVersion deviceSupportsNfc:(MPMBoolean * _Nullable)deviceSupportsNfc deviceSupportsTelephony:(MPMBoolean * _Nullable)deviceSupportsTelephony deviceRootedObject:(MPMModelsDeviceRootedObject * _Nullable)deviceRootedObject screenHeight:(MPMInt * _Nullable)screenHeight screenWidth:(MPMInt * _Nullable)screenWidth screenDpi:(MPMInt * _Nullable)screenDpi deviceCountry:(NSString * _Nullable)deviceCountry deviceLocaleCountry:(NSString * _Nullable)deviceLocaleCountry deviceLocaleLanguage:(NSString * _Nullable)deviceLocaleLanguage deviceTimezoneName:(NSString * _Nullable)deviceTimezoneName timezone:(MPMInt * _Nullable)timezone networkCarrier:(NSString * _Nullable)networkCarrier networkCountry:(NSString * _Nullable)networkCountry countryCode:(NSString * _Nullable)countryCode mobileNetworkCode:(NSString * _Nullable)mobileNetworkCode isTablet:(MPMBoolean * _Nullable)isTablet isInDst:(MPMBoolean * _Nullable)isInDst deviceImei:(NSString * _Nullable)deviceImei isPushSoundEnabled:(MPMBoolean * _Nullable)isPushSoundEnabled isPushVibrationEnabled:(MPMBoolean * _Nullable)isPushVibrationEnabled __attribute__((swift_name("init(buildId:brand:product:device:manufacturer:platform:osVersion:osVersionInt:model:releaseVersion:deviceId:androidId:openUdid:deviceBluetoothEnabled:deviceBluetoothVersion:deviceSupportsNfc:deviceSupportsTelephony:deviceRootedObject:screenHeight:screenWidth:screenDpi:deviceCountry:deviceLocaleCountry:deviceLocaleLanguage:deviceTimezoneName:timezone:networkCarrier:networkCountry:countryCode:mobileNetworkCode:isTablet:isInDst:deviceImei:isPushSoundEnabled:isPushVibrationEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsDeviceInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable androidId __attribute__((swift_name("androidId")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable buildId __attribute__((swift_name("buildId")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString * _Nullable device __attribute__((swift_name("device")));
@property (readonly) MPMBoolean * _Nullable deviceBluetoothEnabled __attribute__((swift_name("deviceBluetoothEnabled")));
@property (readonly) NSString * _Nullable deviceBluetoothVersion __attribute__((swift_name("deviceBluetoothVersion")));
@property (readonly) NSString * _Nullable deviceCountry __attribute__((swift_name("deviceCountry")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NSString * _Nullable deviceImei __attribute__((swift_name("deviceImei")));
@property (readonly) NSString * _Nullable deviceLocaleCountry __attribute__((swift_name("deviceLocaleCountry")));
@property (readonly) NSString * _Nullable deviceLocaleLanguage __attribute__((swift_name("deviceLocaleLanguage")));
@property (readonly) MPMModelsDeviceRootedObject * _Nullable deviceRootedObject __attribute__((swift_name("deviceRootedObject")));
@property (readonly) MPMBoolean * _Nullable deviceSupportsNfc __attribute__((swift_name("deviceSupportsNfc")));
@property (readonly) MPMBoolean * _Nullable deviceSupportsTelephony __attribute__((swift_name("deviceSupportsTelephony")));
@property (readonly) NSString * _Nullable deviceTimezoneName __attribute__((swift_name("deviceTimezoneName")));
@property (readonly) MPMBoolean * _Nullable isInDst __attribute__((swift_name("isInDst")));
@property (readonly) MPMBoolean * _Nullable isPushSoundEnabled __attribute__((swift_name("isPushSoundEnabled")));
@property (readonly) MPMBoolean * _Nullable isPushVibrationEnabled __attribute__((swift_name("isPushVibrationEnabled")));
@property (readonly) MPMBoolean * _Nullable isTablet __attribute__((swift_name("isTablet")));
@property (readonly) NSString * _Nullable manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString * _Nullable mobileNetworkCode __attribute__((swift_name("mobileNetworkCode")));
@property (readonly) NSString * _Nullable model __attribute__((swift_name("model")));
@property (readonly) NSString * _Nullable networkCarrier __attribute__((swift_name("networkCarrier")));
@property (readonly) NSString * _Nullable networkCountry __attribute__((swift_name("networkCountry")));
@property (readonly) NSString * _Nullable openUdid __attribute__((swift_name("openUdid")));
@property (readonly) NSString * _Nullable osVersion __attribute__((swift_name("osVersion")));
@property (readonly) MPMInt * _Nullable osVersionInt __attribute__((swift_name("osVersionInt")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable product __attribute__((swift_name("product")));
@property (readonly) NSString * _Nullable releaseVersion __attribute__((swift_name("releaseVersion")));
@property (readonly) MPMInt * _Nullable screenDpi __attribute__((swift_name("screenDpi")));
@property (readonly) MPMInt * _Nullable screenHeight __attribute__((swift_name("screenHeight")));
@property (readonly) MPMInt * _Nullable screenWidth __attribute__((swift_name("screenWidth")));
@property (readonly) MPMInt * _Nullable timezone __attribute__((swift_name("timezone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsUserIdentities")))
@interface MPMModelsUserIdentities : MPMModelsDTO
- (instancetype)initWithValue:(NSString * _Nullable)value identityType:(MPMInt * _Nullable)identityType __attribute__((swift_name("init(value:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsUserIdentitiesCompanion *companion __attribute__((swift_name("companion")));
@property MPMInt * _Nullable identityType __attribute__((swift_name("identityType")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBatchMessage.Companion")))
@interface MPMModelsBatchMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsBatchMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsClientSdkMessage")))
@interface MPMModelsClientSdkMessage : MPMModelsDTO
- (instancetype)initWithPlatform:(NSString * _Nullable)platform sdkVendor:(NSString * _Nullable)sdkVendor sdkVersion:(NSString * _Nullable)sdkVersion __attribute__((swift_name("init(platform:sdkVendor:sdkVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsClientSdkMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable sdkVendor __attribute__((swift_name("sdkVendor")));
@property (readonly) NSString * _Nullable sdkVersion __attribute__((swift_name("sdkVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityChange")))
@interface MPMModelsIdentityChange : MPMModelsDTO
- (instancetype)initWithNewValue:(NSString * _Nullable)newValue oldValue:(NSString * _Nullable)oldValue identityType:(NSString * _Nullable)identityType __attribute__((swift_name("init(newValue:oldValue:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsIdentityChangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable identityType __attribute__((swift_name("identityType")));
@property (readonly, getter=doNewValue) NSString * _Nullable newValue __attribute__((swift_name("newValue")));
@property (readonly) NSString * _Nullable oldValue __attribute__((swift_name("oldValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityRequestMessage.Companion")))
@interface MPMModelsIdentityRequestMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsIdentityRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsError")))
@interface MPMModelsError : MPMModelsDTO
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMModelsError *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityResponseMessage.Companion")))
@interface MPMModelsIdentityResponseMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsIdentityResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPMKotlinArray<T> : MPMBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol MPMKotlinx_serialization_coreSerialFormat
@required
@property (readonly) MPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol MPMKotlinx_serialization_coreStringFormat <MPMKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface MPMKotlinx_serialization_jsonJson : MPMBase <MPMKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) MPMKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(MPMKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MPMKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MPMKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MPMKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MPMKotlinx_serialization_jsonJsonElementCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsTriggerItemsMessage.Companion")))
@interface MPMModelsTriggerItemsMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsTriggerItemsMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsFilterMessage")))
@interface MPMModelsFilterMessage : MPMModelsDTO
- (instancetype)initWithEventTypesFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventTypesFilter eventNameFilters:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventNameFilters eventAttributeFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeFilter screenNameFilters:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)screenNameFilters screenAttributeFilters:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)screenAttributeFilters userIdentityFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)userIdentityFilter userAttributeFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)userAttributeFilter commerceAttributeFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)commerceAttributeFilter commerceEntityFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)commerceEntityFilter commerceEntityAttributeFilters:(NSDictionary<MPMInt *, NSDictionary<MPMInt *, MPMBoolean *> *> * _Nullable)commerceEntityAttributeFilters eventAttributeAddUser:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeAddUser eventAttributeSingleItemUser:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeSingleItemUser eventAttributeRemoveUser:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeRemoveUser __attribute__((swift_name("init(eventTypesFilter:eventNameFilters:eventAttributeFilter:screenNameFilters:screenAttributeFilters:userIdentityFilter:userAttributeFilter:commerceAttributeFilter:commerceEntityFilter:commerceEntityAttributeFilters:eventAttributeAddUser:eventAttributeSingleItemUser:eventAttributeRemoveUser:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsFilterMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable commerceAttributeFilter __attribute__((swift_name("commerceAttributeFilter")));
@property NSDictionary<MPMInt *, NSDictionary<MPMInt *, MPMBoolean *> *> * _Nullable commerceEntityAttributeFilters __attribute__((swift_name("commerceEntityAttributeFilters")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable commerceEntityFilter __attribute__((swift_name("commerceEntityFilter")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeAddUser __attribute__((swift_name("eventAttributeAddUser")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeFilter __attribute__((swift_name("eventAttributeFilter")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeRemoveUser __attribute__((swift_name("eventAttributeRemoveUser")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeSingleItemUser __attribute__((swift_name("eventAttributeSingleItemUser")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventNameFilters __attribute__((swift_name("eventNameFilters")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventTypesFilter __attribute__((swift_name("eventTypesFilter")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable screenAttributeFilters __attribute__((swift_name("screenAttributeFilters")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable screenNameFilters __attribute__((swift_name("screenNameFilters")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable userAttributeFilter __attribute__((swift_name("userAttributeFilter")));
@property NSDictionary<MPMInt *, MPMBoolean *> * _Nullable userIdentityFilter __attribute__((swift_name("userIdentityFilter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBracketMessage")))
@interface MPMModelsBracketMessage : MPMModelsDTO
- (instancetype)initWithLowBracket:(MPMInt * _Nullable)lowBracket highBracket:(MPMInt * _Nullable)highBracket __attribute__((swift_name("init(lowBracket:highBracket:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsBracketMessageCompanion *companion __attribute__((swift_name("companion")));
@property MPMInt * _Nullable highBracket __attribute__((swift_name("highBracket")));
@property MPMInt * _Nullable lowBracket __attribute__((swift_name("lowBracket")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentForwardingRuleMessage")))
@interface MPMModelsConsentForwardingRuleMessage : MPMModelsDTO
- (instancetype)initWithShouldIncludeMatches:(MPMBoolean * _Nullable)shouldIncludeMatches rules:(NSArray<MPMModelsRules *> * _Nullable)rules __attribute__((swift_name("init(shouldIncludeMatches:rules:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsConsentForwardingRuleMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<MPMModelsRules *> * _Nullable rules __attribute__((swift_name("rules")));
@property MPMBoolean * _Nullable shouldIncludeMatches __attribute__((swift_name("shouldIncludeMatches")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsKitConfigMessage.Companion")))
@interface MPMModelsKitConfigMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsKitConfigMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MPMKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MPMKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MPMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MPMKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MPMKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MPMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MPMKotlinx_serialization_coreKSerializer <MPMKotlinx_serialization_coreSerializationStrategy, MPMKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MPMKotlinEnumCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMParticleUser")))
@interface MPMApiMParticleUser : MPMBase
- (instancetype)initWithUser:(MParticleUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (MPMApiConsentState *)getConsentState __attribute__((swift_name("getConsentState()")));
- (int64_t)getFirstSeenTime __attribute__((swift_name("getFirstSeenTime()")));
- (int64_t)getLastSeenTime __attribute__((swift_name("getLastSeenTime()")));
- (NSDictionary<NSString *, id> *)getUserAttributes __attribute__((swift_name("getUserAttributes()")));
- (NSDictionary<NSString *, id> * _Nullable)getUserAttributesListener:(id<MPMApiUserAttributeListener> _Nullable)listener __attribute__((swift_name("getUserAttributes(listener:)")));
- (NSDictionary<MPMApiIdentityType *, NSString *> *)getUserIdentities __attribute__((swift_name("getUserIdentities()")));
- (BOOL)incrementUserAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("incrementUserAttribute(key:value:)")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (BOOL)removeUserAttributeKey:(NSString *)key __attribute__((swift_name("removeUserAttribute(key:)")));
- (void)setConsentStateState:(MPMApiConsentState * _Nullable)state __attribute__((swift_name("setConsentState(state:)")));
- (BOOL)setUserAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttribute(key:value:)")));
- (BOOL)setUserAttributeListKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttributeList(key:value:)")));
- (BOOL)setUserAttributesUserAttributes:(NSDictionary<NSString *, id> *)userAttributes __attribute__((swift_name("setUserAttributes(userAttributes:)")));
- (BOOL)setUserTagTag:(NSString *)tag __attribute__((swift_name("setUserTag(tag:)")));
- (NSNumber *)toNSNumber:(id)receiver __attribute__((swift_name("toNSNumber(_:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@property (readonly) MParticleUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityType")))
@interface MPMApiIdentityType : MPMKotlinEnum<MPMApiIdentityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMApiIdentityType *other __attribute__((swift_name("other")));
@property (class, readonly) MPMApiIdentityType *customerid __attribute__((swift_name("customerid")));
@property (class, readonly) MPMApiIdentityType *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) MPMApiIdentityType *twitter __attribute__((swift_name("twitter")));
@property (class, readonly) MPMApiIdentityType *google __attribute__((swift_name("google")));
@property (class, readonly) MPMApiIdentityType *microsoft __attribute__((swift_name("microsoft")));
@property (class, readonly) MPMApiIdentityType *yahoo __attribute__((swift_name("yahoo")));
@property (class, readonly) MPMApiIdentityType *email __attribute__((swift_name("email")));
@property (class, readonly) MPMApiIdentityType *alias __attribute__((swift_name("alias")));
@property (class, readonly) MPMApiIdentityType *facebookcustomaudienceid __attribute__((swift_name("facebookcustomaudienceid")));
@property (class, readonly) MPMApiIdentityType *other2 __attribute__((swift_name("other2")));
@property (class, readonly) MPMApiIdentityType *other3 __attribute__((swift_name("other3")));
@property (class, readonly) MPMApiIdentityType *other4 __attribute__((swift_name("other4")));
@property (class, readonly) MPMApiIdentityType *other5 __attribute__((swift_name("other5")));
@property (class, readonly) MPMApiIdentityType *other6 __attribute__((swift_name("other6")));
@property (class, readonly) MPMApiIdentityType *other7 __attribute__((swift_name("other7")));
@property (class, readonly) MPMApiIdentityType *other8 __attribute__((swift_name("other8")));
@property (class, readonly) MPMApiIdentityType *other9 __attribute__((swift_name("other9")));
@property (class, readonly) MPMApiIdentityType *other10 __attribute__((swift_name("other10")));
@property (class, readonly) MPMApiIdentityType *mobilenumber __attribute__((swift_name("mobilenumber")));
@property (class, readonly) MPMApiIdentityType *phonenumber2 __attribute__((swift_name("phonenumber2")));
@property (class, readonly) MPMApiIdentityType *phonenumber3 __attribute__((swift_name("phonenumber3")));
+ (MPMKotlinArray<MPMApiIdentityType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityHttpResponse")))
@interface MPMApiIdentityHttpResponse : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable context __attribute__((swift_name("context")));
@property NSArray<MPMApiError *> *errors __attribute__((swift_name("errors")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MPMKotlinUnit : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasDataMessage.Companion")))
@interface MPMModelsAliasDataMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsAliasDataMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateInstanceMessage")))
@interface MPMModelsConsentStateInstanceMessage : MPMBase
- (instancetype)initWithConsented:(BOOL)consented document:(NSString * _Nullable)document timestamp:(int64_t)timestamp location:(NSString * _Nullable)location hardwareId:(NSString * _Nullable)hardwareId __attribute__((swift_name("init(consented:document:timestamp:location:hardwareId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsConsentStateInstanceMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL consented __attribute__((swift_name("consented")));
@property (readonly) NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateMessage.Companion")))
@interface MPMModelsConsentStateMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsConsentStateMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplan")))
@interface MPMModelsDataplan : MPMBase
- (instancetype)initWithDataplanId:(NSString *)dataplanId dataplanVersion:(MPMInt * _Nullable)dataplanVersion __attribute__((swift_name("init(dataplanId:dataplanVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsDataplanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *dataplanId __attribute__((swift_name("dataplanId")));
@property (readonly) MPMInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplanContextMessage.Companion")))
@interface MPMModelsDataplanContextMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsDataplanContextMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsStateInfoMessage")))
@interface MPMModelsStateInfoMessage : MPMModelsDTO
- (instancetype)initWithAvailableDisk:(MPMLong * _Nullable)availableDisk externalDisk:(MPMLong * _Nullable)externalDisk appMemoryUsage:(MPMLong * _Nullable)appMemoryUsage freeMemory:(MPMLong * _Nullable)freeMemory maxMemory:(MPMLong * _Nullable)maxMemory avaialableMemery:(MPMLong * _Nullable)avaialableMemery totalMemory:(MPMLong * _Nullable)totalMemory batteryLevel:(MPMDouble * _Nullable)batteryLevel timeSinceStart:(MPMLong * _Nullable)timeSinceStart hasGps:(MPMBoolean * _Nullable)hasGps activeNetworkName:(NSString * _Nullable)activeNetworkName orientation:(MPMInt * _Nullable)orientation barOrientation:(MPMInt * _Nullable)barOrientation isMemoryLow:(MPMBoolean * _Nullable)isMemoryLow systemMemoryThreshold:(MPMLong * _Nullable)systemMemoryThreshold networkType:(NSString * _Nullable)networkType __attribute__((swift_name("init(availableDisk:externalDisk:appMemoryUsage:freeMemory:maxMemory:avaialableMemery:totalMemory:batteryLevel:timeSinceStart:hasGps:activeNetworkName:orientation:barOrientation:isMemoryLow:systemMemoryThreshold:networkType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsStateInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable activeNetworkName __attribute__((swift_name("activeNetworkName")));
@property MPMLong * _Nullable appMemoryUsage __attribute__((swift_name("appMemoryUsage")));
@property MPMLong * _Nullable avaialableMemery __attribute__((swift_name("avaialableMemery")));
@property MPMLong * _Nullable availableDisk __attribute__((swift_name("availableDisk")));
@property MPMInt * _Nullable barOrientation __attribute__((swift_name("barOrientation")));
@property MPMDouble * _Nullable batteryLevel __attribute__((swift_name("batteryLevel")));
@property MPMLong * _Nullable externalDisk __attribute__((swift_name("externalDisk")));
@property MPMLong * _Nullable freeMemory __attribute__((swift_name("freeMemory")));
@property MPMBoolean * _Nullable hasGps __attribute__((swift_name("hasGps")));
@property MPMBoolean * _Nullable isMemoryLow __attribute__((swift_name("isMemoryLow")));
@property MPMLong * _Nullable maxMemory __attribute__((swift_name("maxMemory")));
@property NSString * _Nullable networkType __attribute__((swift_name("networkType")));
@property MPMInt * _Nullable orientation __attribute__((swift_name("orientation")));
@property MPMLong * _Nullable systemMemoryThreshold __attribute__((swift_name("systemMemoryThreshold")));
@property MPMLong * _Nullable timeSinceStart __attribute__((swift_name("timeSinceStart")));
@property MPMLong * _Nullable totalMemory __attribute__((swift_name("totalMemory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsLocationMessage")))
@interface MPMModelsLocationMessage : MPMModelsDTO
- (instancetype)initWithLatitude:(MPMDouble * _Nullable)latitude longitude:(MPMDouble * _Nullable)longitude accuracy:(MPMFloat * _Nullable)accuracy __attribute__((swift_name("init(latitude:longitude:accuracy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsLocationMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMFloat * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) MPMDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) MPMDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBaseEvent.Companion")))
@interface MPMModelsBaseEventCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsBaseEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MPMKotlinArray<id<MPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProjectionReportMessage")))
@interface MPMModelsProjectionReportMessage : MPMBase
- (instancetype)initWithProjectionId:(NSString *)projectionId messageType:(NSString *)messageType name:(NSString *)name eventType:(MPMModelsEventType *)eventType __attribute__((swift_name("init(projectionId:messageType:name:eventType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsProjectionReportMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMModelsEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *projectionId __attribute__((swift_name("projectionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsReportingMessageMessage.Companion")))
@interface MPMModelsReportingMessageMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsReportingMessageMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAppInfoMessage.Companion")))
@interface MPMModelsAppInfoMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsAppInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceRootedObject")))
@interface MPMModelsDeviceRootedObject : MPMBase
- (instancetype)initWithDeviceRootedCYDIA:(MPMBoolean * _Nullable)deviceRootedCYDIA __attribute__((swift_name("init(deviceRootedCYDIA:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMModelsDeviceRootedObjectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMBoolean * _Nullable deviceRootedCYDIA __attribute__((swift_name("deviceRootedCYDIA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceInfoMessage.Companion")))
@interface MPMModelsDeviceInfoMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsDeviceInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsUserIdentities.Companion")))
@interface MPMModelsUserIdentitiesCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsUserIdentitiesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsClientSdkMessage.Companion")))
@interface MPMModelsClientSdkMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsClientSdkMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityChange.Companion")))
@interface MPMModelsIdentityChangeCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsIdentityChangeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsError.Companion")))
@interface MPMModelsErrorCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MPMKotlinx_serialization_coreSerializersModule : MPMBase
- (void)dumpToCollector:(id<MPMKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MPMKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MPMKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MPMKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MPMKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MPMKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPMKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface MPMKotlinx_serialization_jsonJsonDefault : MPMKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface MPMKotlinx_serialization_jsonJsonConfiguration : MPMBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsFilterMessage.Companion")))
@interface MPMModelsFilterMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsFilterMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBracketMessage.Companion")))
@interface MPMModelsBracketMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsBracketMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsRules")))
@interface MPMModelsRules : MPMModelsDTO
- (instancetype)initWithValueHash:(int32_t)valueHash consented:(BOOL)consented __attribute__((swift_name("init(valueHash:consented:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsRulesCompanion *companion __attribute__((swift_name("companion")));
@property BOOL consented __attribute__((swift_name("consented")));
@property int32_t valueHash __attribute__((swift_name("valueHash")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentForwardingRuleMessage.Companion")))
@interface MPMModelsConsentForwardingRuleMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsConsentForwardingRuleMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MPMKotlinx_serialization_coreEncoder
@required
- (id<MPMKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MPMKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MPMKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MPMKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MPMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MPMKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MPMKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MPMKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MPMKotlinx_serialization_coreDecoder
@required
- (id<MPMKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MPMKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MPMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConsentState")))
@interface MPMApiConsentState : MPMBase
- (instancetype)initWithConsentState:(MPConsentState *)consentState __attribute__((swift_name("init(consentState:)"))) __attribute__((objc_designated_initializer));
- (MPCCPAConsent *)toCCPAConsent:(MPMApiConsent *)receiver __attribute__((swift_name("toCCPAConsent(_:)")));
- (MPGDPRConsent *)toGDPRConsent:(MPMApiConsent *)receiver __attribute__((swift_name("toGDPRConsent(_:)")));
@property MPMApiConsent * _Nullable ccpaConsent __attribute__((swift_name("ccpaConsent")));
@property (readonly) MPConsentState *consentState __attribute__((swift_name("consentState")));
@property MPMMutableDictionary<NSString *, MPMApiConsent *> * _Nullable gdprConsentState __attribute__((swift_name("gdprConsentState")));
@end;

__attribute__((swift_name("ApiUserAttributeListener")))
@protocol MPMApiUserAttributeListener
@required
- (void)onUserAttributesReceivedUserAttributes:(NSDictionary<NSString *, id> * _Nullable)userAttributes userAttributeLists:(NSDictionary<NSString *, NSArray<id> *> * _Nullable)userAttributeLists mpid:(MPMLong * _Nullable)mpid __attribute__((swift_name("onUserAttributesReceived(userAttributes:userAttributeLists:mpid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError")))
@interface MPMApiError : MPMBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateInstanceMessage.Companion")))
@interface MPMModelsConsentStateInstanceMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsConsentStateInstanceMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplan.Companion")))
@interface MPMModelsDataplanCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsDataplanCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsStateInfoMessage.Companion")))
@interface MPMModelsStateInfoMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsStateInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsLocationMessage.Companion")))
@interface MPMModelsLocationMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsLocationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEventType")))
@interface MPMModelsEventType : MPMKotlinEnum<MPMModelsEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMModelsEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPMModelsEventType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPMModelsEventType *navigation __attribute__((swift_name("navigation")));
@property (class, readonly) MPMModelsEventType *location __attribute__((swift_name("location")));
@property (class, readonly) MPMModelsEventType *search __attribute__((swift_name("search")));
@property (class, readonly) MPMModelsEventType *transaction __attribute__((swift_name("transaction")));
@property (class, readonly) MPMModelsEventType *usercontent __attribute__((swift_name("usercontent")));
@property (class, readonly) MPMModelsEventType *userpreference __attribute__((swift_name("userpreference")));
@property (class, readonly) MPMModelsEventType *social __attribute__((swift_name("social")));
@property (class, readonly) MPMModelsEventType *other __attribute__((swift_name("other")));
@property (class, readonly) MPMModelsEventType *media __attribute__((swift_name("media")));
+ (MPMKotlinArray<MPMModelsEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProjectionReportMessage.Companion")))
@interface MPMModelsProjectionReportMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsProjectionReportMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceRootedObject.Companion")))
@interface MPMModelsDeviceRootedObjectCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsDeviceRootedObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPMKotlinKClass>)kClass provider:(id<MPMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPMKotlinKClass>)kClass serializer:(id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPMKotlinKClass>)baseClass actualClass:(id<MPMKotlinKClass>)actualClass actualSerializer:(id<MPMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPMKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MPMKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MPMKotlinKClass>)baseClass defaultSerializerProvider:(id<MPMKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MPMKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MPMKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MPMKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MPMKotlinKClass <MPMKotlinKDeclarationContainer, MPMKotlinKAnnotatedElement, MPMKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsRules.Companion")))
@interface MPMModelsRulesCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsRulesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MPMKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MPMKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MPMKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MPMKotlinx_serialization_coreSerialKind : MPMBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MPMKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MPMKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPMKotlinNothing : MPMBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConsent")))
@interface MPMApiConsent : MPMBase
- (instancetype)initWithGdprConsentInstance:(MPGDPRConsent * _Nullable)gdprConsentInstance ccpaConsentInstance:(MPCCPAConsent * _Nullable)ccpaConsentInstance __attribute__((swift_name("init(gdprConsentInstance:ccpaConsentInstance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPCCPAConsent * _Nullable ccpaConsentInstance __attribute__((swift_name("ccpaConsentInstance")));
@property NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) MPGDPRConsent * _Nullable gdprConsentInstance __attribute__((swift_name("gdprConsentInstance")));
@property NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property BOOL isConsented __attribute__((swift_name("isConsented")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property MPMLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEventType.Companion")))
@interface MPMModelsEventTypeCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMModelsEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
