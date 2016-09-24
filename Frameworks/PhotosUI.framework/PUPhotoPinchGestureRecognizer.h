/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer {
    PUValueFilter * __rotationFilter;
    BOOL  __touchesNeedUpdate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialPinchRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocations;
    BOOL  _initialTouchLocationsSet;
    struct CGPoint { 
        double x; 
        double y; 
    }  _latestTouchLocations;
    double  _rotationHysteresisDegrees;
}

@property (setter=_setRotationFilter:, nonatomic, retain) PUValueFilter *_rotationFilter;
@property (setter=_setTouchesNeedUpdate:, nonatomic) BOOL _touchesNeedUpdate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialPinchRect;
@property (nonatomic) double rotationHysteresisDegrees;

- (void).cxx_destruct;
- (id)_rotationFilter;
- (void)_setRotationFilter:(id)arg1;
- (void)_setTouchesNeedUpdate:(BOOL)arg1;
- (BOOL)_touchesNeedUpdate;
- (void)_updateIfNeeded;
- (struct CGPoint { double x1; double x2; })adjustedInitialCenterInView:(id)arg1;
- (float)adjustedRotationInView:(id)arg1;
- (float)adjustedRotationVelocityInView:(id)arg1;
- (float)adjustedScaleInView:(id)arg1;
- (float)adjustedScaleVelocityInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })adjustedTranslationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })adjustedTranslationVelocityInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPinchRect;
- (void)reset;
- (float)rotationHysteresisDegrees;
- (void)setInitialPinchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRotationHysteresisDegrees:(float)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
