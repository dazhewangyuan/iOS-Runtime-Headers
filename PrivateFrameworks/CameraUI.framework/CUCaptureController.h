/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CUCaptureController : NSObject <CAMCaptureRequestIntervalometerDelegate, CAMCaptureService> {
    BOOL  _HDRSuggested;
    CAMBurstController * __burstController;
    CAMCaptureEngine * __captureEngine;
    BOOL  __capturingPairedVideoPaused;
    CAMPanoramaCaptureRequest * __capturingPanoramaRequest;
    CAMVideoCaptureRequest * __capturingVideoRequest;
    CAMKeyValueCoalescer * __exposureCoalescer;
    CAMKeyValueCoalescer * __focusCoalescer;
    NSMutableSet * __identifiersForRecordingVideoForStillImageRequests;
    NSMutableSet * __identifiersForShowingLivePhotoIndicatorForStillImageRequests;
    BOOL  __isVideoCaptureAvailable;
    CAMLocationController * __locationController;
    int  __maximumNumberOfStillImageRequests;
    CAMMotionController * __motionController;
    BOOL  __needsInitialPairedVideoUpdate;
    NSCountedSet * __numberOfInflightRequestsByType;
    CAMVideoCaptureRequest * __pendingVideoCaptureRequest;
    CAMPowerController * __powerController;
    CAMProtectionController * __protectionController;
    CAMRemoteShutterController * __remoteShutterController;
    NSObject<OS_dispatch_queue> * __responseQueue;
    CAMThumbnailGenerator * __responseThumbnailGenerator;
    BOOL  __shouldResetFocusAndExposureAfterIrisVideoCapture;
    <CAMAvailabilityDelegate> * _availabilityDelegate;
    <CAMBurstDelegate> * _burstDelegate;
    BOOL  _captureAvailable;
    BOOL  _capturingTimelapse;
    BOOL  _configurationAvailable;
    <CAMConfigurationDelegate> * _configurationDelegate;
    CAMCaptureRequestIntervalometer * _currentBurstIntervalometer;
    <CAMExposureDelegate> * _exposureDelegate;
    <CAMFacesDelegate> * _facesDelgate;
    BOOL  _failedConfigurationPreventingCapture;
    BOOL  _flashActive;
    BOOL  _flashAvailable;
    <CAMFocusDelegate> * _focusDelegate;
    <CAMCaptureInterruptionDelegate> * _interruptionDelegate;
    <CAMPanoramaConfigurationDelegate> * _panoramaConfigurationDelegate;
    CAMPanoramaPreviewView * _panoramaPreviewView;
    BOOL  _previewDisabled;
    <CAMCaptureRecoveryDelegate> * _recoveryDelegate;
    <CAMCaptureResultDelegate> * _resultDelegate;
    <CAMCaptureRunningDelegate> * _runningDelegate;
    <CAMStillImageCapturingVideoDelegate> * _stillImageCapturingVideoDelegate;
    <CAMSuggestionDelegate> * _suggestionDelegate;
    BOOL  _torchActive;
    BOOL  _torchAvailable;
    int  _uniqueRequestIDForConfigurationChange;
    <CAMZoomDelegate> * _zoomDelegate;
}

@property (getter=isHDRSuggested, setter=_setHDRSuggested:, nonatomic) BOOL HDRSuggested;
@property (nonatomic, readonly) CAMBurstController *_burstController;
@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (getter=_isCapturingPairedVideoPaused, setter=_setCapturingPairedVideoPaused:, nonatomic) BOOL _capturingPairedVideoPaused;
@property (setter=_setCapturingPanoramaRequest:, nonatomic, retain) CAMPanoramaCaptureRequest *_capturingPanoramaRequest;
@property (setter=_setCapturingVideoRequest:, nonatomic, retain) CAMVideoCaptureRequest *_capturingVideoRequest;
@property (nonatomic, readonly) CAMKeyValueCoalescer *_exposureCoalescer;
@property (nonatomic, readonly) CAMKeyValueCoalescer *_focusCoalescer;
@property (nonatomic, readonly) NSMutableSet *_identifiersForRecordingVideoForStillImageRequests;
@property (nonatomic, readonly) NSMutableSet *_identifiersForShowingLivePhotoIndicatorForStillImageRequests;
@property (getter=_isVideoCaptureAvailable, setter=_setVideoCaptureAvailable:, nonatomic) BOOL _isVideoCaptureAvailable;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (setter=_setMaximumNumberOfStillImageRequests:, nonatomic) int _maximumNumberOfStillImageRequests;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (setter=_setNeedsInitialPairedVideoUpdate:, nonatomic) BOOL _needsInitialPairedVideoUpdate;
@property (nonatomic, readonly) NSCountedSet *_numberOfInflightRequestsByType;
@property (setter=_setPendingVideoCaptureRequest:, nonatomic, retain) CAMVideoCaptureRequest *_pendingVideoCaptureRequest;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) CAMProtectionController *_protectionController;
@property (nonatomic, readonly) CAMRemoteShutterController *_remoteShutterController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_responseQueue;
@property (nonatomic, readonly) CAMThumbnailGenerator *_responseThumbnailGenerator;
@property (setter=_setShouldResetFocusAndExposureAfterIrisVideoCapture:, nonatomic) BOOL _shouldResetFocusAndExposureAfterIrisVideoCapture;
@property (nonatomic) <CAMAvailabilityDelegate> *availabilityDelegate;
@property (nonatomic) <CAMBurstDelegate> *burstDelegate;
@property (getter=isCaptureAvailable, setter=_setCaptureAvailable:, nonatomic) BOOL captureAvailable;
@property (getter=isCapturingBurst, nonatomic, readonly) BOOL capturingBurst;
@property (getter=isCapturingPanorama, nonatomic, readonly) BOOL capturingPanorama;
@property (getter=isCapturingStillImagePairedVideo, nonatomic, readonly) BOOL capturingStillImagePairedVideo;
@property (getter=isCapturingTimelapse, nonatomic) BOOL capturingTimelapse;
@property (getter=isCapturingVideo, nonatomic, readonly) BOOL capturingVideo;
@property (getter=isConfigurationAvailable, setter=_setConfigurationAvailable:, nonatomic) BOOL configurationAvailable;
@property (nonatomic) <CAMConfigurationDelegate> *configurationDelegate;
@property (nonatomic, readonly) unsigned int currentBurstCount;
@property (setter=_setCurrentBurstIntervalometer:, nonatomic, retain) CAMCaptureRequestIntervalometer *currentBurstIntervalometer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CAMExposureDelegate> *exposureDelegate;
@property (nonatomic) <CAMFacesDelegate> *facesDelgate;
@property (getter=_isFailedConfigurationPreventingCapture, setter=_setFailedConfigurationPreventingCapture:, nonatomic) BOOL failedConfigurationPreventingCapture;
@property (getter=isFlashActive, setter=_setFlashActive:, nonatomic) BOOL flashActive;
@property (getter=isFlashAvailable, setter=_setFlashAvailable:, nonatomic) BOOL flashAvailable;
@property (nonatomic) <CAMFocusDelegate> *focusDelegate;
@property (readonly) unsigned int hash;
@property (getter=isInterrupted, nonatomic, readonly) BOOL interrupted;
@property (nonatomic) <CAMCaptureInterruptionDelegate> *interruptionDelegate;
@property (nonatomic) <CAMPanoramaConfigurationDelegate> *panoramaConfigurationDelegate;
@property (nonatomic, readonly) CAMPanoramaPreviewView *panoramaPreviewView;
@property (getter=isPreviewDisabled, nonatomic, readonly) BOOL previewDisabled;
@property (nonatomic) <CAMCaptureRecoveryDelegate> *recoveryDelegate;
@property (nonatomic) <CAMCaptureResultDelegate> *resultDelegate;
@property (nonatomic) <CAMCaptureRunningDelegate> *runningDelegate;
@property (nonatomic, readonly) BOOL shouldAllowUserToChangeFocusAndExposure;
@property (nonatomic, readonly) BOOL shouldShowLivePhotoIndicator;
@property (nonatomic) <CAMStillImageCapturingVideoDelegate> *stillImageCapturingVideoDelegate;
@property (nonatomic) <CAMSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;
@property (getter=isTorchActive, setter=_setTorchActive:, nonatomic) BOOL torchActive;
@property (getter=isTorchAvailable, setter=_setTorchAvailable:, nonatomic) BOOL torchAvailable;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic) <CAMZoomDelegate> *zoomDelegate;

+ (float)focusLensPositionCurrentSentinel;

- (void).cxx_destruct;
- (id)_availabilityKeyPaths;
- (void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_beginTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (id)_burstController;
- (void)_cancelDelayedFocusAndExposureReset;
- (id)_captureEngine;
- (BOOL)_captureStillImageWithRequest:(id)arg1;
- (id)_capturingPanoramaRequest;
- (id)_capturingVideoRequest;
- (id)_commandForChangeToGraphConfiguration:(id)arg1 resetZoom:(BOOL)arg2 minimumExecutionTime:(double)arg3 outRequestID:(int*)arg4;
- (id)_commandForConfiguration:(id)arg1 outRequestID:(int*)arg2;
- (void)_didPlayBeginVideoRecordingSound;
- (void)_endTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (id)_exposureCoalescer;
- (id)_exposureKVOKeyPaths;
- (void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (id)_faceDetectionCommandForMode:(int)arg1 capturing:(BOOL)arg2;
- (id)_focusCoalescer;
- (id)_focusKVOKeyPaths;
- (void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCaptureEngineExecutionNotification:(id)arg1;
- (id)_identifierForPendingVideoForStillImageRequest:(id)arg1;
- (id)_identifiersForRecordingVideoForStillImageRequests;
- (id)_identifiersForShowingLivePhotoIndicatorForStillImageRequests;
- (BOOL)_isCapturingPairedVideoPaused;
- (BOOL)_isFailedConfigurationPreventingCapture;
- (BOOL)_isVideoCaptureAvailable;
- (BOOL)_kvoDidEndForChange:(id)arg1;
- (BOOL)_kvoDidStartForChange:(id)arg1;
- (id)_locationController;
- (int)_maximumNumberOfStillImageRequests;
- (unsigned int)_maximumNumberOfStillImageRequestsDuringBurst;
- (id)_motionController;
- (BOOL)_needsInitialPairedVideoUpdate;
- (void)_notifyDelegateOfCaptureAvailabilityChanged:(BOOL)arg1;
- (void)_notifyDelegateOfConfigurationAvailabilityChanged:(BOOL)arg1;
- (id)_numberOfInflightRequestsByType;
- (id)_pendingVideoCaptureRequest;
- (id)_powerController;
- (void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2;
- (void)_processPendingVideoCaptureRequest:(id)arg1;
- (id)_protectionController;
- (id)_remoteShutterController;
- (id)_resetFocus:(BOOL)arg1 resetExposure:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3;
- (void)_resetFocusAndExposureAfterCapture;
- (void)_resetFocusAndExposureIfAppropriateForReason:(int)arg1;
- (id)_responseQueue;
- (id)_responseThumbnailGenerator;
- (id)_sanitizeLegacyStillImageRequest:(id)arg1;
- (id)_sanitizePanoramaRequest:(id)arg1;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (id)_sanitizeVideoRequest:(id)arg1;
- (void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
- (void)_setCaptureAvailable:(BOOL)arg1;
- (void)_setCapturingPairedVideoPaused:(BOOL)arg1;
- (void)_setCapturingPanoramaRequest:(id)arg1;
- (void)_setCapturingVideoRequest:(id)arg1;
- (void)_setConfigurationAvailable:(BOOL)arg1;
- (void)_setCurrentBurstIntervalometer:(id)arg1;
- (void)_setFailedConfigurationPreventingCapture:(BOOL)arg1;
- (void)_setFlashActive:(BOOL)arg1;
- (void)_setFlashAvailable:(BOOL)arg1;
- (void)_setHDRSuggested:(BOOL)arg1;
- (void)_setMaximumNumberOfStillImageRequests:(int)arg1;
- (void)_setNeedsInitialPairedVideoUpdate:(BOOL)arg1;
- (void)_setPendingVideoCaptureRequest:(id)arg1;
- (void)_setShouldResetFocusAndExposureAfterIrisVideoCapture:(BOOL)arg1;
- (void)_setTorchActive:(BOOL)arg1;
- (void)_setTorchAvailable:(BOOL)arg1;
- (void)_setVideoCaptureAvailable:(BOOL)arg1;
- (void)_setupAvailabilityMonitoring;
- (void)_setupExposureMonitoring;
- (void)_setupFocusAndExposureMonitoring;
- (void)_setupFocusMonitoring;
- (void)_setupSuggestionMonitoring;
- (void)_setupZoomMonitoring;
- (BOOL)_shouldResetFocusAndExposureAfterIrisVideoCapture;
- (void)_startShowingLivePhotoIndicatorForStillImageRequest:(id)arg1;
- (void)_stopShowingLivePhotoIndicatorForStillImageRequest:(id)arg1;
- (void)_subjectAreaDidChange:(id)arg1;
- (id)_suggestionKeyPaths;
- (void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownAvailabilityMonitoring;
- (void)_teardownFocusAndExposureMonitoring;
- (void)_teardownSuggestionMonitoring;
- (void)_teardownZoomMonitoring;
- (id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(int)arg2;
- (int)_uniqueRequestIDForChangeToModeAndDevice;
- (void)_updateAvailabilityAfterCapturedRequest:(id)arg1;
- (void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1;
- (void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1;
- (void)_updateAvailabilityForRequestType:(int)arg1;
- (void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1;
- (id)_updateFocusAndExposureForStartBurstCapture;
- (id)_updateFocusAndExposureForStartPanorama;
- (void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
- (void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg1;
- (void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequestWithFlashMode:(int)arg1 HDRMode:(int)arg2 burstIdentifier:(id)arg3;
- (BOOL)_useSmoothFocus;
- (id)_zoomMonitoringKeyPaths;
- (void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (int)applyCaptureConfiguration:(id)arg1;
- (void)attemptToEndInterruptions;
- (id)availabilityDelegate;
- (id)burstDelegate;
- (void)cancelDelayedFocusAndExposureReset;
- (BOOL)captureLegacyStillImageWithRequest:(id)arg1 error:(id*)arg2;
- (BOOL)captureStillImageWithRequest:(id)arg1 error:(id*)arg2;
- (void)changeExposureTargetBias:(float)arg1;
- (void)changeToEffectsPreviewVideoDataOutputEnabled:(BOOL)arg1;
- (void)changeToFlashMode:(int)arg1;
- (int)changeToGraphConfiguration:(id)arg1 resetZoom:(BOOL)arg2 minimumExecutionTime:(double)arg3;
- (void)changeToLockedExposure;
- (void)changeToPanoramaDirection:(int)arg1;
- (void)changeToPreviewDisabled;
- (void)changeToPreviewEnabledWithConfiguration:(int)arg1;
- (void)changeToPreviewLayerEnabled:(BOOL)arg1;
- (void)changeToTorchLevel:(float)arg1;
- (void)changeToTorchMode:(int)arg1;
- (void)changeToVideoRecordingCaptureOrientation:(int)arg1;
- (void)changeToVideoZoomFactor:(float)arg1;
- (id)configurationDelegate;
- (unsigned int)currentBurstCount;
- (id)currentBurstIntervalometer;
- (void)dealloc;
- (id)exposureDelegate;
- (id)facesDelgate;
- (void)focusAndExposeAtPoint:(struct CGPoint { double x1; double x2; })arg1 resetExposureTargetBias:(BOOL)arg2;
- (void)focusAtCenterForVideoRecording;
- (id)focusDelegate;
- (void)forceDisableSubjectAreaChangeMonitoring;
- (void)handleSessionDidStartRunning;
- (void)handleSessionDidStopRunning;
- (void)handleSessionInterruptionEnded;
- (void)handleSessionInterruptionForReason:(int)arg1;
- (id)init;
- (id)initWithCaptureConfiguration:(id)arg1 engineOptions:(int)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 remoteShutterController:(id)arg8;
- (id)interruptionDelegate;
- (BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (void)invalidateController;
- (BOOL)isCaptureAvailable;
- (BOOL)isCapturingBurst;
- (BOOL)isCapturingPanorama;
- (BOOL)isCapturingStillImagePairedVideo;
- (BOOL)isCapturingTimelapse;
- (BOOL)isCapturingVideo;
- (BOOL)isConfigurationAvailable;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)isHDRSuggested;
- (BOOL)isInterrupted;
- (BOOL)isPreviewDisabled;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (void)legacyStillImageRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)legacyStillImageRequestDidStartCapturing:(id)arg1;
- (void)legacyStillImageRequestDidStopCapturing:(id)arg1;
- (void)lockFocusAtLensPosition:(float)arg1 completionBlock:(id /* block */)arg2;
- (void)metadataWasRecognized:(id)arg1;
- (void)notifyTimelapseControllerFinishedUpdatingWithLocation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)panoramaConfigurationDelegate;
- (void)panoramaConfigurationDidChangeWithDirection:(int)arg1;
- (id)panoramaPreviewView;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)panoramaRequest:(id)arg1 didReceiveNotification:(int)arg2;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)panoramaRequestDidStopCapturing:(id)arg1;
- (void)pauseCapturingStillImagePairedVideo;
- (void)queryTimelapseDimensionsWithCompletionBlock:(id /* block */)arg1;
- (void)queryVideoDimensionsWithCompletionBlock:(id /* block */)arg1;
- (id)recoveryDelegate;
- (void)registerCaptureService:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (id)resultDelegate;
- (void)resumeCapturingStillImagePairedVideo;
- (id)runningDelegate;
- (void)setAvailabilityDelegate:(id)arg1;
- (void)setBurstDelegate:(id)arg1;
- (void)setCapturingTimelapse:(BOOL)arg1;
- (void)setConfigurationDelegate:(id)arg1;
- (void)setExposureDelegate:(id)arg1;
- (void)setFacesDelgate:(id)arg1;
- (void)setFocusDelegate:(id)arg1;
- (void)setInterruptionDelegate:(id)arg1;
- (void)setPanoramaConfigurationDelegate:(id)arg1;
- (void)setRecoveryDelegate:(id)arg1;
- (void)setResultDelegate:(id)arg1;
- (void)setRunningDelegate:(id)arg1;
- (void)setStillImageCapturingVideoDelegate:(id)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (void)setZoomDelegate:(id)arg1;
- (BOOL)shouldAllowUserToChangeFocusAndExposure;
- (BOOL)shouldShowLivePhotoIndicator;
- (void)startCaptureSession;
- (BOOL)startCapturingBurstWithRequest:(id)arg1 error:(id*)arg2;
- (BOOL)startCapturingPanoramaWithRequest:(id)arg1 error:(id*)arg2;
- (BOOL)startCapturingVideoWithRequest:(id)arg1 error:(id*)arg2;
- (void)startMonitoringForHDRSuggestions;
- (void)startRampToVideoZoomFactor:(float)arg1 withDuration:(double)arg2;
- (void)startRampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (id)stillImageCapturingVideoDelegate;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
- (void)stillImageRequestDidStopCapturing:(id)arg1;
- (void)stillImageRequestDidStopCapturingVideo:(id)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(id)arg1;
- (void)stopCaptureSession;
- (void)stopCapturingBurst;
- (BOOL)stopCapturingPanorama;
- (BOOL)stopCapturingVideo;
- (void)stopMonitoringForHDRSuggestions;
- (void)stopRampToVideoZoomFactor;
- (id)suggestionDelegate;
- (void)unregisterCaptureService:(id)arg1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)updateImageQueueForPanoramaPreviewView:(id)arg1;
- (id)videoPreviewLayer;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;
- (void)willPerformRecoveryFromRuntimeError:(id)arg1;
- (id)zoomDelegate;

@end
