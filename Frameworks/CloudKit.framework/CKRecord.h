/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecord : NSObject <ICHasDatabaseScope, NSCopying, NSSecureCoding, PQLBindable> {
    NSString * _baseToken;
    NSData * _chainParentPublicKeyID;
    CKEncryptedData * _chainPrivateKey;
    NSData * _chainProtectionInfo;
    NSMutableSet * _changedKeysSet;
    NSArray * _conflictLoserEtags;
    CKContainerID * _containerID;
    NSDate * _creationDate;
    CKRecordID * _creatorUserRecordID;
    NSString * _etag;
    BOOL  _hasUpdatedParent;
    BOOL  _hasUpdatedShare;
    BOOL  _knownToServer;
    CKRecordID * _lastModifiedUserRecordID;
    NSDate * _modificationDate;
    NSString * _modifiedByDevice;
    CKEncryptedData * _mutableEncryptedPublicSharingKey;
    NSURL * _mutableURL;
    NSMutableDictionary * _originalValues;
    CKReference * _parent;
    int  _permission;
    NSDictionary * _pluginFields;
    CKReference * _previousParent;
    NSString * _previousProtectionEtag;
    NSString * _previousProtectionEtagFromUnitTest;
    CKReference * _previousShare;
    NSData * _protectionData;
    NSString * _protectionEtag;
    CKRecordID * _recordID;
    NSString * _recordType;
    NSString * _routingKey;
    BOOL  _serializeProtectionData;
    CKReference * _share;
    NSString * _shareEtag;
    NSArray * _tombstonedPublicKeyIDs;
    BOOL  _trackChanges;
    BOOL  _useLightweightPCS;
    NSMutableDictionary * _values;
    BOOL  _wantsChainPCS;
    BOOL  _wantsPublicSharingKey;
    BOOL  _wasCached;
    NSString * _zoneProtectionEtag;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, retain) NSString *baseToken;
@property (nonatomic, readonly) NSData *brc_containerMetadataPropertiesData;
@property (nonatomic, retain) NSData *chainParentPublicKeyID;
@property (nonatomic, retain) CKEncryptedData *chainPrivateKey;
@property (nonatomic, retain) NSData *chainProtectionInfo;
@property (nonatomic, retain) NSSet *changedKeysSet;
@property (nonatomic, retain) NSArray *conflictLoserEtags;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, readonly) BOOL containsAssetValues;
@property (nonatomic, readonly) BOOL containsPackageValues;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) CKRecordID *creatorUserRecordID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *encryptedFullTokenData;
@property (nonatomic, readonly) NSData *encryptedPublicSharingKey;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) NSString *fullToken;
@property (nonatomic, readonly) BOOL hasEncryptedData;
@property (nonatomic, readonly) BOOL hasModifiedEncryptedData;
@property (nonatomic, readonly) BOOL hasModifiedPropertiesRequiringEncryption;
@property (nonatomic, readonly) BOOL hasPropertiesRequiringDecryption;
@property (nonatomic, readonly) BOOL hasPropertiesRequiringEncryption;
@property (nonatomic) BOOL hasUpdatedParent;
@property (nonatomic) BOOL hasUpdatedShare;
@property (readonly) unsigned int hash;
@property (getter=isKnownToServer, nonatomic) BOOL knownToServer;
@property (nonatomic, copy) CKRecordID *lastModifiedUserRecordID;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *modifiedByDevice;
@property (nonatomic, retain) CKEncryptedData *mutableEncryptedPublicSharingKey;
@property (nonatomic, copy) NSURL *mutableURL;
@property (nonatomic, retain) NSDictionary *originalValues;
@property (nonatomic, copy) CKReference *parent;
@property int permission;
@property (nonatomic, copy) NSDictionary *pluginFields;
@property (nonatomic, retain) CKReference *previousParent;
@property (nonatomic, retain) NSString *previousProtectionEtag;
@property (nonatomic, retain) NSString *previousProtectionEtagFromUnitTest;
@property (nonatomic, retain) CKReference *previousShare;
@property (nonatomic, readonly) NSString *privateToken;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, retain) NSString *protectionEtag;
@property (nonatomic, readonly, copy) NSString *recordChangeTag;
@property (nonatomic, copy) CKRecordID *recordID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*recordPCS;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic) BOOL serializeProtectionData;
@property (nonatomic, copy) CKReference *share;
@property (nonatomic, retain) NSString *shareEtag;
@property (nonatomic, readonly) NSData *shortSharingTokenData;
@property (nonatomic, readonly) NSData *shortSharingTokenHashData;
@property (nonatomic, readonly) NSString *shortToken;
@property (nonatomic, readonly) unsigned int size;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tombstonedPublicKeyIDs;
@property (nonatomic) BOOL trackChanges;
@property (nonatomic) BOOL useLightweightPCS;
@property (nonatomic, retain) NSDictionary *values;
@property (nonatomic) BOOL wantsChainPCS;
@property (nonatomic) BOOL wantsPublicSharingKey;
@property (nonatomic) BOOL wasCached;
@property (nonatomic, retain) NSString *zoneProtectionEtag;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)fullTokenFromBaseToken:(id)arg1 privateToken:(id)arg2;
+ (id)recordWithDuplicatedPackagesOfRecord:(id)arg1 error:(id*)arg2;
+ (id)shareURLWithShortToken:(id)arg1 shareTitle:(id)arg2 shareType:(id)arg3 containerID:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesToDescribe:(BOOL)arg1;
- (id)URL;
- (id)_allStrings;
- (BOOL)_checkProperties:(BOOL)arg1 withValueCheckBlock:(id /* block */)arg2;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (void)_sanitizeRecordValue:(id)arg1;
- (unsigned int)_sizeOfRecordID:(id)arg1;
- (unsigned int)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateRecordName:(id)arg1;
- (void)_validateRecordValue:(id)arg1;
- (id)allKeys;
- (id)allTokens;
- (id)baseToken;
- (id)chainParentPublicKeyID;
- (id)chainPrivateKey;
- (id)chainProtectionInfo;
- (id)changedKeys;
- (id)changedKeysSet;
- (void)claimPackagesWithSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id)conflictLoserEtags;
- (id)containerID;
- (BOOL)containsAssetValues;
- (BOOL)containsPackageValues;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creatorUserRecordID;
- (id)debugDescription;
- (id)decryptFullToken:(id)arg1;
- (id)description;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFullTokenData;
- (id)encryptedPublicSharingKey;
- (id)etag;
- (id)fullToken;
- (BOOL)hasEncryptedData;
- (BOOL)hasModifiedEncryptedData;
- (BOOL)hasModifiedPropertiesRequiringEncryption;
- (BOOL)hasPropertiesRequiringDecryption;
- (BOOL)hasPropertiesRequiringEncryption;
- (BOOL)hasUpdatedParent;
- (BOOL)hasUpdatedShare;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (BOOL)isKnownToServer;
- (id)lastModifiedUserRecordID;
- (id)modificationDate;
- (id)modifiedByDevice;
- (id)mutableEncryptedPublicSharingKey;
- (id)mutableURL;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (id)parent;
- (int)permission;
- (id)pluginFields;
- (id)previousParent;
- (id)previousProtectionEtag;
- (id)previousProtectionEtagFromUnitTest;
- (id)previousShare;
- (id)privateToken;
- (id)protectionData;
- (id)protectionEtag;
- (id)recordChangeTag;
- (id)recordID;
- (id)recordType;
- (void)releasePackages;
- (void)removePackages;
- (void)resetChangedKeys;
- (id)routingKey;
- (BOOL)serializeProtectionData;
- (void)setBaseToken:(id)arg1;
- (void)setChainParentPublicKeyID:(id)arg1;
- (void)setChainPrivateKey:(id)arg1;
- (void)setChainProtectionInfo:(id)arg1;
- (void)setChangedKeysSet:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreatorUserRecordID:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasUpdatedParent:(BOOL)arg1;
- (void)setHasUpdatedShare:(BOOL)arg1;
- (void)setKnownToServer:(BOOL)arg1;
- (void)setLastModifiedUserRecordID:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setMutableEncryptedPublicSharingKey:(id)arg1;
- (void)setMutableURL:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setOriginalValues:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentReferenceFromRecord:(id)arg1;
- (void)setParentReferenceFromRecordID:(id)arg1;
- (void)setPermission:(int)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setPreviousParent:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setPreviousProtectionEtagFromUnitTest:(id)arg1;
- (void)setPreviousShare:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setSerializeProtectionData:(BOOL)arg1;
- (void)setShare:(id)arg1;
- (void)setShareEtag:(id)arg1;
- (void)setTombstonedPublicKeyIDs:(id)arg1;
- (void)setTrackChanges:(BOOL)arg1;
- (void)setUseLightweightPCS:(BOOL)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValues:(id)arg1;
- (void)setWantsChainPCS:(BOOL)arg1;
- (void)setWantsPublicSharingKey:(BOOL)arg1;
- (void)setWasCached:(BOOL)arg1;
- (void)setZoneProtectionEtag:(id)arg1;
- (id)share;
- (id)shareEtag;
- (id)shortSharingToken;
- (id)shortSharingTokenData;
- (id)shortSharingTokenHashData;
- (id)shortToken;
- (unsigned int)size;
- (id)tombstonedPublicKeyIDs;
- (BOOL)trackChanges;
- (BOOL)useLightweightPCS;
- (id)valueForKey:(id)arg1;
- (id)values;
- (BOOL)wantsChainPCS;
- (BOOL)wantsPublicSharingKey;
- (BOOL)wasCached;
- (id)zoneProtectionEtag;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;
+ (id)brc_containerMetadataZoneID;
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;
+ (id)brc_zoneHealthZoneID;
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;

- (BOOL)_deserializeValue:(id*)arg1 forKey:(id)arg2 expectClass:(Class)arg3 allowNil:(BOOL)arg4 errorDescription:(id*)arg5;
- (id)brc_containerMetadataIconNames;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataPropertiesData;
- (BOOL)brc_currentUserOwnsLastEditorDevice;
- (id)brc_documentName;
- (BOOL)brc_isInterestingRecordForSyncDown;
- (BOOL)brc_isfakeRecordWithErrorMarkerFor20716676;
- (id)brc_lastEditorDeviceName;
- (id)brc_oplockMergeEtag;
- (BOOL)brc_safeToGetURL;
- (id)brc_sharedDocumentDisplayName;
- (id)brc_sharedDocumentExtension;
- (id)brc_updateDroppedReason;
- (void)brc_updateWithLogicalName:(id)arg1;
- (BOOL)deserializeAliasInfo:(id*)arg1 serverZone:(id)arg2 error:(id*)arg3;
- (BOOL)deserializeFilename:(id*)arg1 basename:(id*)arg2 bounceno:(id*)arg3 extension:(id*)arg4 userInfo:(id)arg5 error:(id*)arg6;
- (BOOL)deserializeStatInfo:(id*)arg1 itemID:(id)arg2 session:(id)arg3 error:(id*)arg4;
- (BOOL)deserializeSymlinkTarget:(id*)arg1 error:(id*)arg2;
- (BOOL)deserializeVersion:(id*)arg1 fakeStatInfo:(id*)arg2 clientZone:(id)arg3 error:(id*)arg4;
- (BOOL)deserializeiWorkSharingOptions:(unsigned int*)arg1 error:(id*)arg2;
- (void)serializeFilename:(id)arg1 forCreation:(BOOL)arg2;
- (void)serializeFilename:(id)arg1 forCreation:(BOOL)arg2 setExtension:(BOOL)arg3;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned int)arg2 stageID:(id)arg3 deadInServerTruth:(BOOL)arg4 pcsChaining:(BOOL)arg5;
- (void)serializeSystemFields:(id)arg1;
- (void)serializeVersion:(id)arg1 diffs:(unsigned int)arg2 deadInServerTruth:(BOOL)arg3;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_recordWithEncodedSystemFields:(id)arg1;

- (id)fc_encodeSystemFields;
- (BOOL)fc_isDifferentFromRecord:(id)arg1 forKey:(id)arg2;
- (void)fc_setRecordName:(id)arg1;
- (void)fc_setZoneName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (int)databaseScope;
- (BOOL)ic_isOwnedByCurrentUser;
- (id)ic_loggingDescription;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_arrayForKey:(id)arg1;
- (BOOL)safari_boolForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_encryptedDataForKey:(id)arg1;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_referenceForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;

@end
