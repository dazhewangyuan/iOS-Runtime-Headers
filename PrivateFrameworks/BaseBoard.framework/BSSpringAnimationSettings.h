/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSpringAnimationSettings : BSAnimationSettings {
    double  _damping;
    double  _epsilon;
    BOOL  _hasCalculatedDuration;
    double  _initialVelocity;
    double  _mass;
    double  _stiffness;
}

@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double initialVelocity;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double stiffness;

+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 timingFunction:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (BOOL)_hasCalculatedDuration;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 speed:(float)arg9;
- (void)_setDamping:(float)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setEpsilon:(float)arg1;
- (void)_setInitialVelocity:(float)arg1;
- (void)_setMass:(float)arg1;
- (void)_setSpeed:(float)arg1;
- (void)_setStiffness:(float)arg1;
- (void)_setTimingFunction:(id)arg1;
- (float)damping;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (float)epsilon;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (float)initialVelocity;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpringAnimation;
- (float)mass;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)stiffness;

@end
