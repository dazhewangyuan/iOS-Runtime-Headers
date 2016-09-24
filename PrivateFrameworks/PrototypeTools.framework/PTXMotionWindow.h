/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXMotionWindow : NSObject {
    double  _center;
    int  _direction;
    double  _effectiveRadius;
    double  _lowerLimit;
    double  _maxIncrease;
    double  _radius;
    double  _upperLimit;
}

- (id)initWithRadius:(float)arg1 maxIncrease:(float)arg2 direction:(int)arg3;
- (float)mappedOffset:(float)arg1;
- (void)reset;
- (void)setIncreaseFactor:(float)arg1 fixingOffset:(float)arg2;

@end
