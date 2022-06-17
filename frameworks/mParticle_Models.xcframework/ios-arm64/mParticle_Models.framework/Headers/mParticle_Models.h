#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPMDTOCompanion, MPMDTO, MPMAliasDataMessageCompanion, MPMAliasDataMessage, MPMAliasRequestMessageCompanion, MPMAttributeValueFilterCompanion, MPMBracketMessageCompanion, MPMClientSdkMessageCompanion, MPMKotlinx_serialization_jsonJsonElement, MPMTriggerItemsMessage, MPMKitConfigMessage, MPMConfigResponseMessageCompanion, MPMConfigResponseMessage, MPMRules, MPMConsentForwardingRuleMessageCompanion, MPMKotlinx_serialization_jsonJson, MPMEmptyCompanion, MPMErrorCompanion, MPMError, MPMKotlinEnumCompanion, MPMKotlinEnum<E>, MPMEventTypeCompanion, MPMEventType, MPMKotlinArray<T>, MPMFilterMessageCompanion, MPMIdentityChangeCompanion, MPMClientSdkMessage, MPMIdentityChange, MPMIdentityRequestMessageCompanion, MPMIdentityResponseMessageCompanion, MPMIdentityResponseMessage, MPMAttributeValueFilter, MPMFilterMessage, MPMBracketMessage, MPMConsentForwardingRuleMessage, MPMKitConfigMessageCompanion, MPMRulesCompanion, MPMTriggerItemsMessageCompanion, MPMUserIdentitiesCompanion, MPMAppInfoMessageCompanion, MPMStateInfoMessage, MPMLocationMessage, MPMBaseEventCompanion, MPMBaseEvent, MPMAppStateTransitionEventCompanion, MPMConsentStateMessage, MPMDataplanContextMessage, MPMReportingMessageMessage, MPMAppInfoMessage, MPMDeviceInfoMessage, MPMUserIdentities, MPMBatchMessageCompanion, MPMProductActionObject, MPMPromotionActionObject, MPMImpressionMessage, MPMCommerceEventMessageCompanion, MPMConsentStateInstanceMessageCompanion, MPMConsentStateInstanceMessage, MPMConsentStateMessageCompanion, MPMDataplanCompanion, MPMDataplan, MPMDataplanContextMessageCompanion, MPMDeviceRootedObject, MPMDeviceInfoMessageCompanion, MPMDeviceRootedObjectCompanion, MPMFirstRunMessageCompanion, MPMProductMessage, MPMImpressionMessageCompanion, MPMLocationMessageCompanion, MPMMPEventMessageCompanion, MPMNewIdentityCompanion, MPMOldIdentityCompanion, MPMProductActionObjectCompanion, MPMProductMessageCompanion, MPMProjectionReportMessageCompanion, MPMPromotionMessage, MPMPromotionActionObjectCompanion, MPMPromotionMessageCompanion, MPMPushRegistrationMessageCompanion, MPMProjectionReportMessage, MPMReportingMessageMessageCompanion, MPMScreenViewMessageCompanion, MPMSessionEndMessageCompanion, MPMSessionStartMessageCompanion, MPMStateInfoMessageCompanion, MPMNewIdentity, MPMOldIdentity, MPMUserIdentityChangeMessageCompanion, MPMIdentityResponseMessageBuilder, MPMKotlinx_serialization_jsonJsonElementCompanion, MPMKotlinx_serialization_coreSerializersModule, MPMKotlinx_serialization_jsonJsonDefault, MPMKotlinx_serialization_jsonJsonConfiguration, MPMKotlinx_serialization_coreSerialKind, MPMKotlinNothing;

@protocol MPMKotlinx_serialization_coreKSerializer, MPMKotlinComparable, MPMKotlinx_serialization_coreEncoder, MPMKotlinx_serialization_coreSerialDescriptor, MPMKotlinx_serialization_coreSerializationStrategy, MPMKotlinx_serialization_coreDecoder, MPMKotlinx_serialization_coreDeserializationStrategy, MPMKotlinx_serialization_coreSerialFormat, MPMKotlinx_serialization_coreStringFormat, MPMKotlinIterator, MPMKotlinx_serialization_coreCompositeEncoder, MPMKotlinAnnotation, MPMKotlinx_serialization_coreCompositeDecoder, MPMKotlinx_serialization_coreSerializersModuleCollector, MPMKotlinKClass, MPMKotlinKDeclarationContainer, MPMKotlinKAnnotatedElement, MPMKotlinKClassifier;

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

__attribute__((swift_name("DTO")))
@interface MPMDTO : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMDTOCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AliasDataMessage")))
@interface MPMAliasDataMessage : MPMDTO
- (instancetype)initWithSourceMpid:(MPMLong * _Nullable)sourceMpid destinationMpid:(MPMLong * _Nullable)destinationMpid deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp __attribute__((swift_name("init(sourceMpid:destinationMpid:deviceApplicationStamp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMAliasDataMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMLong * _Nullable destinationMpid __attribute__((swift_name("destinationMpid")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPMLong * _Nullable sourceMpid __attribute__((swift_name("sourceMpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AliasDataMessage.Companion")))
@interface MPMAliasDataMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMAliasDataMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AliasRequestMessage")))
@interface MPMAliasRequestMessage : MPMDTO
- (instancetype)initWithStartTime:(MPMLong * _Nullable)startTime endTime:(MPMLong * _Nullable)endTime data:(MPMAliasDataMessage *)data requestType:(NSString * _Nullable)requestType requestId:(NSString * _Nullable)requestId aliasEnvironment:(NSString * _Nullable)aliasEnvironment apiKey:(NSString *)apiKey __attribute__((swift_name("init(startTime:endTime:data:requestType:requestId:aliasEnvironment:apiKey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMAliasRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable aliasEnvironment __attribute__((swift_name("aliasEnvironment")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) MPMAliasDataMessage *data __attribute__((swift_name("data")));
@property (readonly) MPMLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) NSString * _Nullable requestType __attribute__((swift_name("requestType")));
@property (readonly) MPMLong * _Nullable startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AliasRequestMessage.Companion")))
@interface MPMAliasRequestMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMAliasRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttributeValueFilter")))
@interface MPMAttributeValueFilter : MPMDTO
- (instancetype)initWithShouldIncludeMatches:(MPMBoolean * _Nullable)shouldIncludeMatches attribute:(MPMInt * _Nullable)attribute value:(NSString * _Nullable)value __attribute__((swift_name("init(shouldIncludeMatches:attribute:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMAttributeValueFilterCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMInt * _Nullable attribute __attribute__((swift_name("attribute")));
@property (readonly) MPMBoolean * _Nullable shouldIncludeMatches __attribute__((swift_name("shouldIncludeMatches")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttributeValueFilter.Companion")))
@interface MPMAttributeValueFilterCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMAttributeValueFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BracketMessage")))
@interface MPMBracketMessage : MPMDTO
- (instancetype)initWithLowBracket:(MPMInt * _Nullable)lowBracket highBracket:(MPMInt * _Nullable)highBracket __attribute__((swift_name("init(lowBracket:highBracket:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMBracketMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMInt * _Nullable highBracket __attribute__((swift_name("highBracket")));
@property (readonly) MPMInt * _Nullable lowBracket __attribute__((swift_name("lowBracket")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BracketMessage.Companion")))
@interface MPMBracketMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMBracketMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientSdkMessage")))
@interface MPMClientSdkMessage : MPMDTO
- (instancetype)initWithPlatform:(NSString * _Nullable)platform sdkVendor:(NSString * _Nullable)sdkVendor sdkVersion:(NSString * _Nullable)sdkVersion __attribute__((swift_name("init(platform:sdkVendor:sdkVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMClientSdkMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable sdkVendor __attribute__((swift_name("sdkVendor")));
@property (readonly) NSString * _Nullable sdkVersion __attribute__((swift_name("sdkVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientSdkMessage.Companion")))
@interface MPMClientSdkMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMClientSdkMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigResponseMessage")))
@interface MPMConfigResponseMessage : MPMDTO
- (instancetype)initWithType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPMBoolean * _Nullable)debug timeStamp:(MPMLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPMInt * _Nullable)ramp optOut:(MPMBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPMLong * _Nullable)sessionTimeout uploadInterval:(MPMLong * _Nullable)uploadInterval triggerItems:(MPMTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPMLong * _Nullable)influenceOpenMessage aaidLat:(MPMBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPMBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPMInt * _Nullable)aliasMaxWindow kits:(NSArray<MPMKitConfigMessage *> * _Nullable)kits includeSessionHistory:(MPMBoolean * _Nullable)includeSessionHistory __attribute__((swift_name("init(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:includeSessionHistory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMConfigResponseMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPMLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MPMLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (MPMTriggerItemsMessage * _Nullable)component12 __attribute__((swift_name("component12()")));
- (MPMLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (MPMBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (MPMBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (MPMInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<MPMKitConfigMessage *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (MPMBoolean * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPMLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPMInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPMBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MPMConfigResponseMessage *)doCopyType:(NSString * _Nullable)type id:(NSString * _Nullable)id debug:(MPMBoolean * _Nullable)debug timeStamp:(MPMLong * _Nullable)timeStamp logUnhandledExceptions:(NSString * _Nullable)logUnhandledExceptions pushMessages:(NSArray<id> * _Nullable)pushMessages ramp:(MPMInt * _Nullable)ramp optOut:(MPMBoolean * _Nullable)optOut providerPersistence:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence sessionTimeout:(MPMLong * _Nullable)sessionTimeout uploadInterval:(MPMLong * _Nullable)uploadInterval triggerItems:(MPMTriggerItemsMessage * _Nullable)triggerItems influenceOpenMessage:(MPMLong * _Nullable)influenceOpenMessage aaidLat:(MPMBoolean * _Nullable)aaidLat devicePerformanceMetricsDisabled:(MPMBoolean * _Nullable)devicePerformanceMetricsDisabled workspaceToken:(NSString * _Nullable)workspaceToken aliasMaxWindow:(MPMInt * _Nullable)aliasMaxWindow kits:(NSArray<MPMKitConfigMessage *> * _Nullable)kits includeSessionHistory:(MPMBoolean * _Nullable)includeSessionHistory __attribute__((swift_name("doCopy(type:id:debug:timeStamp:logUnhandledExceptions:pushMessages:ramp:optOut:providerPersistence:sessionTimeout:uploadInterval:triggerItems:influenceOpenMessage:aaidLat:devicePerformanceMetricsDisabled:workspaceToken:aliasMaxWindow:kits:includeSessionHistory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPMBoolean * _Nullable aaidLat __attribute__((swift_name("aaidLat")));
@property (readonly) MPMInt * _Nullable aliasMaxWindow __attribute__((swift_name("aliasMaxWindow")));
@property (readonly) MPMBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property (readonly) MPMBoolean * _Nullable devicePerformanceMetricsDisabled __attribute__((swift_name("devicePerformanceMetricsDisabled")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MPMBoolean * _Nullable includeSessionHistory __attribute__((swift_name("includeSessionHistory")));
@property (readonly) MPMLong * _Nullable influenceOpenMessage __attribute__((swift_name("influenceOpenMessage")));
@property (readonly) NSArray<MPMKitConfigMessage *> * _Nullable kits __attribute__((swift_name("kits")));
@property (readonly) NSString * _Nullable logUnhandledExceptions __attribute__((swift_name("logUnhandledExceptions")));
@property (readonly) MPMBoolean * _Nullable optOut __attribute__((swift_name("optOut")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property (readonly) NSArray<id> * _Nullable pushMessages __attribute__((swift_name("pushMessages")));
@property (readonly) MPMInt * _Nullable ramp __attribute__((swift_name("ramp")));
@property (readonly) MPMLong * _Nullable sessionTimeout __attribute__((swift_name("sessionTimeout")));
@property (readonly) MPMLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) MPMTriggerItemsMessage * _Nullable triggerItems __attribute__((swift_name("triggerItems")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) MPMLong * _Nullable uploadInterval __attribute__((swift_name("uploadInterval")));
@property (readonly) NSString * _Nullable workspaceToken __attribute__((swift_name("workspaceToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigResponseMessage.Companion")))
@interface MPMConfigResponseMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMConfigResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentForwardingRuleMessage")))
@interface MPMConsentForwardingRuleMessage : MPMDTO
- (instancetype)initWithShouldIncludeMatches:(MPMBoolean * _Nullable)shouldIncludeMatches rules:(NSArray<MPMRules *> * _Nullable)rules __attribute__((swift_name("init(shouldIncludeMatches:rules:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMConsentForwardingRuleMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<MPMRules *> * _Nullable rules __attribute__((swift_name("rules")));
@property (readonly) MPMBoolean * _Nullable shouldIncludeMatches __attribute__((swift_name("shouldIncludeMatches")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentForwardingRuleMessage.Companion")))
@interface MPMConsentForwardingRuleMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMConsentForwardingRuleMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DTO.Companion")))
@interface MPMDTOCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMDTOCompanion *shared __attribute__((swift_name("shared")));
- (MPMDTO *)fromString:(NSString *)string __attribute__((swift_name("from(string:)")));
@property (readonly) MPMKotlinx_serialization_jsonJson *batchJsonBuilder __attribute__((swift_name("batchJsonBuilder")));
@property (readonly) MPMKotlinx_serialization_jsonJson *jsonBuilder __attribute__((swift_name("jsonBuilder")));
@end;

__attribute__((swift_name("Empty")))
@interface MPMEmpty : MPMDTO
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPMEmptyCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Empty.Companion")))
@interface MPMEmptyCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMEmptyCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface MPMError : MPMDTO
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMError *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error.Companion")))
@interface MPMErrorCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
__attribute__((swift_name("EventType")))
@interface MPMEventType : MPMKotlinEnum<MPMEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMEventTypeCompanion *companion __attribute__((swift_name("companion")));
+ (MPMKotlinArray<MPMEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType.Companion")))
@interface MPMEventTypeCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterMessage")))
@interface MPMFilterMessage : MPMDTO
- (instancetype)initWithEventTypesFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventTypesFilter eventNameFilters:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventNameFilters eventAttributeFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeFilter screenNameFilters:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)screenNameFilters screenAttributeFilters:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)screenAttributeFilters userIdentityFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)userIdentityFilter userAttributeFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)userAttributeFilter commerceAttributeFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)commerceAttributeFilter commerceEntityFilter:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)commerceEntityFilter commerceEntityAttributeFilters:(NSDictionary<MPMInt *, NSDictionary<MPMInt *, MPMBoolean *> *> * _Nullable)commerceEntityAttributeFilters eventAttributeAddUser:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeAddUser eventAttributeSingleItemUser:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeSingleItemUser eventAttributeRemoveUser:(NSDictionary<MPMInt *, MPMBoolean *> * _Nullable)eventAttributeRemoveUser __attribute__((swift_name("init(eventTypesFilter:eventNameFilters:eventAttributeFilter:screenNameFilters:screenAttributeFilters:userIdentityFilter:userAttributeFilter:commerceAttributeFilter:commerceEntityFilter:commerceEntityAttributeFilters:eventAttributeAddUser:eventAttributeSingleItemUser:eventAttributeRemoveUser:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMFilterMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable commerceAttributeFilter __attribute__((swift_name("commerceAttributeFilter")));
@property (readonly) NSDictionary<MPMInt *, NSDictionary<MPMInt *, MPMBoolean *> *> * _Nullable commerceEntityAttributeFilters __attribute__((swift_name("commerceEntityAttributeFilters")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable commerceEntityFilter __attribute__((swift_name("commerceEntityFilter")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeAddUser __attribute__((swift_name("eventAttributeAddUser")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeFilter __attribute__((swift_name("eventAttributeFilter")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeRemoveUser __attribute__((swift_name("eventAttributeRemoveUser")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventAttributeSingleItemUser __attribute__((swift_name("eventAttributeSingleItemUser")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventNameFilters __attribute__((swift_name("eventNameFilters")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable eventTypesFilter __attribute__((swift_name("eventTypesFilter")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable screenAttributeFilters __attribute__((swift_name("screenAttributeFilters")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable screenNameFilters __attribute__((swift_name("screenNameFilters")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable userAttributeFilter __attribute__((swift_name("userAttributeFilter")));
@property (readonly) NSDictionary<MPMInt *, MPMBoolean *> * _Nullable userIdentityFilter __attribute__((swift_name("userIdentityFilter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterMessage.Companion")))
@interface MPMFilterMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMFilterMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityChange")))
@interface MPMIdentityChange : MPMDTO
- (instancetype)initWithNewValue:(NSString * _Nullable)newValue oldValue:(NSString * _Nullable)oldValue identityType:(NSString * _Nullable)identityType __attribute__((swift_name("init(newValue:oldValue:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMIdentityChangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable identityType __attribute__((swift_name("identityType")));
@property (readonly, getter=doNewValue) NSString * _Nullable newValue __attribute__((swift_name("newValue")));
@property (readonly) NSString * _Nullable oldValue __attribute__((swift_name("oldValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityChange.Companion")))
@interface MPMIdentityChangeCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMIdentityChangeCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityRequestMessage")))
@interface MPMIdentityRequestMessage : MPMDTO
- (instancetype)initWithClientSdk:(MPMClientSdkMessage * _Nullable)clientSdk context:(NSString * _Nullable)context environment:(NSString * _Nullable)environment requestId:(NSString * _Nullable)requestId requestTimestamp:(MPMLong * _Nullable)requestTimestamp previousMpid:(MPMLong * _Nullable)previousMpid knownIdentities:(NSDictionary<NSString *, id> * _Nullable)knownIdentities identityChanges:(NSArray<MPMIdentityChange *> * _Nullable)identityChanges __attribute__((swift_name("init(clientSdk:context:environment:requestId:requestTimestamp:previousMpid:knownIdentities:identityChanges:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMIdentityRequestMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMClientSdkMessage * _Nullable clientSdk __attribute__((swift_name("clientSdk")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) NSArray<MPMIdentityChange *> * _Nullable identityChanges __attribute__((swift_name("identityChanges")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable knownIdentities __attribute__((swift_name("knownIdentities")));
@property (readonly) MPMLong * _Nullable previousMpid __attribute__((swift_name("previousMpid")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) MPMLong * _Nullable requestTimestamp __attribute__((swift_name("requestTimestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityRequestMessage.Companion")))
@interface MPMIdentityRequestMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMIdentityRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityResponseMessage")))
@interface MPMIdentityResponseMessage : MPMDTO
- (instancetype)initWithMpid:(NSString *)mpid __attribute__((swift_name("init(mpid:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMpid:(MPMLong * _Nullable)mpid context:(NSString * _Nullable)context errors:(NSArray<MPMError *> * _Nullable)errors isLoggedIn:(MPMBoolean * _Nullable)isLoggedIn __attribute__((swift_name("init(mpid:context:errors:isLoggedIn:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMIdentityResponseMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSArray<MPMError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) MPMBoolean * _Nullable isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) MPMLong * _Nullable mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityResponseMessage.Builder")))
@interface MPMIdentityResponseMessageBuilder : MPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPMIdentityResponseMessage *)build __attribute__((swift_name("build()")));
@property NSString * _Nullable context __attribute__((swift_name("context")));
@property NSArray<MPMError *> * _Nullable errors __attribute__((swift_name("errors")));
@property MPMBoolean * _Nullable isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property MPMLong * _Nullable mpid __attribute__((swift_name("mpid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityResponseMessage.Companion")))
@interface MPMIdentityResponseMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMIdentityResponseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KitConfigMessage")))
@interface MPMKitConfigMessage : MPMDTO
- (instancetype)initWithId:(int32_t)id a:(MPMAttributeValueFilter * _Nullable)a properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPMFilterMessage * _Nullable)keyFilters bracketing:(MPMBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPMConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPMBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("init(id:a:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMKitConfigMessageCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (MPMAttributeValueFilter * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPMFilterMessage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MPMBracketMessage * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MPMConsentForwardingRuleMessage * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPMBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MPMKitConfigMessage *)doCopyId:(int32_t)id a:(MPMAttributeValueFilter * _Nullable)a properties:(NSDictionary<id, id> * _Nullable)properties keyFilters:(MPMFilterMessage * _Nullable)keyFilters bracketing:(MPMBracketMessage * _Nullable)bracketing projections:(NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)projections consentForwardingRules:(MPMConsentForwardingRuleMessage * _Nullable)consentForwardingRules excludeAnnonymousUsers:(MPMBoolean * _Nullable)excludeAnnonymousUsers __attribute__((swift_name("doCopy(id:a:properties:keyFilters:bracketing:projections:consentForwardingRules:excludeAnnonymousUsers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPMAttributeValueFilter * _Nullable a __attribute__((swift_name("a")));
@property (readonly) MPMBracketMessage * _Nullable bracketing __attribute__((swift_name("bracketing")));
@property (readonly) MPMConsentForwardingRuleMessage * _Nullable consentForwardingRules __attribute__((swift_name("consentForwardingRules")));
@property (readonly) MPMBoolean * _Nullable excludeAnnonymousUsers __attribute__((swift_name("excludeAnnonymousUsers")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) MPMFilterMessage * _Nullable keyFilters __attribute__((swift_name("keyFilters")));
@property (readonly) NSArray<NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable projections __attribute__((swift_name("projections")));
@property (readonly) NSDictionary<id, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KitConfigMessage.Companion")))
@interface MPMKitConfigMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKitConfigMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rules")))
@interface MPMRules : MPMDTO
- (instancetype)initWithValueHash:(int32_t)valueHash consented:(BOOL)consented __attribute__((swift_name("init(valueHash:consented:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMRulesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL consented __attribute__((swift_name("consented")));
@property (readonly) int32_t valueHash __attribute__((swift_name("valueHash")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rules.Companion")))
@interface MPMRulesCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMRulesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerItemsMessage")))
@interface MPMTriggerItemsMessage : MPMDTO
- (instancetype)initWithTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("init(triggerMatches:triggerMessageHashes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMTriggerItemsMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPMTriggerItemsMessage *)doCopyTriggerMatches:(NSArray<NSString *> * _Nullable)triggerMatches triggerMessageHashes:(NSArray<NSString *> * _Nullable)triggerMessageHashes __attribute__((swift_name("doCopy(triggerMatches:triggerMessageHashes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable triggerMatches __attribute__((swift_name("triggerMatches")));
@property (readonly) NSArray<NSString *> * _Nullable triggerMessageHashes __attribute__((swift_name("triggerMessageHashes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerItemsMessage.Companion")))
@interface MPMTriggerItemsMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMTriggerItemsMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserIdentities")))
@interface MPMUserIdentities : MPMDTO
- (instancetype)initWithValue:(NSString * _Nullable)value identityType:(MPMInt * _Nullable)identityType __attribute__((swift_name("init(value:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMUserIdentitiesCompanion *companion __attribute__((swift_name("companion")));
@property MPMInt * _Nullable identityType __attribute__((swift_name("identityType")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserIdentities.Companion")))
@interface MPMUserIdentitiesCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMUserIdentitiesCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppInfoMessage")))
@interface MPMAppInfoMessage : MPMBase
- (instancetype)initWithPackageName:(NSString * _Nullable)packageName version:(NSString * _Nullable)version versionCode:(NSString * _Nullable)versionCode installerName:(NSString * _Nullable)installerName name:(NSString * _Nullable)name buildId:(NSString * _Nullable)buildId debugSigning:(MPMBoolean * _Nullable)debugSigning pirated:(MPMBoolean * _Nullable)pirated mparticleInstallTime:(MPMLong * _Nullable)mparticleInstallTime launchCount:(MPMInt * _Nullable)launchCount lastUseDate:(MPMLong * _Nullable)lastUseDate launchCountSinceUpgrade:(MPMInt * _Nullable)launchCountSinceUpgrade upgradeDate:(MPMLong * _Nullable)upgradeDate environment:(MPMInt * _Nullable)environment installReferrer:(NSString * _Nullable)installReferrer firstSeenInstall:(MPMBoolean * _Nullable)firstSeenInstall __attribute__((swift_name("init(packageName:version:versionCode:installerName:name:buildId:debugSigning:pirated:mparticleInstallTime:launchCount:lastUseDate:launchCountSinceUpgrade:upgradeDate:environment:installReferrer:firstSeenInstall:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMAppInfoMessageCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("AppInfoMessage.Companion")))
@interface MPMAppInfoMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMAppInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("BaseEvent")))
@interface MPMBaseEvent : MPMDTO
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMBaseEventCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property NSString * _Nullable dataConnection __attribute__((swift_name("dataConnection")));
@property NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable eventFlags __attribute__((swift_name("eventFlags")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property MPMLocationMessage * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property MPMLong * _Nullable sessionStartTimestamp __attribute__((swift_name("sessionStartTimestamp")));
@property MPMStateInfoMessage * _Nullable stateInfo __attribute__((swift_name("stateInfo")));
@property MPMLong * _Nullable timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStateTransitionEvent")))
@interface MPMAppStateTransitionEvent : MPMBaseEvent
- (instancetype)initWithStateTransitionType:(NSString * _Nullable)stateTransitionType isFirstRun:(MPMBoolean * _Nullable)isFirstRun isAppUpgrade:(MPMBoolean * _Nullable)isAppUpgrade interruptions:(MPMInt * _Nullable)interruptions __attribute__((swift_name("init(stateTransitionType:isFirstRun:isAppUpgrade:interruptions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMAppStateTransitionEventCompanion *companion __attribute__((swift_name("companion")));
@property MPMInt * _Nullable interruptions __attribute__((swift_name("interruptions")));
@property MPMBoolean * _Nullable isAppUpgrade __attribute__((swift_name("isAppUpgrade")));
@property MPMBoolean * _Nullable isFirstRun __attribute__((swift_name("isFirstRun")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable stateTransitionType __attribute__((swift_name("stateTransitionType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStateTransitionEvent.Companion")))
@interface MPMAppStateTransitionEventCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMAppStateTransitionEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseEvent.Companion")))
@interface MPMBaseEventCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMBaseEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MPMKotlinArray<id<MPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BatchMessage")))
@interface MPMBatchMessage : MPMDTO
- (instancetype)initWithEcho:(MPMBoolean * _Nullable)echo type:(NSString * _Nullable)type id:(NSString * _Nullable)id timestamp:(MPMLong * _Nullable)timestamp mparticleVersion:(NSString * _Nullable)mparticleVersion optOutHeader:(MPMBoolean * _Nullable)optOutHeader configUploadInterval:(MPMInt * _Nullable)configUploadInterval configSessionTimeout:(MPMInt * _Nullable)configSessionTimeout mpid:(NSString * _Nullable)mpid sandbox:(MPMBoolean * _Nullable)sandbox deviceApplicationStamp:(NSString * _Nullable)deviceApplicationStamp deletedUserAttributes:(NSArray<NSString *> * _Nullable)deletedUserAttributes cookies:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)cookies providerPersistence:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)providerPersistence integrationAttributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)integrationAttributes consentState:(MPMConsentStateMessage * _Nullable)consentState dataplanContext:(MPMDataplanContextMessage * _Nullable)dataplanContext messages:(NSArray<MPMBaseEvent *> *)messages reportingMessages:(NSArray<MPMReportingMessageMessage *> * _Nullable)reportingMessages appInfo:(MPMAppInfoMessage * _Nullable)appInfo deviceInfo:(MPMDeviceInfoMessage * _Nullable)deviceInfo identities:(NSArray<MPMUserIdentities *> * _Nullable)identities attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes sessionHistory:(NSArray<MPMBaseEvent *> *)sessionHistory __attribute__((swift_name("init(echo:type:id:timestamp:mparticleVersion:optOutHeader:configUploadInterval:configSessionTimeout:mpid:sandbox:deviceApplicationStamp:deletedUserAttributes:cookies:providerPersistence:integrationAttributes:consentState:dataplanContext:messages:reportingMessages:appInfo:deviceInfo:identities:attributes:sessionHistory:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMBatchMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMAppInfoMessage * _Nullable appInfo __attribute__((swift_name("appInfo")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) MPMInt * _Nullable configSessionTimeout __attribute__((swift_name("configSessionTimeout")));
@property (readonly) MPMInt * _Nullable configUploadInterval __attribute__((swift_name("configUploadInterval")));
@property (readonly) MPMConsentStateMessage * _Nullable consentState __attribute__((swift_name("consentState")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable cookies __attribute__((swift_name("cookies")));
@property (readonly) MPMDataplanContextMessage * _Nullable dataplanContext __attribute__((swift_name("dataplanContext")));
@property (readonly) NSArray<NSString *> * _Nullable deletedUserAttributes __attribute__((swift_name("deletedUserAttributes")));
@property (readonly) NSString * _Nullable deviceApplicationStamp __attribute__((swift_name("deviceApplicationStamp")));
@property (readonly) MPMDeviceInfoMessage * _Nullable deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) MPMBoolean * _Nullable echo __attribute__((swift_name("echo")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<MPMUserIdentities *> * _Nullable identities __attribute__((swift_name("identities")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable integrationAttributes __attribute__((swift_name("integrationAttributes")));
@property (readonly) NSArray<MPMBaseEvent *> *messages __attribute__((swift_name("messages")));
@property (readonly) NSString * _Nullable mparticleVersion __attribute__((swift_name("mparticleVersion")));
@property (readonly) NSString * _Nullable mpid __attribute__((swift_name("mpid")));
@property (readonly) MPMBoolean * _Nullable optOutHeader __attribute__((swift_name("optOutHeader")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable providerPersistence __attribute__((swift_name("providerPersistence")));
@property (readonly) NSArray<MPMReportingMessageMessage *> * _Nullable reportingMessages __attribute__((swift_name("reportingMessages")));
@property (readonly) MPMBoolean * _Nullable sandbox __attribute__((swift_name("sandbox")));
@property (readonly) NSArray<MPMBaseEvent *> *sessionHistory __attribute__((swift_name("sessionHistory")));
@property (readonly) MPMLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BatchMessage.Companion")))
@interface MPMBatchMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMBatchMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommerceEventMessage")))
@interface MPMCommerceEventMessage : MPMBaseEvent
- (instancetype)initWithProductActionObject:(MPMProductActionObject * _Nullable)productActionObject commerceScreenName:(NSString * _Nullable)commerceScreenName commerceNonInteraction:(MPMBoolean * _Nullable)commerceNonInteraction commerceCurrency:(NSString * _Nullable)commerceCurrency transactionId:(NSString * _Nullable)transactionId transactionAffiliation:(NSString * _Nullable)transactionAffiliation transactionTax:(MPMDouble * _Nullable)transactionTax transactionShipping:(MPMDouble * _Nullable)transactionShipping transactionCouponCode:(NSString * _Nullable)transactionCouponCode promotionActionObject:(MPMPromotionActionObject * _Nullable)promotionActionObject impressionObject:(NSArray<MPMImpressionMessage *> * _Nullable)impressionObject __attribute__((swift_name("init(productActionObject:commerceScreenName:commerceNonInteraction:commerceCurrency:transactionId:transactionAffiliation:transactionTax:transactionShipping:transactionCouponCode:promotionActionObject:impressionObject:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMCommerceEventMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable commerceCurrency __attribute__((swift_name("commerceCurrency")));
@property MPMBoolean * _Nullable commerceNonInteraction __attribute__((swift_name("commerceNonInteraction")));
@property NSString * _Nullable commerceScreenName __attribute__((swift_name("commerceScreenName")));
@property NSArray<MPMImpressionMessage *> * _Nullable impressionObject __attribute__((swift_name("impressionObject")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property MPMProductActionObject * _Nullable productActionObject __attribute__((swift_name("productActionObject")));
@property MPMPromotionActionObject * _Nullable promotionActionObject __attribute__((swift_name("promotionActionObject")));
@property NSString * _Nullable transactionAffiliation __attribute__((swift_name("transactionAffiliation")));
@property NSString * _Nullable transactionCouponCode __attribute__((swift_name("transactionCouponCode")));
@property NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@property MPMDouble * _Nullable transactionShipping __attribute__((swift_name("transactionShipping")));
@property MPMDouble * _Nullable transactionTax __attribute__((swift_name("transactionTax")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommerceEventMessage.Companion")))
@interface MPMCommerceEventMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMCommerceEventMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentStateInstanceMessage")))
@interface MPMConsentStateInstanceMessage : MPMBase
- (instancetype)initWithConsented:(BOOL)consented document:(NSString * _Nullable)document timestamp:(int64_t)timestamp location:(NSString * _Nullable)location hardwareId:(NSString * _Nullable)hardwareId __attribute__((swift_name("init(consented:document:timestamp:location:hardwareId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMConsentStateInstanceMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL consented __attribute__((swift_name("consented")));
@property (readonly) NSString * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable hardwareId __attribute__((swift_name("hardwareId")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentStateInstanceMessage.Companion")))
@interface MPMConsentStateInstanceMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMConsentStateInstanceMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentStateMessage")))
@interface MPMConsentStateMessage : MPMBase
- (instancetype)initWithConsentStateGdpr:(NSDictionary<NSString *, MPMConsentStateInstanceMessage *> * _Nullable)consentStateGdpr consentStateCcpa:(NSDictionary<NSString *, MPMConsentStateInstanceMessage *> * _Nullable)consentStateCcpa __attribute__((swift_name("init(consentStateGdpr:consentStateCcpa:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMConsentStateMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, MPMConsentStateInstanceMessage *> * _Nullable consentStateCcpa __attribute__((swift_name("consentStateCcpa")));
@property (readonly) NSDictionary<NSString *, MPMConsentStateInstanceMessage *> * _Nullable consentStateGdpr __attribute__((swift_name("consentStateGdpr")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsentStateMessage.Companion")))
@interface MPMConsentStateMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMConsentStateMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dataplan")))
@interface MPMDataplan : MPMBase
- (instancetype)initWithDataplanId:(NSString *)dataplanId dataplanVersion:(MPMInt * _Nullable)dataplanVersion __attribute__((swift_name("init(dataplanId:dataplanVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMDataplanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *dataplanId __attribute__((swift_name("dataplanId")));
@property (readonly) MPMInt * _Nullable dataplanVersion __attribute__((swift_name("dataplanVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dataplan.Companion")))
@interface MPMDataplanCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMDataplanCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataplanContextMessage")))
@interface MPMDataplanContextMessage : MPMBase
- (instancetype)initWithDataplan:(MPMDataplan *)dataplan __attribute__((swift_name("init(dataplan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMDataplanContextMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMDataplan *dataplan __attribute__((swift_name("dataplan")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataplanContextMessage.Companion")))
@interface MPMDataplanContextMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMDataplanContextMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfoMessage")))
@interface MPMDeviceInfoMessage : MPMBase
- (instancetype)initWithBuildId:(NSString * _Nullable)buildId brand:(NSString * _Nullable)brand product:(NSString * _Nullable)product device:(NSString * _Nullable)device manufacturer:(NSString * _Nullable)manufacturer platform:(NSString * _Nullable)platform osVersion:(NSString * _Nullable)osVersion osVersionInt:(MPMInt * _Nullable)osVersionInt model:(NSString * _Nullable)model releaseVersion:(NSString * _Nullable)releaseVersion deviceId:(NSString * _Nullable)deviceId androidId:(NSString * _Nullable)androidId openUdid:(NSString * _Nullable)openUdid deviceBluetoothEnabled:(MPMBoolean * _Nullable)deviceBluetoothEnabled deviceBluetoothVersion:(NSString * _Nullable)deviceBluetoothVersion deviceSupportsNfc:(MPMBoolean * _Nullable)deviceSupportsNfc deviceSupportsTelephony:(MPMBoolean * _Nullable)deviceSupportsTelephony deviceRootedObject:(MPMDeviceRootedObject * _Nullable)deviceRootedObject screenHeight:(MPMInt * _Nullable)screenHeight screenWidth:(MPMInt * _Nullable)screenWidth screenDpi:(MPMInt * _Nullable)screenDpi deviceCountry:(NSString * _Nullable)deviceCountry deviceLocaleCountry:(NSString * _Nullable)deviceLocaleCountry deviceLocaleLanguage:(NSString * _Nullable)deviceLocaleLanguage deviceTimezoneName:(NSString * _Nullable)deviceTimezoneName timezone:(MPMInt * _Nullable)timezone networkCarrier:(NSString * _Nullable)networkCarrier networkCountry:(NSString * _Nullable)networkCountry countryCode:(NSString * _Nullable)countryCode mobileNetworkCode:(NSString * _Nullable)mobileNetworkCode isTablet:(MPMBoolean * _Nullable)isTablet isInDst:(MPMBoolean * _Nullable)isInDst deviceImei:(NSString * _Nullable)deviceImei isPushSoundEnabled:(MPMBoolean * _Nullable)isPushSoundEnabled isPushVibrationEnabled:(MPMBoolean * _Nullable)isPushVibrationEnabled __attribute__((swift_name("init(buildId:brand:product:device:manufacturer:platform:osVersion:osVersionInt:model:releaseVersion:deviceId:androidId:openUdid:deviceBluetoothEnabled:deviceBluetoothVersion:deviceSupportsNfc:deviceSupportsTelephony:deviceRootedObject:screenHeight:screenWidth:screenDpi:deviceCountry:deviceLocaleCountry:deviceLocaleLanguage:deviceTimezoneName:timezone:networkCarrier:networkCountry:countryCode:mobileNetworkCode:isTablet:isInDst:deviceImei:isPushSoundEnabled:isPushVibrationEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMDeviceInfoMessageCompanion *companion __attribute__((swift_name("companion")));
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
@property (readonly) MPMDeviceRootedObject * _Nullable deviceRootedObject __attribute__((swift_name("deviceRootedObject")));
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
__attribute__((swift_name("DeviceInfoMessage.Companion")))
@interface MPMDeviceInfoMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMDeviceInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootedObject")))
@interface MPMDeviceRootedObject : MPMBase
- (instancetype)initWithDeviceRootedCYDIA:(MPMBoolean * _Nullable)deviceRootedCYDIA __attribute__((swift_name("init(deviceRootedCYDIA:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMDeviceRootedObjectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMBoolean * _Nullable deviceRootedCYDIA __attribute__((swift_name("deviceRootedCYDIA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootedObject.Companion")))
@interface MPMDeviceRootedObjectCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMDeviceRootedObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirstRunMessage")))
@interface MPMFirstRunMessage : MPMBaseEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMFirstRunMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirstRunMessage.Companion")))
@interface MPMFirstRunMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMFirstRunMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImpressionMessage")))
@interface MPMImpressionMessage : MPMDTO
- (instancetype)initWithName:(NSString *)name productList:(NSArray<MPMProductMessage *> *)productList __attribute__((swift_name("init(name:productList:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMImpressionMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MPMProductMessage *> *productList __attribute__((swift_name("productList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImpressionMessage.Companion")))
@interface MPMImpressionMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMImpressionMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationMessage")))
@interface MPMLocationMessage : MPMDTO
- (instancetype)initWithLatitude:(MPMDouble * _Nullable)latitude longitude:(MPMDouble * _Nullable)longitude accuracy:(MPMFloat * _Nullable)accuracy __attribute__((swift_name("init(latitude:longitude:accuracy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMLocationMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMFloat * _Nullable accuracy __attribute__((swift_name("accuracy")));
@property (readonly) MPMDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) MPMDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationMessage.Companion")))
@interface MPMLocationMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMLocationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MPEventMessage")))
@interface MPMMPEventMessage : MPMBaseEvent
- (instancetype)initWithName:(NSString * _Nullable)name eventDuration:(MPMDouble * _Nullable)eventDuration __attribute__((swift_name("init(name:eventDuration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMMPEventMessageCompanion *companion __attribute__((swift_name("companion")));
@property MPMDouble * _Nullable eventDuration __attribute__((swift_name("eventDuration")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MPEventMessage.Companion")))
@interface MPMMPEventMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMMPEventMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewIdentity")))
@interface MPMNewIdentity : MPMDTO
- (instancetype)initWithDateFirstSeen:(MPMLong * _Nullable)dateFirstSeen identityValue:(NSString * _Nullable)identityValue identityType:(MPMInt * _Nullable)identityType firstTimeSet:(MPMBoolean * _Nullable)firstTimeSet __attribute__((swift_name("init(dateFirstSeen:identityValue:identityType:firstTimeSet:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMNewIdentityCompanion *companion __attribute__((swift_name("companion")));
@property MPMLong * _Nullable dateFirstSeen __attribute__((swift_name("dateFirstSeen")));
@property MPMBoolean * _Nullable firstTimeSet __attribute__((swift_name("firstTimeSet")));
@property MPMInt * _Nullable identityType __attribute__((swift_name("identityType")));
@property NSString * _Nullable identityValue __attribute__((swift_name("identityValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewIdentity.Companion")))
@interface MPMNewIdentityCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMNewIdentityCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OldIdentity")))
@interface MPMOldIdentity : MPMDTO
- (instancetype)initWithIdentityValue:(NSString * _Nullable)identityValue identityType:(MPMInt * _Nullable)identityType __attribute__((swift_name("init(identityValue:identityType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMOldIdentityCompanion *companion __attribute__((swift_name("companion")));
@property MPMInt * _Nullable identityType __attribute__((swift_name("identityType")));
@property NSString * _Nullable identityValue __attribute__((swift_name("identityValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OldIdentity.Companion")))
@interface MPMOldIdentityCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMOldIdentityCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductActionObject")))
@interface MPMProductActionObject : MPMDTO
- (instancetype)initWithAction:(NSString *)action productList:(NSArray<MPMProductMessage *> *)productList transactionRevenue:(MPMDouble * _Nullable)transactionRevenue __attribute__((swift_name("init(action:productList:transactionRevenue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMProductActionObjectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSArray<MPMProductMessage *> *productList __attribute__((swift_name("productList")));
@property (readonly) MPMDouble * _Nullable transactionRevenue __attribute__((swift_name("transactionRevenue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductActionObject.Companion")))
@interface MPMProductActionObjectCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMProductActionObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductMessage")))
@interface MPMProductMessage : MPMDTO
- (instancetype)initWithName:(NSString *)name category:(NSString * _Nullable)category couponCode:(NSString * _Nullable)couponCode sku:(NSString * _Nullable)sku position:(MPMInt * _Nullable)position price:(MPMDouble * _Nullable)price quantity:(MPMDouble * _Nullable)quantity timeAdded:(MPMLong * _Nullable)timeAdded totalAmount:(MPMDouble * _Nullable)totalAmount brand:(NSString * _Nullable)brand variant:(NSString * _Nullable)variant customAttributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)customAttributes __attribute__((swift_name("init(name:category:couponCode:sku:position:price:quantity:timeAdded:totalAmount:brand:variant:customAttributes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMProductMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable couponCode __attribute__((swift_name("couponCode")));
@property (readonly) NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable customAttributes __attribute__((swift_name("customAttributes")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPMInt * _Nullable position __attribute__((swift_name("position")));
@property (readonly) MPMDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) MPMDouble * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable sku __attribute__((swift_name("sku")));
@property (readonly) MPMLong * _Nullable timeAdded __attribute__((swift_name("timeAdded")));
@property (readonly) MPMDouble * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) NSString * _Nullable variant __attribute__((swift_name("variant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductMessage.Companion")))
@interface MPMProductMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMProductMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectionReportMessage")))
@interface MPMProjectionReportMessage : MPMBase
- (instancetype)initWithProjectionId:(NSString *)projectionId messageType:(NSString *)messageType name:(NSString *)name eventType:(MPMEventType *)eventType __attribute__((swift_name("init(projectionId:messageType:name:eventType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMProjectionReportMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MPMEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *projectionId __attribute__((swift_name("projectionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectionReportMessage.Companion")))
@interface MPMProjectionReportMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMProjectionReportMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionActionObject")))
@interface MPMPromotionActionObject : MPMDTO
- (instancetype)initWithAction:(NSString *)action promotions:(NSArray<MPMPromotionMessage *> * _Nullable)promotions __attribute__((swift_name("init(action:promotions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMPromotionActionObjectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSArray<MPMPromotionMessage *> * _Nullable promotions __attribute__((swift_name("promotions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionActionObject.Companion")))
@interface MPMPromotionActionObjectCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMPromotionActionObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionMessage")))
@interface MPMPromotionMessage : MPMDTO
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name creative:(NSString * _Nullable)creative position:(NSString * _Nullable)position __attribute__((swift_name("init(id:name:creative:position:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMPromotionMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable creative __attribute__((swift_name("creative")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionMessage.Companion")))
@interface MPMPromotionMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMPromotionMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PushRegistrationMessage")))
@interface MPMPushRegistrationMessage : MPMBaseEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMPushRegistrationMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PushRegistrationMessage.Companion")))
@interface MPMPushRegistrationMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMPushRegistrationMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportingMessageMessage")))
@interface MPMReportingMessageMessage : MPMBase
- (instancetype)initWithModuleId:(int32_t)moduleId messageType:(NSString * _Nullable)messageType timestamp:(int64_t)timestamp attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes eventOrScreenName:(NSString * _Nullable)eventOrScreenName eventType:(NSString * _Nullable)eventType projectionReports:(NSArray<MPMProjectionReportMessage *> * _Nullable)projectionReports isPushRegistrationEvent:(MPMBoolean * _Nullable)isPushRegistrationEvent optout:(MPMBoolean * _Nullable)optout exceptionClassName:(NSString * _Nullable)exceptionClassName __attribute__((swift_name("init(moduleId:messageType:timestamp:attributes:eventOrScreenName:eventType:projectionReports:isPushRegistrationEvent:optout:exceptionClassName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPMReportingMessageMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable eventOrScreenName __attribute__((swift_name("eventOrScreenName")));
@property (readonly) NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString * _Nullable exceptionClassName __attribute__((swift_name("exceptionClassName")));
@property (readonly) MPMBoolean * _Nullable isPushRegistrationEvent __attribute__((swift_name("isPushRegistrationEvent")));
@property (readonly) NSString * _Nullable messageType __attribute__((swift_name("messageType")));
@property (readonly) int32_t moduleId __attribute__((swift_name("moduleId")));
@property (readonly) MPMBoolean * _Nullable optout __attribute__((swift_name("optout")));
@property (readonly) NSArray<MPMProjectionReportMessage *> * _Nullable projectionReports __attribute__((swift_name("projectionReports")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportingMessageMessage.Companion")))
@interface MPMReportingMessageMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMReportingMessageMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenViewMessage")))
@interface MPMScreenViewMessage : MPMBaseEvent
- (instancetype)initWithName:(NSString * _Nullable)name eventDuration:(MPMDouble * _Nullable)eventDuration __attribute__((swift_name("init(name:eventDuration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMScreenViewMessageCompanion *companion __attribute__((swift_name("companion")));
@property MPMDouble * _Nullable eventDuration __attribute__((swift_name("eventDuration")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenViewMessage.Companion")))
@interface MPMScreenViewMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMScreenViewMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionEndMessage")))
@interface MPMSessionEndMessage : MPMBaseEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMSessionEndMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionEndMessage.Companion")))
@interface MPMSessionEndMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMSessionEndMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionStartMessage")))
@interface MPMSessionStartMessage : MPMBaseEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMSessionStartMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionStartMessage.Companion")))
@interface MPMSessionStartMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMSessionStartMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateInfoMessage")))
@interface MPMStateInfoMessage : MPMDTO
- (instancetype)initWithAvailableDisk:(MPMLong * _Nullable)availableDisk externalDisk:(MPMLong * _Nullable)externalDisk appMemoryUsage:(MPMLong * _Nullable)appMemoryUsage freeMemory:(MPMLong * _Nullable)freeMemory maxMemory:(MPMLong * _Nullable)maxMemory avaialableMemery:(MPMLong * _Nullable)avaialableMemery totalMemory:(MPMLong * _Nullable)totalMemory batteryLevel:(MPMDouble * _Nullable)batteryLevel timeSinceStart:(MPMLong * _Nullable)timeSinceStart hasGps:(MPMBoolean * _Nullable)hasGps activeNetworkName:(NSString * _Nullable)activeNetworkName orientation:(MPMInt * _Nullable)orientation barOrientation:(MPMInt * _Nullable)barOrientation isMemoryLow:(MPMBoolean * _Nullable)isMemoryLow systemMemoryThreshold:(MPMLong * _Nullable)systemMemoryThreshold networkType:(NSString * _Nullable)networkType __attribute__((swift_name("init(availableDisk:externalDisk:appMemoryUsage:freeMemory:maxMemory:avaialableMemery:totalMemory:batteryLevel:timeSinceStart:hasGps:activeNetworkName:orientation:barOrientation:isMemoryLow:systemMemoryThreshold:networkType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMStateInfoMessageCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("StateInfoMessage.Companion")))
@interface MPMStateInfoMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMStateInfoMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserIdentityChangeMessage")))
@interface MPMUserIdentityChangeMessage : MPMBaseEvent
- (instancetype)initWithNewIdentity:(MPMNewIdentity * _Nullable)newIdentity oldIdentity:(MPMOldIdentity * _Nullable)oldIdentity __attribute__((swift_name("init(newIdentity:oldIdentity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTimeStamp:(MPMLong * _Nullable)timeStamp stateInfo:(MPMStateInfoMessage * _Nullable)stateInfo id:(NSString * _Nullable)id sessionId:(NSString * _Nullable)sessionId sessionStartTimestamp:(MPMLong * _Nullable)sessionStartTimestamp location:(MPMLocationMessage * _Nullable)location dataConnection:(NSString * _Nullable)dataConnection attributes:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)attributes eventFlags:(NSDictionary<NSString *, MPMKotlinx_serialization_jsonJsonElement *> * _Nullable)eventFlags __attribute__((swift_name("init(timeStamp:stateInfo:id:sessionId:sessionStartTimestamp:location:dataConnection:attributes:eventFlags:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPMUserIdentityChangeMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property (readonly, getter=doNewIdentity) MPMNewIdentity * _Nullable newIdentity __attribute__((swift_name("newIdentity")));
@property (readonly) MPMOldIdentity * _Nullable oldIdentity __attribute__((swift_name("oldIdentity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserIdentityChangeMessage.Companion")))
@interface MPMUserIdentityChangeMessageCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMUserIdentityChangeMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

@interface MPMDTO (Extensions)
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityResponseKt")))
@interface MPMIdentityResponseKt : MPMBase
+ (MPMError *)ErrorInitializer:(void (^)(MPMError *))initializer __attribute__((swift_name("Error(initializer:)")));
+ (MPMIdentityResponseMessage *)IdentityResponseMessageIntializer:(void (^)(MPMIdentityResponseMessageBuilder *))intializer __attribute__((swift_name("IdentityResponseMessage(intializer:)")));
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

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MPMKotlinx_serialization_jsonJsonElement : MPMBase
@property (class, readonly, getter=companion) MPMKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MPMKotlinEnumCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MPMKotlinx_serialization_jsonJsonElementCompanion : MPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPMKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
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
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPMKotlinKClass>)kClass provider:(id<MPMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPMKotlinKClass>)kClass serializer:(id<MPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPMKotlinKClass>)baseClass actualClass:(id<MPMKotlinKClass>)actualClass actualSerializer:(id<MPMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPMKotlinKClass>)baseClass defaultSerializerProvider:(id<MPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
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

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
