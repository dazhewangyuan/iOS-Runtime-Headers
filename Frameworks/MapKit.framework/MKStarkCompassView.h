/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {
    BOOL  _active;
    CLInUseAssertion * _assertion;
    int  _compassPoint;
    BOOL  _contentsHidden;
    UIView * _contentsView;
    UILabel * _label;
    MKLocationManager * _locationManager;
    BOOL  _monitoringCourse;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic) int compassPoint;
@property (nonatomic) BOOL contentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canStartLocationUpdates;
- (void)_createSubviews;
- (void)_setActive:(BOOL)arg1;
- (void)_startLocationUpdates;
- (void)_stopLocationUpdates;
- (void)_updateContents;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (void)_updateStyling;
- (int)compassPoint;
- (BOOL)contentsHidden;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithSharedMKLocationManager;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isActive;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCompassPoint:(int)arg1;
- (void)setContentsHidden:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
