/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutput : AVCaptureOutput {
    AVCaptureFileOutputInternal * _fileOutputInternal;
}

@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } maxRecordedDuration;
@property (nonatomic) int maxRecordedFileSize;
@property (nonatomic) int minFreeDiskSpaceLimit;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } recordedDuration;
@property (nonatomic, readonly) int recordedFileSize;
@property (getter=isRecording, nonatomic, readonly) BOOL recording;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)isRecording;
- (BOOL)isRecordingPaused;
- (struct { int x1; int x2; unsigned int x3; int x4; })maxRecordedDuration;
- (int)maxRecordedFileSize;
- (int)minFreeDiskSpaceLimit;
- (id)outputFileURL;
- (void)pauseRecording;
- (BOOL)pausesRecordingOnInterruption;
- (struct { int x1; int x2; unsigned int x3; int x4; })recordedDuration;
- (int)recordedFileSize;
- (void)resumeRecording;
- (void)setMaxRecordedDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMaxRecordedFileSize:(int)arg1;
- (void)setMinFreeDiskSpaceLimit:(int)arg1;
- (void)setPausesRecordingOnInterruption:(BOOL)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end
