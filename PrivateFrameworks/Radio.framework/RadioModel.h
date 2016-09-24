/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSOperationQueue * _backgroundCleanupQueue;
    BKSProcessAssertion * _backgroundProcessAssertion;
    int  _backgroundTaskCount;
    NSObject<OS_dispatch_source> * _backgroundTaskInvalidateTimerSource;
    NSManagedObjectContext * _context;
    BOOL  _isBackgroundModel;
    NSManagedObjectModel * _model;
    int  _modelChangedToken;
    BOOL  _modelChangedTokenIsValid;
    int  _modelDeletedToken;
    BOOL  _modelDeletedTokenIsValid;
    NSFetchRequest * _stationFetchRequest;
    NSFetchedResultsController * _stationFetchedResultsController;
    NSMapTable * _stationToSkipControllerMapTable;
    NSPersistentStoreCoordinator * _storeCoordinator;
    int  _transactionCount;
}

@property (nonatomic, readonly) NSArray *allStations;
@property (nonatomic) unsigned int authenticatedAccountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *featuredStations;
@property (nonatomic, copy) NSString *globalHash;
@property (nonatomic) unsigned int globalVersion;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *previewStations;
@property (nonatomic, readonly, copy) NSArray *reportProblemIssueTypes;
@property (nonatomic, copy) NSArray *stationSortOrdering;
@property (nonatomic, readonly) NSArray *stations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userStations;

+ (id)_persistentStoreConfigurationOptions;
+ (void)_postAccountDidDeauthenticateNotification;
+ (id)_radioDatabasePath;
+ (id)_radioDirectoryPath;
+ (id)backgroundModel;
+ (void)deleteAllData;
+ (void)initialize;
+ (id)sharedModel;

- (void).cxx_destruct;
- (void)_addTimestamp:(double)arg1 toManagedSkipHistory:(id)arg2 withSkipIntervalForCulling:(double)arg3;
- (id)_arrayByReplacingManagedObjectsInArray:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_contextDidSaveNotification:(id)arg1;
- (void)_createRadioDirectoryAndDatabaseIfNecessary;
- (id)_databasePropertyValueForKey:(id)arg1;
- (void)_defaultRadioModelInitialization;
- (void)_endBackgroundTaskAssertion;
- (id)_init;
- (id)_initBackgroundModelWithPersistentStoreCoordinator:(id)arg1;
- (void)_insertRevisionWithStationID:(int)arg1 revisionType:(int)arg2;
- (id)_managedSkipHistoryWithSkipIdentifier:(id)arg1;
- (id)_managedSkipHistoryWithStationHash:(id)arg1;
- (id)_managedSkipHistoryWithStationID:(int)arg1;
- (id)_newManagedSkipHistoryWithSkipIdentifier:(id)arg1;
- (id)_newManagedSkipHistoryWithStationHash:(id)arg1;
- (id)_newManagedSkipHistoryWithStationID:(int)arg1;
- (unsigned int)_numberOfSkipsUsedWithSkipTimestamps:(id)arg1 currentTimestamp:(double)arg2 skipInterval:(double)arg3 returningEarliestSkipTimestamp:(double*)arg4;
- (void)_performTransactionAndSave:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (void)_postContextDidChangeNotification:(id)arg1;
- (void)_prepareModel;
- (void)_registerStationSkipController:(id)arg1;
- (void)_resetModel;
- (id)_setByReplacingManagedObjectsInSet:(id)arg1;
- (void)_setDatabasePropertyValue:(id)arg1 forKey:(id)arg2;
- (void)_unregisterStationSkipController:(id)arg1;
- (id)allStations;
- (unsigned int)authenticatedAccountIdentifier;
- (BOOL)canSkipTracksForStation:(id)arg1;
- (id)context;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (id)convertObject:(id)arg1;
- (id)convertObjects:(id)arg1;
- (id)convertObjectsInSet:(id)arg1;
- (void)copySkipHistoryFromStationHash:(id)arg1 toStationID:(int)arg2;
- (int)databaseVersion;
- (void)dealloc;
- (void)deleteAllData;
- (void)deletePreviewStation:(id)arg1;
- (void)deleteStation:(id)arg1;
- (void)deleteStationWithID:(int)arg1;
- (void)enumerateRevisionsSinceRevisionID:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredStations;
- (id)globalHash;
- (unsigned int)globalVersion;
- (id)init;
- (id)newFeaturedStationWithDictionary:(id)arg1;
- (id)newPreviewStationWithDictionary:(id)arg1;
- (id)newStationWithDictionary:(id)arg1;
- (void)noteTrackWasSkippedForStation:(id)arg1;
- (void)noteTrackWasSkippedForStation:(id)arg1 onDate:(id)arg2;
- (unsigned int)numberOfTracksSkippedForStation:(id)arg1;
- (unsigned int)numberOfTracksSkippedForStation:(id)arg1 returningEarliestSkipDate:(id*)arg2;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (void)performWriteTransactionWithBlock:(id /* block */)arg1;
- (id)previewStations;
- (void)removeTrackPlaybackDescriptor:(id)arg1 fromStation:(id)arg2;
- (void)removeTrackPlaybackDescriptorQueuesForAllStations;
- (id)reportProblemIssueTypes;
- (void)setAuthenticatedAccountIdentifier:(unsigned int)arg1;
- (void)setDatabaseVersion:(int)arg1;
- (void)setGlobalHash:(id)arg1;
- (void)setGlobalVersion:(unsigned int)arg1;
- (void)setReportProblemIssueTypes:(id)arg1;
- (void)setStationSortOrdering:(id)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1 forStation:(id)arg2;
- (id)skipControllerForStation:(id)arg1;
- (id)stationSortOrdering;
- (id)stationWithHash:(id)arg1;
- (id)stationWithID:(int)arg1;
- (id)stationWithPersistentID:(int)arg1;
- (id)stationWithStationStringID:(id)arg1;
- (id)stations;
- (id)userStations;

@end
