/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridServiceCellTextView : UIView {
    NSString * _descriptionText;
    double  _descriptionTextColorDimmingFactor;
    UIFont * _font;
    double  _lineHeight;
    unsigned int  _mode;
    HFServiceNameComponents * _serviceNameComponents;
    UIColor * _textColor;
    BOOL  _textColorFollowsTintColor;
}

@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic) double descriptionTextColorDimmingFactor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) double lastBaselineToBottomDistance;
@property (nonatomic) double lineHeight;
@property (nonatomic) unsigned int mode;
@property (nonatomic, retain) HFServiceNameComponents *serviceNameComponents;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (nonatomic, readonly) double topToFirstBaselineDistance;

- (void).cxx_destruct;
- (id)_commonTextAttributesWithLineBreakMode:(int)arg1;
- (void)_drawCombinedLabel;
- (void)_drawDescriptionLabel;
- (void)_drawSeperateLabels;
- (id)_effectiveTextColor;
- (void)_updateMode;
- (id)descriptionText;
- (float)descriptionTextColorDimmingFactor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (float)lastBaselineToBottomDistance;
- (float)lineHeight;
- (unsigned int)mode;
- (id)serviceNameComponents;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionTextColorDimmingFactor:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setLineHeight:(float)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setServiceNameComponents:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (BOOL)textColorFollowsTintColor;
- (void)tintColorDidChange;
- (float)topToFirstBaselineDistance;

@end
