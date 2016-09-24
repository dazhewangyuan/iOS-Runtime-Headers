/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIParallaxMotionEffect : UIMotionEffect {
    UIMotionEffectGroup * _group;
    UIInterpolatingMotionEffect * _horizontalSlideEffect;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _slideMagnitude;
    _UITiltMotionEffect * _tiltEffect;
    UIInterpolatingMotionEffect * _verticalSlideEffect;
}

@property (nonatomic) double horizontalSlideAccelerationBoostFactor;
@property (nonatomic) double maximumHorizontalTiltAngle;
@property (nonatomic) double maximumVerticalTiltAngle;
@property (nonatomic) double rotatingSphereRadius;
@property (nonatomic) struct UIOffset { double x1; double x2; } slideMagnitude;
@property (nonatomic) double verticalSlideAccelerationBoostFactor;

- (void).cxx_destruct;
- (void)_activateTiltEffectIfNecessary;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_updateGroupMotionEffect;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)horizontalSlideAccelerationBoostFactor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (float)maximumHorizontalTiltAngle;
- (float)maximumVerticalTiltAngle;
- (float)rotatingSphereRadius;
- (void)setHorizontalSlideAccelerationBoostFactor:(float)arg1;
- (void)setMaximumHorizontalTiltAngle:(float)arg1;
- (void)setMaximumVerticalTiltAngle:(float)arg1;
- (void)setRotatingSphereRadius:(float)arg1;
- (void)setSlideMagnitude:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalSlideAccelerationBoostFactor:(float)arg1;
- (struct UIOffset { double x1; double x2; })slideMagnitude;
- (float)verticalSlideAccelerationBoostFactor;

@end
