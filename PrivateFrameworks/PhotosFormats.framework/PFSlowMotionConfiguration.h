/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionConfiguration : NSObject {
    PFSlowMotionRampConfiguration * _rampDown;
    PFSlowMotionRampConfiguration * _rampUp;
    double  _volumeDuringRampToSlowMotion;
    double  _volumeDuringSlowMotion;
}

@property (nonatomic, readonly, retain) PFSlowMotionRampConfiguration *rampDown;
@property (nonatomic, readonly, retain) PFSlowMotionRampConfiguration *rampUp;
@property (nonatomic, readonly) double volumeDuringRampToSlowMotion;
@property (nonatomic, readonly) double volumeDuringSlowMotion;

- (void).cxx_destruct;
- (id)init;
- (id)rampDown;
- (id)rampUp;
- (float)volumeDuringRampToSlowMotion;
- (float)volumeDuringSlowMotion;

@end
