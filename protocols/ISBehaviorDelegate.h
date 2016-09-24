/* Generated by RuntimeBrowser.
 */

@protocol ISBehaviorDelegate <NSObject>

@required

- (void)behavior:(void *)arg1 didSetOutputInfo:(void *)arg2 withTransitionOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: ISBehavior *, ISPlayerState *, ISPlayerOutputTransitionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (BOOL)behavior:(void *)arg1 prerollVideoAtRate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: ISBehavior *, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)behavior:(ISBehavior *)arg1 seekCrossfadeToTime:(double)arg2;
- (BOOL)behavior:(void *)arg1 seekVideoPlayerToTime:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: ISBehavior *, struct { int x1; int x2; unsigned int x3; int x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)behavior:(ISBehavior *)arg1 setAudioEnabled:(BOOL)arg2;
- (void)behavior:(ISBehavior *)arg1 setCrossfadePlayRate:(float)arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoForwardPlaybackEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoVolume:(float)arg2;
- (double)currentCrossfadeTime;

@end
