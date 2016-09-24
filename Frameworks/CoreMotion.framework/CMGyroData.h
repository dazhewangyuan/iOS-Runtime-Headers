/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGyroData : CMLogItem {
    id  _internal;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rotationRate;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRotationRate:(struct { double x1; double x2; double x3; })arg1 andTimestamp:(double)arg2;
- (struct { double x1; double x2; double x3; })rotationRate;

@end
