/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPerson : PLManagedObject <PLSyncablePerson> {
    BOOL  _needsPersistenceUpdate;
}

@property (nonatomic, retain) PLDetectedFaceGroup *associatedFaceGroup;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *detectedFaces;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) int faceCount;
@property (nonatomic, retain) NSString *fullName;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inPersonNamingModel;
@property (nonatomic, retain) PLDetectedFace *keyFace;
@property (nonatomic) int manualOrder;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic, retain) NSSet *personReferences;
@property (nonatomic, retain) NSString *personUUID;
@property (nonatomic, retain) NSString *personUri;
@property (nonatomic, retain) PLDetectedFaceGroup *rejectedFacesGroup;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic) BOOL verified;

+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllPersonsInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(id /* block */)arg3;
+ (id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4;
+ (id)peopleToUploadInPhotoLibrary:(id)arg1 limit:(int)arg2;
+ (id)peopleWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;

- (id)cplPersonChange;
- (id)debugLogDescription;
- (void)didSave;
- (BOOL)isValidForPersistence;
- (id)mutableFaces;
- (BOOL)needsPersistenceUpdate;
- (void)persistMetadataToFileSystem;
- (void)prepareForDeletion;
- (void)refreshFaces;
- (id)rejectedFacesGroupInsertingIfNeeded;
- (void)removePersistedFileSystemData;
- (void)setNeedsPersistenceUpdate:(BOOL)arg1;
- (BOOL)shouldIndexForSearch;
- (void)willSave;

@end
