/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMoviePlayerView : UIView {
    PLAVPlayerView * _avPlayerView;
    BOOL  _destinationPlaceholderHidden;
    int  _destinationPlaceholderStyle;
}

@property (getter=isDestinationPlaceholderHidden, nonatomic) BOOL destinationPlaceholderHidden;
@property (nonatomic, readonly) int destinationPlaceholderStyle;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, readonly, retain) UIView *videoView;

- (void)_installBackgroundView:(id)arg1;
- (void)dealloc;
- (int)destinationPlaceholderStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isDestinationPlaceholderHidden;
- (id)player;
- (void)reattachVideoView;
- (void)setDestinationPlaceholderHidden:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(int)arg1;
- (void)setScaleMode:(int)arg1 duration:(double)arg2;
- (id)videoView;

@end
