/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXInitialHysteresisNumberFilter : PXNumberFilter {
    BOOL  _didReachThreshold;
    double  _hysteresis;
    double  _offset;
}

@property (nonatomic) double hysteresis;

- (float)hysteresis;
- (void)setHysteresis:(float)arg1;
- (float)updatedOutput;

@end
