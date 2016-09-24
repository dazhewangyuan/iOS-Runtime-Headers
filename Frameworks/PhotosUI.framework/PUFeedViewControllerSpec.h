/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedViewControllerSpec : NSObject {
    PUPhotosGridViewControllerSpec * _gridSpec;
    int  _largeNumberOfSubjectsForLikes;
    int  _largeTileFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _largeTileMaximumFillingSize;
    int  _largeTileQualityImageFormat;
    int  _mediumTileFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _mediumTileMaximumFillingSize;
    int  _mediumTileQualityImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumVideoTileSize;
    PUPhotosPickerViewControllerSpec * _photosPickerSpec;
    PUFeedViewControllerSpec * _popoverFeedViewControllerSpec;
    int  _promptStyle;
    NSIndexSet * _qualityImageFormats;
    BOOL  _shouldHideBarsInLandscape;
    BOOL  _shouldShowInvitationsInPopover;
    BOOL  _shouldUseAspectThumbnails;
    BOOL  _shouldUseFullscreenLayout;
    int  _smallTileFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _smallTileMaximumFittingSize;
    double  _smallTilePanoAspectRatio;
    int  _smallTilePanoQualityImageFormat;
    int  _smallTileQualityImageFormat;
    int  _squareThumbnailFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _squareThumbnailMaximumSize;
    int  _squareThumbnailQualityImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    int  _veryLargeTileFastImageFormat;
    int  _veryLargeTileQualityImageFormat;
}

@property (nonatomic, readonly) PUPhotosGridViewControllerSpec *gridSpec;
@property (nonatomic, readonly) int largeNumberOfSubjectsForLikes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumVideoTileSize;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerSpec;
@property (nonatomic, readonly) PUFeedViewControllerSpec *popoverFeedViewControllerSpec;
@property (nonatomic, readonly) int promptStyle;
@property (setter=_setQualityImageFormats:, nonatomic, copy) NSIndexSet *qualityImageFormats;
@property (nonatomic, readonly) BOOL shouldHideBarsInLandscape;
@property (nonatomic, readonly) BOOL shouldShowInvitationsInPopover;
@property (nonatomic, readonly) BOOL shouldUseAspectThumbnails;
@property (nonatomic, readonly) BOOL shouldUseFullscreenLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_setQualityImageFormats:(id)arg1;
- (BOOL)canUseSimplePreheatManager;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; }*)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(int)arg2 collectionViewSize:(struct CGSize { double x1; double x2; })arg3 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(int)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; }*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(BOOL)arg4 collectionViewType:(int)arg5;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(int)arg5 collectionViewType:(int)arg6 animated:(BOOL)arg7;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForSectionType:(int)arg1 collectionViewType:(int)arg2;
- (id)defaultTextAttributesForCollectionViewType:(int)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(int)arg1;
- (void)getFastImageFormat:(out int*)arg1 qualityImageFormat:(out int*)arg2 forSourceSize:(struct CGSize { double x1; double x2; })arg3 destinationSize:(struct CGSize { double x1; double x2; })arg4 allowCrop:(BOOL)arg5;
- (void)getReferenceMaximumLength:(float*)arg1 minimumNumberOfTilesToOmit:(int*)arg2 forSectionType:(int)arg3 collectionViewType:(int)arg4;
- (id)gridSpec;
- (id)init;
- (int)largeNumberOfSubjectsForLikes;
- (struct CGSize { double x1; double x2; })minimumVideoTileSize;
- (id)photosPickerSpec;
- (id)popoverFeedViewControllerSpec;
- (int)promptStyle;
- (id)qualityImageFormats;
- (BOOL)shouldHideBarsInLandscape;
- (BOOL)shouldShowCommentBadgesInCollectionViewType:(int)arg1;
- (BOOL)shouldShowDatesInSectionFootersInCollectionViewType:(int)arg1;
- (BOOL)shouldShowInvitationsInPopover;
- (BOOL)shouldShowLikeButtonForCollectionViewType:(int)arg1;
- (BOOL)shouldShowSeeAllInSectionFootersInCollectionViewType:(int)arg1;
- (BOOL)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(int)arg1;
- (BOOL)shouldUseAspectThumbnails;
- (BOOL)shouldUseFullscreenLayout;
- (float)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (struct CGSize { double x1; double x2; })thumbnailSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateFormats;

@end
