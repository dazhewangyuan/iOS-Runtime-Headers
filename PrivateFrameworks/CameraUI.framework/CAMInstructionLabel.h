/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMInstructionLabel : UIView {
    UILabel * __label;
    NSString * _text;
}

@property (nonatomic, readonly) double _backgroundAlpha;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textInsets;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (float)_backgroundAlpha;
- (id)_label;
- (id)_textAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (void)updateToContentSize:(id)arg1;

@end
