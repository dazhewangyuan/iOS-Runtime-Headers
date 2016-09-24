/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKModeDial : UIControl {
    NSDictionary * __items;
    UIView * __itemsContainerView;
    CAGradientLayer * __maskLayer;
    UIView * __meshTransformView;
    NSArray * __modes;
    <CMKModeDialDataSource> * _dataSource;
    int  _orientation;
    int  _selectedMode;
}

@property (setter=_setItems:, nonatomic, retain) NSDictionary *_items;
@property (nonatomic, readonly) UIView *_itemsContainerView;
@property (nonatomic, readonly) CAGradientLayer *_maskLayer;
@property (nonatomic, readonly) UIView *_meshTransformView;
@property (setter=_setModes:, nonatomic, retain) NSArray *_modes;
@property (nonatomic) <CMKModeDialDataSource> *dataSource;
@property (nonatomic, readonly) int orientation;
@property (nonatomic) int selectedMode;

- (void).cxx_destruct;
- (float)_centeringNudgeForMode:(int)arg1;
- (void)_commonCMKModeDialInitializationWithOrientation:(int)arg1;
- (void)_configureMaskForOrientation:(int)arg1;
- (void)_configureMeshTransformForOrientation:(int)arg1;
- (id)_font;
- (struct CGPoint { double x1; double x2; })_horizontalContainerOriginForMode:(int)arg1;
- (id)_horizontalMeshTransform;
- (struct CGSize { double x1; double x2; })_interpolatedHorizontalMeshTransformSize;
- (id)_items;
- (id)_itemsContainerView;
- (void)_layoutHorizontalModeDial;
- (void)_layoutVerticalModeDial;
- (id)_maskLayer;
- (id)_meshTransformForOrientation:(int)arg1;
- (id)_meshTransformView;
- (id)_modes;
- (id)_selectedItem;
- (void)_setItems:(id)arg1;
- (void)_setModes:(id)arg1;
- (id)_titleForMode:(int)arg1;
- (void)_updateContainerOriginFromSelectedMode;
- (struct CGPoint { double x1; double x2; })_verticalContainerOriginForMode:(int)arg1;
- (id)_verticalMeshTransform;
- (id)dataSource;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOrientation:(int)arg1;
- (void)layoutSubviews;
- (int)orientation;
- (void)reloadData;
- (int)selectedMode;
- (void)setDataSource:(id)arg1;
- (void)setSelectedMode:(int)arg1;
- (void)setSelectedMode:(int)arg1 animated:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateToContentSize:(id)arg1;

@end
