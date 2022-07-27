#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPMTModelsConfigResponseMessage, MPMTApiMParticleOptions, MPMTApiClientPlatform, MPMTMockingPlatforms, MPMTTestingPlatforms, MPMTMockingBaseTest, MPMTMockingBaseStartedTest, MPMTIdentityTests, MPMTApiIdentityResponse, MPMTApiIdentityApi, MPMTApiIdentityApiRequest, MPMTModelsIdentityRequestMessage, MPMTModelsIdentityResponseMessage, MPMTMockingEndpointType<T, R>, MPMTApiProduct, MPMTApiImpression, MPMTModelsImpressionMessage, MPProduct, MPMTModelsProductMessage, MPPromotion, MPMTApiPromotion, MPMTModelsPromotionMessage, MPMTModelsDTOCompanion, MPMTModelsDTO, MPMTKotlinx_serialization_jsonJsonElement, MPMTModelsTriggerItemsMessage, MPMTModelsKitConfigMessage, MPMTModelsConfigResponseMessageCompanion, MPMTApiDataplanOptions, MPMTApiEnvironment, MPMTApiInstallType, MPMTApiLocationTracking, MPMTApiLogLevel, MPMTApiNetworkOptions, MParticleOptions, MPMTKotlinThrowable, MPMTKotlinArray<T>, MPMTApiIdentityHttpResponse, MPMTApiMParticleUser, MPMTKotlinUnit, MPIdentityApi, MPIdentityApiRequest, MPMTApiIdentityType, MPMTModelsClientSdkMessage, MPMTModelsIdentityChange, MPMTModelsIdentityRequestMessageCompanion, MPMTModelsError, MPMTModelsIdentityResponseMessageCompanion, MPMTMockingEndpointTypeCompanion, MPMTModelsImpressionMessageCompanion, MPMTModelsProductMessageCompanion, MPMTModelsPromotionMessageCompanion, MPMTKotlinx_serialization_jsonJson, MPMTKotlinx_serialization_jsonJsonElementCompanion, MPMTModelsTriggerItemsMessageCompanion, MPMTModelsFilterMessage, MPMTModelsBracketMessage, MPMTModelsConsentForwardingRuleMessage, MPMTModelsKitConfigMessageCompanion, MPDataPlanOptions, MPMTKotlinEnumCompanion, MPMTKotlinEnum<E>, MPNetworkOptions, MPMTApiError, MParticleUser, MPMTApiConsentState, NSNumber, MPMTModelsClientSdkMessageCompanion, MPMTModelsIdentityChangeCompanion, MPMTModelsErrorCompanion, MPMTModelsAliasRequestMessage, MPMTModelsEmpty, MPMTModelsBatchMessage, MPMTKotlinx_serialization_coreSerializersModule, MPMTKotlinx_serialization_jsonJsonDefault, MPMTKotlinx_serialization_jsonJsonConfiguration, MPMTModelsFilterMessageCompanion, MPMTModelsBracketMessageCompanion, MPMTModelsRules, MPMTModelsConsentForwardingRuleMessageCompanion, MPConsentState, MPCCPAConsent, MPMTApiConsent, MPGDPRConsent, MPMTModelsAliasDataMessage, MPMTModelsAliasRequestMessageCompanion, MPMTModelsEmptyCompanion, MPMTModelsConsentStateMessage, MPMTModelsDataplanContextMessage, MPMTModelsBaseEvent, MPMTModelsReportingMessageMessage, MPMTModelsAppInfoMessage, MPMTModelsDeviceInfoMessage, MPMTModelsUserIdentities, MPMTModelsBatchMessageCompanion, MPMTModelsRulesCompanion, MPMTKotlinx_serialization_coreSerialKind, MPMTKotlinNothing, MPMTModelsAliasDataMessageCompanion, MPMTModelsConsentStateInstanceMessage, MPMTModelsConsentStateMessageCompanion, MPMTModelsDataplan, MPMTModelsDataplanContextMessageCompanion, MPMTModelsStateInfoMessage, MPMTModelsLocationMessage, MPMTModelsBaseEventCompanion, MPMTModelsProjectionReportMessage, MPMTModelsReportingMessageMessageCompanion, MPMTModelsAppInfoMessageCompanion, MPMTModelsDeviceRootedObject, MPMTModelsDeviceInfoMessageCompanion, MPMTModelsUserIdentitiesCompanion, MPMTModelsConsentStateInstanceMessageCompanion, MPMTModelsDataplanCompanion, MPMTModelsStateInfoMessageCompanion, MPMTModelsLocationMessageCompanion, MPMTModelsEventType, MPMTModelsProjectionReportMessageCompanion, MPMTModelsDeviceRootedObjectCompanion, MPMTModelsEventTypeCompanion;

@protocol MPMTTestingAwaiter, MPMTIdentityTester, MPMTKotlinx_serialization_coreKSerializer, MPMTKotlinComparable, MPMTKotlinIterator, MPMTApiUserAttributeListener, MPMTKotlinx_serialization_coreDeserializationStrategy, MPMTKotlinx_serialization_coreSerializationStrategy, MPMTKotlinx_serialization_coreSerialFormat, MPMTKotlinx_serialization_coreStringFormat, MPMTKotlinx_serialization_coreEncoder, MPMTKotlinx_serialization_coreSerialDescriptor, MPMTKotlinx_serialization_coreDecoder, MPMTKotlinx_serialization_coreSerializersModuleCollector, MPMTKotlinKClass, MPMTKotlinx_serialization_coreCompositeEncoder, MPMTKotlinAnnotation, MPMTKotlinx_serialization_coreCompositeDecoder, MPMTKotlinKDeclarationContainer, MPMTKotlinKAnnotatedElement, MPMTKotlinKClassifier;

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
@interface MPMTBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MPMTBase (MPMTBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MPMTMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPMTMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMPMTKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MPMTNumber : NSNumber
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
@interface MPMTByte : MPMTNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MPMTUByte : MPMTNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MPMTShort : MPMTNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MPMTUShort : MPMTNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MPMTInt : MPMTNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MPMTUInt : MPMTNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MPMTLong : MPMTNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MPMTULong : MPMTNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MPMTFloat : MPMTNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MPMTDouble : MPMTNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MPMTBoolean : MPMTNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("MockingBaseTest")))
@interface MPMTMockingBaseTest : MPMTBase
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer));
- (void)afterBeforeAll __attribute__((swift_name("afterBeforeAll()")));
- (void)beforeAll __attribute__((swift_name("beforeAll()")));
- (void)beforeAllAwaiter:(id<MPMTTestingAwaiter>)awaiter __attribute__((swift_name("beforeAll(awaiter:)")));
- (void)initialConfigResponseConfigResponse:(MPMTModelsConfigResponseMessage *)configResponse __attribute__((swift_name("initialConfigResponse(configResponse:)")));
- (void)initializeTestServer __attribute__((swift_name("initializeTestServer()")));
- (void)startMParticleOptions:(MPMTApiMParticleOptions *)options defaultConfigResponse:(MPMTModelsConfigResponseMessage * _Nullable)defaultConfigResponse __attribute__((swift_name("startMParticle(options:defaultConfigResponse:)")));
@property (readonly) MPMTApiClientPlatform *clientPlatform __attribute__((swift_name("clientPlatform")));
@property (readonly) BOOL keepSdkInstance __attribute__((swift_name("keepSdkInstance")));
@property int64_t mStartingMpid __attribute__((swift_name("mStartingMpid")));
@property (readonly) MPMTMockingPlatforms *mockingPlatforms __attribute__((swift_name("mockingPlatforms")));
@property (readonly) MPMTTestingPlatforms *testingPlatform __attribute__((swift_name("testingPlatform")));
@end;

__attribute__((swift_name("MockingBaseStartedTest")))
@interface MPMTMockingBaseStartedTest : MPMTMockingBaseTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)afterBeforeAll __attribute__((swift_name("afterBeforeAll()")));
- (MPMTApiMParticleOptions *)transformMParticleOptionsOptions:(MPMTApiMParticleOptions *)options __attribute__((swift_name("transformMParticleOptions(options:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommerceTests")))
@interface MPMTCommerceTests : MPMTMockingBaseStartedTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testCommerceImpressionEventAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testCommerceImpressionEvent()")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testCommerceProductEventAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testCommerceProductEvent()")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testCommercePromotionEventAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testCommercePromotionEvent()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MParticleOptionsTests")))
@interface MPMTMParticleOptionsTests : MPMTMockingBaseTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPMTApiMParticleOptions *)DefaultMParticleOptionsInitializer:(void (^)(MPMTApiMParticleOptions *))initializer __attribute__((swift_name("DefaultMParticleOptions(initializer:)")));
- (void)testApiKey __attribute__((swift_name("testApiKey()")));
- (void)testDataPlanId __attribute__((swift_name("testDataPlanId()")));
- (void)testDataPlanVersion __attribute__((swift_name("testDataPlanVersion()")));
- (void)testDeviceApplicationStamp __attribute__((swift_name("testDeviceApplicationStamp()")));
- (void)testLogLevel __attribute__((swift_name("testLogLevel()")));
- (void)testOptOutDefault __attribute__((swift_name("testOptOutDefault()")));
- (void)testSetProductionEnvironment __attribute__((swift_name("testSetProductionEnvironment()")));
- (void)testUploadIntervalDevelopment __attribute__((swift_name("testUploadIntervalDevelopment()")));
- (void)testUploadIntervalProduction __attribute__((swift_name("testUploadIntervalProduction()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleTests")))
@interface MPMTSampleTests : MPMTMockingBaseTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKeepSdkInstance:(BOOL)keepSdkInstance __attribute__((swift_name("init(keepSdkInstance:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testDefaultEnvironmentAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testDefaultEnvironment()")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testLogEventAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testLogEvent()")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testSetEnvironmentAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testSetEnvironment()")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testSetMpidAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testSetMpid()")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)testStartedAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("testStarted()")));
@end;

__attribute__((swift_name("IdentityTester")))
@protocol MPMTIdentityTester
@required
- (void)createIdentityRequestBeforeAnotherRequestIsMade __attribute__((swift_name("createIdentityRequestBeforeAnotherRequestIsMade()")));
- (void)testIdentityApiRequestWithCurrentUser __attribute__((swift_name("testIdentityApiRequestWithCurrentUser()")));
- (void)testIdentityApiRequestWithCurrentUserWithIds __attribute__((swift_name("testIdentityApiRequestWithCurrentUserWithIds()")));
- (void)testIdentityApiRequestWithNullUser __attribute__((swift_name("testIdentityApiRequestWithNullUser()")));
- (void)testIdentityRequestChangesIds __attribute__((swift_name("testIdentityRequestChangesIds()")));
- (void)testIdentityRequestWithIdsWhileCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWhileCurrentUserWithIds()")));
- (void)testIdentityRequestWithIdsWithCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWithCurrentUserWithIds()")));
- (void)testKeepExistingMpid __attribute__((swift_name("testKeepExistingMpid()")));
- (void)testNullRequest __attribute__((swift_name("testNullRequest()")));
- (void)testUpdateToNewMpid __attribute__((swift_name("testUpdateToNewMpid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentifyTests")))
@interface MPMTIdentifyTests : MPMTMockingBaseStartedTest <MPMTIdentityTester>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)createIdentityRequestBeforeAnotherRequestIsMade __attribute__((swift_name("createIdentityRequestBeforeAnotherRequestIsMade()")));
- (void)testIdentityApiRequestWithCurrentUser __attribute__((swift_name("testIdentityApiRequestWithCurrentUser()")));
- (void)testIdentityApiRequestWithCurrentUserWithIds __attribute__((swift_name("testIdentityApiRequestWithCurrentUserWithIds()")));
- (void)testIdentityApiRequestWithNullUser __attribute__((swift_name("testIdentityApiRequestWithNullUser()")));
- (void)testIdentityRequestChangesIds __attribute__((swift_name("testIdentityRequestChangesIds()")));
- (void)testIdentityRequestWithIdsWhileCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWhileCurrentUserWithIds()")));
- (void)testIdentityRequestWithIdsWithCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWithCurrentUserWithIds()")));
- (void)testKeepExistingMpid __attribute__((swift_name("testKeepExistingMpid()")));
- (void)testNullRequest __attribute__((swift_name("testNullRequest()")));
- (void)testUpdateToNewMpid __attribute__((swift_name("testUpdateToNewMpid()")));
@property (readonly) MPMTIdentityTests *identityTester __attribute__((swift_name("identityTester")));
@end;

__attribute__((swift_name("IdentityTests")))
@interface MPMTIdentityTests : MPMTMockingBaseStartedTest <MPMTIdentityTester>
- (instancetype)initWithIdentify_login_logout:(MPMTApiIdentityResponse *(^)(MPMTApiIdentityApi *, MPMTApiIdentityApiRequest * _Nullable))identify_login_logout identify_login_logoutEndpoint:(MPMTMockingEndpointType<MPMTModelsIdentityRequestMessage *, MPMTModelsIdentityResponseMessage *> *)identify_login_logoutEndpoint __attribute__((swift_name("init(identify_login_logout:identify_login_logoutEndpoint:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)createIdentityRequestBeforeAnotherRequestIsMade __attribute__((swift_name("createIdentityRequestBeforeAnotherRequestIsMade()")));
- (void)testIdentityApiRequestWithCurrentUser __attribute__((swift_name("testIdentityApiRequestWithCurrentUser()")));
- (void)testIdentityApiRequestWithCurrentUserWithIds __attribute__((swift_name("testIdentityApiRequestWithCurrentUserWithIds()")));
- (void)testIdentityApiRequestWithNullUser __attribute__((swift_name("testIdentityApiRequestWithNullUser()")));
- (void)testIdentityRequestChangesIds __attribute__((swift_name("testIdentityRequestChangesIds()")));
- (void)testIdentityRequestWithIdsWhileCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWhileCurrentUserWithIds()")));
- (void)testIdentityRequestWithIdsWithCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWithCurrentUserWithIds()")));
- (void)testKeepExistingMpid __attribute__((swift_name("testKeepExistingMpid()")));
- (void)testNullRequest __attribute__((swift_name("testNullRequest()")));
- (void)testUpdateToNewMpid __attribute__((swift_name("testUpdateToNewMpid()")));
@property (readonly) MPMTApiIdentityResponse *(^identify_login_logout)(MPMTApiIdentityApi *, MPMTApiIdentityApiRequest * _Nullable) __attribute__((swift_name("identify_login_logout")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsIdentityRequestMessage *, MPMTModelsIdentityResponseMessage *> *identify_login_logoutEndpoint __attribute__((swift_name("identify_login_logoutEndpoint")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginTests")))
@interface MPMTLoginTests : MPMTMockingBaseStartedTest <MPMTIdentityTester>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)createIdentityRequestBeforeAnotherRequestIsMade __attribute__((swift_name("createIdentityRequestBeforeAnotherRequestIsMade()")));
- (void)testIdentityApiRequestWithCurrentUser __attribute__((swift_name("testIdentityApiRequestWithCurrentUser()")));
- (void)testIdentityApiRequestWithCurrentUserWithIds __attribute__((swift_name("testIdentityApiRequestWithCurrentUserWithIds()")));
- (void)testIdentityApiRequestWithNullUser __attribute__((swift_name("testIdentityApiRequestWithNullUser()")));
- (void)testIdentityRequestChangesIds __attribute__((swift_name("testIdentityRequestChangesIds()")));
- (void)testIdentityRequestWithIdsWhileCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWhileCurrentUserWithIds()")));
- (void)testIdentityRequestWithIdsWithCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWithCurrentUserWithIds()")));
- (void)testKeepExistingMpid __attribute__((swift_name("testKeepExistingMpid()")));
- (void)testNullRequest __attribute__((swift_name("testNullRequest()")));
- (void)testUpdateToNewMpid __attribute__((swift_name("testUpdateToNewMpid()")));
@property (readonly) MPMTIdentityTests *identityTester __attribute__((swift_name("identityTester")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutTests")))
@interface MPMTLogoutTests : MPMTMockingBaseStartedTest <MPMTIdentityTester>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)createIdentityRequestBeforeAnotherRequestIsMade __attribute__((swift_name("createIdentityRequestBeforeAnotherRequestIsMade()")));
- (void)testIdentityApiRequestWithCurrentUser __attribute__((swift_name("testIdentityApiRequestWithCurrentUser()")));
- (void)testIdentityApiRequestWithCurrentUserWithIds __attribute__((swift_name("testIdentityApiRequestWithCurrentUserWithIds()")));
- (void)testIdentityApiRequestWithNullUser __attribute__((swift_name("testIdentityApiRequestWithNullUser()")));
- (void)testIdentityRequestChangesIds __attribute__((swift_name("testIdentityRequestChangesIds()")));
- (void)testIdentityRequestWithIdsWhileCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWhileCurrentUserWithIds()")));
- (void)testIdentityRequestWithIdsWithCurrentUserWithIds __attribute__((swift_name("testIdentityRequestWithIdsWithCurrentUserWithIds()")));
- (void)testKeepExistingMpid __attribute__((swift_name("testKeepExistingMpid()")));
- (void)testNullRequest __attribute__((swift_name("testNullRequest()")));
- (void)testUpdateToNewMpid __attribute__((swift_name("testUpdateToNewMpid()")));
@property (readonly) MPMTIdentityTests *identityTester __attribute__((swift_name("identityTester")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MPUserTests")))
@interface MPMTMPUserTests : MPMTMockingBaseStartedTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)testGetAttributeAsync __attribute__((swift_name("testGetAttributeAsync()")));
- (void)testGetAttributeSync __attribute__((swift_name("testGetAttributeSync()")));
- (void)testGetAttributeSyncWithAndroidHack __attribute__((swift_name("testGetAttributeSyncWithAndroidHack()")));
- (void)testIncrementDoubleAttribute __attribute__((swift_name("testIncrementDoubleAttribute()")));
- (void)testIncrementIntegerAttribute __attribute__((swift_name("testIncrementIntegerAttribute()")));
- (void)testIncrementLongAttribute __attribute__((swift_name("testIncrementLongAttribute()")));
- (void)testRemoveUserAttribute __attribute__((swift_name("testRemoveUserAttribute()")));
- (void)testUserAttributeBatchValues __attribute__((swift_name("testUserAttributeBatchValues()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifyTest")))
@interface MPMTModifyTest : MPMTMockingBaseStartedTest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)testModifyRequestAddNewIds __attribute__((swift_name("testModifyRequestAddNewIds()")));
- (void)testModifyRequestWithCurrentUserChangeExistingIds __attribute__((swift_name("testModifyRequestWithCurrentUserChangeExistingIds()")));
- (void)testModifyUpdatesIdChangeForNonCurrentUser __attribute__((swift_name("testModifyUpdatesIdChangeForNonCurrentUser()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiImpression")))
@interface MPMTApiImpression : MPMTBase
- (instancetype)initWithListName:(NSString *)listName product:(MPMTApiProduct *)product __attribute__((swift_name("init(listName:product:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithListName:(NSString *)listName products:(NSArray<MPMTApiProduct *> *)products __attribute__((swift_name("init(listName:products:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *listName __attribute__((swift_name("listName")));
@property NSArray<MPMTApiProduct *> *products __attribute__((swift_name("products")));
@end;

@interface MPMTApiImpression (Extensions)
- (void)assertMatchImpressionMessage:(MPMTModelsImpressionMessage *)impressionMessage __attribute__((swift_name("assertMatch(impressionMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiProduct")))
@interface MPMTApiProduct : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithProduct:(MPProduct *)product __attribute__((swift_name("init(product:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable brand __attribute__((swift_name("brand")));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property NSString * _Nullable couponCode __attribute__((swift_name("couponCode")));
@property NSDictionary<NSString *, NSString *> * _Nullable customAttributes __attribute__((swift_name("customAttributes")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property MPMTInt * _Nullable position __attribute__((swift_name("position")));
@property double price __attribute__((swift_name("price")));
@property (readonly) MPProduct *product __attribute__((swift_name("product")));
@property double quantity __attribute__((swift_name("quantity")));
@property NSString * _Nullable sku __attribute__((swift_name("sku")));
@property NSString * _Nullable variant __attribute__((swift_name("variant")));
@end;

@interface MPMTApiProduct (Extensions)
- (void)assertMatchProductMessage:(MPMTModelsProductMessage *)productMessage __attribute__((swift_name("assertMatch(productMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiPromotion")))
@interface MPMTApiPromotion : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPromotion:(MPPromotion *)promotion __attribute__((swift_name("init(promotion:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable creative __attribute__((swift_name("creative")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable position __attribute__((swift_name("position")));
@property (readonly) MPPromotion *promotion __attribute__((swift_name("promotion")));
@end;

@interface MPMTApiPromotion (Extensions)
- (void)assertMatchPromotionMessage:(MPMTModelsPromotionMessage *)promotionMessage __attribute__((swift_name("assertMatch(promotionMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommerceTestsKt")))
@interface MPMTCommerceTestsKt : MPMTBase
+ (void)assertMatch:(NSDictionary<id, id> *)receiver otherMap:(NSDictionary<id, id> *)otherMap __attribute__((swift_name("assertMatch(_:otherMap:)")));
@end;

__attribute__((swift_name("TestingAwaiter")))
@protocol MPMTTestingAwaiter
@required
- (void)awaitDescription:(NSString *)description timeout:(double)timeout __attribute__((swift_name("await(description:timeout:)")));
- (void)countdownDescription:(NSString *)description __attribute__((swift_name("countdown(description:)")));
- (void)initializeExpectationDescription:(NSString *)description __attribute__((swift_name("initializeExpectation(description:)")));
@end;

__attribute__((swift_name("ModelsDTO")))
@interface MPMTModelsDTO : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMTModelsDTOCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConfigResponseMessage")))
@interface MPMTModelsConfigResponseMessage : MPMTModelsDTO
- (instancetype)initWithType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPMTBoolean * _Nullable)debug timeStamp:(MPMTLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPMTInt * _Nullable)ramp optOut:(MPMTBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPMTLong * _Nullable)sessionTimeout uploadInterval:(MPMTLong * _Nullable)uploadInterval triggerItems:(MPMTModelsTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPMTLong * _Nullable)influenceOpenMessage aaidLat:(MPMTBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPMTBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPMTInt * _Nullable)aliasMaxWindow kits:(NSArray<MPMTModelsKitConfigMessage *> * _Nullable)kits includeSessionHistory:(MPMTBoolean * _Nullable)includeSessionHistory soc:(MPMTLong * _Nullable)soc __attribute__((swift_name("init(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:includeSessionHistory:soc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsConfigResponseMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPMTLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MPMTLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (MPMTModelsTriggerItemsMessage * _Nullable)component12 __attribute__((swift_name("component12()")));
- (MPMTLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (MPMTBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (MPMTBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (MPMTInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<MPMTModelsKitConfigMessage *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (MPMTBoolean * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMTLong * _Nullable)component20 __attribute__((swift_name("component20()")));
- (MPMTBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPMTLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPMTInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPMTBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MPMTModelsConfigResponseMessage *)doCopyType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPMTBoolean * _Nullable)debug timeStamp:(MPMTLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPMTInt * _Nullable)ramp optOut:(MPMTBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPMTLong * _Nullable)sessionTimeout uploadInterval:(MPMTLong * _Nullable)uploadInterval triggerItems:(MPMTModelsTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPMTLong * _Nullable)influenceOpenMessage aaidLat:(MPMTBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPMTBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPMTInt * _Nullable)aliasMaxWindow kits:(NSArray<MPMTModelsKitConfigMessage *> * _Nullable)kits includeSessionHistory:(MPMTBoolean * _Nullable)includeSessionHistory soc:(MPMTLong * _Nullable)soc __attribute__((swift_name("doCopy(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:includeSessionHistory:soc:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MPMTBoolean * _Nullable aaidLat __attribute__((swift_name("aaidLat")));
@property MPMTInt * _Nullable aliasMaxWindow __attribute__((swift_name("aliasMaxWindow")));
@property MPMTBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property MPMTBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPMTBoolean * _Nullable includeSessionHistory __attribute__((swift_name("includeSessionHistory")));
@property MPMTLong * _Nullable influenceOpenMessage __attribute__((swift_name("influenceOpenMessage")));
@property NSArray<MPMTModelsKitConfigMessage *> * _Nullable kits __attribute__((swift_name("kits")));
@property NSString * _Nullable logUnhandledExceptions __attribute__((swift_name("logUnhandledExceptions")));
@property MPMTBoolean * _Nullable optOut __attribute__((swift_name("optOut")));
@property NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property NSArray<id> * _Nullable pushMessages __attribute__((swift_name("pushMessages")));
@property MPMTInt * _Nullable ramp __attribute__((swift_name("ramp")));
@property MPMTLong * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property MPMTLong * _Nullable soc __attribute__((swift_name("soc")));
@property MPMTLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@property MPMTModelsTriggerItemsMessage * _Nullable triggerItems __attribute__((swift_name("triggerItems")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property MPMTLong * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@property NSString * _Nullable workspaceToken __attribute__((swift_name("workspaceToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMParticleOptions")))
@interface MPMTApiMParticleOptions : MPMTBase
- (instancetype)initWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret clientPlatform:(MPMTApiClientPlatform *)clientPlatform __attribute__((swift_name("init(apiKey:apiSecret:clientPlatform:)"))) __attribute__((objc_designated_initializer));
@property MPMTBoolean * _Nullable androidIdDisabled __attribute__((swift_name("androidIdDisabled")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString *apiSecret __attribute__((swift_name("apiSecret")));
@property NSString * _Nullable dataplanId __attribute__((swift_name("dataplanId")));
@property MPMTApiDataplanOptions * _Nullable dataplanOptions __attribute__((swift_name("dataplanOptions")));
@property MPMTInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@property MPMTBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property MPMTBoolean * _Nullable enableUncaughtExceptionLogging __attribute__((swift_name("enableUncaughtExceptionLogging")));
@property MPMTApiEnvironment * _Nullable environment __attribute__((swift_name("environment")));
@property MPMTApiIdentityApiRequest * _Nullable identifyRequest __attribute__((swift_name("identifyRequest")));
@property MPMTApiIdentityResponse * _Nullable identifyTask __attribute__((swift_name("identifyTask")));
@property MPMTInt * _Nullable identityConnectionTimeout __attribute__((swift_name("identityConnectionTimeout")));
@property MPMTApiInstallType * _Nullable installType __attribute__((swift_name("installType")));
@property MPMTApiLocationTracking * _Nullable locationTracking __attribute__((swift_name("locationTracking")));
@property MPMTApiLogLevel * _Nullable logLevel __attribute__((swift_name("logLevel")));
@property MPMTApiNetworkOptions * _Nullable networkOptions __attribute__((swift_name("networkOptions")));
@property (readonly) MParticleOptions *options __attribute__((swift_name("options")));
@property NSString * _Nullable pushRegistrationInstanceId __attribute__((swift_name("pushRegistrationInstanceId")));
@property NSString * _Nullable pushRegistrationSenderId __attribute__((swift_name("pushRegistrationSenderId")));
@property MPMTInt * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property MPMTInt * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@end;

__attribute__((swift_name("ApiClientPlatform")))
@interface MPMTApiClientPlatform : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("MockingPlatforms")))
@interface MPMTMockingPlatforms : MPMTBase
- (instancetype)initWithClientPlatform:(MPMTApiClientPlatform *)clientPlatform __attribute__((swift_name("init(clientPlatform:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, NSArray<NSDictionary<NSString *, id> *> *> *)getDatabaseContents __attribute__((swift_name("getDatabaseContents()")));
- (NSDictionary<NSString *, NSArray<NSDictionary<NSString *, id> *> *> *)getDatabaseContentsTables:(NSArray<NSString *> * _Nullable)tables __attribute__((swift_name("getDatabaseContents(tables:)")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)getDatabaseSchema __attribute__((swift_name("getDatabaseSchema()")));
- (void)injectMockServer __attribute__((swift_name("injectMockServer()")));
- (void)prepareThread __attribute__((swift_name("prepareThread()")));
- (void)sendBackground __attribute__((swift_name("sendBackground()")));
- (void)sendForeground __attribute__((swift_name("sendForeground()")));
- (void)setCachedConfigConfigMessage:(MPMTModelsConfigResponseMessage * _Nullable)configMessage __attribute__((swift_name("setCachedConfig(configMessage:)")));
@end;

__attribute__((swift_name("TestingPlatforms")))
@interface MPMTTestingPlatforms : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)currentThread __attribute__((swift_name("currentThread()")));
- (BOOL)isServerThread __attribute__((swift_name("isServerThread()")));
- (void)prepareThread __attribute__((swift_name("prepareThread()")));
- (id _Nullable)runInForegroundRunnable:(id _Nullable (^)(void))runnable __attribute__((swift_name("runInForeground(runnable:)")));
- (void)sleepMillis:(int64_t)millis __attribute__((swift_name("sleep(millis:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MPMTKotlinThrowable : MPMTBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPMTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPMTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPMTKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPMTKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("ApiIdentityResponse")))
@interface MPMTApiIdentityResponse : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPMTApiIdentityResponse *)addFailureListenerListener:(void (^)(MPMTApiIdentityHttpResponse * _Nullable))listener __attribute__((swift_name("addFailureListener(listener:)")));
- (MPMTApiIdentityResponse *)addSuccessListenerListener:(void (^)(MPMTApiMParticleUser *, MPMTApiMParticleUser * _Nullable))listener __attribute__((swift_name("addSuccessListener(listener:)")));
@property (readonly) NSMutableArray<MPMTKotlinUnit *(^)(MPMTApiIdentityHttpResponse * _Nullable)> *failureListeners __attribute__((swift_name("failureListeners")));
@property (readonly) NSMutableArray<MPMTKotlinUnit *(^)(MPMTApiMParticleUser *, MPMTApiMParticleUser * _Nullable)> *successListeners __attribute__((swift_name("successListeners")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityApi")))
@interface MPMTApiIdentityApi : MPMTBase
- (instancetype)initWithIdentityApi:(MPIdentityApi *)identityApi __attribute__((swift_name("init(identityApi:)"))) __attribute__((objc_designated_initializer));
- (MPMTApiMParticleUser * _Nullable)getUserMpid:(int64_t)mpid __attribute__((swift_name("getUser(mpid:)")));
- (MPMTApiIdentityResponse *)identifyRequest:(MPMTApiIdentityApiRequest * _Nullable)request __attribute__((swift_name("identify(request:)")));
- (MPMTApiIdentityResponse *)loginRequest:(MPMTApiIdentityApiRequest * _Nullable)request __attribute__((swift_name("login(request:)")));
- (MPMTApiIdentityResponse *)logoutRequest:(MPMTApiIdentityApiRequest * _Nullable)request __attribute__((swift_name("logout(request:)")));
- (MPMTApiIdentityResponse *)modifyRequest:(MPMTApiIdentityApiRequest *)request __attribute__((swift_name("modify(request:)")));
@property (readonly) NSArray<MPMTApiMParticleUser *> *allUsers __attribute__((swift_name("allUsers")));
@property (readonly) MPMTApiMParticleUser * _Nullable currentUser __attribute__((swift_name("currentUser")));
@property (readonly) MPIdentityApi *identityApi __attribute__((swift_name("identityApi")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityApiRequest")))
@interface MPMTApiIdentityApiRequest : MPMTBase
- (instancetype)initWithUser:(MPMTApiMParticleUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIdentityApiRequest:(MPIdentityApiRequest *)identityApiRequest __attribute__((swift_name("init(identityApiRequest:)"))) __attribute__((objc_designated_initializer));
- (void)addIdentityKey:(MPMTApiIdentityType *)key value:(NSString * _Nullable)value __attribute__((swift_name("addIdentity(key:value:)")));
@property NSDictionary<MPMTApiIdentityType *, id> *identities __attribute__((swift_name("identities")));
@property (readonly) MPIdentityApiRequest *identityApiRequest __attribute__((swift_name("identityApiRequest")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityRequestMessage")))
@interface MPMTModelsIdentityRequestMessage : MPMTModelsDTO
- (instancetype)initWithClientSdk:(MPMTModelsClientSdkMessage * _Nullable)clientSdk context:(NSString * _Nullable)context environment:(NSString * _Nullable)environment requestId:(NSString * _Nullable)requestId requestTimestamp:(MPMTLong * _Nullable)requestTimestamp previousMpid:(MPMTLong * _Nullable)previousMpid knownIdentities:(NSDictionary<NSString *, id> * _Nullable)knownIdentities identityChanges:(NSArray<MPMTModelsIdentityChange *> * _Nullable)identityChanges __attribute__((swift_name("init(clientSdk:context:environment:requestId:requestTimestamp:previousMpid:knownIdentities:identityChanges:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsIdentityRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTModelsClientSdkMessage * _Nullable clientSdk __attribute__((swift_name("clientSdk")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) NSArray<MPMTModelsIdentityChange *> * _Nullable identityChanges __attribute__((swift_name("identityChanges")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable knownIdentities __attribute__((swift_name("knownIdentities")));
@property (readonly) MPMTLong * _Nullable previousMpid __attribute__((swift_name("previousMpid")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) MPMTLong * _Nullable requestTimestamp __attribute__((swift_name("requestTimestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityResponseMessage")))
@interface MPMTModelsIdentityResponseMessage : MPMTModelsDTO
- (instancetype)initWithMpid:(NSString *)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMpid:(MPMTLong * _Nullable)mpid context:(NSString * _Nullable)context errors:(NSArray<MPMTModelsError *> * _Nullable)errors isLoggedIn:(MPMTBoolean * _Nullable)isLoggedIn __attribute__((swift_name("init(mpid:context:errors:isLoggedIn:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsIdentityResponseMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSArray<MPMTModelsError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) MPMTBoolean * _Nullable isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) MPMTLong * _Nullable mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockingEndpointType")))
@interface MPMTMockingEndpointType<T, R> : MPMTBase
@property (class, readonly, getter=companion) MPMTMockingEndpointTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsImpressionMessage")))
@interface MPMTModelsImpressionMessage : MPMTModelsDTO
- (instancetype)initWithName:(NSString *)name productList:(NSArray<MPMTModelsProductMessage *> *)productList __attribute__((swift_name("init(name:productList:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsImpressionMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MPMTModelsProductMessage *> *productList __attribute__((swift_name("productList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProductMessage")))
@interface MPMTModelsProductMessage : MPMTModelsDTO
- (instancetype)initWithName:(NSString *)name category:(NSString * _Nullable)category couponCode:(NSString * _Nullable)couponCode sku:(NSString * _Nullable)sku position:(MPMTInt * _Nullable)position price:(MPMTDouble * _Nullable)price quantity:(MPMTDouble * _Nullable)quantity timeAdded:(MPMTLong * _Nullable)timeAdded totalAmount:(MPMTDouble * _Nullable)totalAmount brand:(NSString * _Nullable)brand variant:(NSString * _Nullable)variant customAttributes:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)customAttributes __attribute__((swift_name("init(name:category:couponCode:sku:position:price:quantity:timeAdded:totalAmount:brand:variant:customAttributes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsProductMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable couponCode __attribute__((swift_name("couponCode")));
@property (readonly) NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable customAttributes __attribute__((swift_name("customAttributes")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPMTInt * _Nullable position __attribute__((swift_name("position")));
@property (readonly) MPMTDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) MPMTDouble * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable sku __attribute__((swift_name("sku")));
@property (readonly) MPMTLong * _Nullable timeAdded __attribute__((swift_name("timeAdded")));
@property (readonly) MPMTDouble * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) NSString * _Nullable variant __attribute__((swift_name("variant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsPromotionMessage")))
@interface MPMTModelsPromotionMessage : MPMTModelsDTO
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name creative:(NSString * _Nullable)creative position:(NSString * _Nullable)position __attribute__((swift_name("init(id:name:creative:position:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsPromotionMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable creative __attribute__((swift_name("creative")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDTO.Companion")))
@interface MPMTModelsDTOCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsDTOCompanion *shared __attribute__((swift_name("shared")));
- (MPMTModelsDTO *)fromString:(NSString *)string __attribute__((swift_name("from(string:)")));
@property (readonly) MPMTKotlinx_serialization_jsonJson *batchJsonBuilder __attribute__((swift_name("batchJsonBuilder")));
@property (readonly) MPMTKotlinx_serialization_jsonJson *jsonBuilder __attribute__((swift_name("jsonBuilder")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MPMTKotlinx_serialization_jsonJsonElement : MPMTBase
@property (class, readonly, getter=companion) MPMTKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsTriggerItemsMessage")))
@interface MPMTModelsTriggerItemsMessage : MPMTModelsDTO
- (instancetype)initWithTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("init(triggerMatches:triggerMessageHashes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsTriggerItemsMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMTModelsTriggerItemsMessage *)doCopyTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("doCopy(triggerMatches:triggerMessageHashes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable triggerMatches __attribute__((swift_name("triggerMatches")));
@property NSArray<NSString *> * _Nullable triggerMessageHashes __attribute__((swift_name("triggerMessageHashes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsKitConfigMessage")))
@interface MPMTModelsKitConfigMessage : MPMTModelsDTO
- (instancetype)initWithId:(int32_t)id attributeValueFilters:(NSArray<id> * _Nullable)attributeValueFilters properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPMTModelsFilterMessage * _Nullable)keyFilters bracketing:(MPMTModelsBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPMTModelsConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPMTBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("init(id:attributeValueFilters:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsKitConfigMessageCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<id> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPMTModelsFilterMessage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MPMTModelsBracketMessage * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPMTModelsConsentForwardingRuleMessage * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPMTBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MPMTModelsKitConfigMessage *)doCopyId:(int32_t)id attributeValueFilters:(NSArray<id> * _Nullable)attributeValueFilters properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPMTModelsFilterMessage * _Nullable)keyFilters bracketing:(MPMTModelsBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPMTModelsConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPMTBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("doCopy(id:attributeValueFilters:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<id> * _Nullable attributeValueFilters __attribute__((swift_name("attributeValueFilters")));
@property MPMTModelsBracketMessage * _Nullable bracketing __attribute__((swift_name("bracketing")));
@property MPMTModelsConsentForwardingRuleMessage * _Nullable consentForwardingRules __attribute__((swift_name("consentForwardingRules")));
@property MPMTBoolean * _Nullable excludeAnnonymousUsers __attribute__((swift_name("excludeAnnonymousUsers")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property MPMTModelsFilterMessage * _Nullable keyFilters __attribute__((swift_name("keyFilters")));
@property NSArray<NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> *> * _Nullable projections __attribute__((swift_name("projections")));
@property NSDictionary<id, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConfigResponseMessage.Companion")))
@interface MPMTModelsConfigResponseMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsConfigResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiDataplanOptions")))
@interface MPMTApiDataplanOptions : MPMTBase
- (instancetype)initWithDataplanOptions:(MPDataPlanOptions *)dataplanOptions __attribute__((swift_name("init(dataplanOptions:)"))) __attribute__((objc_designated_initializer));
@property BOOL blockEventAttributes __attribute__((swift_name("blockEventAttributes")));
@property BOOL blockEvents __attribute__((swift_name("blockEvents")));
@property BOOL blockUserAttributes __attribute__((swift_name("blockUserAttributes")));
@property BOOL blockUserIdentities __attribute__((swift_name("blockUserIdentities")));
@property NSString * _Nullable dataplan __attribute__((swift_name("dataplan")));
@property (readonly) MPDataPlanOptions *dataplanOptions __attribute__((swift_name("dataplanOptions")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MPMTKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MPMTKotlinEnum<E> : MPMTBase <MPMTKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiEnvironment")))
@interface MPMTApiEnvironment : MPMTKotlinEnum<MPMTApiEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMTApiEnvironment *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPMTApiEnvironment *development __attribute__((swift_name("development")));
@property (class, readonly) MPMTApiEnvironment *production __attribute__((swift_name("production")));
+ (MPMTKotlinArray<MPMTApiEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiInstallType")))
@interface MPMTApiInstallType : MPMTKotlinEnum<MPMTApiInstallType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMTApiInstallType *autodetect __attribute__((swift_name("autodetect")));
@property (class, readonly) MPMTApiInstallType *kowninstall __attribute__((swift_name("kowninstall")));
@property (class, readonly) MPMTApiInstallType *knownupgrde __attribute__((swift_name("knownupgrde")));
+ (MPMTKotlinArray<MPMTApiInstallType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiLocationTracking")))
@interface MPMTApiLocationTracking : MPMTBase
- (instancetype)initWithProvider:(NSString *)provider minTime:(int64_t)minTime minDistance:(int64_t)minDistance __attribute__((swift_name("init(provider:minTime:minDistance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t minDistance __attribute__((swift_name("minDistance")));
@property (readonly) int64_t minTime __attribute__((swift_name("minTime")));
@property (readonly) NSString *provider __attribute__((swift_name("provider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiLogLevel")))
@interface MPMTApiLogLevel : MPMTKotlinEnum<MPMTApiLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMTApiLogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) MPMTApiLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MPMTApiLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) MPMTApiLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MPMTApiLogLevel *verbose __attribute__((swift_name("verbose")));
+ (MPMTKotlinArray<MPMTApiLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) uint64_t apple __attribute__((swift_name("apple")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiNetworkOptions")))
@interface MPMTApiNetworkOptions : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithNetworkOptions:(MPNetworkOptions *)networkOptions __attribute__((swift_name("init(networkOptions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPNetworkOptions *networkOptions __attribute__((swift_name("networkOptions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPMTKotlinArray<T> : MPMTBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPMTInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPMTKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityHttpResponse")))
@interface MPMTApiIdentityHttpResponse : MPMTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable context __attribute__((swift_name("context")));
@property NSArray<MPMTApiError *> *errors __attribute__((swift_name("errors")));
@property int32_t httpCode __attribute__((swift_name("httpCode")));
@property BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property int64_t mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMParticleUser")))
@interface MPMTApiMParticleUser : MPMTBase
- (instancetype)initWithUser:(MParticleUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (MPMTApiConsentState *)getConsentState __attribute__((swift_name("getConsentState()")));
- (int64_t)getFirstSeenTime __attribute__((swift_name("getFirstSeenTime()")));
- (int64_t)getLastSeenTime __attribute__((swift_name("getLastSeenTime()")));
- (NSDictionary<NSString *, id> *)getUserAttributes __attribute__((swift_name("getUserAttributes()")));
- (NSDictionary<NSString *, id> * _Nullable)getUserAttributesListener:(id<MPMTApiUserAttributeListener> _Nullable)listener __attribute__((swift_name("getUserAttributes(listener:)")));
- (NSDictionary<MPMTApiIdentityType *, NSString *> *)getUserIdentities __attribute__((swift_name("getUserIdentities()")));
- (BOOL)incrementUserAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("incrementUserAttribute(key:value:)")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (BOOL)removeUserAttributeKey:(NSString *)key __attribute__((swift_name("removeUserAttribute(key:)")));
- (void)setConsentStateState:(MPMTApiConsentState * _Nullable)state __attribute__((swift_name("setConsentState(state:)")));
- (BOOL)setUserAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttribute(key:value:)")));
- (BOOL)setUserAttributeListKey:(NSString *)key value:(id)value __attribute__((swift_name("setUserAttributeList(key:value:)")));
- (BOOL)setUserAttributesUserAttributes:(NSDictionary<NSString *, id> *)userAttributes __attribute__((swift_name("setUserAttributes(userAttributes:)")));
- (BOOL)setUserTagTag:(NSString *)tag __attribute__((swift_name("setUserTag(tag:)")));
- (NSNumber *)toNSNumber:(id)receiver __attribute__((swift_name("toNSNumber(_:)")));
@property (readonly) int64_t mpid __attribute__((swift_name("mpid")));
@property (readonly) MParticleUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MPMTKotlinUnit : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiIdentityType")))
@interface MPMTApiIdentityType : MPMTKotlinEnum<MPMTApiIdentityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPMTApiIdentityType *other __attribute__((swift_name("other")));
@property (class, readonly) MPMTApiIdentityType *customerid __attribute__((swift_name("customerid")));
@property (class, readonly) MPMTApiIdentityType *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) MPMTApiIdentityType *twitter __attribute__((swift_name("twitter")));
@property (class, readonly) MPMTApiIdentityType *google __attribute__((swift_name("google")));
@property (class, readonly) MPMTApiIdentityType *microsoft __attribute__((swift_name("microsoft")));
@property (class, readonly) MPMTApiIdentityType *yahoo __attribute__((swift_name("yahoo")));
@property (class, readonly) MPMTApiIdentityType *email __attribute__((swift_name("email")));
@property (class, readonly) MPMTApiIdentityType *alias __attribute__((swift_name("alias")));
@property (class, readonly) MPMTApiIdentityType *facebookcustomaudienceid __attribute__((swift_name("facebookcustomaudienceid")));
@property (class, readonly) MPMTApiIdentityType *other2 __attribute__((swift_name("other2")));
@property (class, readonly) MPMTApiIdentityType *other3 __attribute__((swift_name("other3")));
@property (class, readonly) MPMTApiIdentityType *other4 __attribute__((swift_name("other4")));
@property (class, readonly) MPMTApiIdentityType *other5 __attribute__((swift_name("other5")));
@property (class, readonly) MPMTApiIdentityType *other6 __attribute__((swift_name("other6")));
@property (class, readonly) MPMTApiIdentityType *other7 __attribute__((swift_name("other7")));
@property (class, readonly) MPMTApiIdentityType *other8 __attribute__((swift_name("other8")));
@property (class, readonly) MPMTApiIdentityType *other9 __attribute__((swift_name("other9")));
@property (class, readonly) MPMTApiIdentityType *other10 __attribute__((swift_name("other10")));
@property (class, readonly) MPMTApiIdentityType *mobilenumber __attribute__((swift_name("mobilenumber")));
@property (class, readonly) MPMTApiIdentityType *phonenumber2 __attribute__((swift_name("phonenumber2")));
@property (class, readonly) MPMTApiIdentityType *phonenumber3 __attribute__((swift_name("phonenumber3")));
+ (MPMTKotlinArray<MPMTApiIdentityType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsClientSdkMessage")))
@interface MPMTModelsClientSdkMessage : MPMTModelsDTO
- (instancetype)initWithPlatform:(NSString * _Nullable)platform sdkVendor:(NSString * _Nullable)sdkVendor sdkVersion:(NSString * _Nullable)sdkVersion __attribute__((swift_name("init(platform:sdkVendor:sdkVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsClientSdkMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable sdkVendor __attribute__((swift_name("sdkVendor")));
@property (readonly) NSString * _Nullable sdkVersion __attribute__((swift_name("sdkVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityChange")))
@interface MPMTModelsIdentityChange : MPMTModelsDTO
- (instancetype)initWithNewValue:(NSString * _Nullable)newValue oldValue:(NSString * _Nullable)oldValue identityType:(NSString * _Nullable)identityType __attribute__((swift_name("init(newValue:oldValue:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsIdentityChangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable identityType __attribute__((swift_name("identityType")));
@property (readonly, getter=doNewValue) NSString * _Nullable newValue __attribute__((swift_name("newValue")));
@property (readonly) NSString * _Nullable oldValue __attribute__((swift_name("oldValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityRequestMessage.Companion")))
@interface MPMTModelsIdentityRequestMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsIdentityRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsError")))
@interface MPMTModelsError : MPMTModelsDTO
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMTModelsError *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityResponseMessage.Companion")))
@interface MPMTModelsIdentityResponseMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsIdentityResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockingEndpointTypeCompanion")))
@interface MPMTMockingEndpointTypeCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTMockingEndpointTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsAliasRequestMessage *, MPMTModelsEmpty *> *Alias __attribute__((swift_name("Alias")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsEmpty *, MPMTModelsConfigResponseMessage *> *Config __attribute__((swift_name("Config")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsBatchMessage *, MPMTModelsEmpty *> *Events __attribute__((swift_name("Events")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsIdentityRequestMessage *, MPMTModelsIdentityResponseMessage *> *Identity_Identify __attribute__((swift_name("Identity_Identify")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsIdentityRequestMessage *, MPMTModelsIdentityResponseMessage *> *Identity_Login __attribute__((swift_name("Identity_Login")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsIdentityRequestMessage *, MPMTModelsIdentityResponseMessage *> *Identity_Logout __attribute__((swift_name("Identity_Logout")));
@property (readonly) MPMTMockingEndpointType<MPMTModelsIdentityRequestMessage *, MPMTModelsIdentityResponseMessage *> *Identity_Modify __attribute__((swift_name("Identity_Modify")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsImpressionMessage.Companion")))
@interface MPMTModelsImpressionMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsImpressionMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProductMessage.Companion")))
@interface MPMTModelsProductMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsProductMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsPromotionMessage.Companion")))
@interface MPMTModelsPromotionMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsPromotionMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol MPMTKotlinx_serialization_coreSerialFormat
@required
@property (readonly) MPMTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol MPMTKotlinx_serialization_coreStringFormat <MPMTKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface MPMTKotlinx_serialization_jsonJson : MPMTBase <MPMTKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) MPMTKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(MPMTKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MPMTKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MPMTKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MPMTKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MPMTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MPMTKotlinx_serialization_jsonJsonElementCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsTriggerItemsMessage.Companion")))
@interface MPMTModelsTriggerItemsMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsTriggerItemsMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsFilterMessage")))
@interface MPMTModelsFilterMessage : MPMTModelsDTO
- (instancetype)initWithEventTypesFilter:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)eventTypesFilter eventNameFilters:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)eventNameFilters eventAttributeFilter:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)eventAttributeFilter screenNameFilters:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)screenNameFilters screenAttributeFilters:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)screenAttributeFilters userIdentityFilter:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)userIdentityFilter userAttributeFilter:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)userAttributeFilter commerceAttributeFilter:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)commerceAttributeFilter commerceEntityFilter:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)commerceEntityFilter commerceEntityAttributeFilters:(NSDictionary<MPMTInt *, NSDictionary<MPMTInt *, MPMTBoolean *> *> * _Nullable)commerceEntityAttributeFilters eventAttributeAddUser:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)eventAttributeAddUser eventAttributeSingleItemUser:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)eventAttributeSingleItemUser eventAttributeRemoveUser:(NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable)eventAttributeRemoveUser __attribute__((swift_name("init(eventTypesFilter:eventNameFilters:eventAttributeFilter:screenNameFilters:screenAttributeFilters:userIdentityFilter:userAttributeFilter:commerceAttributeFilter:commerceEntityFilter:commerceEntityAttributeFilters:eventAttributeAddUser:eventAttributeSingleItemUser:eventAttributeRemoveUser:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsFilterMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable commerceAttributeFilter __attribute__((swift_name("commerceAttributeFilter")));
@property NSDictionary<MPMTInt *, NSDictionary<MPMTInt *, MPMTBoolean *> *> * _Nullable commerceEntityAttributeFilters __attribute__((swift_name("commerceEntityAttributeFilters")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable commerceEntityFilter __attribute__((swift_name("commerceEntityFilter")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable eventAttributeAddUser __attribute__((swift_name("eventAttributeAddUser")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable eventAttributeFilter __attribute__((swift_name("eventAttributeFilter")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable eventAttributeRemoveUser __attribute__((swift_name("eventAttributeRemoveUser")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable eventAttributeSingleItemUser __attribute__((swift_name("eventAttributeSingleItemUser")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable eventNameFilters __attribute__((swift_name("eventNameFilters")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable eventTypesFilter __attribute__((swift_name("eventTypesFilter")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable screenAttributeFilters __attribute__((swift_name("screenAttributeFilters")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable screenNameFilters __attribute__((swift_name("screenNameFilters")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable userAttributeFilter __attribute__((swift_name("userAttributeFilter")));
@property NSDictionary<MPMTInt *, MPMTBoolean *> * _Nullable userIdentityFilter __attribute__((swift_name("userIdentityFilter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBracketMessage")))
@interface MPMTModelsBracketMessage : MPMTModelsDTO
- (instancetype)initWithLowBracket:(MPMTInt * _Nullable)lowBracket highBracket:(MPMTInt * _Nullable)highBracket __attribute__((swift_name("init(lowBracket:highBracket:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsBracketMessageCompanion *companion __attribute__((swift_name("companion")));
@property MPMTInt * _Nullable highBracket __attribute__((swift_name("highBracket")));
@property MPMTInt * _Nullable lowBracket __attribute__((swift_name("lowBracket")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentForwardingRuleMessage")))
@interface MPMTModelsConsentForwardingRuleMessage : MPMTModelsDTO
- (instancetype)initWithShouldIncludeMatches:(MPMTBoolean * _Nullable)shouldIncludeMatches rules:(NSArray<MPMTModelsRules *> * _Nullable)rules __attribute__((swift_name("init(shouldIncludeMatches:rules:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsConsentForwardingRuleMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<MPMTModelsRules *> * _Nullable rules __attribute__((swift_name("rules")));
@property MPMTBoolean * _Nullable shouldIncludeMatches __attribute__((swift_name("shouldIncludeMatches")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsKitConfigMessage.Companion")))
@interface MPMTModelsKitConfigMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsKitConfigMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MPMTKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MPMTKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MPMTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MPMTKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MPMTKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MPMTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MPMTKotlinx_serialization_coreKSerializer <MPMTKotlinx_serialization_coreSerializationStrategy, MPMTKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MPMTKotlinEnumCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPMTKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError")))
@interface MPMTApiError : MPMTBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConsentState")))
@interface MPMTApiConsentState : MPMTBase
- (instancetype)initWithConsentState:(MPConsentState *)consentState __attribute__((swift_name("init(consentState:)"))) __attribute__((objc_designated_initializer));
- (MPCCPAConsent *)toCCPAConsent:(MPMTApiConsent *)receiver __attribute__((swift_name("toCCPAConsent(_:)")));
- (MPGDPRConsent *)toGDPRConsent:(MPMTApiConsent *)receiver __attribute__((swift_name("toGDPRConsent(_:)")));
@property MPMTApiConsent * _Nullable ccpaConsent __attribute__((swift_name("ccpaConsent")));
@property (readonly) MPConsentState *consentState __attribute__((swift_name("consentState")));
@property MPMTMutableDictionary<NSString *, MPMTApiConsent *> * _Nullable gdprConsentState __attribute__((swift_name("gdprConsentState")));
@end;

__attribute__((swift_name("ApiUserAttributeListener")))
@protocol MPMTApiUserAttributeListener
@required
- (void)onUserAttributesReceivedUserAttributes:(NSDictionary<NSString *, id> * _Nullable)userAttributes userAttributeLists:(NSDictionary<NSString *, NSArray<id> *> * _Nullable)userAttributeLists mpid:(MPMTLong * _Nullable)mpid __attribute__((swift_name("onUserAttributesReceived(userAttributes:userAttributeLists:mpid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsClientSdkMessage.Companion")))
@interface MPMTModelsClientSdkMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsClientSdkMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsIdentityChange.Companion")))
@interface MPMTModelsIdentityChangeCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsIdentityChangeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsError.Companion")))
@interface MPMTModelsErrorCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasRequestMessage")))
@interface MPMTModelsAliasRequestMessage : MPMTModelsDTO
- (instancetype)initWithStartTime:(MPMTLong * _Nullable)startTime endTime:(MPMTLong * _Nullable)endTime data:(MPMTModelsAliasDataMessage *)data requestType:(NSString * _Nullable)requestType requestId:(NSString * _Nullable)requestId aliasEnvironment:(NSString * _Nullable)aliasEnvironment apiKey:(NSString *)apiKey __attribute__((swift_name("init(startTime:endTime:data:requestType:requestId:aliasEnvironment:apiKey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsAliasRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable aliasEnvironment __attribute__((swift_name("aliasEnvironment")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) MPMTModelsAliasDataMessage *data __attribute__((swift_name("data")));
@property (readonly) MPMTLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) NSString * _Nullable requestType __attribute__((swift_name("requestType")));
@property (readonly) MPMTLong * _Nullable startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((swift_name("ModelsEmpty")))
@interface MPMTModelsEmpty : MPMTModelsDTO
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMTModelsEmptyCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBatchMessage")))
@interface MPMTModelsBatchMessage : MPMTModelsDTO
- (instancetype)initWithEcho:(MPMTBoolean * _Nullable)echo type:(NSString * _Nullable)type id:(NSString * _Nullable)id timestamp:(MPMTLong * _Nullable)timestamp mparticleVersion:(NSString * _Nullable)mparticleVersion optOutHeader:(MPMTBoolean * _Nullable)optOutHeader configUploadInterval:(MPMTInt * _Nullable)configUploadInterval configSessionTimeout:(MPMTInt * _Nullable)configSessionTimeout mpid:(NSString * _Nullable)mpid sandbox:(MPMTBoolean * _Nullable)sandbox deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp deletedUserAttributes:(NSArray<NSString *> * _Nullable)deletedUserAttributes cookies:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)cookies providerPersistence:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence integrationAttributes:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)integrationAttributes consentState:(MPMTModelsConsentStateMessage * _Nullable)consentState dataplanContext:(MPMTModelsDataplanContextMessage * _Nullable)dataplanContext messages:(NSArray<MPMTModelsBaseEvent *> *)messages reportingMessages:(NSArray<MPMTModelsReportingMessageMessage *> * _Nullable)reportingMessages appInfo:(MPMTModelsAppInfoMessage * _Nullable)appInfo deviceInfo:(MPMTModelsDeviceInfoMessage * _Nullable)deviceInfo identities:(NSArray<MPMTModelsUserIdentities *> * _Nullable)identities attributes:(NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes sessionHistory:(NSArray<MPMTModelsBaseEvent *> *)sessionHistory __attribute__((swift_name("init(echo:type:id:timestamp:mparticleVersion:optOutHeader:configUploadInterval:configSessionTimeout:mpid:sandbox:deviceApplicationStamp:deletedUserAttributes:cookies:providerPersistence:integrationAttributes:consentState:dataplanContext:messages:reportingMessages:appInfo:deviceInfo:identities:attributes:sessionHistory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsBatchMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTModelsAppInfoMessage * _Nullable appInfo __attribute__((swift_name("appInfo")));
@property (readonly) NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) MPMTInt * _Nullable configSessionTimeout __attribute__((swift_name("configSessionTimeout")));
@property (readonly) MPMTInt * _Nullable configUploadInterval __attribute__((swift_name("configUploadInterval")));
@property (readonly) MPMTModelsConsentStateMessage * _Nullable consentState __attribute__((swift_name("consentState")));
@property (readonly) NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable cookies __attribute__((swift_name("cookies")));
@property (readonly) MPMTModelsDataplanContextMessage * _Nullable dataplanContext __attribute__((swift_name("dataplanContext")));
@property (readonly) NSArray<NSString *> * _Nullable deletedUserAttributes __attribute__((swift_name("deletedUserAttributes")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPMTModelsDeviceInfoMessage * _Nullable deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) MPMTBoolean * _Nullable echo __attribute__((swift_name("echo")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<MPMTModelsUserIdentities *> * _Nullable identities __attribute__((swift_name("identities")));
@property (readonly) NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable integrationAttributes __attribute__((swift_name("integrationAttributes")));
@property (readonly) NSArray<MPMTModelsBaseEvent *> *messages __attribute__((swift_name("messages")));
@property (readonly) NSString * _Nullable mparticleVersion __attribute__((swift_name("mparticleVersion")));
@property (readonly) NSString * _Nullable mpid __attribute__((swift_name("mpid")));
@property (readonly) MPMTBoolean * _Nullable optOutHeader __attribute__((swift_name("optOutHeader")));
@property (readonly) NSDictionary<NSString *, MPMTKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property (readonly) NSArray<MPMTModelsReportingMessageMessage *> * _Nullable reportingMessages __attribute__((swift_name("reportingMessages")));
@property (readonly) MPMTBoolean * _Nullable sandbox __attribute__((swift_name("sandbox")));
@property (readonly) NSArray<MPMTModelsBaseEvent *> *sessionHistory __attribute__((swift_name("sessionHistory")));
@property (readonly) MPMTLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MPMTKotlinx_serialization_coreSerializersModule : MPMTBase
- (void)dumpToCollector:(id<MPMTKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MPMTKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MPMTKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MPMTKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MPMTKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPMTKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MPMTKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPMTKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface MPMTKotlinx_serialization_jsonJsonDefault : MPMTKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface MPMTKotlinx_serialization_jsonJsonConfiguration : MPMTBase
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
@interface MPMTModelsFilterMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsFilterMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBracketMessage.Companion")))
@interface MPMTModelsBracketMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsBracketMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsRules")))
@interface MPMTModelsRules : MPMTModelsDTO
- (instancetype)initWithValueHash:(int32_t)valueHash consented:(BOOL)consented __attribute__((swift_name("init(valueHash:consented:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsRulesCompanion *companion __attribute__((swift_name("companion")));
@property BOOL consented __attribute__((swift_name("consented")));
@property int32_t valueHash __attribute__((swift_name("valueHash")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentForwardingRuleMessage.Companion")))
@interface MPMTModelsConsentForwardingRuleMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsConsentForwardingRuleMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MPMTKotlinx_serialization_coreEncoder
@required
- (id<MPMTKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MPMTKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MPMTKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MPMTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MPMTKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MPMTKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MPMTKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MPMTKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MPMTKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MPMTKotlinx_serialization_coreDecoder
@required
- (id<MPMTKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MPMTKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MPMTKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MPMTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConsent")))
@interface MPMTApiConsent : MPMTBase
- (instancetype)initWithGdprConsentInstance:(MPGDPRConsent * _Nullable)gdprConsentInstance ccpaConsentInstance:(MPCCPAConsent * _Nullable)ccpaConsentInstance __attribute__((swift_name("init(gdprConsentInstance:ccpaConsentInstance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPCCPAConsent * _Nullable ccpaConsentInstance __attribute__((swift_name("ccpaConsentInstance")));
@property NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) MPGDPRConsent * _Nullable gdprConsentInstance __attribute__((swift_name("gdprConsentInstance")));
@property NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property BOOL isConsented __attribute__((swift_name("isConsented")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property MPMTLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasDataMessage")))
@interface MPMTModelsAliasDataMessage : MPMTModelsDTO
- (instancetype)initWithSourceMpid:(MPMTLong * _Nullable)sourceMpid destinationMpid:(MPMTLong * _Nullable)destinationMpid deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp __attribute__((swift_name("init(sourceMpid:destinationMpid:deviceApplicationStamp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsAliasDataMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTLong * _Nullable destinationMpid __attribute__((swift_name("destinationMpid")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPMTLong * _Nullable sourceMpid __attribute__((swift_name("sourceMpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasRequestMessage.Companion")))
@interface MPMTModelsAliasRequestMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsAliasRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEmpty.Companion")))
@interface MPMTModelsEmptyCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsEmptyCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateMessage")))
@interface MPMTModelsConsentStateMessage : MPMTBase
- (instancetype)initWithConsentStateGdpr:(NSDictionary<NSString *, MPMTModelsConsentStateInstanceMessage *> * _Nullable)consentStateGdpr consentStateCcpa:(NSDictionary<NSString *, MPMTModelsConsentStateInstanceMessage *> * _Nullable)consentStateCcpa __attribute__((swift_name("init(consentStateGdpr:consentStateCcpa:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsConsentStateMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, MPMTModelsConsentStateInstanceMessage *> * _Nullable consentStateCcpa __attribute__((swift_name("consentStateCcpa")));
@property (readonly) NSDictionary<NSString *, MPMTModelsConsentStateInstanceMessage *> * _Nullable consentStateGdpr __attribute__((swift_name("consentStateGdpr")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplanContextMessage")))
@interface MPMTModelsDataplanContextMessage : MPMTBase
- (instancetype)initWithDataplan:(MPMTModelsDataplan *)dataplan __attribute__((swift_name("init(dataplan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsDataplanContextMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTModelsDataplan *dataplan __attribute__((swift_name("dataplan")));
@end;

__attribute__((swift_name("ModelsBaseEvent")))
@interface MPMTModelsBaseEvent : MPMTModelsDTO
- (instancetype)initWithTimeStamp:(MPMTLong * _Nullable)timeStamp stateInfo:(MPMTModelsStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMTLong * _Nullable)sessionStartTimestamp location:(MPMTModelsLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, id> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, id> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsBaseEventCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<NSString *, id> * _Nullable attributes __attribute__((swift_name("attributes")));
@property NSString * _Nullable dataConnection __attribute__((swift_name("dataConnection")));
@property NSDictionary<NSString *, id> * _Nullable eventFlags __attribute__((swift_name("eventFlags")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPMTModelsLocationMessage * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property MPMTLong * _Nullable sessionStartTimestamp __attribute__((swift_name("sessionStartTimestamp")));
@property MPMTModelsStateInfoMessage * _Nullable stateInfo __attribute__((swift_name("stateInfo")));
@property MPMTLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsReportingMessageMessage")))
@interface MPMTModelsReportingMessageMessage : MPMTBase
- (instancetype)initWithModuleId:(int32_t)moduleId messageType:(NSString * _Nullable)messageType timestamp:(int64_t)timestamp attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes eventOrScreenName:(NSString * _Nullable)eventOrScreenName eventType:(NSString * _Nullable)eventType projectionReports:(NSArray<MPMTModelsProjectionReportMessage *> * _Nullable)projectionReports isPushRegistrationEvent:(MPMTBoolean * _Nullable)isPushRegistrationEvent optout:(MPMTBoolean * _Nullable)optout exceptionClassName:(NSString * _Nullable)exceptionClassName __attribute__((swift_name("init(moduleId:messageType:timestamp:attributes:eventOrScreenName:eventType:projectionReports:isPushRegistrationEvent:optout:exceptionClassName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsReportingMessageMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable eventOrScreenName __attribute__((swift_name("eventOrScreenName")));
@property (readonly) NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString * _Nullable exceptionClassName __attribute__((swift_name("exceptionClassName")));
@property (readonly) MPMTBoolean * _Nullable isPushRegistrationEvent __attribute__((swift_name("isPushRegistrationEvent")));
@property (readonly) NSString * _Nullable messageType __attribute__((swift_name("messageType")));
@property (readonly) int32_t moduleId __attribute__((swift_name("moduleId")));
@property (readonly) MPMTBoolean * _Nullable optout __attribute__((swift_name("optout")));
@property (readonly) NSArray<MPMTModelsProjectionReportMessage *> * _Nullable projectionReports __attribute__((swift_name("projectionReports")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAppInfoMessage")))
@interface MPMTModelsAppInfoMessage : MPMTBase
- (instancetype)initWithPackageName:(NSString * _Nullable)packageName version:(NSString * _Nullable)version versionCode:(NSString * _Nullable)versionCode installerName:(NSString * _Nullable)installerName name:(NSString * _Nullable)name buildId:(NSString * _Nullable)buildId debugSigning:(MPMTBoolean * _Nullable)debugSigning pirated:(MPMTBoolean * _Nullable)pirated mparticleInstallTime:(MPMTLong * _Nullable)mparticleInstallTime launchCount:(MPMTInt * _Nullable)launchCount lastUseDate:(MPMTLong * _Nullable)lastUseDate launchCountSinceUpgrade:(MPMTInt * _Nullable)launchCountSinceUpgrade upgradeDate:(MPMTLong * _Nullable)upgradeDate environment:(MPMTInt * _Nullable)environment installReferrer:(NSString * _Nullable)installReferrer firstSeenInstall:(MPMTBoolean * _Nullable)firstSeenInstall __attribute__((swift_name("init(packageName:version:versionCode:installerName:name:buildId:debugSigning:pirated:mparticleInstallTime:launchCount:lastUseDate:launchCountSinceUpgrade:upgradeDate:environment:installReferrer:firstSeenInstall:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsAppInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable buildId __attribute__((swift_name("buildId")));
@property (readonly) MPMTBoolean * _Nullable debugSigning __attribute__((swift_name("debugSigning")));
@property (readonly) MPMTInt * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) MPMTBoolean * _Nullable firstSeenInstall __attribute__((swift_name("firstSeenInstall")));
@property (readonly) NSString * _Nullable installReferrer __attribute__((swift_name("installReferrer")));
@property (readonly) NSString * _Nullable installerName __attribute__((swift_name("installerName")));
@property (readonly) MPMTLong * _Nullable lastUseDate __attribute__((swift_name("lastUseDate")));
@property (readonly) MPMTInt * _Nullable launchCount __attribute__((swift_name("launchCount")));
@property (readonly) MPMTInt * _Nullable launchCountSinceUpgrade __attribute__((swift_name("launchCountSinceUpgrade")));
@property (readonly) MPMTLong * _Nullable mparticleInstallTime __attribute__((swift_name("mparticleInstallTime")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable packageName __attribute__((swift_name("packageName")));
@property (readonly) MPMTBoolean * _Nullable pirated __attribute__((swift_name("pirated")));
@property (readonly) MPMTLong * _Nullable upgradeDate __attribute__((swift_name("upgradeDate")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@property (readonly) NSString * _Nullable versionCode __attribute__((swift_name("versionCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceInfoMessage")))
@interface MPMTModelsDeviceInfoMessage : MPMTBase
- (instancetype)initWithBuildId:(NSString * _Nullable)buildId brand:(NSString * _Nullable)brand product:(NSString * _Nullable)product device:(NSString * _Nullable)device manufacturer:(NSString * _Nullable)manufacturer platform:(NSString * _Nullable)platform osVersion:(NSString * _Nullable)osVersion osVersionInt:(MPMTInt * _Nullable)osVersionInt model:(NSString * _Nullable)model releaseVersion:(NSString * _Nullable)releaseVersion deviceId:(NSString * _Nullable)deviceId androidId:(NSString * _Nullable)androidId openUdid:(NSString * _Nullable)openUdid deviceBluetoothEnabled:(MPMTBoolean * _Nullable)deviceBluetoothEnabled deviceBluetoothVersion:(NSString * _Nullable)deviceBluetoothVersion deviceSupportsNfc:(MPMTBoolean * _Nullable)deviceSupportsNfc deviceSupportsTelephony:(MPMTBoolean * _Nullable)deviceSupportsTelephony deviceRootedObject:(MPMTModelsDeviceRootedObject * _Nullable)deviceRootedObject screenHeight:(MPMTInt * _Nullable)screenHeight screenWidth:(MPMTInt * _Nullable)screenWidth screenDpi:(MPMTInt * _Nullable)screenDpi deviceCountry:(NSString * _Nullable)deviceCountry deviceLocaleCountry:(NSString * _Nullable)deviceLocaleCountry deviceLocaleLanguage:(NSString * _Nullable)deviceLocaleLanguage deviceTimezoneName:(NSString * _Nullable)deviceTimezoneName timezone:(MPMTInt * _Nullable)timezone networkCarrier:(NSString * _Nullable)networkCarrier networkCountry:(NSString * _Nullable)networkCountry countryCode:(NSString * _Nullable)countryCode mobileNetworkCode:(NSString * _Nullable)mobileNetworkCode isTablet:(MPMTBoolean * _Nullable)isTablet isInDst:(MPMTBoolean * _Nullable)isInDst deviceImei:(NSString * _Nullable)deviceImei isPushSoundEnabled:(MPMTBoolean * _Nullable)isPushSoundEnabled isPushVibrationEnabled:(MPMTBoolean * _Nullable)isPushVibrationEnabled __attribute__((swift_name("init(buildId:brand:product:device:manufacturer:platform:osVersion:osVersionInt:model:releaseVersion:deviceId:androidId:openUdid:deviceBluetoothEnabled:deviceBluetoothVersion:deviceSupportsNfc:deviceSupportsTelephony:deviceRootedObject:screenHeight:screenWidth:screenDpi:deviceCountry:deviceLocaleCountry:deviceLocaleLanguage:deviceTimezoneName:timezone:networkCarrier:networkCountry:countryCode:mobileNetworkCode:isTablet:isInDst:deviceImei:isPushSoundEnabled:isPushVibrationEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsDeviceInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable androidId __attribute__((swift_name("androidId")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable buildId __attribute__((swift_name("buildId")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString * _Nullable device __attribute__((swift_name("device")));
@property (readonly) MPMTBoolean * _Nullable deviceBluetoothEnabled __attribute__((swift_name("deviceBluetoothEnabled")));
@property (readonly) NSString * _Nullable deviceBluetoothVersion __attribute__((swift_name("deviceBluetoothVersion")));
@property (readonly) NSString * _Nullable deviceCountry __attribute__((swift_name("deviceCountry")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NSString * _Nullable deviceImei __attribute__((swift_name("deviceImei")));
@property (readonly) NSString * _Nullable deviceLocaleCountry __attribute__((swift_name("deviceLocaleCountry")));
@property (readonly) NSString * _Nullable deviceLocaleLanguage __attribute__((swift_name("deviceLocaleLanguage")));
@property (readonly) MPMTModelsDeviceRootedObject * _Nullable deviceRootedObject __attribute__((swift_name("deviceRootedObject")));
@property (readonly) MPMTBoolean * _Nullable deviceSupportsNfc __attribute__((swift_name("deviceSupportsNfc")));
@property (readonly) MPMTBoolean * _Nullable deviceSupportsTelephony __attribute__((swift_name("deviceSupportsTelephony")));
@property (readonly) NSString * _Nullable deviceTimezoneName __attribute__((swift_name("deviceTimezoneName")));
@property (readonly) MPMTBoolean * _Nullable isInDst __attribute__((swift_name("isInDst")));
@property (readonly) MPMTBoolean * _Nullable isPushSoundEnabled __attribute__((swift_name("isPushSoundEnabled")));
@property (readonly) MPMTBoolean * _Nullable isPushVibrationEnabled __attribute__((swift_name("isPushVibrationEnabled")));
@property (readonly) MPMTBoolean * _Nullable isTablet __attribute__((swift_name("isTablet")));
@property (readonly) NSString * _Nullable manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString * _Nullable mobileNetworkCode __attribute__((swift_name("mobileNetworkCode")));
@property (readonly) NSString * _Nullable model __attribute__((swift_name("model")));
@property (readonly) NSString * _Nullable networkCarrier __attribute__((swift_name("networkCarrier")));
@property (readonly) NSString * _Nullable networkCountry __attribute__((swift_name("networkCountry")));
@property (readonly) NSString * _Nullable openUdid __attribute__((swift_name("openUdid")));
@property (readonly) NSString * _Nullable osVersion __attribute__((swift_name("osVersion")));
@property (readonly) MPMTInt * _Nullable osVersionInt __attribute__((swift_name("osVersionInt")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable product __attribute__((swift_name("product")));
@property (readonly) NSString * _Nullable releaseVersion __attribute__((swift_name("releaseVersion")));
@property (readonly) MPMTInt * _Nullable screenDpi __attribute__((swift_name("screenDpi")));
@property (readonly) MPMTInt * _Nullable screenHeight __attribute__((swift_name("screenHeight")));
@property (readonly) MPMTInt * _Nullable screenWidth __attribute__((swift_name("screenWidth")));
@property (readonly) MPMTInt * _Nullable timezone __attribute__((swift_name("timezone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsUserIdentities")))
@interface MPMTModelsUserIdentities : MPMTModelsDTO
- (instancetype)initWithValue:(NSString * _Nullable)value identityType:(MPMTInt * _Nullable)identityType __attribute__((swift_name("init(value:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsUserIdentitiesCompanion *companion __attribute__((swift_name("companion")));
@property MPMTInt * _Nullable identityType __attribute__((swift_name("identityType")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBatchMessage.Companion")))
@interface MPMTModelsBatchMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsBatchMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPMTKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPMTKotlinKClass>)kClass provider:(id<MPMTKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPMTKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPMTKotlinKClass>)kClass serializer:(id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPMTKotlinKClass>)baseClass actualClass:(id<MPMTKotlinKClass>)actualClass actualSerializer:(id<MPMTKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPMTKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPMTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MPMTKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPMTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MPMTKotlinKClass>)baseClass defaultSerializerProvider:(id<MPMTKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MPMTKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MPMTKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MPMTKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MPMTKotlinKClass <MPMTKotlinKDeclarationContainer, MPMTKotlinKAnnotatedElement, MPMTKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsRules.Companion")))
@interface MPMTModelsRulesCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsRulesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MPMTKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MPMTKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPMTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MPMTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MPMTKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MPMTKotlinx_serialization_coreSerialKind : MPMTBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MPMTKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MPMTKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPMTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MPMTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MPMTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPMTKotlinNothing : MPMTBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAliasDataMessage.Companion")))
@interface MPMTModelsAliasDataMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsAliasDataMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateInstanceMessage")))
@interface MPMTModelsConsentStateInstanceMessage : MPMTBase
- (instancetype)initWithConsented:(BOOL)consented document:(NSString * _Nullable)document timestamp:(int64_t)timestamp location:(NSString * _Nullable)location hardwareId:(NSString * _Nullable)hardwareId __attribute__((swift_name("init(consented:document:timestamp:location:hardwareId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsConsentStateInstanceMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL consented __attribute__((swift_name("consented")));
@property (readonly) NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateMessage.Companion")))
@interface MPMTModelsConsentStateMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsConsentStateMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplan")))
@interface MPMTModelsDataplan : MPMTBase
- (instancetype)initWithDataplanId:(NSString *)dataplanId dataplanVersion:(MPMTInt * _Nullable)dataplanVersion __attribute__((swift_name("init(dataplanId:dataplanVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsDataplanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *dataplanId __attribute__((swift_name("dataplanId")));
@property (readonly) MPMTInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplanContextMessage.Companion")))
@interface MPMTModelsDataplanContextMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsDataplanContextMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsStateInfoMessage")))
@interface MPMTModelsStateInfoMessage : MPMTModelsDTO
- (instancetype)initWithAvailableDisk:(MPMTLong * _Nullable)availableDisk externalDisk:(MPMTLong * _Nullable)externalDisk appMemoryUsage:(MPMTLong * _Nullable)appMemoryUsage freeMemory:(MPMTLong * _Nullable)freeMemory maxMemory:(MPMTLong * _Nullable)maxMemory avaialableMemery:(MPMTLong * _Nullable)avaialableMemery totalMemory:(MPMTLong * _Nullable)totalMemory batteryLevel:(MPMTDouble * _Nullable)batteryLevel timeSinceStart:(MPMTLong * _Nullable)timeSinceStart hasGps:(MPMTBoolean * _Nullable)hasGps activeNetworkName:(NSString * _Nullable)activeNetworkName orientation:(MPMTInt * _Nullable)orientation barOrientation:(MPMTInt * _Nullable)barOrientation isMemoryLow:(MPMTBoolean * _Nullable)isMemoryLow systemMemoryThreshold:(MPMTLong * _Nullable)systemMemoryThreshold networkType:(NSString * _Nullable)networkType __attribute__((swift_name("init(availableDisk:externalDisk:appMemoryUsage:freeMemory:maxMemory:avaialableMemery:totalMemory:batteryLevel:timeSinceStart:hasGps:activeNetworkName:orientation:barOrientation:isMemoryLow:systemMemoryThreshold:networkType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsStateInfoMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable activeNetworkName __attribute__((swift_name("activeNetworkName")));
@property MPMTLong * _Nullable appMemoryUsage __attribute__((swift_name("appMemoryUsage")));
@property MPMTLong * _Nullable avaialableMemery __attribute__((swift_name("avaialableMemery")));
@property MPMTLong * _Nullable availableDisk __attribute__((swift_name("availableDisk")));
@property MPMTInt * _Nullable barOrientation __attribute__((swift_name("barOrientation")));
@property MPMTDouble * _Nullable batteryLevel __attribute__((swift_name("batteryLevel")));
@property MPMTLong * _Nullable externalDisk __attribute__((swift_name("externalDisk")));
@property MPMTLong * _Nullable freeMemory __attribute__((swift_name("freeMemory")));
@property MPMTBoolean * _Nullable hasGps __attribute__((swift_name("hasGps")));
@property MPMTBoolean * _Nullable isMemoryLow __attribute__((swift_name("isMemoryLow")));
@property MPMTLong * _Nullable maxMemory __attribute__((swift_name("maxMemory")));
@property NSString * _Nullable networkType __attribute__((swift_name("networkType")));
@property MPMTInt * _Nullable orientation __attribute__((swift_name("orientation")));
@property MPMTLong * _Nullable systemMemoryThreshold __attribute__((swift_name("systemMemoryThreshold")));
@property MPMTLong * _Nullable timeSinceStart __attribute__((swift_name("timeSinceStart")));
@property MPMTLong * _Nullable totalMemory __attribute__((swift_name("totalMemory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsLocationMessage")))
@interface MPMTModelsLocationMessage : MPMTModelsDTO
- (instancetype)initWithLatitude:(MPMTDouble * _Nullable)latitude longitude:(MPMTDouble * _Nullable)longitude accuracy:(MPMTFloat * _Nullable)accuracy __attribute__((swift_name("init(latitude:longitude:accuracy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsLocationMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTFloat * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) MPMTDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) MPMTDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsBaseEvent.Companion")))
@interface MPMTModelsBaseEventCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsBaseEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MPMTKotlinArray<id<MPMTKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProjectionReportMessage")))
@interface MPMTModelsProjectionReportMessage : MPMTBase
- (instancetype)initWithProjectionId:(NSString *)projectionId messageType:(NSString *)messageType name:(NSString *)name eventType:(MPMTModelsEventType *)eventType __attribute__((swift_name("init(projectionId:messageType:name:eventType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsProjectionReportMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTModelsEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *projectionId __attribute__((swift_name("projectionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsReportingMessageMessage.Companion")))
@interface MPMTModelsReportingMessageMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsReportingMessageMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsAppInfoMessage.Companion")))
@interface MPMTModelsAppInfoMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsAppInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceRootedObject")))
@interface MPMTModelsDeviceRootedObject : MPMTBase
- (instancetype)initWithDeviceRootedCYDIA:(MPMTBoolean * _Nullable)deviceRootedCYDIA __attribute__((swift_name("init(deviceRootedCYDIA:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMTModelsDeviceRootedObjectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMTBoolean * _Nullable deviceRootedCYDIA __attribute__((swift_name("deviceRootedCYDIA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceInfoMessage.Companion")))
@interface MPMTModelsDeviceInfoMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsDeviceInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsUserIdentities.Companion")))
@interface MPMTModelsUserIdentitiesCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsUserIdentitiesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsConsentStateInstanceMessage.Companion")))
@interface MPMTModelsConsentStateInstanceMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsConsentStateInstanceMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDataplan.Companion")))
@interface MPMTModelsDataplanCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsDataplanCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsStateInfoMessage.Companion")))
@interface MPMTModelsStateInfoMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsStateInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsLocationMessage.Companion")))
@interface MPMTModelsLocationMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsLocationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEventType")))
@interface MPMTModelsEventType : MPMTKotlinEnum<MPMTModelsEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTModelsEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPMTModelsEventType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPMTModelsEventType *navigation __attribute__((swift_name("navigation")));
@property (class, readonly) MPMTModelsEventType *location __attribute__((swift_name("location")));
@property (class, readonly) MPMTModelsEventType *search __attribute__((swift_name("search")));
@property (class, readonly) MPMTModelsEventType *transaction __attribute__((swift_name("transaction")));
@property (class, readonly) MPMTModelsEventType *usercontent __attribute__((swift_name("usercontent")));
@property (class, readonly) MPMTModelsEventType *userpreference __attribute__((swift_name("userpreference")));
@property (class, readonly) MPMTModelsEventType *social __attribute__((swift_name("social")));
@property (class, readonly) MPMTModelsEventType *other __attribute__((swift_name("other")));
@property (class, readonly) MPMTModelsEventType *media __attribute__((swift_name("media")));
+ (MPMTKotlinArray<MPMTModelsEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsProjectionReportMessage.Companion")))
@interface MPMTModelsProjectionReportMessageCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsProjectionReportMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsDeviceRootedObject.Companion")))
@interface MPMTModelsDeviceRootedObjectCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsDeviceRootedObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelsEventType.Companion")))
@interface MPMTModelsEventTypeCompanion : MPMTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTModelsEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
