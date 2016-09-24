/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceMotion : CMLogItem {
    id  _internal;
}

@property (nonatomic, readonly) CMAttitude *attitude;
@property (nonatomic, readonly) bool doingBiasEstimation;
@property (nonatomic, readonly) bool doingYawCorrection;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } gravity;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; int x2; } magneticField;
@property (nonatomic, readonly) int magneticFieldCalibrationLevel;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rotationRate;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } userAcceleration;

+ (BOOL)supportsSecureCoding;

- (id)attitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)doingBiasEstimation;
- (bool)doingYawCorrection;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })gravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; int x5; bool x6; bool x7; bool x8; })arg1 andTimestamp:(double)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; int x2; })magneticField;
- (int)magneticFieldCalibrationLevel;
- (struct { double x1; double x2; double x3; })rotationRate;
- (struct { double x1; double x2; double x3; })userAcceleration;

@end
