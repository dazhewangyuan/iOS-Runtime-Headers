/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMNebulaIrisBackendController : NSObject <CAMNebulaDaemonIrisProtocol, CAMPersistenceResultDelegate, CAMStillImageCaptureRequestDelegate> {
    BOOL  __IOWorkSuspended;
    AVAssetExportSession * __activeExportSession;
    BKSApplicationStateMonitor * __applicationStateMonitor;
    NSObject<OS_dispatch_queue> * __coordinationQueue;
    BOOL  __crashRecoveryNeeded;
    CAMNebulaKeepAliveController * __keepAliveController;
    NSObject<OS_dispatch_queue> * __linkWorkQueue;
    int  __notifyRegisterTokenResumeIO;
    int  __notifyRegisterTokenSuspendIO;
    NSMutableArray * __pendingExportVideoJobs;
    NSMutableDictionary * __pendingOrInFlightJobsByUniqueIdentifier;
    CAMPersistenceController * __persistenceController;
    BOOL  __shouldCheckMarkerFileForIOWorkSuspension;
}

@property (getter=_coordinationQueue_isIOWorkSuspended, setter=_coordinationQueue_setIOWorkSuspended:, nonatomic) BOOL _IOWorkSuspended;
@property (setter=_setActiveExportSession:, nonatomic, retain) AVAssetExportSession *_activeExportSession;
@property (nonatomic, readonly) BKSApplicationStateMonitor *_applicationStateMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_coordinationQueue;
@property (getter=_coordinationQueue_isCrashRecoveryNeeded, setter=_coordinationQueue_setCrashRecoveryNeeded:, nonatomic) BOOL _crashRecoveryNeeded;
@property (nonatomic, readonly) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_linkWorkQueue;
@property (nonatomic, readonly) int _notifyRegisterTokenResumeIO;
@property (nonatomic, readonly) int _notifyRegisterTokenSuspendIO;
@property (nonatomic, readonly) NSMutableArray *_pendingExportVideoJobs;
@property (nonatomic, readonly) NSMutableDictionary *_pendingOrInFlightJobsByUniqueIdentifier;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (getter=_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension, setter=_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:, nonatomic) BOOL _shouldCheckMarkerFileForIOWorkSuspension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeExportSession;
- (id)_applicationStateMonitor;
- (id)_coordinationQueue;
- (void)_coordinationQueue_createJobsForCrashRecoveryIfNeeded;
- (void)_coordinationQueue_destroyApplicationStateMonitor;
- (void)_coordinationQueue_didCompleteExportJob:(id)arg1;
- (void)_coordinationQueue_didPermanentlyFinishJob:(id)arg1;
- (void)_coordinationQueue_enqueueAndTrackNewJob:(id)arg1;
- (void)_coordinationQueue_enqueueJobs:(id)arg1;
- (void)_coordinationQueue_enqueuePendingExportJobIfPossible;
- (unsigned int)_coordinationQueue_failureCountForVideoURL:(id)arg1;
- (BOOL)_coordinationQueue_isCrashRecoveryNeeded;
- (BOOL)_coordinationQueue_isIOWorkSuspended;
- (void)_coordinationQueue_setCrashRecoveryNeeded:(BOOL)arg1;
- (void)_coordinationQueue_setFailureCount:(unsigned int)arg1 forVideoURL:(id)arg2;
- (void)_coordinationQueue_setIOWorkSuspended:(BOOL)arg1;
- (void)_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:(BOOL)arg1;
- (void)_coordinationQueue_setupCameraProcessingMonitoringIfNecessary;
- (BOOL)_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension;
- (void)_dispatchToCoordinationQueueAfterDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (void)_dispatchToCoordinationQueueWithBlock:(id /* block */)arg1;
- (void)_dispatchToLinkWorkQueueAfterDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (void)_dispatchToLinkWorkQueueWithBlock:(id /* block */)arg1;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)arg1;
- (void)_dispatchToQueue:(id)arg1 afterDelay:(double)arg2 withBlock:(id /* block */)arg3;
- (void)_dispatchToQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (BOOL)_extractIrisPropertiesFromAVAsset:(id)arg1 stillImageDisplayTime:(struct { int x1; int x2; unsigned int x3; int x4; }*)arg2 irisIdentifier:(id*)arg3;
- (id)_keepAliveController;
- (id)_linkWorkQueue;
- (void)_linkWorkQueue_linkAndPersistSelfContainedVideo:(id)arg1;
- (int)_notifyRegisterTokenResumeIO;
- (int)_notifyRegisterTokenSuspendIO;
- (id)_pendingExportVideoJobs;
- (id)_pendingOrInFlightJobsByUniqueIdentifier;
- (id)_persistenceController;
- (BOOL)_removeItemAtURL:(id)arg1;
- (BOOL)_removeItemAtURL:(id)arg1 maxAttempts:(int)arg2;
- (void)_setActiveExportSession:(id)arg1;
- (id)_uniqueIdentifierForJob:(id)arg1;
- (id)_videoJobFromURL:(id)arg1;
- (void)dealloc;
- (void)enqueueIrisVideoJobs:(id)arg1;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection;
- (id)init;
- (id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2;
- (void)performIrisCrashRecovery;
- (void)performIrisCrashRecoveryForceFileSystemCheck:(BOOL)arg1;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end
