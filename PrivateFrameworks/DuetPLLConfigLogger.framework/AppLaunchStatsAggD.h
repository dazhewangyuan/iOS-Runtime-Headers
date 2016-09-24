/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
 */

@interface AppLaunchStatsAggD : NSObject {
    int  BGReportToken;
    NSObject<OS_dispatch_queue> * aggDQueue;
    id /* block */  appisFetchable;
    unsigned long  blameReasons;
    bool  buildLaunchStats;
    int  currentFetchFailuresIndex;
    NSDate * cycleStart;
    int  fetchAppFiltered;
    int  fetchAttempt;
    int  fetchDataCount;
    int  fetchDataTotal;
    int  fetchDenied;
    int  fetchDeniedReasons;
    int  fetchFailedCount;
    int  fetchGiven;
    int  fetchPWTotal;
    int  fetchUpdateTimeCount;
    int  fetchUpdateTimeTotal;
    int  forceRelease;
    int  hasStats;
    NSMutableDictionary * launchDict;
    unsigned int  numPrewarms;
    unsigned int  numWarmedLaunches;
    NSMutableArray * pastCycle;
    NSMutableDictionary * previousPrewarmDict;
    NSMutableDictionary * previousTrendingDict;
    NSMutableDictionary * prewarmCountDict;
    NSMutableDictionary * prewarmDict;
    int  prewarmHits;
    int  prewarmMiss;
    int  prewarmZoneCounts;
    int  pushAttempt;
    int  pushDenied;
    int  pushDeniedReasons;
    unsigned int  radioPiggyback;
    unsigned int  radioWoken;
    NSMutableDictionary * recentFetchResults;
    int  topNZoneCounts;
    NSMutableDictionary * trendingDict;
    int  zoneCounts;
}

@property (nonatomic, readonly) NSDate *cycleStart;
@property (nonatomic, retain) NSMutableArray *pastCycle;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountPredatePrewarm:(id)arg1 prevDay:(id)arg2 launch:(int)arg3 launchvalue:(int)arg4 prewarmvalue:(int)arg5 diff:(int)arg6 result:(int*)arg7;
- (bool)accountYesterday:(id)arg1 atzone:(int)arg2 launchVal:(int)arg3 result:(int*)arg4;
- (void)appFGLaunch:(id)arg1;
- (void)appPrewarm:(id)arg1 type:(int)arg2;
- (void)calculatePrewarmHitMiss:(id)arg1 launch:(id)arg2;
- (id)cycleStart;
- (void)dealloc;
- (int)distanceToLastPrewarm:(id)arg1 prevDay:(id)arg2 currentSlot:(int)arg3 currentoffset:(int)arg4;
- (void)fetchAttemptIncrement;
- (void)fetchCountUpdate:(int)arg1;
- (void)fetchDataCount:(int)arg1;
- (void)fetchDeniedBecause:(bool)arg1 withPWBudget:(bool)arg2 wifiQual:(int)arg3 cellQual:(int)arg4 networkingDeferred:(bool)arg5 ignorePoorCell:(bool)arg6 incall:(bool)arg7 thermal:(bool)arg8;
- (void)fetchDeniedForReason:(int)arg1;
- (void)fetchDeniedForReasons:(id)arg1;
- (void)fetchDeniesIncrement;
- (void)fetchFailedUpdate;
- (void)fetchFailuresIncrement;
- (void)fetchFiltered:(int)arg1;
- (void)fetchFilteredForBundle:(id)arg1 forReason:(int)arg2;
- (void)fetchFilteredForBundle:(id)arg1 forReasons:(id)arg2;
- (void)fetchPWCount:(int)arg1;
- (void)fetchTimeUpdate:(int)arg1;
- (void)forceReleaseCount;
- (void)incrementTriggerReason:(int)arg1;
- (id)init;
- (void)newCycleWithApps:(id)arg1;
- (int)numSlotsAfterPrewarmForApp:(id)arg1 launchedAt:(id)arg2;
- (id)pastCycle;
- (void)populatePredictZones:(int)arg1 filter:(bool)arg2 callback:(id /* block */)arg3;
- (void)populatePrewarmZones:(int)arg1 callback:(id /* block */)arg2;
- (void)pushAttemptIncrement:(int)arg1;
- (void)pushDeniedBecause:(bool)arg1 withPWBudget:(bool)arg2 withConnection:(bool)arg3;
- (void)pushDeniedForReason:(int)arg1;
- (void)pushDeniedForReasons:(id)arg1;
- (void)pushFailuresIncrement;
- (void)radioPiggybackIncrement;
- (void)radioWakeIncrement;
- (void)recordGlancePrewarmStatsRaw;
- (void)recordPrewarmFailureReasonsForBundle:(id)arg1;
- (void)replacePredictionAtZone:(id)arg1 zoneid:(int)arg2;
- (void)searchBlame:(id)arg1 inzone:(int)arg2 inminute:(int)arg3;
- (void)setCollectLaunchStats;
- (void)setFetchCapableCheck:(id /* block */)arg1;
- (void)setPastCycle:(id)arg1;
- (void)uploadData;

@end
