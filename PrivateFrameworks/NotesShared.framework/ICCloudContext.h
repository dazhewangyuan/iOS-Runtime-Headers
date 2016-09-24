/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudContext : NSObject {
    <ICCloudContextDelegate> * _cloudContextDelegate;
    CKContainer * _container;
    BOOL  _didAddObservers;
    BOOL  _disabled;
    BOOL  _disabledInternal;
    BOOL  _fetchOperationsPending;
    BOOL  _fetchingEnabled;
    NSDate * _lastSyncDate;
    BOOL  _needsToProcessAllObjects;
    BOOL  _needsToUpdateSubscriptions;
    NSMutableSet * _objectIDsToProcess;
    NSMutableSet * _objectIDsToRetry;
    NSOperationQueue * _operationQueue;
    ICSelectorDelayer * _pollingSelectorDelayer;
    NSObject<OS_dispatch_queue> * _processingQueue;
    ICSelectorDelayer * _processingSelectorDelayer;
    int  _qualityOfService;
    NSTimer * _retryTimer;
    NSMutableSet * _subscribedSubscriptionIDs;
    BOOL  _syncDisabledByServer;
    NSMutableSet * _zoneIDsFetchingChanges;
    NSMutableSet * _zoneIDsNeedingFetchChanges;
    NSMutableSet * _zoneIDsNeedingToBeSaved;
}

@property (nonatomic) int accountStatus;
@property (nonatomic) <ICCloudContextDelegate> *cloudContextDelegate;
@property (nonatomic, readonly) NSDictionary *cloudObjectClassesByRecordType;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic) BOOL didAddObservers;
@property (getter=isDisabled) BOOL disabled;
@property (getter=isDisabledInternal) BOOL disabledInternal;
@property (nonatomic, readonly) BOOL fetchOperationsPending;
@property (getter=isFetchingEnabled, nonatomic) BOOL fetchingEnabled;
@property (retain) NSDate *lastSyncDate;
@property (nonatomic) BOOL needsToProcessAllObjects;
@property BOOL needsToUpdateSubscriptions;
@property (nonatomic, retain) NSMutableSet *objectIDsToProcess;
@property (nonatomic, retain) NSMutableSet *objectIDsToRetry;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (retain) ICSelectorDelayer *pollingSelectorDelayer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) ICSelectorDelayer *processingSelectorDelayer;
@property (nonatomic) int qualityOfService;
@property (retain) NSTimer *retryTimer;
@property (retain) NSMutableSet *subscribedSubscriptionIDs;
@property (nonatomic) BOOL syncDisabledByServer;
@property (nonatomic, retain) NSMutableSet *zoneIDsFetchingChanges;
@property (nonatomic, retain) NSMutableSet *zoneIDsNeedingFetchChanges;
@property (nonatomic, retain) NSMutableSet *zoneIDsNeedingToBeSaved;

+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;
+ (void)deleteAllServerChangeTokens;
+ (id)errorForDisabledCloudSyncing;
+ (id)errorFromErrors:(id)arg1;
+ (id)errorFromOperations:(id)arg1;
+ (id)errorsFromError:(id)arg1;
+ (BOOL)isZoneOptions:(id)arg1 subsetOfZoneOptions:(id)arg2;
+ (id)metadataZoneID;
+ (id)newNotesContainer;
+ (id)notesZoneID;
+ (id)objectsByDatabaseScope:(id)arg1;
+ (id)sharedContext;
+ (id)sortedRecords:(id)arg1;
+ (id)zoneIDsFromZoneInfos:(id)arg1;
+ (id)zoneInfosFromZoneIDs:(id)arg1;

- (void).cxx_destruct;
- (void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 waitForDependencies:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)_processCloudObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_syncWithCompletionHandler:(id /* block */)arg1;
- (int)accountStatus;
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;
- (void)addFetchOperationsForRecordIDs:(id)arg1 qualityOfService:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 waitForDependencies:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)addOperationToProcessObjectsWithCompletionHandler:(id /* block */)arg1;
- (void)addOperationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addStateHandler;
- (id)allCloudObjectsInContext:(id)arg1;
- (id)allZoneIDs;
- (BOOL)canRetryImmediatelyAfterError:(id)arg1;
- (void)cancelEverythingWithCompletionHandler:(id /* block */)arg1;
- (void)checkForLongLivedOperations;
- (void)clearPendingActivity;
- (void)clearSubscribedSubscriptionIDs;
- (void)clearZoneFetchState;
- (id)cloudContextDelegate;
- (void)cloudKitAccountChanged:(id)arg1;
- (id)cloudObjectClassesByRecordType;
- (id)container;
- (void)contextDidSave:(id)arg1;
- (void)dealloc;
- (void)deleteCloudObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 markZonesAsUserPurged:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1;
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(int)arg2;
- (BOOL)didAddObservers;
- (void)didFetchShare:(id)arg1 context:(id)arg2;
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;
- (id)existingCloudObjectForRecord:(id)arg1 context:(id)arg2;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;
- (id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(BOOL)arg2 context:(id)arg3;
- (void)fetchCloudObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDatabaseChangesForDatabases:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchDatabaseChangesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;
- (void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3;
- (BOOL)fetchOperationsPending;
- (void)fetchRecordIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3;
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 changeTokenUpdated:(id)arg3;
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;
- (void)fetchRecordZoneChangesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchUserRecordWithCompletionHandler:(id /* block */)arg1;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)firePollingSyncRequest;
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;
- (void)handleNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)hasPendingOperations;
- (id)init;
- (BOOL)isCloudKitAccountAvailable;
- (BOOL)isDisabled;
- (BOOL)isDisabledInternal;
- (BOOL)isFetchingAllRecordZones;
- (BOOL)isFetchingEnabled;
- (BOOL)isInForeground;
- (BOOL)isInternetReachable;
- (BOOL)isReadyToSync;
- (id)lastSyncDate;
- (void)loadZoneFetchState;
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5;
- (void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4;
- (void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3;
- (BOOL)needsToProcessAllObjects;
- (BOOL)needsToUpdateSubscriptions;
- (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
- (id)newOperationToFetchRecordZoneChangesWithZoneOptions:(id)arg1 database:(id)arg2;
- (id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;
- (id)objectIDsToProcess;
- (id)objectIDsToRetry;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationQueue;
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(int)arg3;
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2;
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationToSaveZonesForZoneIDs:(id)arg1;
- (id)operationToSaveZonesIfNecessary;
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(int)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(int)arg2;
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1;
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 addDependencies:(BOOL)arg5;
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (BOOL)partialError:(id)arg1 containsErrorCode:(int)arg2;
- (id)pollingSelectorDelayer;
- (void)printOperationQueue;
- (void)processAllCloudObjectsWithCompletionHandler:(id /* block */)arg1;
- (void)processObjectIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processPendingCloudObjects;
- (void)processPendingCloudObjectsWithCompletionHandler:(id /* block */)arg1;
- (id)processingQueue;
- (id)processingSelectorDelayer;
- (void)pushCloudObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)qualityOfService;
- (void)reachabilityChanged:(id)arg1;
- (id)readinessLoggingDescription;
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;
- (void)recursiveCancelDependentOperations:(id)arg1;
- (void)retryOperationsIfNecessary;
- (void)retryProcessingCloudObjects;
- (id)retryTimer;
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2;
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(int)arg3;
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveZoneFetchState;
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1;
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(int)arg2;
- (void)setAccountStatus:(int)arg1;
- (void)setCloudContextDelegate:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDidAddObservers:(BOOL)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDisabledInternal:(BOOL)arg1;
- (void)setFetchingEnabled:(BOOL)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setNeedsToProcessAllObjects:(BOOL)arg1;
- (void)setNeedsToUpdateSubscriptions:(BOOL)arg1;
- (void)setObjectIDsToProcess:(id)arg1;
- (void)setObjectIDsToRetry:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPollingSelectorDelayer:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setProcessingSelectorDelayer:(id)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setSubscribedSubscriptionIDs:(id)arg1;
- (void)setSyncDisabledByServer:(BOOL)arg1;
- (void)setZoneIDsFetchingChanges:(id)arg1;
- (void)setZoneIDsNeedingFetchChanges:(id)arg1;
- (void)setZoneIDsNeedingToBeSaved:(id)arg1;
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;
- (id)subscribedSubscriptionIDs;
- (id)subscriptionForDatabase:(id)arg1;
- (BOOL)syncDisabledByServer;
- (void)syncIfNecessary;
- (void)syncWithCompletionHandler:(id /* block */)arg1;
- (double)timeIntervalToRetryAfterFromError:(id)arg1;
- (void)updateAccountStatusWithCompletionHandler:(id /* block */)arg1;
- (void)updateCloudContextState;
- (void)updateConfiguration;
- (void)updateSelectorDelayers;
- (void)updateSubscriptions;
- (id)zoneIDsFetchingChanges;
- (id)zoneIDsNeedingFetchChanges;
- (id)zoneIDsNeedingToBeSaved;

@end
