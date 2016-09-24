/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {
    double  _ISO;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _exposureDuration;
}

@property (readonly) double ISO;
@property (readonly) struct { int x1; int x2; unsigned int x3; int x4; } exposureDuration;

+ (id)manualExposureSettingsWithExposureDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 ISO:(float)arg2;

- (float)ISO;
- (id)_initManualExposureSettingsWithExposureDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 ISO:(float)arg2;
- (id)description;
- (struct { int x1; int x2; unsigned int x3; int x4; })exposureDuration;

@end
