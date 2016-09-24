/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIKeyline : UIView {
    UIColor * _customBackgroundColor;
    double  _customLeftPadding;
    double  _customRightPadding;
    UIView * _keyLineView;
    int  _keylineType;
    BOOL  _veritical;
}

@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (nonatomic) int keylineType;
@property (getter=_isVeritical, setter=_setVertical:, nonatomic) BOOL veritical;

+ (id)keyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)keylineWithKeylineType:(int)arg1;
+ (id)keylineWithKeylineType:(int)arg1 platterStyling:(BOOL)arg2;
+ (id)starkKeyline;
+ (id)verticalKeyline;

- (void).cxx_destruct;
- (BOOL)_isVeritical;
- (id)_keylineColorForType:(int)arg1 platterStyling:(BOOL)arg2;
- (float)_keylineThicknessForType:(int)arg1;
- (void)_setVertical:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 useAutolayout:(BOOL)arg2;
- (id)customBackgroundColor;
- (float)customLeftPadding;
- (float)customRightPadding;
- (id)initWithKeylineType:(int)arg1;
- (id)initWithKeylineType:(int)arg1 platterStyling:(BOOL)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (int)keylineType;
- (void)layoutSubviews;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setCustomLeftPadding:(float)arg1;
- (void)setCustomRightPadding:(float)arg1;
- (void)setKeylineType:(int)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
