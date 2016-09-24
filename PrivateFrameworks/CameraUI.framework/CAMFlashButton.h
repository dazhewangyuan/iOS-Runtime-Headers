/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFlashButton : CAMExpandableMenuButton {
    UIImageView * __glyphView;
    UIImageView * __warningIndicatorView;
    BOOL  _allowsAutomaticFlash;
    BOOL  _unavailable;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic, readonly) UIImageView *_warningIndicatorView;
@property (nonatomic) BOOL allowsAutomaticFlash;
@property (nonatomic) int flashMode;
@property (getter=isUnavailable, nonatomic) BOOL unavailable;

+ (int)flashModeForTorchMode:(int)arg1;
+ (int)torchModeForFlashMode:(int)arg1;

- (void).cxx_destruct;
- (void)_commonCAMFlashButtonInitialization;
- (id)_currentGlyphImage;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (id)_warningIndicatorView;
- (BOOL)allowsAutomaticFlash;
- (float)collapsedSelectedLabelHorizontalMargin;
- (int)flashMode;
- (id)headerView;
- (int)indexForMode:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(int)arg1;
- (BOOL)isUnavailable;
- (int)modeForIndex:(int)arg1;
- (int)numberOfMenuItems;
- (float)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticFlash:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setUnavailable:(BOOL)arg1;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (BOOL)wantsSelectedItemToBeVisible;

@end
