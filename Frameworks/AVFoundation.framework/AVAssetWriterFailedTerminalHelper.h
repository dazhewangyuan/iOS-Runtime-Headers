/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError * _terminalError;
}

- (void)dealloc;
- (void)endSessionAtSourceTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (id)error;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;
- (void)startSessionAtSourceTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (int)status;

@end
