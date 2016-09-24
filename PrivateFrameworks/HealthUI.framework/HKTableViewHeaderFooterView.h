/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTableViewHeaderFooterView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UILabel * _label;
    double  _preferredMaxLayoutWidth;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) double preferredMaxLayoutWidth;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)layoutSubviews;
- (float)preferredMaxLayoutWidth;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredMaxLayoutWidth:(float)arg1;
- (void)updateFont;

@end
