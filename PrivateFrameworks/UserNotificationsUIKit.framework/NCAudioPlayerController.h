/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAudioPlayerController : NSObject {
    BOOL  _audioSessionActive;
    <NCAudioPlayerControllerDelegate> * _delegate;
    double  _duration;
    int  _playbackState;
    AVPlayer * _player;
    double  _rate;
    int  _status;
    int  _timeControlStatus;
}

@property (getter=isAudioSessionActive, nonatomic) BOOL audioSessionActive;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic) <NCAudioPlayerControllerDelegate> *delegate;
@property (nonatomic) double duration;
@property (nonatomic, readonly) int playbackState;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) double rate;
@property (nonatomic) int status;
@property (nonatomic) int timeControlStatus;

- (void).cxx_destruct;
- (void)activateAudioSession;
- (float)currentTime;
- (void)deactivateAudioSession;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isAudioSessionActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (int)playbackState;
- (id)player;
- (float)rate;
- (void)seekToTime:(float)arg1;
- (void)setAudioSessionActive:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimeControlStatus:(int)arg1;
- (BOOL)shouldEnableProximityMonitoring;
- (int)status;
- (void)stop;
- (int)timeControlStatus;
- (BOOL)updateProximityMonitoring;

@end
