/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKButtonLabel : UIView {
    UILabel * __label;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSString * _text;
    BOOL  _wantsLegibilityShadow;
}

@property (nonatomic, readonly, retain) UILabel *_label;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) BOOL wantsLegibilityShadow;

- (void).cxx_destruct;
- (id)_label;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setWantsLegibilityShadow:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (void)updateToContentSize:(id)arg1;
- (BOOL)wantsLegibilityShadow;

@end
