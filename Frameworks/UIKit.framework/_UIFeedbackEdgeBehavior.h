/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackEdgeBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {
    int  _axis;
    BOOL  _closeToEdge;
    double  _closeToEdgeUpdateTime;
    double  _distance;
    double  _extentBeyondDistance;
    _UIFeedbackEngine * _feedbackEngine;
    int  _lastState;
    double  _lastValueUpdateTime;
    BOOL  _playedOvershotThresholdFeedback;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
    double  _previousValue;
    double  _previousValueUpdateTime;
    int  _state;
    double  _value;
    double  _velocity;
}

@property (nonatomic) int axis;
@property (getter=_isCloseToEdge, setter=_setCloseToEdge:, nonatomic) BOOL closeToEdge;
@property (getter=_closeToEdgeUpdateTime, setter=_setCloseToEdgeUpdateTime:, nonatomic) double closeToEdgeUpdateTime;
@property (nonatomic) double distance;
@property (getter=_edgeConfiguration, nonatomic, readonly) _UIFeedbackEdgeBehaviorConfiguration *edgeConfiguration;
@property (getter=_effectiveDistance, nonatomic, readonly) double effectiveDistance;
@property (nonatomic) double extentBeyondDistance;
@property (getter=_lastState, setter=_setLastState:, nonatomic) int lastState;
@property (getter=_lastValueUpdateTime, setter=_setLastValueUpdateTime:, nonatomic) double lastValueUpdateTime;
@property (getter=_isOvershot, nonatomic, readonly) BOOL overshot;
@property (getter=_percentBeyondDistance, nonatomic, readonly) double percentBeyondDistance;
@property (getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:, nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (getter=_previousValue, setter=_setPreviousValue:, nonatomic) double previousValue;
@property (getter=_previousValueUpdateTime, setter=_setPreviousValueUpdateTime:, nonatomic) double previousValueUpdateTime;
@property (getter=_state, setter=_setState:, nonatomic) int state;
@property (getter=_value, setter=_setValue:, nonatomic) double value;
@property (getter=_velocity, setter=_setVelocity:, nonatomic) double velocity;

+ (Class)_configurationClass;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
+ (id)edgeBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)edgeBehaviorWithStyle:(int)arg1 coordinateSpace:(id)arg2;

- (void).cxx_destruct;
- (void)_animationEnded;
- (void)_animationStarted;
- (void)_animationStartedUsingTimeout:(BOOL)arg1;
- (void)_cancelStopAnimatingTimeout;
- (double)_closeToEdgeUpdateTime;
- (void)_deactivate;
- (id)_edgeConfiguration;
- (float)_effectiveDistance;
- (BOOL)_isCloseToEdge;
- (BOOL)_isOvershot;
- (int)_lastState;
- (double)_lastValueUpdateTime;
- (float)_percentBeyondDistance;
- (id)_playingContinuousFeedback;
- (void)_positionUpdated:(float)arg1 withVelocity:(float)arg2;
- (float)_previousValue;
- (double)_previousValueUpdateTime;
- (void)_setCloseToEdge:(BOOL)arg1;
- (void)_setCloseToEdgeUpdateTime:(double)arg1;
- (void)_setLastState:(int)arg1;
- (void)_setLastValueUpdateTime:(double)arg1;
- (void)_setPlayingContinuousFeedback:(id)arg1;
- (void)_setPreviousValue:(float)arg1;
- (void)_setPreviousValueUpdateTime:(double)arg1;
- (void)_setState:(int)arg1;
- (void)_setValue:(float)arg1;
- (void)_setVelocity:(float)arg1;
- (int)_state;
- (id)_stats_key;
- (void)_stopAnimatingWithTimeout:(double)arg1;
- (void)_updateCloseToEdge;
- (float)_value;
- (BOOL)_valueIsOvershot:(float)arg1;
- (float)_velocity;
- (int)axis;
- (float)distance;
- (float)extentBeyondDistance;
- (void)positionUpdated:(float)arg1;
- (void)setAxis:(int)arg1;
- (void)setDistance:(float)arg1;
- (void)setExtentBeyondDistance:(float)arg1;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
