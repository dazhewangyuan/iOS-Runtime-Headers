/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNRemoteEventProvider : CALNRemoteDataProvider {
    NSMutableDictionary * _alertRecordIDsToAlertInfos;
    NSMutableDictionary * _alertRecordIDsToRefreshTimes;
    id /* block */  _cancelHypothesisRefreshRequest;
    id /* block */  _ceaseTravelMonitoringEvent;
    id /* block */  _countOfSuggestedNotificationsToIgnoreBlock;
    id /* block */  _reloadNotificationsBlock;
    id /* block */  _requestHypothesisRefresh;
    id /* block */  _sendTravelAdviceFeedback;
}

@property (nonatomic, readonly) id /* block */ adviceReceivedBlock;
@property (nonatomic, readonly) id /* block */ authorizationChangedBlock;
@property (nonatomic, copy) id /* block */ cancelHypothesisRefreshRequest;
@property (nonatomic, copy) id /* block */ ceaseTravelMonitoringEvent;
@property (nonatomic, copy) id /* block */ countOfSuggestedNotificationsToIgnoreBlock;
@property (nonatomic, readonly) id /* block */ eventSignficantlyChangedBlock;
@property (nonatomic, copy) id /* block */ reloadNotificationsBlock;
@property (nonatomic, copy) id /* block */ requestHypothesisRefresh;
@property (nonatomic, copy) id /* block */ sendTravelAdviceFeedback;

+ (BOOL)_alertHasTravelInformation:(id)arg1;
+ (BOOL)_date:(id)arg1 isWithinEightMinutesOfDate:(id)arg2;
+ (id)_directionsModeForAlertInfo:(id)arg1;
+ (id)_launchOptionsDirectionsModeForLocationRoutingMode:(int)arg1;
+ (id)_launchOptionsDirectionsModeForTransportType:(int)arg1;
+ (BOOL)_mayCeaseRouteMonitoringForAlertInfo:(id)arg1;
+ (BOOL)_shouldRequestReportAProblemAction;
+ (int)_spanForNewStatusWithEvent:(id)arg1;
+ (BOOL)_timeToLeaveStateAlreadyDisplayedBasedOnHypothesis:(id)arg1 alertInfo:(id)arg2 date:(id)arg3;
+ (double)requestHypothesisRefreshInterval;
+ (id)timeToLeaveStringForAlertInfo:(id)arg1;
+ (id)userActivityUserInfoForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_clearHypothesisAndUpdateBulletinForAlertInfo:(id)arg1;
- (void)_clearTravelAdvisoryHypotheses;
- (void)_deleteCalendarItemForRecordID:(id)arg1 span:(int)arg2;
- (id)_expirationDateForEventInvitation:(id)arg1;
- (id)_expirationDateForResourceChange:(id)arg1;
- (id)_iconForDate:(id)arg1 calendar:(id)arg2;
- (id)_iconImageDataForDate:(id)arg1 calendar:(id)arg2;
- (void)_receivedHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)_recordDisplayOfInitialTimeToLeaveAlert;
- (void)_recordDisplayOfInitialTimeToLeaveAlertWithDate:(id)arg1 event:(id)arg2 hypothesis:(id)arg3;
- (void)_recordUpcomingEventAlertSuppression;
- (void)_refreshTimerFired:(id)arg1;
- (void)_removeRefreshTimerForEventWithExternalURL:(id)arg1;
- (id)_reportAProblemActionForAlertInfo:(id)arg1;
- (id)_representationForRequest:(id)arg1 timeToLeaveString:(id)arg2 eventIfExists:(id)arg3 displayTimeZone:(id)arg4;
- (id)_resourceChangeURIFromBulletin:(id)arg1;
- (void)_setEventRepresentationForNotification:(id)arg1 bulletin:(id)arg2;
- (void)_setParticipantStatus:(int)arg1 recordID:(id)arg2;
- (void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2 contactIdentifier:(id*)arg3;
- (void)_setUpRefreshTimerAt:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)_significantTimeChanged;
- (id)_snoozeActionWithAlertInfo:(id)arg1;
- (id)_snoozeOrReportAProblemActionForAlertInfo:(id)arg1;
- (void)_trackDirectionsEngagedForTTLAlertForAlertInfo:(id)arg1;
- (unsigned int)_ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2;
- (unsigned int)_ttlEventTrackerETATypeForHypothesis:(id)arg1;
- (unsigned int)_ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1;
- (unsigned int)_ttlEventTrackerTravelStateForHypothesisTravelState:(int)arg1;
- (void)_updateRefreshTimerForEventWithExternalURL:(id)arg1;
- (void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2;
- (id /* block */)adviceReceivedBlock;
- (BOOL)allowsLocationAlerts;
- (id /* block */)authorizationChangedBlock;
- (id)btaJobNameForEvent:(id)arg1;
- (void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(BOOL)arg2 extraActions:(id /* block */)arg3;
- (id)bulletinRequestForAlertInfo:(id)arg1;
- (id)bulletinRequestWithCalendarNotification:(id)arg1;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id /* block */)cancelHypothesisRefreshRequest;
- (id /* block */)ceaseTravelMonitoringEvent;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id /* block */)countOfSuggestedNotificationsToIgnoreBlock;
- (void)dataProviderDidLoad;
- (id)dateTimeStringForEventDate:(id)arg1 alwaysIncludeDate:(BOOL)arg2 allDayEvent:(BOOL)arg3;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)defaultURLForAlertInfo:(id)arg1;
- (id)directionsActionForAlertInfo:(id)arg1;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)entityScheme;
- (id /* block */)eventSignficantlyChangedBlock;
- (void)fetchDataFromContext;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)handleBulletinActionResponse:(id)arg1;
- (void)handleDarwinNotification:(id)arg1;
- (id)initWithNotificationFetchBlock:(id /* block */)arg1;
- (id)locationStringForAlertInfo:(id)arg1;
- (id)messageStringForAlertInfo:(id)arg1;
- (BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)notificationCountChanged:(id)arg1;
- (void)performCalendarItemForRecordID:(id)arg1 action:(id /* block */)arg2;
- (void)protectedAcknowledgeAlarm:(BOOL)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(id /* block */)arg4;
- (id)protectedItemForBulletinRecordID:(id)arg1;
- (void)protectedRemoveBulletinForID:(id)arg1;
- (void)protectedSaveBulletin:(id)arg1 forAlertInfo:(id)arg2 usingID:(id)arg3;
- (id /* block */)reloadNotificationsBlock;
- (id /* block */)requestHypothesisRefresh;
- (void)respond:(BOOL)arg1 toCalendarInvite:(id)arg2;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id /* block */)sendTravelAdviceFeedback;
- (void)setCancelHypothesisRefreshRequest:(id /* block */)arg1;
- (void)setCeaseTravelMonitoringEvent:(id /* block */)arg1;
- (void)setCountOfSuggestedNotificationsToIgnoreBlock:(id /* block */)arg1;
- (void)setReloadNotificationsBlock:(id /* block */)arg1;
- (void)setRequestHypothesisRefresh:(id /* block */)arg1;
- (void)setSendTravelAdviceFeedback:(id /* block */)arg1;
- (BOOL)shouldModfyBulletinForAlert:(id)arg1;
- (BOOL)shouldWithdrawBeforePostingBulletinForAlert:(id)arg1;
- (BOOL)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2;
- (id)sortDescriptors;
- (id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(BOOL)arg3;
- (id)titleStringForAlertInfo:(id)arg1;
- (id)universalSectionIdentifier;
- (id)viewActionForAlertInfo:(id)arg1;
- (void)willPostBulletinForAlertInfo:(id)arg1;

@end
