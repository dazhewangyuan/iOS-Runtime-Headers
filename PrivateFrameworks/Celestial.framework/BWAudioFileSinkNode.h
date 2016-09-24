/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioFileSinkNode : BWFileSinkNode {
    unsigned int  _adjustedMinFreeDiskSpace;
    struct OpaqueCMByteStream { } * _byteStream;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _curFileDuration;
    unsigned int  _curFileSize;
    BOOL  _didBeginFileWriterSession;
    struct OpaqueFigFormatWriter { } * _formatWriter;
    char * _parentPath;
    NSObject<OS_dispatch_queue> * _propertySyncQueue;
    BOOL  _recordingIsSubjectToDiskSpaceQuota;
    FigCaptureAudioFileRecordingSettings * _settings;
    FigStateMachine * _stateMachine;
    int  _trackID;
}

+ (void)initialize;

- (long)_applyRecordingLimits;
- (long)_handleMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (long)_setupFileWriter;
- (void)_setupMinFreeDiskSpace;
- (void)_setupStateMachine;
- (void)_stopRecordingWithError:(long)arg1;
- (long)_teardownFileWriter;
- (void)_updateFilePropertiesForSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)configurationWithID:(int)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)init;
- (struct { int x1; int x2; unsigned int x3; int x4; })lastFileDuration;
- (unsigned int)lastFileSize;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
