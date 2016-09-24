/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCoreStorage : NSObject <UMUserSwitchStakeholder> {
    PLXPCResponderOperatorComposition * _archivesResponder;
    PLXPCResponderOperatorComposition * _blPathResponder;
    PLSQLiteConnection * _connection;
    PLNSNotificationOperatorComposition * _dailyTaskNotification;
    PLTimer * _dailyTaskTimer;
    PLCFNotificationOperatorComposition * _flushCachesCFNotification;
    PLTimer * _flushCachesTimer;
    PLCFNotificationOperatorComposition * _keybagFirstUnlockNotification;
    NSMutableDictionary * _processIDCache;
    PLKQueue * _profileDefaultsKQueue;
    PLXPCResponderOperatorComposition * _quarantineResponder;
    NSMutableSet * _safeCopyInProgress;
    PLXPCResponderOperatorComposition * _safeFileResponder;
    BOOL  _storageLocked;
    PLStorageOperator * _storageOperator;
    BOOL  _storageReady;
    NSString * _uuid;
}

@property (retain) PLXPCResponderOperatorComposition *archivesResponder;
@property (retain) PLXPCResponderOperatorComposition *blPathResponder;
@property (retain) PLSQLiteConnection *connection;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLTimer *dailyTaskTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PLCFNotificationOperatorComposition *flushCachesCFNotification;
@property (retain) PLTimer *flushCachesTimer;
@property (readonly) unsigned int hash;
@property (retain) PLCFNotificationOperatorComposition *keybagFirstUnlockNotification;
@property (nonatomic, retain) NSMutableDictionary *processIDCache;
@property (retain) PLKQueue *profileDefaultsKQueue;
@property (retain) PLXPCResponderOperatorComposition *quarantineResponder;
@property (retain) NSMutableSet *safeCopyInProgress;
@property (retain) PLXPCResponderOperatorComposition *safeFileResponder;
@property (nonatomic) BOOL storageLocked;
@property (retain) PLStorageOperator *storageOperator;
@property BOOL storageReady;
@property (readonly) Class superclass;
@property (retain) NSString *uuid;

+ (id)allOperatorTablesToTrimConditionsForTrimDate:(id)arg1;
+ (void)logMessage:(id)arg1 fromFile:(id)arg2 fromFunction:(id)arg3 fromLineNumber:(long)arg4;
+ (id)storageQueueNameForClass:(id)arg1;
+ (id)storageQueueNameForEntryKey:(id)arg1;

- (void).cxx_destruct;
- (void)_updateEntry:(id)arg1 withBlock:(id /* block */)arg2;
- (id)aggregateEntriesForKey:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg3;
- (id)archivesResponder;
- (id)blPathResponder;
- (void)blockingFlushCachesWithReason:(id)arg1;
- (void)blockingFlushQueues:(id)arg1;
- (void)blockingUpdateEntry:(id)arg1 withBlock:(id /* block */)arg2;
- (int)blockingWriteEntry:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)cacheProcessIDEntry:(id)arg1;
- (void)checkCacheSizeForFlush;
- (void)cleanupQuarantine;
- (void)cleanupTmp;
- (id)connection;
- (long)countOfEntriesForKey:(id)arg1;
- (id)dailyTaskNotification;
- (id)dailyTaskTimer;
- (void)dailyTasks;
- (void)dealloc;
- (void)deleteAllEntriesForKey:(id)arg1;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2 withFilters:(id)arg3;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)deleteEntry:(id)arg1;
- (void)deleteEntryForKey:(id)arg1 WithRowID:(int)arg2;
- (void)dispatchAsyncForEntryKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)dispatchSyncForEntryKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)entriesForKey:(id)arg1;
- (id)entriesForKey:(id)arg1 before:(BOOL)arg2 timeInterval:(double)arg3 count:(int)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withCountOfEntriesBefore:(int)arg3 withCountOfEntriesAfter:(int)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withFilters:(id)arg3;
- (id)entriesForKey:(id)arg1 startingFromRowID:(int)arg2 count:(int)arg3 withFilters:(id)arg4;
- (id)entriesForKey:(id)arg1 withComparisons:(id)arg2;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (id)entriesForKey:(id)arg1 withQuery:(id)arg2;
- (id)entryForKey:(id)arg1 withID:(int)arg2;
- (void)enumerateProcessIDCacheWithBlock:(id /* block */)arg1;
- (id)flushCachesCFNotification;
- (BOOL)flushCachesIfRequiredForEntryKey:(id)arg1;
- (id)flushCachesTimer;
- (void)flushCachesWithReason:(id)arg1;
- (long)generalEntryCacheSizeLimit;
- (void)handleSchemaMismatchForTable:(id)arg1 expectedVersion:(double)arg2 schemaMatch:(short)arg3;
- (id)init;
- (void)initOperatorDependancies;
- (id)keybagFirstUnlockNotification;
- (id)lastEntriesForKey:(id)arg1 count:(int)arg2 withFilters:(id)arg3;
- (id)lastEntryForKey:(id)arg1;
- (id)lastEntryForKey:(id)arg1 withComparisons:(id)arg2 isSingleton:(BOOL)arg3;
- (id)lastEntryForKey:(id)arg1 withFilters:(id)arg2;
- (id)lastEntryForKey:(id)arg1 withIDLessThan:(int)arg2;
- (id)lastEntryForKey:(id)arg1 withSubEntryKey:(id)arg2;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (void)logMessage:(id)arg1 fromFile:(id)arg2 fromFunction:(id)arg3 fromLineNumber:(long)arg4;
- (void)processEntriesForKey:(id)arg1 withProperties:(id)arg2 withBlock:(id /* block */)arg3;
- (id)processIDCache;
- (id)processIDEntryForPid:(int)arg1;
- (id)profileDefaultsKQueue;
- (id)quarantineResponder;
- (void)removeOldPowerlogFiles;
- (void)removeProcessIDCacheForPid:(int)arg1;
- (void)removeProcessIDCacheForPidNumber:(id)arg1;
- (void)removeStorageForEntryKey:(id)arg1;
- (id)safeCopyInProgress;
- (id)safeFileResponder;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)setArchivesResponder:(id)arg1;
- (void)setBlPathResponder:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDailyTaskNotification:(id)arg1;
- (void)setDailyTaskTimer:(id)arg1;
- (BOOL)setFileProtectionForPath:(id)arg1 withLevel:(id)arg2;
- (void)setFlushCachesCFNotification:(id)arg1;
- (void)setFlushCachesTimer:(id)arg1;
- (void)setKeybagFirstUnlockNotification:(id)arg1;
- (void)setProcessIDCache:(id)arg1;
- (void)setProfileDefaultsKQueue:(id)arg1;
- (void)setQuarantineResponder:(id)arg1;
- (void)setSafeCopyInProgress:(id)arg1;
- (void)setSafeFileResponder:(id)arg1;
- (void)setStorageLocked:(BOOL)arg1;
- (void)setStorageOperator:(id)arg1;
- (void)setStorageReady:(BOOL)arg1;
- (void)setUuid:(id)arg1;
- (void)setupArrayForTableName:(id)arg1 forColumnNamed:(id)arg2 withValueType:(short)arg3 withShouldIndexFKID:(BOOL)arg4;
- (void)setupCoveringIndexOnTable:(id)arg1 withColumns:(id)arg2;
- (void)setupStorageForEntryKey:(id)arg1;
- (void)setupStorageForOperator:(id)arg1;
- (void)setupStorageForOperatorClass:(Class)arg1;
- (void)setupStorageForOperatorName:(id)arg1;
- (void)setupTableName:(id)arg1 withEntryKeyConfig:(id)arg2 withKeyOrder:(id)arg3 isDynamic:(BOOL)arg4 withShouldIndexFKID:(BOOL)arg5;
- (void)startStorage;
- (void)stopStorage;
- (BOOL)storageLocked;
- (id)storageOperator;
- (BOOL)storageReady;
- (void)updateEntry:(id)arg1 withBlock:(id /* block */)arg2;
- (id)uuid;
- (short)verifySchemaVersionOfTable:(id)arg1 matchesExpectedVersion:(double)arg2;
- (void)willSwitchUser;
- (void)writeAggregateEntry:(id)arg1;
- (void)writeEntries:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (int)writeEntry:(id)arg1;
- (void)writeEntry:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end
