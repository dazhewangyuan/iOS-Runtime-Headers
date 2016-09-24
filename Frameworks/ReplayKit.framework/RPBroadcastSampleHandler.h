/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastSampleHandler : RPBroadcastHandler

- (struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)_audioBufferListFromData:(id)arg1;
- (void)_processPayload:(id)arg1;
- (void)_processPayloadWithAudioSample:(id)arg1 type:(int)arg2;
- (void)_processPayloadWithVideoSample:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)_sampleBufferFromIOSurface:(struct __IOSurface { }*)arg1 timingInfo:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; struct { int x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; int x_3_1_4; } x3; })arg2;
- (id)audioQueue;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)broadcastFinished;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withType:(int)arg2;
- (id)videoQueue;

@end
