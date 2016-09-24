/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisStagingNode : BWNode {
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _beginIrisMovieCaptureTime;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _bufferingTime;
    <BWIrisStagingNodeEmitIrisRequestDelegate> * _delegate;
    int  _emittedIrisRequestCount;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _endIrisMovieCaptureTime;
    struct { int x1; int x2; unsigned int x3; int x4; } * _firstEmittedPTSArray;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _firstTrimStartPTS;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _frameGovernorNextFrameThreshold;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _frameGovernorReferenceTime;
    NSMutableArray * _irisRequestsInFlight;
    NSMutableArray * _irisRequestsSoonToBeEmitted;
    NSMutableArray * _lastEmittedBuffers;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _lastProcessedVideoPTS;
    struct OpaqueCMClock { } * _masterClock;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _masterMovieStartPTS;
    NSURL * _masterMovieURL;
    int  _numEODMessagesReceived;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _readyToEmitPTS;
    BWIrisSequenceAdjuster * _sequenceAdjuster;
    NSMutableArray * _stagingQueues;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _targetFrameDuration;
    NSURL * _temporaryMovieDirectoryURL;
    int  _trimMethod;
    FigIrisAutoTrimmer * _trimmer;
    BOOL  _valveDraining;
    BOOL  _valveOpen;
}

@property struct { int x1; int x2; unsigned int x3; int x4; } beginIrisMovieCaptureTime;
@property struct { int x1; int x2; unsigned int x3; int x4; } endIrisMovieCaptureTime;
@property (readonly) NSURL *temporaryMovieDirectoryURL;

+ (void)initialize;

- (struct { int x1; int x2; unsigned int x3; int x4; })_adjustedStartTimeForTrimmedStartTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 ensuringAtLeast3FramesBeforeStillTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 ensuringFrameIsAfterTrimmedStartTime:(BOOL)arg3 butNotEarlierThanOriginalStartTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg4;
- (int)_emissionStatusForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_emitBuffersThroughPTS:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)_emitBuffersThroughPTS:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 forInputIndex:(unsigned int)arg2;
- (void)_emitIrisRequest:(id)arg1 withEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;
- (void)_emitIrisRequestsOlderThanTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 withEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2;
- (void)_enqueueIrisRequest:(id)arg1;
- (BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1;
- (void)_forceConstantFramerateAdjustmentIfSampleBufferIsFromSISBracketSequence:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct { int x1; int x2; unsigned int x3; int x4; })_hostPTSForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned int)_indexOfBufferBeforeOrEqualToHostPTS:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 inputIndex:(unsigned int)arg2 tolerance:(struct { int x1; int x2; unsigned int x3; int x4; })arg3;
- (unsigned int)_indexOfBufferBeforeOrEqualToPTS:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 inputIndex:(unsigned int)arg2;
- (void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)_prepareToEmitFramesFromStartTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 throughEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;
- (void)_processQueuedVideoFrames;
- (void)_serviceIrisRequestsForCurrentTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 emitBuffers:(BOOL)arg2 ensureStillImageTimesAreStaged:(BOOL)arg3;
- (void)_tagStillImageVISKeyFrames;
- (id)_temporaryURLForIrisWithSettingsID:(int)arg1 isOriginalRecording:(BOOL)arg2;
- (void)_trimQueueForInputIndex:(unsigned int)arg1;
- (void)_updateRetainedBufferCount;
- (struct { int x1; int x2; unsigned int x3; int x4; })beginIrisMovieCaptureTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })bufferingTime;
- (void)closeValve;
- (void)configurationWithID:(int)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (struct { int x1; int x2; unsigned int x3; int x4; })endIrisMovieCaptureTime;
- (BOOL)enqueueIrisRequest:(id)arg1;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfVideoInputs:(unsigned int)arg1 numberOfAudioInputs:(unsigned int)arg2 numberOfMetadataInputs:(unsigned int)arg3 autoTrimMethod:(int)arg4 temporaryMovieDirectoryURL:(id)arg5 emitIrisRequestDelegate:(id)arg6;
- (struct OpaqueCMClock { }*)masterClock;
- (BOOL)openValveWithIrisRequest:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setBeginIrisMovieCaptureTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setBufferingTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setEndIrisMovieCaptureTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setTargetFrameDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (struct { int x1; int x2; unsigned int x3; int x4; })targetFrameDuration;
- (id)temporaryMovieDirectoryURL;

@end
