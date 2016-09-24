/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPMediaItem * _firstItem;
    MPMediaQuery * _mediaQuery;
    int  _repeatType;
    int  _shuffleType;
}

@property (nonatomic, readonly) MPMediaItem *firstItem;
@property (nonatomic, readonly) MPMediaQuery *mediaQuery;
@property (nonatomic, readonly) int repeatType;
@property (nonatomic, readonly) int shuffleType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)description;
- (id)firstItem;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (id)mediaQuery;
- (id)playbackItemMetadataForMediaItem:(id)arg1;
- (int)repeatType;
- (int)shuffleType;
- (BOOL)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)createPlaybackContext;

@end
