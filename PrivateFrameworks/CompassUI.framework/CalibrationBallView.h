/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@interface CalibrationBallView : UIView {
    double  _ballRadius;
    UIView * _ballView;
    double  _currentAngle;
    double  _trackRadius;
}

@property (nonatomic) double ballRadius;
@property (setter=setAngle:, nonatomic) double currentAngle;
@property (nonatomic) double trackRadius;

- (void).cxx_destruct;
- (float)ballRadius;
- (id)ballView;
- (float)currentAngle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ballRadius:(float)arg2;
- (void)layoutSubviews;
- (void)setAngle:(float)arg1;
- (void)setBallRadius:(float)arg1;
- (void)setTrackRadius:(float)arg1;
- (float)trackRadius;

@end
