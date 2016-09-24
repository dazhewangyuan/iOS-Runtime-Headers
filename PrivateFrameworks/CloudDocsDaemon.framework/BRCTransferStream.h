/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTransferStream : NSObject <BRCLifeCycle> {
    BOOL  _hasReachedCap;
    NSMutableDictionary * _inFlightOpByID;
    unsigned int  _inFlightSize;
    BOOL  _isCancelled;
    BOOL  _isWaitingForTransferBatch;
    unsigned int  _maxCountOfBatchesInFlight;
    int  _multipleItemsInteractiveSchedulingCount;
    int  _nextFire;
    BRCDeadlineSource * _schedulingSource;
    BRCAccountSession * _session;
    id /* block */  _streamDidBecomeReadyToTransferRecords;
    BRCSyncContext * _syncContext;
    NSObject<OS_dispatch_group> * _transferBatchRequestWaiter;
    NSObject<OS_dispatch_queue> * _transferQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int inFlightSize;
@property (nonatomic, readonly) BOOL isCancelled;
@property (nonatomic) unsigned int maxCountOfBatchesInFlight;
@property (readonly) NSArray *operations;
@property (nonatomic, copy) id /* block */ streamDidBecomeReadyToTransferRecords;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBatchOperation:(id)arg1;
- (void)_evaluateCap;
- (void)_schedule;
- (void)_scheduleOneBatchWithQoS:(int)arg1;
- (void)_setReachedCap:(BOOL)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)addBatchOperation:(id)arg1;
- (void)cancel;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)close;
- (void)endSchedulingMultipleItemsInteractively;
- (void)forceSchedulingPendingInteractiveTransfers;
- (unsigned int)inFlightSize;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3;
- (BOOL)isCancelled;
- (unsigned int)maxCountOfBatchesInFlight;
- (id)operations;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)resume;
- (void)setMaxCountOfBatchesInFlight:(unsigned int)arg1;
- (void)setStreamDidBecomeReadyToTransferRecords:(id /* block */)arg1;
- (void)signal;
- (void)signalWithDeadline:(int)arg1;
- (void)startSchedulingMultipleItemsInteractively;
- (id /* block */)streamDidBecomeReadyToTransferRecords;
- (void)suspend;

@end
