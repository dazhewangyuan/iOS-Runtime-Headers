/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMExposureResult : NSObject {
    BOOL  _adjustingExposure;
    BOOL  _deviceSupportsFocus;
    BOOL  _exposureDidEnd;
    BOOL  _exposureDidStart;
    int  _exposureMode;
    double  _exposureTargetBias;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointOfInterest;
}

@property (getter=isAdjustingExposure, nonatomic, readonly) BOOL adjustingExposure;
@property (nonatomic, readonly) BOOL deviceSupportsFocus;
@property (nonatomic, readonly) BOOL exposureDidEnd;
@property (nonatomic, readonly) BOOL exposureDidStart;
@property (nonatomic, readonly) int exposureMode;
@property (nonatomic, readonly) double exposureTargetBias;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pointOfInterest;

- (id)description;
- (BOOL)deviceSupportsFocus;
- (BOOL)exposureDidEnd;
- (BOOL)exposureDidStart;
- (int)exposureMode;
- (float)exposureTargetBias;
- (id)initWithMode:(int)arg1 pointOfInterest:(struct CGPoint { double x1; double x2; })arg2 exposureTargetBias:(float)arg3 adjusting:(BOOL)arg4 exposureDidStart:(BOOL)arg5 exposureDidEnd:(BOOL)arg6 deviceSupportsFocus:(BOOL)arg7;
- (BOOL)isAdjustingExposure;
- (struct CGPoint { double x1; double x2; })pointOfInterest;

@end
