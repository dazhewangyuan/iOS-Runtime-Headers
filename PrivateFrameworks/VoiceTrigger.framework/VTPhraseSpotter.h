/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPhraseSpotter : NSObject <VTAssetMonitorDelegate, VTLanguageCodeUpdateMonitorDelegate> {
    VTAnalyzerNDAPI * _analyzer;
    id /* block */  _assetChangedCallback;
    NSObject<OS_dispatch_queue> * _assetChangedQueue;
    AudioCircularBuffer * _audioBuffer;
    NSString * _audioFileDir;
    BOOL  _audioLoggingEnabled;
    NSString * _configData;
    NSString * _configLanguageCode;
    NSString * _configPath;
    NSString * _configVersion;
    VTCorruptDetector * _corruptDetector;
    BOOL  _deviceHandheld;
    BOOL  _didWakeAP;
    BOOL  _doSuperVectorSecondaryTest;
    double  _earlyDetectTime;
    BOOL  _earlyDetected;
    double  _effectiveThreshold;
    unsigned int  _extraSamplesAtStart;
    NSData * _firstChanceAudioBuffer;
    BOOL  _firstChanceDetected;
    double  _firstChanceDetectionTime;
    NSDate * _firstChanceTriggeredDate;
    NSDictionary * _firstChanceVTEventInfo;
    BOOL  _firstRecognitionResultReceived;
    int  _firstUnlockAfterRebootNotificationToken;
    NSDateFormatter * _formatter;
    double  _handHeldDetectedTime;
    double  _hardwareSampleRate;
    int  _heartbeatCounter;
    BOOL  _implicitlyTrained;
    BOOL  _isMaximized;
    BOOL  _isRecognitionResultPending;
    BOOL  _isRunningRecognizer;
    BOOL  _isRunningSATDetection;
    BOOL  _isRunningSATEnrollment;
    BOOL  _isSecondChanceEffective;
    BOOL  _isSecondPass;
    BOOL  _isSuperVectorNeeded;
    NSString * _languageCode;
    int  _languageCodeChangedNotificationToken;
    double  _lastDowntime;
    unsigned int  _lastEventEnd;
    NSString * _lastImplicitlyTrainedAudioFile;
    double  _lastScore;
    double  _lastSupervecScore;
    unsigned char  _lastTriggerType;
    double  _lastUptime;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSObject<OS_dispatch_queue> * _ndetectQueue;
    BOOL  _nearMissLogPending;
    int  _nearMissLogPreDelayTimer;
    NSMutableArray * _nonceTriggerEvents;
    unsigned int  _numExplicitRetraining;
    int  _numFramesFromPreTrigger;
    BOOL  _phraseSpotterBypassed;
    BOOL  _phraseSpotterEnabled;
    VTPhraseSpotterEnabledPolicy * _policy;
    id /* block */  _readyCompletion;
    id /* block */  _readyForAnalyze;
    NSString * _recognizerConfigName;
    double  _recognizerScore;
    double  _recognizerThresholdOffset;
    double  _recognizerWaitTime;
    BOOL  _registeredForPhraseSpotterNotification;
    BOOL  _registeredforVoiceTriggerEnabledNotification;
    NSString * _resourcePath;
    unsigned int  _sampleCountAtFirstChance;
    unsigned int  _samplecount;
    unsigned int  _samplecountAtLastTriggerEnd;
    unsigned int  _samplecountAtLastTriggerStart;
    unsigned int  _samplecountAtRealTriggerStart;
    unsigned int  _samplerate;
    NSString * _satAudioDirectory;
    NSString * _satModelDirectory;
    BOOL  _secondPassAccepted;
    BOOL  _secondPassAudioLoggingEnabled;
    double  _secondPassBestScore;
    int  _secondPassResetTimer;
    BOOL  _secondPassStopSent;
    BOOL  _secondPassTriggered;
    double  _threshold;
    double  _thresholdLogNearMisses;
    double  _thresholdPreSuperVector;
    double  _thresholdSAT;
    double  _thresholdSecondChance;
    VTTranscriber * _transcriber;
    int  _triggerCount;
    unsigned int  _triggerFireMachTime;
    NSArray * _triggerPhrases;
    unsigned int  _triggerStartMachTime;
    double  _triggerThreshold;
    NSString * _triggerTokens;
    BOOL  _useRecognizer;
    BOOL  _voiceTriggerEnabled;
    VTSiriNotifications * siriNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSData *firstChanceAudioBuffer;
@property (readonly) NSDate *firstChanceTriggeredDate;
@property (readonly) NSDictionary *firstChanceVTEventInfo;
@property (readonly) unsigned int hash;
@property (readonly) double lastScore;
@property (readonly) double lastSupervecScore;
@property (readonly) unsigned char lastTriggerType;
@property (readonly) unsigned int sampleCount;
@property (readonly) unsigned int sampleCountAtEndOfTrigger;
@property (readonly) unsigned int sampleCountAtStartOfTrigger;
@property (readonly) unsigned int samplerate;
@property (readonly) Class superclass;
@property (readonly) int triggerCount;

+ (id)currentSpotter;
+ (void)initialize;

- (void).cxx_destruct;
- (void)VTAssetMonitor:(id)arg1 didReceiveNewAssetAvailable:(BOOL)arg2;
- (void)VTLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (id)_analyzeEvents:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; double x4; bool x5; }*)arg1;
- (id)_analyzeMakeResult:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; double x4; bool x5; }*)arg1 eventKind:(unsigned char)arg2 satScore:(double)arg3;
- (void)_analyzeReset;
- (unsigned int)_applyExtraTimeTo:(unsigned int)arg1;
- (void)_cancelSecondChance;
- (id)_capturePathWithPrefix:(id)arg1 eventKind:(unsigned char)arg2;
- (void)_clearDeviceHandHeld;
- (void)_commonInit;
- (double)_computeSATScore:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; double x4; bool x5; }*)arg1;
- (BOOL)_configureWithConfig:(id)arg1 resourcePath:(id)arg2;
- (BOOL)_configureWithDefaults;
- (void)_createFirstChanceMeta:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; double x4; bool x5; }*)arg1;
- (id)_createVTEventInfoString:(id)arg1;
- (void)_firstUnlockedAndSpringBoardStarted;
- (id)_getAssetHashFromConfigPath:(id)arg1;
- (BOOL)_getSecondChanceEffective;
- (id)_getSpeakerModelPath:(id)arg1 createDirectory:(BOOL)arg2;
- (void)_handleAssetChangeForLanguageCode:(id)arg1;
- (id)_handleTriggerEvent:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; double x4; bool x5; }*)arg1 num_new_samples:(unsigned int)arg2 satScore:(double)arg3;
- (void)_initDetector;
- (BOOL)_isDeviceHandheld;
- (void)_logCorruptAudio;
- (void)_logMetaData:(id)arg1;
- (void)_logPrepareProperty:(id)arg1;
- (void)_notifyAssetChangedCallback;
- (void)_performReadyCompletion;
- (void)_phraseSpotterEnabledDidChange;
- (id)_recordTrainingSamples;
- (BOOL)_removeInvalidSATModel;
- (void)_resetCounters;
- (BOOL)_retrainingSATModel:(id)arg1 satAudioPath:(id)arg2 numExplicitUtt:(unsigned int)arg3;
- (void)_safeConfigureWithAnalyzer:(id)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4;
- (void)_safeReconfig;
- (void)_setDeviceHandHeld;
- (void)_setSecondChance;
- (void)_storeFirstChanceAudio;
- (void)_voiceTriggerEnabledDidChange;
- (id)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (id)analyzeBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1;
- (void)clearTriggerCount;
- (void)dealloc;
- (void)didReceiveSiriSessionCancellation;
- (void)didReceiveSleepGesture;
- (void)didReceiveWakeGesture;
- (id)firstChanceAudioBuffer;
- (id)firstChanceTriggeredDate;
- (id)firstChanceVTEventInfo;
- (unsigned int)getAdjustedDeviceStartTime:(unsigned int)arg1;
- (id)getCircularBuffer;
- (id)getCorealisRTModel;
- (id)getLanguageCode;
- (id)getSATDirectory;
- (id)init;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2;
- (id)initWithHardwareSampleRate:(double)arg1;
- (id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(id /* block */)arg2;
- (id)initWithLanguageCodeForSATEnrollment:(id)arg1;
- (double)lastScore;
- (double)lastSupervecScore;
- (unsigned char)lastTriggerType;
- (void)looseTriggerThreshold;
- (void)notifyAssetChangeWithCallback:(id /* block */)arg1;
- (void)prepareWithProperty:(id)arg1 readyCompletion:(id /* block */)arg2;
- (void)requestFoceTrigger;
- (void)requestSecondChance;
- (unsigned int)sampleCount;
- (unsigned int)sampleCountAtEndOfTrigger;
- (unsigned int)sampleCountAtStartOfTrigger;
- (unsigned int)samplerate;
- (void)setBypass:(BOOL)arg1;
- (int)triggerCount;

@end
