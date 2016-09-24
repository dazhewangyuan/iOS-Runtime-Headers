/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseBackendController : NSObject <CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate, CAMVideoCaptureRequestDelegate> {
    BKSApplicationStateMonitor * __applicationStateMonitor;
    BOOL  __capturing;
    CAMTimelapseState * __currentState;
    CAMNebulaKeepAliveController * __keepAliveController;
    <CAMTimelapseMovieWriterProtocol> * __movieWriter;
    int  __notifyRegisterTokenResumeIO;
    int  __notifyRegisterTokenSuspendIO;
    BOOL  __oldMovieWriterEnabled;
    CAMPersistenceController * __persistenceController;
    NSMutableArray * __sessionContexts;
    NSObject<OS_dispatch_queue> * __workQueue;
    BOOL  __writingMovie;
}

@property (nonatomic, readonly) BKSApplicationStateMonitor *_applicationStateMonitor;
@property (getter=_isCapturing, setter=_setCapturing:, nonatomic) BOOL _capturing;
@property (setter=_setCurrentState:, nonatomic, retain) CAMTimelapseState *_currentState;
@property (nonatomic, readonly) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, readonly) <CAMTimelapseMovieWriterProtocol> *_movieWriter;
@property (nonatomic, readonly) int _notifyRegisterTokenResumeIO;
@property (nonatomic, readonly) int _notifyRegisterTokenSuspendIO;
@property (nonatomic, readonly) BOOL _oldMovieWriterEnabled;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) NSMutableArray *_sessionContexts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_workQueue;
@property (nonatomic, readonly) BOOL _writingMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applicationStateMonitor;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (id)_currentState;
- (BOOL)_deleteItemAtPath:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)arg1;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (void)_dispatchToWorkQueueWithBlock:(id /* block */)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_frameTransformForState:(id)arg1;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (BOOL)_isCameraRunning;
- (BOOL)_isCapturing;
- (id)_keepAliveController;
- (id)_movieWriter;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 metadata:(id)arg3 state:(id)arg4;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 metadata:(id)arg3 state:(id)arg4;
- (int)_notifyRegisterTokenResumeIO;
- (int)_notifyRegisterTokenSuspendIO;
- (BOOL)_oldMovieWriterEnabled;
- (void)_performPendingWork;
- (void)_permanentlyFailTimelapseUUID:(id)arg1 withState:(id)arg2;
- (id)_persistenceController;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2;
- (void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)arg1;
- (BOOL)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (id)_sessionContexts;
- (void)_setCapturing:(BOOL)arg1;
- (void)_setCurrentState:(id)arg1;
- (BOOL)_shouldSaveLastTimelapseDataForDebugging;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (id)_workQueue;
- (void)_workQueue_destroyApplicationStateMonitor;
- (void)_workQueue_setupCameraProcessMonitoringIfNecessary;
- (void)_writeMovieForSessionContext:(id)arg1;
- (BOOL)_writingMovie;
- (void)dealloc;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection;
- (id)init;
- (id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end
