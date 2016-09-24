/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
 */

@interface IDSMessageHashStore : NSObject {
    unsigned int  __initialProcessTime;
    unsigned int  __initialServerTime;
    NSObject<OS_dispatch_source> * _databaseCloseTimer;
    double  _databaseLastUpdateTime;
    NSObject<OS_dispatch_queue> * _ivarQueue;
}

@property (nonatomic) unsigned int _initialProcessTime;
@property (nonatomic) unsigned int _initialServerTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__closeDatabaseOnIvarQueue;
- (void)_clearDatabaseCloseTimerOnIvarQueue;
- (unsigned int)_currentLocalTime;
- (unsigned int)_initialProcessTime;
- (unsigned int)_initialServerTime;
- (void)_performInitialHousekeeping;
- (void)_runCleanup;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_startCleanupTimer;
- (void)_storeInitialServerTime;
- (void)addMessageHash:(id)arg1;
- (void)closeDatabase;
- (BOOL)containsMessageHash:(id)arg1;
- (unsigned int)dataProtectionClass;
- (void)dealloc;
- (id)init;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(BOOL)arg2;
- (void)set_initialProcessTime:(unsigned int)arg1;
- (void)set_initialServerTime:(unsigned int)arg1;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidLeaveMemoryPressure;
- (void)updateCreationDateForHash:(id)arg1;

@end
