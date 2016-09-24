/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKSlalomIndicatorView : UIView {
    UILabel * __framerateLabel;
    int  _framesPerSecond;
}

@property (nonatomic, readonly) UILabel *_framerateLabel;
@property (nonatomic) int framesPerSecond;

- (void).cxx_destruct;
- (void)_commonCMKSlalomIndicatorViewInitialization;
- (id)_framerateLabel;
- (void)_updateFramerateLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (int)framesPerSecond;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setFramesPerSecond:(int)arg1;

@end
