/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFlipButton : UIButton {
    UIImageView * __padBackgroundView;
    int  _layoutStyle;
    int  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIImageView *_padBackgroundView;
@property (nonatomic) int layoutStyle;
@property (nonatomic) int orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (id)flipButtonWithLayoutStyle:(int)arg1;

- (void).cxx_destruct;
- (void)_commonCAMFlipButtonInitializationWithStyle:(int)arg1;
- (id)_padBackgroundView;
- (void)_updateForLayoutStyle;
- (void)_updateImages;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (int)layoutStyle;
- (void)layoutSubviews;
- (int)orientation;
- (void)setLayoutStyle:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
