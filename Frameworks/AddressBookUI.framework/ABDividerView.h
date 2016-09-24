/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDividerView : UIView {
    UIColor * _defaultColor;
    BOOL  _disappearsOnHighlight;
    BOOL  _isVertical;
    ABSteadfastLineView * _line;
    UIColor * _shadowColor;
    ABSteadfastLineView * _shadowLine;
}

@property (nonatomic, retain) UIColor *defaultColor;
@property (nonatomic) BOOL disappearsOnHighlight;
@property (nonatomic, retain) UIColor *shadowColor;
@property (getter=isVertical, nonatomic) BOOL vertical;

- (void)dealloc;
- (id)defaultColor;
- (BOOL)disappearsOnHighlight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isVertical;
- (void)layoutSubviews;
- (void)setDefaultColor:(id)arg1;
- (void)setDisappearsOnHighlight:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setVertical:(BOOL)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
