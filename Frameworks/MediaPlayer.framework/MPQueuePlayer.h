/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned int  _allowsExternalPlaybackRevisionID;
    AVPlayerItem * _currentItem;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _currentTime;
    int  _defaultItemEQPresetType;
    BOOL  _isExternalPlaybackActive;
    MPAVRoute * _lastPickedRoute;
    BOOL  _outputObscuredDueToInsufficientExternalProtection;
    BOOL  _pausedForPlaybackQueueTransaction;
    id /* block */  _playbackQueueCommitHandler;
    int  _playbackQueueTransactionCount;
    AVQueuePlayer * _player;
    double  _playerRate;
    NSMutableArray * _queuedOperations;
    double  _rate;
    double  _rateBeforePlaybackQueueTransaction;
    BOOL  _routeDidChangeDuringPlaybackQueueTransaction;
    MPAVRoutingController * _routingController;
    int  _status;
    unsigned int  _usesAudioOnlyModeForExternalPlaybackRevisionID;
    unsigned int  _usesExternalPlaybackWhileExternalScreenIsActiveRevisionID;
}

@property (nonatomic, readonly) int _externalProtectionStatus;
@property (nonatomic, readonly) AVPlayer *_player;
@property (nonatomic) int actionAtItemEnd;
@property (nonatomic, readonly) BOOL allowsExternalPlayback;
@property (getter=isClosedCaptionDisplayEnabled, nonatomic) BOOL closedCaptionDisplayEnabled;
@property (nonatomic, readonly) AVPlayerItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defaultItemEQPresetType;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disallowsAMRAudio;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExternalPlaybackActive, nonatomic, readonly) BOOL externalPlaybackActive;
@property (nonatomic, readonly) int externalPlaybackType;
@property (nonatomic, copy) NSString *externalPlaybackVideoGravity;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isPlaybackQueueTransactionActive;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) BOOL limitsBandwidthForCellularAccess;
@property (nonatomic, readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic, copy) id /* block */ playbackQueueCommitHandler;
@property (nonatomic, readonly) id playerAVAudioSession;
@property (nonatomic, readonly) double playerRate;
@property (nonatomic) double rate;
@property (nonatomic, readonly) int status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL usesAudioOnlyModeForExternalPlayback;
@property (nonatomic, readonly) BOOL usesExternalPlaybackWhileExternalScreenIsActive;

- (void).cxx_destruct;
- (BOOL)_CALayerDestinationIsTVOut;
- (void)_currentItemDidChangeNotification:(id)arg1;
- (int)_externalProtectionStatus;
- (id)_player;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setExpectedAssetTypes:(id)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (float)_userVolume;
- (int)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)advanceToNextItem;
- (BOOL)allowsExternalPlayback;
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)arg1;
- (void)commitPlaybackQueueTransaction;
- (id)currentItem;
- (struct { int x1; int x2; unsigned int x3; int x4; })currentTime;
- (void)dealloc;
- (int)defaultItemEQPresetType;
- (BOOL)disallowsAMRAudio;
- (id)error;
- (int)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (id)init;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isPlaybackQueueTransactionActive;
- (id)items;
- (BOOL)limitsBandwidthForCellularAccess;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (id /* block */)playbackQueueCommitHandler;
- (id)playerAVAudioSession;
- (float)playerRate;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (float)rate;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)seekToTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)seekToTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 toleranceBefore:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 toleranceAfter:(struct { int x1; int x2; unsigned int x3; int x4; })arg3;
- (void)seekToTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 toleranceBefore:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 toleranceAfter:(struct { int x1; int x2; unsigned int x3; int x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setActionAtItemEnd:(int)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setDefaultItemEQPresetType:(int)arg1;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setLimitsBandwidthForCellularAccess:(BOOL)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setPlaybackQueueCommitHandler:(id /* block */)arg1;
- (void)setRate:(float)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (int)status;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;

@end
