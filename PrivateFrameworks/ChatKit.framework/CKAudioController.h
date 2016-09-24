/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {
    CKAudioPlayer * _audioPlayer;
    unsigned int  _currentIndex;
    <CKAudioControllerDelegate> * _delegate;
    BOOL  _interrupted;
    CKAudioPlayer * _listenAudioPlayer;
    NSMutableArray * _mediaObjects;
    BOOL  _paused;
    BOOL  _playing;
    BOOL  _shouldDuckOthers;
    BOOL  _shouldStopPlayingWhenSilent;
    BOOL  _shouldUseAVPlayer;
    BOOL  _shouldUseSpeaker;
}

@property (setter=_setMediaObjects:, nonatomic, retain) NSMutableArray *_mediaObjects;
@property (nonatomic, retain) CKAudioPlayer *audioPlayer;
@property (nonatomic, readonly) CKMediaObject *currentMediaObject;
@property (nonatomic, readonly) double currentMediaObjectDuration;
@property (nonatomic, readonly) double currentMediaObjectTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL interrupted;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (nonatomic) BOOL shouldDuckOthers;
@property (nonatomic) BOOL shouldStopPlayingWhenSilent;
@property (nonatomic) BOOL shouldUseAVPlayer;
@property (nonatomic) BOOL shouldUseSpeaker;
@property (readonly) Class superclass;
@property (nonatomic) double volume;

- (void).cxx_destruct;
- (id)_mediaObjects;
- (void)_notifyPlayerDidPrepareMediaObject:(id)arg1 successfully:(BOOL)arg2;
- (void)_setMediaObjects:(id)arg1;
- (void)addMediaObject:(id)arg1;
- (void)addMediaObjects:(id)arg1;
- (void)applicationWillResignActive;
- (id)audioPlayer;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(BOOL)arg2;
- (unsigned int)audioSessionControllerOptions;
- (void)audioSessionInterruption:(id)arg1;
- (id)currentMediaObject;
- (double)currentMediaObjectDuration;
- (double)currentMediaObjectTime;
- (void)dealloc;
- (id)delegate;
- (id)initWithMediaObjects:(id)arg1;
- (BOOL)interrupted;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (id)mediaObjects;
- (void)pause;
- (void)play;
- (void)playAfterDelay:(double)arg1;
- (void)playListenEndSound:(id /* block */)arg1;
- (void)playListenSound:(id /* block */)arg1;
- (void)prepareToPlay;
- (void)setAudioPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setShouldDuckOthers:(BOOL)arg1;
- (void)setShouldStopPlayingWhenSilent:(BOOL)arg1;
- (void)setShouldUseAVPlayer:(BOOL)arg1;
- (void)setShouldUseSpeaker:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)shouldDuckOthers;
- (BOOL)shouldStopPlayingWhenSilent;
- (BOOL)shouldUseAVPlayer;
- (BOOL)shouldUseSpeaker;
- (void)stop;
- (float)volume;

@end
