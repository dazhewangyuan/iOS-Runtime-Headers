/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlayActivity : PUActivity <PHAirPlayControllerRouteObserver> {
    BOOL  __needsUpdateRouteAvailable;
    BOOL  __routeAvailable;
}

@property (setter=_setNeedsUpdateRouteAvailable:, nonatomic) BOOL _needsUpdateRouteAvailable;
@property (getter=_isRouteAvailable, setter=_setRouteAvailable:, nonatomic) BOOL _routeAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)_isRouteAvailable;
- (BOOL)_needsUpdateRouteAvailable;
- (void)_registerForAirPlayNotifications;
- (void)_setNeedsUpdateRouteAvailable:(BOOL)arg1;
- (void)_setRouteAvailable:(BOOL)arg1;
- (void)_unregisterForAirPlayNotifications;
- (void)_updateRouteAvailabilityIfNeeded;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performActivity;
- (void)tearDownForCompletion;

@end
