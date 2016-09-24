/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUbiquitousKeyValueStore : NSObject {
    int  _daemonWakeToken;
    id  _private1;
    id  _private2;
    id  _private3;
    void * _private4;
    void * _reserved;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_appWillActivate;
+ (void)_appWillDeactivate;
+ (void)_synchronizeStoresForced:(BOOL)arg1;
+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (id)defaultStore;

- (void)_adjustTimer:(id)arg1;
- (void)_adjustTimerForAutosync;
- (void)_configurationDidChange;
- (BOOL)_hasPendingSynchronize;
- (void)_pleaseSynchronize:(id)arg1;
- (BOOL)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(int)arg2;
- (void)_registerToDaemon;
- (void)_rethrowException:(id)arg1;
- (void)_scheduleRemoteSynchronization;
- (void)_sendPingToDaemon;
- (void)_setHasPendingSynchronize:(BOOL)arg1;
- (void)_setShouldAvoidSynchronize:(BOOL)arg1;
- (BOOL)_shouldAvoidSynchronize;
- (void)_sourceDidChange:(id)arg1;
- (int)_storeChangeFromSourceChange:(int)arg1;
- (void)_syncConcurrently;
- (void)_syncConcurrentlyForced:(BOOL)arg1;
- (BOOL)_synchronizeForced:(BOOL)arg1;
- (BOOL)_synchronizeForced:(BOOL)arg1 notificationQueue:(id)arg2;
- (void)_unregisterFromDaemon;
- (void)_useSourceAsyncWithBlock:(id /* block */)arg1;
- (void)_useSourceSyncWithBlock:(id /* block */)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3;
- (int)longLongForKey:(id)arg1;
- (unsigned int)maximumDataLengthPerKey;
- (unsigned int)maximumKeyCount;
- (unsigned int)maximumKeyLength;
- (unsigned int)maximumTotalDataLength;
- (id)objectForKey:(id)arg1;
- (void)registerDefaultValues:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setLongLong:(int)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (BOOL)synchronizeWithSourceForced:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults

- (void)_printDebugDescription;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (void)tsa_coalescedSynchronizeForDefaultStore;

@end
