/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudMaster : PLManagedObject

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSString *cloudMasterGUID;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) short fullSizeJPEGSource;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, retain) NSManagedObject *mediaMetadata;
@property (nonatomic, retain) NSString *mediaMetadataType;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (nonatomic, retain) NSSet *resources;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;

+ (id)cloudMasterWithGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersByGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersWithGUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1;

- (void)applyPropertiesFromCPLMasterChange:(id)arg1;
- (void)applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)assetUUIDToCloudResources;
- (void)awakeFromInsert;
- (id)cloudResourceForResourceType:(unsigned int)arg1 forAssetUuid:(id)arg2;
- (id)cloudResourcesForResourceType:(unsigned int)arg1;
- (id)cplResourceForResourceType:(unsigned int)arg1 forAssetUuid:(id)arg2;
- (void)deleteAllResourcesForAssetUuid:(id)arg1;
- (id)description;
- (unsigned int)sizeOfOriginal;

@end
