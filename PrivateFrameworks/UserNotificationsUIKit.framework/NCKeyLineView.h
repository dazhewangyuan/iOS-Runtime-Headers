/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCKeyLineView : UIImageView {
    double  _cornerRadius;
    double  _lineWidth;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) double lineWidth;

- (id)_cachedKeyLineImageWithCornerRadius:(float)arg1 lineWidth:(float)arg2;
- (float)cornerRadius;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)lineWidth;
- (void)setCornerRadius:(float)arg1;
- (void)setKeyLineViewAlphaForProgress:(float)arg1;
- (void)setLineWidth:(float)arg1;

@end
