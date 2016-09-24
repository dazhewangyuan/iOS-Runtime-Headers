/* Generated by RuntimeBrowser.
 */

@protocol MNNavigationServiceDaemonInterface <NSObject>

@required

- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(MNTrafficIncidentAlertDetails *)arg2;
- (void)changeSettings:(MNSettings *)arg1;
- (BOOL)guidancePromptsEnabled;
- (int)headingOrientation;
- (void)pauseGuidanceLevelUpdates;
- (void)prepareNavigationWithRouteDetails:(MNRoutePlanningDetails *)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(NSData *)arg1;
- (void)repeatCurrentGuidanceWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)repeatCurrentTrafficAlertWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)resumeGuidanceLevelUpdates;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(MNAudioOutputSetting *)arg1;
- (void)setDisplayedStepIndex:(unsigned int)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(MNAudioOutputSetting *)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setRideIndex:(unsigned int)arg1 forLegIndex:(unsigned int)arg2;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 6: MNRoutePlanningDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)vibrateForPrompt:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*

@end
