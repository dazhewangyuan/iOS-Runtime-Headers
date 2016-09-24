/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIControl : UIView <SKUIAdvertisingPrivacyControlProtocol> {
    struct { 
        unsigned int disabled : 1; 
        unsigned int tracking : 1; 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int requiresDisplayOnTracking : 1; 
        unsigned int highlighted : 1; 
        unsigned int dontHighlightOnTouchDown : 1; 
        unsigned int delayActions : 1; 
        unsigned int allowActionsToQueue : 1; 
        unsigned int pendingUnhighlight : 1; 
        unsigned int selected : 1; 
        unsigned int verticalAlignment : 2; 
        unsigned int horizontalAlignment : 2; 
        unsigned int wasLastHighlightSuccessful : 1; 
        unsigned int touchHasHighlighted : 1; 
    }  _controlFlags;
    double  _downTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPoint;
    NSMutableArray * _targetActions;
}

@property (nonatomic, retain) NSString *adPrivacyData;
@property (nonatomic, readonly) unsigned int allControlEvents;
@property (nonatomic, readonly) NSSet *allTargets;
@property (nonatomic) int contentHorizontalAlignment;
@property (nonatomic) int contentVerticalAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (getter=isTouchInside, nonatomic, readonly) BOOL touchInside;
@property (getter=isTracking, nonatomic, readonly) BOOL tracking;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (BOOL)_allowActionsToQueue;

- (void).cxx_destruct;
- (id)__distributionStatisticsForUserInteractionDuration;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (void)_beginInteractionDurationStatisticMeasurements;
- (void)_cancelDelayedActions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (void)_commitInteractionDurationStatisticMeasurements;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (unsigned int)_controlEventsForActionTriggered;
- (void)_delayActions;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_distributionStatisticsForUserInteractionDuration;
- (int)_focusedSound;
- (BOOL)_hasActionForEventMask:(unsigned int)arg1;
- (float)_highlightCornerRadius;
- (void)_incrementStatisticsForUserActionForEvents:(unsigned int)arg1;
- (id)_scalarStatisticsForUserTouchUpInsideEvent;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (void)_sendActionsForEvents:(unsigned int)arg1 withEvent:(id)arg2;
- (void)_sendDelayedActions;
- (void)_sendDelayedActions:(BOOL)arg1;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (unsigned int)_stateForFocusUpdateContext:(id)arg1;
- (BOOL)_touchHasHighlighted;
- (void)_unhighlight;
- (BOOL)_wasLastHighlightSuccessful;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (unsigned int)allControlEvents;
- (id)allTargets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (int)contentHorizontalAlignment;
- (int)contentVerticalAlignment;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)hasOneOrMoreTargets;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (BOOL)isTouchInside;
- (BOOL)isTracking;
- (BOOL)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (BOOL)requiresDisplayOnTracking;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRequiresDisplayOnTracking:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTracking:(BOOL)arg1;
- (BOOL)shouldTrack;
- (unsigned int)state;
- (BOOL)touchDragged;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_super_touchesCancelled:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_setTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (void)music_configureControlWithTextDescriptor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)adPrivacyData;
- (void)setAdPrivacyData:(id)arg1;

@end
