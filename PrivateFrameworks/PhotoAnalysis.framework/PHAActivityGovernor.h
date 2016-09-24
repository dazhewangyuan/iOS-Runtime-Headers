/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAActivityGovernor : NSObject {
    NSObject<OS_xpc_object> * _backgroundActivity;
    char * _backgroundActivityName;
    NSObject<OS_dispatch_source> * _backgroundDeferCheckTimer;
    <PHAActivityGovernorDelegate> * _delegate;
    NSObject<OS_xpc_object> * _foregroundActivity;
    char * _foregroundActivityName;
    NSObject<OS_dispatch_source> * _foregroundDeferCheckTimer;
    BOOL  _hasBackgroundAccess;
    BOOL  _hasForegroundAccess;
    BOOL  _overrideAccess;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _simulatedNeverHasAccess;
    BOOL  _simulatedWantsDefer;
    double  _timeOfLastForegroundGrant;
    double  _timeOfLastForegroundWantRequest;
    double  _timeSpentForegroundGranted;
    double  _timeSpentWantingForeground;
    BOOL  _wantsBackgroundAccess;
    BOOL  _wantsForegroundAccess;
}

@property (retain) NSObject<OS_xpc_object> *backgroundActivity;
@property (retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer;
@property (nonatomic) <PHAActivityGovernorDelegate> *delegate;
@property (retain) NSObject<OS_xpc_object> *foregroundActivity;
@property (retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer;
@property (nonatomic) BOOL hasBackgroundAccess;
@property (nonatomic) BOOL hasForegroundAccess;
@property (nonatomic) BOOL overrideAccess;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL simulatedNeverHasAccess;
@property (nonatomic) BOOL simulatedWantsDefer;
@property (nonatomic) double timeOfLastForegroundGrant;
@property (nonatomic) double timeOfLastForegroundWantRequest;
@property (nonatomic) double timeSpentForegroundGranted;
@property (nonatomic) double timeSpentWantingForeground;
@property (nonatomic) BOOL wantsBackgroundAccess;
@property (nonatomic) BOOL wantsForegroundAccess;

- (void).cxx_destruct;
- (const char *)_activityNameForLevel:(unsigned int)arg1;
- (void)_generateActivityNames;
- (void)_inq_finishActivity:(id*)arg1 accessLevel:(unsigned int)arg2 timer:(id)arg3;
- (void)_inq_handleRequestChangeForAccessLevel:(unsigned int)arg1;
- (BOOL)_inq_hasAccessForLevel:(unsigned int)arg1;
- (void)_inq_installDeferMonitorForActivity:(id)arg1 accessLevel:(unsigned int)arg2;
- (void)_inq_registerActivityNamed:(const char *)arg1 withCriteria:(id)arg2 accessLevel:(unsigned int)arg3;
- (void)_inq_removeDeferTimer:(id)arg1;
- (void)_inq_teardownActivity:(id*)arg1 accessLevel:(unsigned int)arg2 timer:(id)arg3;
- (BOOL)_inq_wantsAccessForLevel:(unsigned int)arg1;
- (id)backgroundActivity;
- (id)backgroundDeferCheckTimer;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)foregroundActivity;
- (id)foregroundDeferCheckTimer;
- (BOOL)hasBackgroundAccess;
- (BOOL)hasForegroundAccess;
- (id)init;
- (BOOL)overrideAccess;
- (id)queue;
- (void)setBackgroundActivity:(id)arg1;
- (void)setBackgroundDeferCheckTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundActivity:(id)arg1;
- (void)setForegroundDeferCheckTimer:(id)arg1;
- (void)setHasBackgroundAccess:(BOOL)arg1;
- (void)setHasForegroundAccess:(BOOL)arg1;
- (void)setOverrideAccess:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (void)setSimulatedNeverHasAccess:(BOOL)arg1;
- (void)setSimulatedWantsDefer:(BOOL)arg1;
- (void)setTimeOfLastForegroundGrant:(double)arg1;
- (void)setTimeOfLastForegroundWantRequest:(double)arg1;
- (void)setTimeSpentForegroundGranted:(double)arg1;
- (void)setTimeSpentWantingForeground:(double)arg1;
- (void)setWantsBackgroundAccess:(BOOL)arg1;
- (void)setWantsForegroundAccess:(BOOL)arg1;
- (BOOL)simulatedNeverHasAccess;
- (BOOL)simulatedWantsDefer;
- (id)statusAsDictionary;
- (double)timeOfLastForegroundGrant;
- (double)timeOfLastForegroundWantRequest;
- (double)timeSpentForegroundGranted;
- (double)timeSpentWantingForeground;
- (BOOL)wantsBackgroundAccess;
- (BOOL)wantsForegroundAccess;

@end
