/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider> {
    int  _animationCurve;
    int  _timingCurveType;
    _UIViewCubicTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) int animationCurve;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint1;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint2;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property (nonatomic, readonly) int timingCurveType;
@property (nonatomic, readonly) _UIViewCubicTimingFunction *timingFunction;

- (void).cxx_destruct;
- (id)_mediaTimingFunction;
- (void)_setAnimationCurve:(int)arg1;
- (int)animationCurve;
- (struct CGPoint { double x1; double x2; })controlPoint1;
- (struct CGPoint { double x1; double x2; })controlPoint2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cubicTimingParameters;
- (id)description;
- (id)effectiveTimingFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAnimationCurve:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint { double x1; double x2; })arg1 controlPoint2:(struct CGPoint { double x1; double x2; })arg2;
- (id)springTimingParameters;
- (int)timingCurveType;
- (id)timingFunction;

@end
