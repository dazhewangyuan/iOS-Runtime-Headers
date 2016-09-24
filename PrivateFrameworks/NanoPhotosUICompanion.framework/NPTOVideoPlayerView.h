/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOVideoPlayerView : UIView {
    <NPTOVideoPlayerViewDelegate> * _delegate;
    AVPlayerItem * _observedItem;
    UIView * _pausedView;
    id  _periodicTimeObserver;
    BOOL  _playRequested;
    AVQueuePlayer * _player;
    AVPlayerItem * _playerItem;
    _NPTOPlayerView * _playerView;
    BOOL  _playing;
    BOOL  _prerollRequested;
    NSValue * _seekRequested;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _seekWithTolerance;
    unsigned int  _servicingRequest;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _willBeginPlayingTime;
}

@property (nonatomic) <NPTOVideoPlayerViewDelegate> *delegate;
@property (nonatomic, readonly) BOOL playing;

- (void).cxx_destruct;
- (id)_createPlayerItemForVideoURL:(id)arg1;
- (void)_handleDidPlayToEndTime:(id)arg1;
- (void)_hidePlayerView;
- (void)_observePlayerItem:(id)arg1;
- (void)_pause;
- (void)_performNextRequest;
- (void)_periodicTimeObserverChanged:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)_play;
- (void)_preroll;
- (BOOL)_readyToPerformRequest;
- (void)_resetRequestState;
- (void)_revealPlayerView;
- (void)_seekToTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)_stopObservingPlayerItem;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)loadVideo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)player;
- (BOOL)playing;
- (void)preroll;
- (void)seekToTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)seekToTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 tolerance:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;
- (void)setDelegate:(id)arg1;

@end
