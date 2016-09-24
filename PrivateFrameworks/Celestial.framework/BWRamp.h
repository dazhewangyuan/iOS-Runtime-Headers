/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRamp : NSObject {
    int  _currentIteration;
    double  _currentValue;
    int  _durationInIterations;
    double  _exponentialConvergenceFraction;
    double  _exponentialSnapFraction;
    BOOL  _isRamping;
    BOOL  _isRampingUp;
    int  _shape;
    double  _startValue;
    double  _targetValue;
}

@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) BOOL isRamping;

+ (void)initialize;

- (float)currentValue;
- (id)init;
- (BOOL)isRamping;
- (void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4;
- (float)updateRampForNexIteration;

@end
