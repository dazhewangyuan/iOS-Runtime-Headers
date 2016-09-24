/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
    AVCaptureVideoDataOutputInternal * _internal;
}

@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic, readonly) NSArray *availableVideoCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } minFrameDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (nonatomic, copy) NSDictionary *videoSettings;

+ (void)initialize;
+ (id)supportedVideoSettingsKeys;

- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x1; int x2; unsigned int x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned int x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { int x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg1;
- (void)_setMinFrameDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { }*)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (BOOL)alwaysDiscardsLateVideoFrames;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (BOOL)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)init;
- (struct { int x1; int x2; unsigned int x3; int x4; })minFrameDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)outputFormat;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (unsigned long)requiredOutputFormatForConnection:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1;
- (void)setMinFrameDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setVideoSettings:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
- (BOOL)usesPreviewSizedBuffers;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)videoSettings;

@end
