/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAVPlayerController : NSObject <TSKMediaPlayerController> {
    BOOL  mCanPlay;
    <TSKMediaPlayerControllerDelegate> * mDelegate;
    BOOL  mFastForwarding;
    BOOL  mFastReversing;
    BOOL  mIsObservingStatus;
    AVPlayer * mPlayer;
    BOOL  mPlaying;
    double  mRateBeforeScrubbing;
    int  mRepeatMode;
    unsigned int  mScrubbingCount;
    BOOL  mStreaming;
    double  mVolume;
}

@property (nonatomic, readonly) double absoluteCurrentTime;
@property (nonatomic, readonly) double absoluteDuration;
@property (nonatomic, readonly) BOOL canFastForward;
@property (nonatomic, readonly) BOOL canFastReverse;
@property (nonatomic, readonly) BOOL canPlay;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TSKMediaPlayerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endTime;
@property (getter=isFastForwarding, nonatomic) BOOL fastForwarding;
@property (getter=isFastReversing, nonatomic) BOOL fastReversing;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) AVPlayer *player;
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (nonatomic) double rate;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic) int repeatMode;
@property (getter=isScrubbing, nonatomic, readonly) BOOL scrubbing;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic) double volume;

+ (BOOL)automaticallyNotifiesObserversOfEndTime;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingCanFastForward;
+ (id)keyPathsForValuesAffectingCanFastReverse;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingEndTime;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingStartTime;
+ (void)p_patchPropertyGettersForPlayer:(id)arg1;

- (double)absoluteCurrentTime;
- (double)absoluteDuration;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(id /* block */)arg2;
- (void)beginScrubbing;
- (BOOL)canFastForward;
- (BOOL)canFastReverse;
- (BOOL)canPlay;
- (void)cancelPendingSeeks;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endScrubbing;
- (double)endTime;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2 streaming:(BOOL)arg3;
- (BOOL)isFastForwarding;
- (BOOL)isFastReversing;
- (BOOL)isPlaying;
- (BOOL)isScrubbing;
- (id)newLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)p_applyVolumeToPlayerItem;
- (BOOL)p_canFastForwardAtCurrentTime;
- (BOOL)p_canFastReverseAtCurrentTime;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidJumpTime:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_updateClosedCaptionDisplayEnabled;
- (id)player;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (float)rate;
- (double)remainingTime;
- (void)removePeriodicTimeObserver:(id)arg1;
- (int)repeatMode;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)setEndTime:(double)arg1;
- (void)setFastForwarding:(BOOL)arg1;
- (void)setFastReversing:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (void)stopSynchronously;
- (void)teardown;
- (float)volume;

@end
