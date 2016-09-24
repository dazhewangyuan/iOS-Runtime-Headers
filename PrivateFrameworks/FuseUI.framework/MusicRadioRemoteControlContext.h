/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicRadioRemoteControlContext : NSObject {
    MPAVItem * _currentlyPlayingItem;
    MPAVController * _player;
    RadioStation * _radioStation;
    int  _trackID;
}

@property (nonatomic, readonly) MPAVItem *currentlyPlayingItem;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) RadioStation *radioStation;
@property (nonatomic, readonly) int trackID;

- (void).cxx_destruct;
- (id)currentlyPlayingItem;
- (id)init;
- (id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2;
- (id)player;
- (id)radioStation;
- (int)trackID;

@end
