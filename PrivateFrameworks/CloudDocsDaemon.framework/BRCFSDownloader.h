/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSDownloader : BRCFSSchedulerBase <BRCModule> {
    unsigned int  _activeDownloadsSize;
    BRCDeadlineScheduler * _downloadsDeadlineScheduler;
    BOOL  _initialKickDone;
    NSDate * _lastDownloadRefresh;
    brc_task_tracker * _tracker;
    NSMutableDictionary * _willRetryOperationProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCDeadlineScheduler *downloadsDeadlineScheduler;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appLibraryForDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3;
- (void)_bumpThrottleForDownload:(id)arg1 throttle:(id)arg2;
- (void)_cancelThrottles:(id)arg1 state:(int)arg2;
- (void)_close;
- (void)_deleteThrottleID:(int)arg1;
- (void)_fetchStamps:(struct throttle_stamps { unsigned int x1; int x2; int x3; int x4; int x5; }*)arg1 now:(int)arg2 throttle:(id)arg3 throttleID:(int)arg4 kind:(int)arg5 etag:(id)arg6;
- (void)_finishDownloadCleanup:(id)arg1;
- (void)_finishedDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3 error:(id)arg4;
- (BOOL)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2;
- (void)_postponeLoserForWinner:(int)arg1 etag:(id)arg2;
- (id)_sanitizeRecord:(id)arg1;
- (void)_sendContentsBatch:(id)arg1 sizeHint:(int)arg2 maxRecordsCount:(unsigned int)arg3;
- (void)_sendLosersBatch:(id)arg1 sizeHint:(int)arg2 maxRecordsCount:(unsigned int)arg3;
- (void)_sendThumbnailsBatch:(id)arg1 sizeHint:(int)arg2 maxRecordsCount:(unsigned int)arg3;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned int)arg2 sizeHint:(unsigned int)arg3 priority:(int)arg4;
- (void)_willDownload:(id)arg1 operationID:(id)arg2;
- (void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2;
- (BOOL)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 addedLosers:(id)arg5 removedLosers:(id)arg6;
- (BOOL)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4;
- (void)cancel;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3;
- (void)cancelAndCleanupItemDownloads:(id)arg1;
- (void)close;
- (void)createThrottleForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 userInitiated:(BOOL)arg5;
- (id)descriptionForThrottleID:(int)arg1 zone:(id)arg2 now:(int)arg3 context:(id)arg4;
- (id)downloadsDeadlineScheduler;
- (void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int*)arg3;
- (BOOL)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2;
- (BOOL)hasThumbnailToApplyForItem:(id)arg1;
- (unsigned int)inFlightSize;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isDownloadingItem:(id)arg1;
- (BOOL)makeContentLive:(id)arg1;
- (void)rescheduleThrottlesForPendingDiskSpaceWithAvailableSpace:(unsigned int)arg1;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1;
- (void)rescheduleThrottlesPendingWinnerForItem:(id)arg1;
- (void)resume;
- (void)schedule;
- (void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 userInitiated:(BOOL)arg3;
- (void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(BOOL)arg3 applySchedulerState:(int*)arg4;
- (void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int*)arg3;
- (BOOL)shouldScheduleLosersEvictionForItem:(id)arg1;
- (unsigned int)sizeOfActiveDownloads;
- (void)suspend;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned int)arg2 sizeHint:(unsigned int)arg3 priority:(int)arg4 completionBlock:(id /* block */)arg5;
- (void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3;

@end
