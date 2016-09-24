/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (nonatomic) int adjustmentType;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, copy) NSString *filterName;
@property (nonatomic, copy) NSDictionary *filterSettings;

+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize { double x1; double x2; })arg2 effectFilterCount:(unsigned int*)arg3;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize { double x1; double x2; })arg2 withOriginalImageSize:(struct CGSize { double x1; double x2; })arg3 effectFilterCount:(unsigned int*)arg4;
+ (void)convertAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 andCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toStraightenAngle:(float*)arg3 andCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromImageSize:(struct CGSize { double x1; double x2; })arg2 toImageSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)convertStraightenAngle:(float)arg1 andCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 andCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
+ (void)fixupAssetSizeFromAdjustments:(id)arg1;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (int)adjustmentType;
- (id)metadataProperties;
- (void)setAdjustmentType:(int)arg1;

@end
