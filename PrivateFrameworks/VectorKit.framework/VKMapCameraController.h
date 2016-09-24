/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _finalPitch;
    double  _finalYaw;
    VKTimedAnimation * _horizontalOffsetAnimation;
    VKMapCanvas * _mapCanvas;
    VKMapModel * _mapModel;
    double  _maxDistanceToGroundAlongForwardVector;
    double  _minDistanceToGroundAlongForwardVector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) VKMapCanvas *mapCanvas;
@property (nonatomic, retain) VKMapModel *mapModel;
@property (readonly) Class superclass;

- (void)_animateToPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id /* block */)arg5 completion:(id /* block */)arg6;
- (struct { double x1; double x2; })_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (BOOL)allowDatelineWraparound;
- (double)altitude;
- (BOOL)canEnter3DMode;
- (BOOL)canEnter3DModeNoUpdate;
- (BOOL)canRotate;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (void)clampPitch:(double*)arg1 yaw:(double*)arg2 atTargetPositionZ:(double)arg3;
- (void)clampZoomLevelIfNecessary;
- (float)currentDisplayZoomLevel;
- (float)currentMaximumNormalizedZoomLevel;
- (float)currentMinimumNormalizedZoomLevel;
- (float)currentNormalizedZoomLevel;
- (float)currentStyleZoomLevel;
- (float)currentTopDownMinimumNormalizedZoomLevel;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (double)heading;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (id)init;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (id)mapCanvas;
- (id)mapModel;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (int)maximumNormalizedZoomLevel;
- (double)maximumZoomLevel;
- (int)minimumNormalizedZoomLevel;
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;
- (double)minimumZoomLevel;
- (float)normalizedZoomLevelAdjustmentForTileSize:(int)arg1;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (double)pitch;
- (double)presentationYaw;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (void)rotateToPitch:(double)arg1 withPoint:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg2 preserveAltitude:(BOOL)arg3 animated:(BOOL)arg4 exaggerate:(BOOL)arg5;
- (void)rotateToYaw:(double)arg1 withPoint:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg2 animated:(BOOL)arg3;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setCenterCoordinate3D:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(int)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(int)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setGesturing:(BOOL)arg1;
- (void)setMapCanvas:(id)arg1;
- (void)setMapModel:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (BOOL)snapMapIfNecessary:(BOOL)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (int)tileSize;
- (double)topDownMinimumZoomLevel;
- (void)updateCameraToPositionOrientationLimits;
- (void)updateCameraZBounds;
- (id)viewportInfo;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)zoom:(double)arg1 withPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomLevelAdjustmentForTileSize:(int)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)zoomToLevel:(double)arg1 withPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;

@end
