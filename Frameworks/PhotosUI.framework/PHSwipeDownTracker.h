/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHSwipeDownTracker : NSObject {
    PUInitialHysteresisValueFilter * __horizontalTranslationValueFilter;
    PUChangeDirectionValueFilter * __verticalDirectionValueFilter;
    BOOL  _didStartTracking;
    double  _dismissalProgress;
    double  _finalAnimationDuration;
    double  _finalAnimationSpringDamping;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransform;
    BOOL  _shouldFinishDismissal;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackedBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _trackedCenter;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _trackedTransform;
    struct PHDisplayVelocity { 
        double x; 
        double y; 
        double scale; 
        double rotation; 
    }  _trackedVelocity;
}

@property (setter=_setHorizontalTranslationValueFilter:, nonatomic, retain) PUInitialHysteresisValueFilter *_horizontalTranslationValueFilter;
@property (setter=_setVerticalDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_verticalDirectionValueFilter;
@property (setter=_setDismissalProgress:, nonatomic) double dismissalProgress;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (setter=_setShouldFinishDismissal:, nonatomic) BOOL shouldFinishDismissal;
@property (setter=_setTrackedBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackedBounds;
@property (setter=_setTrackedCenter:, nonatomic) struct CGPoint { double x1; double x2; } trackedCenter;
@property (setter=_setTrackedTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } trackedTransform;
@property (setter=_setTrackedVelocity:, nonatomic) struct PHDisplayVelocity { double x1; double x2; double x3; double x4; } trackedVelocity;

- (void).cxx_destruct;
- (id)_horizontalTranslationValueFilter;
- (void)_setDismissalProgress:(float)arg1;
- (void)_setHorizontalTranslationValueFilter:(id)arg1;
- (void)_setShouldFinishDismissal:(BOOL)arg1;
- (void)_setTrackedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTrackedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTrackedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setTrackedVelocity:(struct PHDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
- (void)_setVerticalDirectionValueFilter:(id)arg1;
- (id)_verticalDirectionValueFilter;
- (float)dismissalProgress;
- (double)finalAnimationDuration;
- (float)finalAnimationSpringDamping;
- (id)init;
- (BOOL)shouldFinishDismissal;
- (void)startTrackingCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 withInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)trackGestureTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { double x1; double x2; })trackedCenter;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;
- (struct PHDisplayVelocity { double x1; double x2; double x3; double x4; })trackedVelocity;

@end
