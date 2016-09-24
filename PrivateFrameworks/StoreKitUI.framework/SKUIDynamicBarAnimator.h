/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicBarAnimator : NSObject {
    double  _bottomBarOffset;
    double  _bottomBarOffsetForState;
    <SKUIDynamicBarAnimatorDelegate> * _delegate;
    BOOL  _didHideBarsByMoving;
    BOOL  _didHideOrShowBarsExplicitly;
    CADisplayLink * _displayLink;
    BOOL  _dragging;
    BOOL  _inSteadyState;
    double  _lastOffset;
    double  _lastUnroundedTopBarHeight;
    double  _maximumBottomBarOffset;
    double  _minimumTopBarHeight;
    int  _state;
    double  _targetTopBarHeight;
    double  _topBarHeight;
    double  _topBarHeightForState;
    double  _unroundedTopBarHeight;
}

@property (nonatomic, readonly) double bottomBarOffset;
@property (nonatomic) <SKUIDynamicBarAnimatorDelegate> *delegate;
@property (nonatomic) double maximumBottomBarOffset;
@property (nonatomic) double minimumTopBarHeight;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) int targetState;
@property (nonatomic, readonly) double topBarHeight;

- (void).cxx_destruct;
- (float)_bottomBarOffsetForTopBarHeight:(float)arg1;
- (float)_constrainTopBarHeight:(float)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_moveBarsWithDelta:(float)arg1;
- (void)_setInSteadyState:(BOOL)arg1;
- (float)_topBarHeightForBottomBarOffset:(float)arg1;
- (void)_transitionToSteadyState;
- (void)_updateDisplayLink;
- (void)_updateOutputs;
- (void)attemptTransitionToState:(int)arg1 animated:(BOOL)arg2;
- (void)beginDraggingWithOffset:(float)arg1;
- (float)bottomBarOffset;
- (BOOL)canTransitionToState:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endDraggingWithTargetOffset:(float)arg1 velocity:(float)arg2;
- (id)init;
- (float)maximumBottomBarOffset;
- (float)minimumTopBarHeight;
- (void)setBottomBarOffset:(float)arg1 forState:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaximumBottomBarOffset:(float)arg1;
- (void)setMinimumTopBarHeight:(float)arg1;
- (void)setTopBarHeight:(float)arg1 forState:(int)arg2;
- (int)state;
- (int)targetState;
- (float)topBarHeight;
- (void)updateDraggingWithOffset:(float)arg1;

@end
