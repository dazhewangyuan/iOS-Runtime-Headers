/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridSettings : PUSettings {
    BOOL  _allowDynamicDetailsTitles;
    BOOL  _badgeAllItemsAsFavorites;
    double  _defaultItemSideSize;
    BOOL  _displayAllItemsAsBursts;
    BOOL  _flashDegradedImages;
    BOOL  _forceJPEGThumbnailsInDefaultGrid;
    BOOL  _hideGlobalFooter;
    double  _leftScrubberRate;
    double  _magnifierRevealPreviewScale;
    double  _maximumSpacing;
    double  _minimumDistanceToUnfreeze;
    double  _minimumSpacing;
    int  _numberColumnsInDefaultGrid;
    int  _numberOfColumnsInWideGrid;
    double  _previewRevealProgressToFreezeMagnifier;
    double  _rightScrubberRate;
    BOOL  _shouldExitEditingModeAfterDuplication;
    BOOL  _showTimelineScrubbers;
    double  _sideMargins;
    BOOL  _simulateLongTitles;
    double  _simulatedDetailsAttributesLoadingDelay;
    BOOL  _swipeSelectionEnabled;
    BOOL  _useFloatingHeaders;
}

@property (nonatomic) BOOL allowDynamicDetailsTitles;
@property (nonatomic) BOOL badgeAllItemsAsFavorites;
@property (nonatomic) double defaultItemSideSize;
@property (nonatomic) BOOL displayAllItemsAsBursts;
@property (nonatomic) BOOL flashDegradedImages;
@property (nonatomic) BOOL forceJPEGThumbnailsInDefaultGrid;
@property (nonatomic) BOOL hideGlobalFooter;
@property (nonatomic) double leftScrubberRate;
@property (nonatomic) double magnifierRevealPreviewScale;
@property (nonatomic) double maximumSpacing;
@property (nonatomic) double minimumDistanceToUnfreeze;
@property (nonatomic) double minimumSpacing;
@property (nonatomic) int numberColumnsInDefaultGrid;
@property (nonatomic) int numberOfColumnsInWideGrid;
@property (nonatomic) double previewRevealProgressToFreezeMagnifier;
@property (nonatomic) double rightScrubberRate;
@property (nonatomic) BOOL shouldExitEditingModeAfterDuplication;
@property (nonatomic) BOOL showTimelineScrubbers;
@property (nonatomic) double sideMargins;
@property (nonatomic) BOOL simulateLongTitles;
@property (nonatomic) double simulatedDetailsAttributesLoadingDelay;
@property (getter=isSwipeSelectionEnabled, nonatomic) BOOL swipeSelectionEnabled;
@property (nonatomic) BOOL useFloatingHeaders;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)allowDynamicDetailsTitles;
- (BOOL)badgeAllItemsAsFavorites;
- (float)defaultItemSideSize;
- (BOOL)displayAllItemsAsBursts;
- (BOOL)flashDegradedImages;
- (BOOL)forceJPEGThumbnailsInDefaultGrid;
- (BOOL)hideGlobalFooter;
- (BOOL)isSwipeSelectionEnabled;
- (float)leftScrubberRate;
- (float)magnifierRevealPreviewScale;
- (float)maximumSpacing;
- (float)minimumDistanceToUnfreeze;
- (float)minimumSpacing;
- (int)numberColumnsInDefaultGrid;
- (int)numberOfColumnsInWideGrid;
- (float)previewRevealProgressToFreezeMagnifier;
- (float)rightScrubberRate;
- (void)setAllowDynamicDetailsTitles:(BOOL)arg1;
- (void)setBadgeAllItemsAsFavorites:(BOOL)arg1;
- (void)setDefaultItemSideSize:(float)arg1;
- (void)setDefaultValues;
- (void)setDisplayAllItemsAsBursts:(BOOL)arg1;
- (void)setFlashDegradedImages:(BOOL)arg1;
- (void)setForceJPEGThumbnailsInDefaultGrid:(BOOL)arg1;
- (void)setHideGlobalFooter:(BOOL)arg1;
- (void)setLeftScrubberRate:(float)arg1;
- (void)setMagnifierRevealPreviewScale:(float)arg1;
- (void)setMaximumSpacing:(float)arg1;
- (void)setMinimumDistanceToUnfreeze:(float)arg1;
- (void)setMinimumSpacing:(float)arg1;
- (void)setNumberColumnsInDefaultGrid:(int)arg1;
- (void)setNumberOfColumnsInWideGrid:(int)arg1;
- (void)setPreviewRevealProgressToFreezeMagnifier:(float)arg1;
- (void)setRightScrubberRate:(float)arg1;
- (void)setShouldExitEditingModeAfterDuplication:(BOOL)arg1;
- (void)setShowTimelineScrubbers:(BOOL)arg1;
- (void)setSideMargins:(float)arg1;
- (void)setSimulateLongTitles:(BOOL)arg1;
- (void)setSimulatedDetailsAttributesLoadingDelay:(double)arg1;
- (void)setSwipeSelectionEnabled:(BOOL)arg1;
- (void)setUseFloatingHeaders:(BOOL)arg1;
- (BOOL)shouldExitEditingModeAfterDuplication;
- (BOOL)showTimelineScrubbers;
- (float)sideMargins;
- (BOOL)simulateLongTitles;
- (double)simulatedDetailsAttributesLoadingDelay;
- (BOOL)useFloatingHeaders;

@end
