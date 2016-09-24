/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCameraViewfinderStreamDelegate, FigCaptureSessionPreviewTapDelegate> {
    FigCaptureSessionProxy * _captureSessionProxy;
    BOOL  _ended;
    int  _identifier;
    FigCameraViewfinderStream * _previewStream;
    BOOL  _previewStreamClosed;
    long  _previewStreamClosedErrorStatus;
    NSObject<OS_dispatch_queue> * _previewStreamQueue;
    FigStateMachine * _stateMachine;
    FigCameraViewfinderLocal * _viewfinder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_captureSessionDidCapturePhotoWithStatus:(long)arg1 thumbnailData:(id)arg2 timestamp:(struct { int x1; int x2; unsigned int x3; int x4; })arg3;
- (void)_captureSessionDidStop;
- (void)_closePreviewStream;
- (id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3;
- (void)_setupStateMachine;
- (void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(long)arg2;
- (void)cameraViewfinderStreamDidOpen:(id)arg1;
- (void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureSessionPreviewTapDidClose:(id)arg1;
- (void)captureSessionPreviewTapDidOpen:(id)arg1;
- (void)closePreviewStream;
- (void)dealloc;
- (int)identifier;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (id)viewfinder;

@end
