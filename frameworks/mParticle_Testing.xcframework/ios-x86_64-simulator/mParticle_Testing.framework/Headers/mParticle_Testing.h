#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPTPlatforms, MPTMutable<T>, MPTStately_isolateIsolateState<T>, MPTKotlinEnumCompanion, MPTKotlinEnum<E>, MPTLifecycleEvent, MPTKotlinArray<T>, MPTRandomUtils, MPTApiIdentityType, MPTModelsEventType, MPTTestingUtils, MPTApiMPEvent, MPTKotlinx_serialization_jsonJsonElement, MPTApiPlatform, MPTStately_isolateStateHolder<__covariant T>, MPTModelsEventTypeCompanion, MPTApiMessageType, MPBaseEvent, MPTApiBaseEvent, MPTApiCustomEvent, MPTKotlinx_serialization_jsonJsonElementCompanion, MPTApiMessageTypeCompanion, MPTKotlinx_serialization_coreSerializersModule, MPTKotlinx_serialization_coreSerialKind, MPTKotlinNothing;

@protocol MPTKotlinComparable, MPTAwaiter, MPTKotlinIterator, MPTStately_isolateStateRunner, MPTKotlinx_serialization_coreKSerializer, MPTKotlinx_serialization_coreEncoder, MPTKotlinx_serialization_coreSerialDescriptor, MPTKotlinx_serialization_coreSerializationStrategy, MPTKotlinx_serialization_coreDecoder, MPTKotlinx_serialization_coreDeserializationStrategy, MPTKotlinx_serialization_coreCompositeEncoder, MPTKotlinAnnotation, MPTKotlinx_serialization_coreCompositeDecoder, MPTKotlinx_serialization_coreSerializersModuleCollector, MPTKotlinKClass, MPTKotlinKDeclarationContainer, MPTKotlinKAnnotatedElement, MPTKotlinKClassifier;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailureLatch")))
@interface MPTFailureLatch : MPTBase
- (instancetype)initWithDescription:(NSString *)description count:(int32_t)count __attribute__((swift_name("init(description:count:)"))) __attribute__((objc_designated_initializer));
- (void)await __attribute__((swift_name("await()")));
- (void)awaitTimeout:(int64_t)timeout __attribute__((swift_name("await(timeout:)")));
- (void)countDown __attribute__((swift_name("countDown()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) MPTPlatforms *platforms __attribute__((swift_name("platforms")));
@property (readonly) MPTStately_isolateIsolateState<MPTMutable<MPTInt *> *> *remainingCount __attribute__((swift_name("remainingCount")));
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
__attribute__((swift_name("Mutable")))
@interface MPTMutable<T> : MPTBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Platforms")))
@interface MPTPlatforms : MPTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)currentThread __attribute__((swift_name("currentThread()")));
- (BOOL)isServerThread __attribute__((swift_name("isServerThread()")));
- (void)prepareThread __attribute__((swift_name("prepareThread()")));
- (id _Nullable)runInForegroundRunnable:(id _Nullable (^)(void))runnable __attribute__((swift_name("runInForeground(runnable:)")));
- (void)sleepMillis:(int64_t)millis __attribute__((swift_name("sleep(millis:)")));
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
- (NSDictionary<id, NSArray<id> *> *)getRandomCustomFlagsCount:(int32_t)count __attribute__((swift_name("getRandomCustomFlags(count:)")));
- (NSDictionary<MPTApiIdentityType *, NSString *> *)getRandomUserIdentitiesCount:(int32_t)count __attribute__((swift_name("getRandomUserIdentities(count:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (MPTMutableDictionary<NSString *, NSString *> *)randomAttributes __attribute__((swift_name("randomAttributes()")));
- (MPTModelsEventType *)randomEventType __attribute__((swift_name("randomEventType()")));
- (MPTMutableDictionary<MPTApiIdentityType *, NSString *> *)randomIdentities __attribute__((swift_name("randomIdentities()")));
- (int32_t)randomIntFrom:(int32_t)from to:(int32_t)to __attribute__((swift_name("randomInt(from:to:)")));
- (NSSet<MPTInt *> *)randomIntSetFromRange:(int32_t)fromRange toRange:(int32_t)toRange num:(int32_t)num __attribute__((swift_name("randomIntSet(fromRange:toRange:num:)")));
- (int64_t)randomLongFrom:(int64_t)from to:(int64_t)to __attribute__((swift_name("randomLong(from:to:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailureLatchKt")))
@interface MPTFailureLatchKt : MPTBase
@property (class) id<MPTAwaiter> _Nullable awaiterInstance __attribute__((swift_name("awaiterInstance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssertKt")))
@interface MPTAssertKt : MPTBase
+ (void)assertEqualJsonElementJsonElement1:(MPTKotlinx_serialization_jsonJsonElement * _Nullable)jsonElement1 jsonElement2:(MPTKotlinx_serialization_jsonJsonElement * _Nullable)jsonElement2 __attribute__((swift_name("assertEqualJsonElement(jsonElement1:jsonElement2:)")));
+ (void)assertJsonArrayEqualJsonArray1:(NSArray<MPTKotlinx_serialization_jsonJsonElement *> *)jsonArray1 jsonArray2:(NSArray<MPTKotlinx_serialization_jsonJsonElement *> *)jsonArray2 __attribute__((swift_name("assertJsonArrayEqual(jsonArray1:jsonArray2:)")));
+ (void)assertJsonEqualObject1:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> *)object1 object2:(NSDictionary<NSString *, MPTKotlinx_serialization_jsonJsonElement *> *)object2 __attribute__((swift_name("assertJsonEqual(object1:object2:)")));
+ (void)assertEquals:(id _Nullable)receiver other:(id _Nullable (^)(void))other __attribute__((swift_name("assertEquals(_:other:)")));
+ (void)asserts:(id _Nullable)receiver assertion:(MPTBoolean *(^)(id _Nullable))assertion __attribute__((swift_name("asserts(_:assertion:)")));
+ (BOOL)equals:(id _Nullable)receiver t:(id _Nullable)t __attribute__((swift_name("equals(_:t:)")));
+ (BOOL)isNot:(id _Nullable)receiver t:(id _Nullable)t __attribute__((swift_name("isNot(_:t:)")));
+ (void)mustEqual:(id _Nullable)receiver other:(id _Nullable)other __attribute__((swift_name("mustEqual(_:other:)")));
+ (void)mustHave:(id _Nullable)receiver assertion:(MPTBoolean *(^)(id _Nullable))assertion __attribute__((swift_name("mustHave(_:assertion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface MPTUtilsKt : MPTBase
+ (void)assertPlatformDifferenceValue:(id _Nullable)value message:(NSString * _Nullable)message assertion:(id _Nullable (^)(MPTApiPlatform *))assertion __attribute__((swift_name("assertPlatformDifference(value:message:assertion:)")));
+ (id _Nullable)andLog:(id _Nullable)receiver logAction:(NSString *(^)(void))logAction __attribute__((swift_name("andLog(_:logAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwaiterKt")))
@interface MPTAwaiterKt : MPTBase
+ (void)setAwaiterAwaiter:(id<MPTAwaiter>)awaiter __attribute__((swift_name("setAwaiter(awaiter:)")));
@end;

__attribute__((swift_name("Stately_isolateIsolateState")))
@interface MPTStately_isolateIsolateState<T> : MPTBase
- (instancetype)initWithProducer:(T (^)(void))producer __attribute__((swift_name("init(producer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStateHolder:(MPTStately_isolateStateHolder<T> *)stateHolder __attribute__((swift_name("init(stateHolder:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)accessBlock:(id _Nullable (^)(T))block __attribute__((swift_name("access(block:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (MPTStately_isolateStateHolder<id> *)forkR:(id)r __attribute__((swift_name("fork(r:)")));
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
__attribute__((swift_name("ModelsEventType")))
@interface MPTModelsEventType : MPTKotlinEnum<MPTModelsEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPTModelsEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPTModelsEventType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPTModelsEventType *navigation __attribute__((swift_name("navigation")));
@property (class, readonly) MPTModelsEventType *location __attribute__((swift_name("location")));
@property (class, readonly) MPTModelsEventType *search __attribute__((swift_name("search")));
@property (class, readonly) MPTModelsEventType *transaction __attribute__((swift_name("transaction")));
@property (class, readonly) MPTModelsEventType *usercontent __attribute__((swift_name("usercontent")));
@property (class, readonly) MPTModelsEventType *userpreference __attribute__((swift_name("userpreference")));
@property (class, readonly) MPTModelsEventType *social __attribute__((swift_name("social")));
@property (class, readonly) MPTModelsEventType *other __attribute__((swift_name("other")));
@property (class, readonly) MPTModelsEventType *media __attribute__((swift_name("media")));
+ (MPTKotlinArray<MPTModelsEventType *> *)values __attribute__((swift_name("values()")));
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
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPTModelsEventType *)eventType type:(MPTApiMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(MPTApiMessageType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseEvent:(MPBaseEvent *)baseEvent __attribute__((swift_name("init(baseEvent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property NSString *eventName __attribute__((swift_name("eventName")));
@property MPTModelsEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@property MPTDouble * _Nullable length __attribute__((swift_name("length")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMPEvent")))
@interface MPTApiMPEvent : MPTApiCustomEvent
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPTModelsEventType *)eventType __attribute__((swift_name("init(eventName:eventType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName eventType:(MPTModelsEventType *)eventType type:(MPTApiMessageType *)type __attribute__((swift_name("init(eventName:eventType:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL isScreenEvent __attribute__((swift_name("isScreenEvent")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MPTKotlinx_serialization_jsonJsonElement : MPTBase
@property (class, readonly, getter=companion) MPTKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stately_isolateStateHolder")))
@interface MPTStately_isolateStateHolder<__covariant T> : MPTBase
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) T myState __attribute__((swift_name("myState")));
@property (readonly) BOOL myThread __attribute__((swift_name("myThread")));
@property (readonly) id<MPTStately_isolateStateRunner> stateRunner __attribute__((swift_name("stateRunner")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPTKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
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

__attribute__((swift_name("Stately_isolateStateRunner")))
@protocol MPTStately_isolateStateRunner
@required
- (id _Nullable)stateRunBlock:(id _Nullable (^)(void))block __attribute__((swift_name("stateRun(block:)")));
- (void)stop __attribute__((swift_name("stop()")));
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
__attribute__((swift_name("ApiMessageType.Companion")))
@interface MPTApiMessageTypeCompanion : MPTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPTApiMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (MPTApiMessageType *)forMessageTypeMessageType:(uint64_t)messageType __attribute__((swift_name("forMessageType(messageType:)")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPTKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPTKotlinKClass>)kClass provider:(id<MPTKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPTKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPTKotlinKClass>)kClass serializer:(id<MPTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPTKotlinKClass>)baseClass actualClass:(id<MPTKotlinKClass>)actualClass actualSerializer:(id<MPTKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPTKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MPTKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MPTKotlinKClass>)baseClass defaultSerializerProvider:(id<MPTKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
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
