/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCamera : NSObject {
    BOOL  _allowDatelineWraparound;
    double  _aspectRatio;
    double  _canonicalPitch;
    <VKCameraDelegate> * _delegate;
    double  _distanceToGroundAndFarClipPlaneIntersection;
    double  _far;
    VKFootprint * _footprint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _forward;
    double  _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    struct { 
        BOOL orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
        double horizontalOffset; 
    }  _frustum;
    double  _height;
    double  _horizontalOffset;
    double  _maxFarClipDistance;
    double  _maxHeight;
    double  _maxHeightNoPitch;
    double  _maxPitch;
    double  _minHeight;
    double  _ndcZNear;
    double  _near;
    BOOL  _needsUpdate;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _orientation;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _position;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _right;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledViewProjectionMatrix;
    double  _screenHeightOfGroundAndFarClipPlaneIntersection;
    double  _tanHalfHorizFOV;
    double  _tanHalfVerticalFOV;
    double  _terrainHeight;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledProjectionMatrixWithoutOffset;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledViewProjectionMatrix;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _up;
    BOOL  _updating;
    double  _verticalFieldOfView;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _viewProjectionMatrixWithoutOffset;
    VKViewVolume * _viewVolume;
    double  _width;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _worldMatrix;
}

@property (nonatomic) BOOL allowDatelineWraparound;
@property (nonatomic) double aspectRatio;
@property (nonatomic) /* Warning: unhandled struct encoding: '{VKCameraState={Matrix<double' */ struct  cameraState; /* unknown property attribute:  4>=[16d]}ddd} */
@property (nonatomic) double canonicalPitch;
@property (nonatomic) <VKCameraDelegate> *delegate;
@property (nonatomic, readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double farClipDistance;
@property (nonatomic, readonly) VKFootprint *footprint;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property (nonatomic, readonly) struct { BOOL x1; double x2; double x3; double x4; double x5; double x6; } frustum;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  groundPoint; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) double horizontalFieldOfView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double maxHeight;
@property (nonatomic) double maxHeightNoPitch;
@property (nonatomic) double maxPitch;
@property (nonatomic) double minHeight;
@property (nonatomic) double ndcZNear;
@property (nonatomic, readonly) double nearClipDistance;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *orientation; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) double pitch;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  position; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double tanHalfHorizFOV;
@property (nonatomic, readonly) double tanHalfVerticalFOV;
@property (nonatomic) double terrainHeight;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledProjectionMatrixWithoutOffset; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic) double verticalFieldOfView;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *viewProjectionMatrixWithoutOffset; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) VKViewVolume *viewVolume;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void)_setPosition:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg1;
- (void)adjustClipPlanes;
- (BOOL)allowDatelineWraparound;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (double)aspectRatio;
- (struct VKCameraState { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Matrix<double, 4, 4> { double x_2_1_1[16]; } x2; double x3; double x4; double x5; })cameraState;
- (double)canonicalPitch;
- (void)dealloc;
- (id)delegate;
- (double)depthForViewWidth:(double)arg1;
- (id)description;
- (id)descriptionDictionaryRepresentation;
- (double)displayZoomLevel;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (double)farClipDistance;
- (id)footprint;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (struct { BOOL x1; double x2; double x3; double x4; double x5; double x6; })frustum;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPlaneIntersectionPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (BOOL)hasChangedState:(struct VKCameraState { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Matrix<double, 4, 4> { double x_2_1_1[16]; } x2; double x3; double x4; double x5; }*)arg1;
- (float)horizontalFieldOfView;
- (double)horizontalOffset;
- (id)init;
- (BOOL)isOuterWorldBoundsVisible;
- (BOOL)isWorldSpaceRectVisible:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1;
- (double)maxHeight;
- (double)maxHeightNoPitch;
- (double)maxPitch;
- (float)maximumStyleZForRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1;
- (double)minHeight;
- (double)ndcZNear;
- (double)nearClipDistance;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)orientation;
- (double)pitch;
- (struct Matrix<double, 3, 1> { double x1[3]; })position;
- (struct Matrix<double, 3, 1> { double x1[3]; })projectWorldSpaceToClipSpace:(const struct Mercator3<double> { double x1[3]; }*)arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledViewProjectionMatrix;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setCameraState:(struct VKCameraState { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Matrix<double, 4, 4> { double x_2_1_1[16]; } x2; double x3; double x4; double x5; })arg1;
- (void)setCanonicalPitch:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMaxHeightNoPitch:(double)arg1;
- (void)setMaxPitch:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setNdcZNear:(double)arg1;
- (void)setNeedsUpdate;
- (void)setOrientation:(const struct Matrix<double, 4, 4> { double x1[16]; }*)arg1;
- (void)setPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (void)setTerrainHeight:(double)arg1;
- (void)setVerticalFieldOfView:(float)arg1;
- (double)tanHalfHorizFOV;
- (double)tanHalfVerticalFOV;
- (double)terrainHeight;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledProjectionMatrixWithoutOffset;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledViewProjectionMatrix;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (void)updateIfNeeded;
- (float)verticalFieldOfView;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)viewProjectionMatrixWithoutOffset;
- (id)viewVolume;
- (double)widthOfViewAtDepth:(double)arg1;
- (double)yaw;
- (float)zoomAtCentrePoint;
- (float)zoomAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
