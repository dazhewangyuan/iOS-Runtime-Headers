/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMemoryChange : CPLRecordChange {
    CPLMemoryAssetList * _assetList;
    NSData * _assetListPredicate;
    int  _category;
    NSDate * _creationDate;
    BOOL  _favorite;
    NSData * _graphData;
    int  _graphVersion;
    NSData * _movieData;
    BOOL  _rejected;
    double  _score;
    int  _subcategory;
    NSString * _subtitle;
    NSString * _title;
    BOOL  _userCreated;
}

@property (nonatomic, copy) CPLMemoryAssetList *assetList;
@property (nonatomic, copy) NSData *assetListPredicate;
@property (nonatomic) int category;
@property (nonatomic, copy) NSDate *creationDate;
@property (getter=isFavorite, nonatomic) BOOL favorite;
@property (nonatomic, copy) NSData *graphData;
@property (nonatomic) int graphVersion;
@property (nonatomic, copy) NSData *movieData;
@property (getter=isRejected, nonatomic) BOOL rejected;
@property (nonatomic) double score;
@property (nonatomic) int subcategory;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (getter=isUserCreated, nonatomic) BOOL userCreated;

+ (id)_createTestMemoryWithAssets:(id)arg1;

- (void).cxx_destruct;
- (id)assetList;
- (id)assetListPredicate;
- (int)category;
- (id)creationDate;
- (id)graphData;
- (int)graphVersion;
- (id)identifiersForMapping;
- (BOOL)isFavorite;
- (BOOL)isRejected;
- (BOOL)isUserCreated;
- (id)movieData;
- (id)propertiesDescription;
- (double)score;
- (void)setAssetList:(id)arg1;
- (void)setAssetListPredicate:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFavorite:(BOOL)arg1;
- (void)setGraphData:(id)arg1;
- (void)setGraphVersion:(int)arg1;
- (void)setMovieData:(id)arg1;
- (void)setRejected:(BOOL)arg1;
- (void)setScore:(double)arg1;
- (void)setSubcategory:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserCreated:(BOOL)arg1;
- (int)subcategory;
- (id)subtitle;
- (BOOL)supportsDeletion;
- (BOOL)supportsDirectDeletion;
- (id)title;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;

@end
