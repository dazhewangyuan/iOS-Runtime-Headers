/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITableViewCell : UITableViewCell {
    double  _borderPaddingLeft;
    SKUIBorderView * _bottomBorderView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textLabelInsets;
    double  _titlePaddingLeft;
    SKUIBorderView * _topBorderView;
}

@property (nonatomic) double borderPaddingLeft;
@property (nonatomic, copy) UIColor *bottomBorderColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textLabelInsets;
@property (nonatomic, copy) UIColor *topBorderColor;

- (void).cxx_destruct;
- (void)_reloadBorderVisibility;
- (float)borderPaddingLeft;
- (id)bottomBorderColor;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBorderPaddingLeft:(float)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTextLabelInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopBorderColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textLabelInsets;
- (id)topBorderColor;

@end
