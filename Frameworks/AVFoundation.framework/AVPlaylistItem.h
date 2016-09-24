/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaylistItem : NSObject <AVFigPlaylistNodeConvertible, AVPlaylistNode> {
    AVPlaylistItemInternal * _ivars;
}

@property (nonatomic, readonly) BOOL appliesChangesImmediately;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_figPlaylistItem, nonatomic, readonly) struct OpaqueFigPlaylistItem { }*figPlaylistItem;
@property (nonatomic, readonly) struct { int x1; union { struct OpaqueFigPlaylist {} *x_2_1_1; struct OpaqueFigPlaylistItem {} *x_2_1_2; } x2; }*figPlaylistNode;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic) BOOL includesAllKnownRepresentations;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic, readonly) AVPlaylist *parentPlaylist;
@property (nonatomic, copy) NSArray *representations;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)_EQPreset;
- (struct OpaqueFigPlaylistItem { }*)_figPlaylistItem;
- (void)_setEQPreset:(int)arg1;
- (BOOL)appliesChangesImmediately;
- (void)applyPendingChangesWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (struct { int x1; union { struct OpaqueFigPlaylist {} *x_2_1_1; struct OpaqueFigPlaylistItem {} *x_2_1_2; } x2; }*)figPlaylistNode;
- (void)finalize;
- (struct { int x1; int x2; unsigned int x3; int x4; })forwardPlaybackEndTime;
- (float)groupingSoundCheckVolumeNormalization;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)includesAllKnownRepresentations;
- (id)init;
- (id)initWithFigPlaylistItem:(struct OpaqueFigPlaylistItem { }*)arg1;
- (id)initWithRepresentation:(id)arg1;
- (struct { int x1; int x2; unsigned int x3; int x4; })initialCurrentTime;
- (BOOL)isEqual:(id)arg1;
- (id)loudnessInfoForAllAudioTracks;
- (id)mediaKind;
- (id)metadata;
- (id)parentPlaylist;
- (int)playbackLikelyToKeepUpTrigger;
- (double)preferredPeakBitRate;
- (id)representations;
- (struct { int x1; int x2; unsigned int x3; int x4; })reversePlaybackEndTime;
- (void)setForwardPlaybackEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setIncludesAllKnownRepresentations:(BOOL)arg1;
- (void)setInitialCurrentTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setLoudnessInfoForAllAudioTracks:(id)arg1;
- (void)setMediaKind:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setRepresentations:(id)arg1;
- (void)setReversePlaybackEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setWillNeverSeekBackwardsHint:(BOOL)arg1;
- (float)soundCheckVolumeNormalization;
- (id)soundCheckVolumeNormalizationGroupingMetadataKey;
- (BOOL)willNeverSeekBackwardsHint;

@end
