/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeDialItem : UIView {
    CAShapeLayer * __scalableTextLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  __textFrameSize;
    UIFont * _font;
    BOOL  _selected;
    BOOL  _shouldShadowTitleText;
    NSString * _title;
}

@property (nonatomic, readonly) NSAttributedString *_attributedTitle;
@property (nonatomic, readonly) CAShapeLayer *_scalableTextLayer;
@property (setter=_setTextFrameSize:, nonatomic) struct CGSize { double x1; double x2; } _textFrameSize;
@property (nonatomic, retain) UIFont *font;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) BOOL shouldShadowTitleText;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_attributedTitle;
- (void)_commonCAMModeDialItemInitialization;
- (struct CGPath { }*)_pathForAttributedString:(id)arg1;
- (id)_scalableTextLayer;
- (void)_setTextFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGColor { }*)_textColor;
- (struct CGSize { double x1; double x2; })_textFrameSize;
- (void)_updateScalableTextPathFromAttributedTitle;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldShadowTitleText:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldShadowTitleText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;

@end
