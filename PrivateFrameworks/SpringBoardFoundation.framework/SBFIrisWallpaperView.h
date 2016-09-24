/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {
    int  _currentMode;
    UIImageView * _imageView;
    <SBFIrisWallpaperViewDelegate> * _irisDelegate;
    BOOL  _isInteracting;
    int  _playbackState;
    UIGestureRecognizer * _playerGestureRecognizer;
    int  _playerState;
    ISPlayerView * _playerView;
    ISAVPlayer * _prewiredAVPlayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _prewiredSize;
    double  _stillTimeInVideo;
    BOOL  _useRewindPlaybackStyle;
    NSURL * _videoFileURL;
}

@property (nonatomic, readonly) int currentIrisMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SBFIrisWallpaperViewDelegate> *irisDelegate;
@property (nonatomic, readonly) int irisPlaybackState;
@property (nonatomic, readonly) BOOL isIrisInteracting;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *videoFileURL;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_populateContentView;
- (void)_resetPrewiredAVPlayer;
- (void)_setImage:(id)arg1;
- (void)_setPlayerGestureRecognizer:(id)arg1;
- (void)_setupContentView;
- (BOOL)_setupContentViewForMode:(int)arg1;
- (int)currentIrisMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 wallpaperVideoURL:(id)arg4 stillTimeInVideo:(double)arg5 staticImageOptions:(unsigned int)arg6 variant:(int)arg7 prewireMemory:(BOOL)arg8 useRewindPlaybackStyle:(BOOL)arg9;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (id)irisDelegate;
- (id)irisGestureRecognizer;
- (int)irisPlaybackState;
- (BOOL)isIrisInteracting;
- (void)playerViewGestureRecognizerDidChange:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)setIrisDelegate:(id)arg1;
- (double)stillTimeInVideo;
- (void)switchToIrisMode:(int)arg1;
- (id)videoFileURL;
- (id)videoPlayerForPlayerView:(id)arg1;
- (int)wallpaperType;

@end
