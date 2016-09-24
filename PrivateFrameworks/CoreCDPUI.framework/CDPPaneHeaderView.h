/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPPaneHeaderView : UIView {
    BFFPaneHeaderView * _header;
}

@property (nonatomic, readonly) UIView *_header;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)_header;
- (id)detailTextLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)innerHeaderMaxY;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleText:(id)arg1;
- (id)subLabel;
- (id)textLabel;

@end
