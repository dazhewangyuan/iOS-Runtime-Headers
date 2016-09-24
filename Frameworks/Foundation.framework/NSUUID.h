/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <NSCopying, NSSecureCoding, PASerializable, PQLValuable>

@property (readonly, copy) NSString *UUIDString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (id)UUIDString;
- (struct __CFString { }*)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_UUIDWithData:(id)arg1;

- (id)hk_dataForUUIDBytes;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(BOOL)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)convertToData;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)_LS_UUIDWithData:(id)arg1;
+ (id)_LS_UUIDWithData:(id)arg1 SHA1:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_zerosUUID;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)initWithNamespace:(id)arg1 data:(id)arg2;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(BOOL)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)convertToData;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)_maps_zeroUUID;

- (id)_maps_initWithUUIDString:(id)arg1 disallowReturningZeroUUID:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_dataForUUID;

- (id)_navigation_data;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)TTZero;

- (int)TTCompare:(id)arg1;
- (id)TTShortDescription;

// Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long)sizeInBytesForSerializedVersion;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)tsp_initWithMessage:(const struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; }*)arg1;
- (void)tsp_saveToMessage:(struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; }*)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
