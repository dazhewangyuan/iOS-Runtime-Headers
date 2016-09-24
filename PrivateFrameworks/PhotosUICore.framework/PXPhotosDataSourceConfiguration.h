/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSourceConfiguration : NSObject {
    NSSet * _allowedUUIDs;
    PHFetchResult * _collectionListFetchResult;
    NSDictionary * _existingAssetCollectionFetchResults;
    NSDictionary * _existingKeyAssetsFetchResults;
    NSArray * _filterPersons;
    NSPredicate * _filterPredicate;
    BOOL  _hideHiddenAssets;
    unsigned int  _options;
    PHAsset * _referenceAsset;
}

@property (nonatomic, retain) NSSet *allowedUUIDs;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, retain) NSDictionary *existingAssetCollectionFetchResults;
@property (nonatomic, retain) NSDictionary *existingKeyAssetsFetchResults;
@property (nonatomic, retain) NSArray *filterPersons;
@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (nonatomic) BOOL hideHiddenAssets;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, retain) PHAsset *referenceAsset;

- (void).cxx_destruct;
- (id)allowedUUIDs;
- (id)collectionListFetchResult;
- (id)existingAssetCollectionFetchResults;
- (id)existingKeyAssetsFetchResults;
- (id)filterPersons;
- (id)filterPredicate;
- (BOOL)hideHiddenAssets;
- (id)init;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)options;
- (id)referenceAsset;
- (void)setAllowedUUIDs:(id)arg1;
- (void)setExistingAssetCollectionFetchResults:(id)arg1;
- (void)setExistingKeyAssetsFetchResults:(id)arg1;
- (void)setFilterPersons:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setHideHiddenAssets:(BOOL)arg1;
- (void)setReferenceAsset:(id)arg1;

@end
