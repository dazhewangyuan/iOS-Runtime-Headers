/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {
    BOOL  _requestingPlaybackInitialization;
    NSURL * _stationURL;
}

@property (getter=isRequestingPlaybackInitialization, nonatomic, readonly) BOOL requestingPlaybackInitialization;
@property (nonatomic, readonly) NSURL *stationURL;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (BOOL)isRequestingPlaybackInitialization;
- (id)stationURL;

@end
