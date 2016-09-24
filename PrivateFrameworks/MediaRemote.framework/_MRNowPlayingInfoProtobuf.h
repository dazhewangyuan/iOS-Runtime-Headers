/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRNowPlayingInfoProtobuf : PBCodable <NSCopying> {
    NSString * _album;
    NSString * _artist;
    NSData * _artworkDataDigest;
    double  _duration;
    double  _elapsedTime;
    struct { 
        unsigned int duration : 1; 
        unsigned int elapsedTime : 1; 
        unsigned int radioStationIdentifier : 1; 
        unsigned int timestamp : 1; 
        unsigned int uniqueIdentifier : 1; 
        unsigned int playbackRate : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int isAdvertisement : 1; 
        unsigned int isAlwaysLive : 1; 
        unsigned int isExplicitTrack : 1; 
        unsigned int isMusicApp : 1; 
    }  _has;
    BOOL  _isAdvertisement;
    BOOL  _isAlwaysLive;
    BOOL  _isExplicitTrack;
    BOOL  _isMusicApp;
    double  _playbackRate;
    NSString * _radioStationHash;
    int  _radioStationIdentifier;
    NSString * _radioStationName;
    int  _repeatMode;
    int  _shuffleMode;
    double  _timestamp;
    NSString * _title;
    unsigned int  _uniqueIdentifier;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSData *artworkDataDigest;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) BOOL hasAlbum;
@property (nonatomic, readonly) BOOL hasArtist;
@property (nonatomic, readonly) BOOL hasArtworkDataDigest;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) BOOL hasIsAdvertisement;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL hasIsExplicitTrack;
@property (nonatomic) BOOL hasIsMusicApp;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic, readonly) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (nonatomic, readonly) BOOL hasRadioStationName;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL isAdvertisement;
@property (nonatomic) BOOL isAlwaysLive;
@property (nonatomic) BOOL isExplicitTrack;
@property (nonatomic) BOOL isMusicApp;
@property (nonatomic) double playbackRate;
@property (nonatomic, retain) NSString *radioStationHash;
@property (nonatomic) int radioStationIdentifier;
@property (nonatomic, retain) NSString *radioStationName;
@property (nonatomic) int repeatMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned int uniqueIdentifier;

- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (id)album;
- (id)artist;
- (id)artworkDataDigest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)elapsedTime;
- (BOOL)hasAlbum;
- (BOOL)hasArtist;
- (BOOL)hasArtworkDataDigest;
- (BOOL)hasDuration;
- (BOOL)hasElapsedTime;
- (BOOL)hasIsAdvertisement;
- (BOOL)hasIsAlwaysLive;
- (BOOL)hasIsExplicitTrack;
- (BOOL)hasIsMusicApp;
- (BOOL)hasPlaybackRate;
- (BOOL)hasRadioStationHash;
- (BOOL)hasRadioStationIdentifier;
- (BOOL)hasRadioStationName;
- (BOOL)hasRepeatMode;
- (BOOL)hasShuffleMode;
- (BOOL)hasTimestamp;
- (BOOL)hasTitle;
- (BOOL)hasUniqueIdentifier;
- (unsigned int)hash;
- (BOOL)isAdvertisement;
- (BOOL)isAlwaysLive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (BOOL)isMusicApp;
- (void)mergeFrom:(id)arg1;
- (float)playbackRate;
- (id)radioStationHash;
- (int)radioStationIdentifier;
- (id)radioStationName;
- (BOOL)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkDataDigest:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasElapsedTime:(BOOL)arg1;
- (void)setHasIsAdvertisement:(BOOL)arg1;
- (void)setHasIsAlwaysLive:(BOOL)arg1;
- (void)setHasIsExplicitTrack:(BOOL)arg1;
- (void)setHasIsMusicApp:(BOOL)arg1;
- (void)setHasPlaybackRate:(BOOL)arg1;
- (void)setHasRadioStationIdentifier:(BOOL)arg1;
- (void)setHasRepeatMode:(BOOL)arg1;
- (void)setHasShuffleMode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUniqueIdentifier:(BOOL)arg1;
- (void)setIsAdvertisement:(BOOL)arg1;
- (void)setIsAlwaysLive:(BOOL)arg1;
- (void)setIsExplicitTrack:(BOOL)arg1;
- (void)setIsMusicApp:(BOOL)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationIdentifier:(int)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(unsigned int)arg1;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (double)timestamp;
- (id)title;
- (unsigned int)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
