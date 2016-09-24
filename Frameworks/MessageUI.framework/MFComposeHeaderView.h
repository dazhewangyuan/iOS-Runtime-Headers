/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeHeaderView : UIView {
    id  _delegate;
    UIView * _highlightBackgroundView;
    double  _labelIndentation;
    MFHeaderLabelView * _labelView;
    NSString * _navTitle;
    UIView * _separator;
    BOOL  _showsHighlightWhenTouched;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic) double labelIndentation;
@property (nonatomic, readonly) MFHeaderLabelView *labelView;
@property (nonatomic, copy) NSString *navTitle;
@property (nonatomic) BOOL showsHighlightWhenTouched;

+ (float)_labelTopPaddingSpecification;
+ (id)defaultFont;
+ (id)defaultSeparatorColor;
+ (float)preferredHeight;
+ (float)separatorHeight;

- (id)_automationID;
- (id)_baseAttributes;
- (BOOL)_canBecomeFirstResponder;
- (id)_highlightedBackgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_recipientViewEdgeInsets;
- (void)dealloc;
- (void)handleTouchesEnded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelColor;
- (float)labelIndentation;
- (float)labelTopPadding;
- (id)labelView;
- (void)layoutSubviews;
- (id)navTitle;
- (void)refreshPreferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLabel:(id)arg1;
- (void)setLabelIndentation:(float)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setShowsHighlightWhenTouched:(BOOL)arg1;
- (BOOL)showsHighlightWhenTouched;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
