/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackedBarCell : UIButton {
    UIButton * _backButton;
    BOOL  _expanded;
    UILabel * _expandedLabel;
    UIView * _separator;
}

@property (nonatomic, readonly) UIButton *backButton;
@property (nonatomic) BOOL expanded;

- (void).cxx_destruct;
- (id)backButton;
- (BOOL)expanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExpanded:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
