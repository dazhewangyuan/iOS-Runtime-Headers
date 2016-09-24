/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    int  _airPlayPasswordAlertDidAppearToken;
    BOOL  _airPlayPasswordAlertDidAppearTokenIsValid;
    int  _airPlayPasswordAlertDidCancelToken;
    int  _avItemType;
    NSArray * _cachedRoutes;
    BOOL  _cachedRoutesHasRoutePickedOnPairedDevice;
    BOOL  _cachedShowAirPlayDebugButton;
    <MPAVRoutingViewControllerDelegate> * _delegate;
    int  _discoveryModeBeforeEnteringBackground;
    NSNumber * _discoveryModeOverride;
    MPAVRoutingEmptyStateView * _emptyStateView;
    BOOL  _hasCachedAirPlayDebugButtonStatus;
    unsigned int  _iconStyle;
    MPAVRoute * _lastPendingPickedRoute;
    unsigned int  _mirroringStyle;
    BOOL  _needsDisplayedRoutesUpdate;
    int  _routeDiscoveryMode;
    MPAVRoutingController * _routingController;
    unsigned int  _style;
    BOOL  _suspendedDiscoveryModeDueToApplicationState;
    UIColor * _tableCellsBackgroundColor;
    UIColor * _tableCellsContentColor;
    MPAVRoutingTableHeaderView * _tableHeaderView;
    UITableView * _tableView;
    MPWeakTimer * _updateTimer;
    unsigned int  _updatesSincePresentation;
}

@property (nonatomic) BOOL allowMirroring;
@property (setter=setAVItemType:, nonatomic) int avItemType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVRoutingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSNumber *discoveryModeOverride;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int iconStyle;
@property (nonatomic) unsigned int mirroringStyle;
@property (nonatomic, readonly) unsigned int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_beginRouteDiscovery;
- (id)_displayableRoutesInRoutes:(id)arg1;
- (id)_displayedRoutes;
- (void)_endRouteDiscovery;
- (float)_expandedCellHeight;
- (float)_normalCellHeight;
- (void)_pickRoute:(id)arg1;
- (void)_registerNotifications;
- (void)_reloadEmptyStateVisibility;
- (id)_routesWhereMirroringIsPreferred;
- (id)_routingController;
- (void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setRouteDiscoveryMode:(int)arg1;
- (void)_setTableCellsBackgroundColor:(id)arg1;
- (void)_setTableCellsContentColor:(id)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (BOOL)_shouldShowAirPlayDebugButton;
- (BOOL)_shouldShowAirPlayMirroringCompactDescriptionHeader;
- (BOOL)_shouldShowMirroringCellForRoute:(id)arg1;
- (void)_showAirPlayDebug;
- (id)_tableCellsBackgroundColor;
- (id)_tableCellsContentColor;
- (id)_tableHeaderView;
- (id)_tableView;
- (float)_tableViewFooterViewHeight;
- (float)_tableViewHeaderViewHeight;
- (float)_tableViewHeightAccordingToDataSource;
- (unsigned int)_tableViewNumberOfRows;
- (void)_unregisterNotifications;
- (void)_updateDisplayedRoutes;
- (BOOL)allowMirroring;
- (int)avItemType;
- (void)dealloc;
- (id)delegate;
- (id)discoveryModeOverride;
- (unsigned int)iconStyle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned int)arg1;
- (unsigned int)mirroringStyle;
- (int)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAVItemType:(int)arg1;
- (void)setAllowMirroring:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryModeOverride:(id)arg1;
- (void)setIconStyle:(unsigned int)arg1;
- (void)setMirroringStyle:(unsigned int)arg1;
- (unsigned int)style;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
