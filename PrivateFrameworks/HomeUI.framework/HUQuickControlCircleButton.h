/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCircleButton : UIButton {
    UIView * _backgroundView;
    UIColor * _selectedColor;
    UIColor * _standardBackgroundColor;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic, retain) UIColor *standardBackgroundColor;

- (void).cxx_destruct;
- (void)_adjustTitleColor;
- (void)_controlStateChanged;
- (id)backgroundView;
- (float)fontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedColor;
- (void)setBackgroundView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setStandardBackgroundColor:(id)arg1;
- (id)standardBackgroundColor;

@end
