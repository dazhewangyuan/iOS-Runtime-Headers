/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAggregateDictionaryService : PLService {
    PLCFNotificationOperatorComposition * _blmAggregateCFNotification;
    NSNumber * _currentMachWakeTime;
    PLMonotonicTimer * _dailyTaskTimer;
    BOOL  _firstScreenOnAfterWake;
    struct AggState { 
        int state; 
        double level; 
        double timestamp; 
    }  _last_state;
    NSMutableArray * _registeredNotifications;
    NSMutableDictionary * _validReasonsDictionary;
    NSString * _wakeReasonString;
    NSString * _wakeReasons;
    double  remainderUnpluggedEnergy;
    double  remainderUnpluggedTime;
}

@property (retain) PLCFNotificationOperatorComposition *blmAggregateCFNotification;
@property (retain) NSNumber *currentMachWakeTime;
@property (retain) PLMonotonicTimer *dailyTaskTimer;
@property BOOL firstScreenOnAfterWake;
@property struct AggState { int x1; double x2; double x3; } last_state;
@property (retain) NSMutableArray *registeredNotifications;
@property (retain) NSMutableDictionary *validReasonsDictionary;
@property (retain) NSString *wakeReasonString;
@property (retain) NSString *wakeReasons;

+ (void)load;
+ (id)modelIdentifier;
+ (id)nameForBundleID:(id)arg1;
+ (id)nameForPluginID:(id)arg1;
+ (id)osVersion;
+ (id)queryForTopNodes;
+ (id)queryForTopRootNodeEnergyWithName:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)abstimeToNanosec:(unsigned int)arg1;
- (void)addToDurationScalarKey:(id)arg1 withDuration:(double)arg2;
- (void)blmAggregate;
- (id)blmAggregateCFNotification;
- (unsigned int)bucketWakeTime:(unsigned int)arg1;
- (id)currentMachWakeTime;
- (id)dailyTaskTimer;
- (void)dailyTasks;
- (BOOL)firstScreenOnAfterWake;
- (id)init;
- (void)initOperatorDependancies;
- (void)initValidReasonsDictionary;
- (struct AggState { int x1; double x2; double x3; })last_state;
- (void)logAggregateUIKitActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3;
- (void)logAggregateUIKitKeyboardActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3;
- (void)logDuration:(double)arg1 asDistribution:(id)arg2;
- (void)registerForApplicationNotifications;
- (void)registerForAssertionNotifications;
- (void)registerForAudioNotifications;
- (void)registerForBacklightLatencyNotifications;
- (void)registerForBatteryNotifications;
- (void)registerForBluetoothNotifications;
- (void)registerForCalendarNotifications;
- (void)registerForCameraNotifications;
- (void)registerForCoreMediaNotifications;
- (void)registerForLocationNotifications;
- (void)registerForMailNotifications;
- (void)registerForSCDynamicStoreNotifications;
- (void)registerForSafariNotifications;
- (void)registerForSpringboardNotifications;
- (void)registerForStoreNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForVideoNotifications;
- (id)registeredNotifications;
- (void)setBlmAggregateCFNotification:(id)arg1;
- (void)setCurrentMachWakeTime:(id)arg1;
- (void)setDailyTaskTimer:(id)arg1;
- (void)setFirstScreenOnAfterWake:(BOOL)arg1;
- (void)setLast_state:(struct AggState { int x1; double x2; double x3; })arg1;
- (void)setRegisteredNotifications:(id)arg1;
- (void)setValidReasonsDictionary:(id)arg1;
- (void)setWakeReasonString:(id)arg1;
- (void)setWakeReasons:(id)arg1;
- (BOOL)shouldSample;
- (void)updateAggregateStateWithEntry:(id)arg1;
- (id)validReasonsDictionary;
- (id)wakeReasonString;
- (id)wakeReasons;

@end
