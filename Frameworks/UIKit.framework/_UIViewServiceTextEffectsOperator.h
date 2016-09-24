/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface> {
    BOOL  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    NSArray * _allowedNotifications;
    BOOL  _canRestoreInputViews;
    BOOL  _didResignForDisappear;
    UIWindow * _hostedWindow;
    _UIAsyncInvocation * _invalidationInvocation;
    BOOL  _isRestoringInputViews;
    BOOL  _localVCDisablesAutomaticBehaviors;
    _UIAsyncInvocation * _prepareForDisconnectionInvocation;
    id  _remoteViewControllerProxy;
    struct CGSize { 
        double width; 
        double height; 
    }  _sceneSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _windowOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;

- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__createHostedTextEffectsWithReplyHandler:(id /* block */)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostViewWillAppear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSceneSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setWindowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (BOOL)_isDeallocating;
- (void)_prepareForDisconnectionUnconditionallyThen:(id /* block */)arg1;
- (id)_queue;
- (void)_resetSceneSize;
- (void)_restoreInputViews;
- (BOOL)_tryRetain;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (id)autorelease;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(int)arg1;
- (void)forceSyncToStatusBarOrientation;
- (id)invalidate;
- (void)performOnRelevantWindows:(id /* block */)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)rotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)windowDidGainFirstResponder:(id)arg1;

@end
