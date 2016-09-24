/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayVideoSessionEndedOnClient : PBCodable <NSCopying> {
    double  _bandwidthMax;
    double  _bandwidthMean;
    double  _bandwidthStdDev;
    unsigned int  _duration;
    struct { 
        unsigned int bandwidthMax : 1; 
        unsigned int bandwidthMean : 1; 
        unsigned int bandwidthStdDev : 1; 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int localFairPlayCount : 1; 
        unsigned int localNonFairPlayCount : 1; 
        unsigned int readyToPlayMs : 1; 
        unsigned int reason : 1; 
        unsigned int remoteFairPlayCount : 1; 
        unsigned int remoteNonFairPlayCount : 1; 
        unsigned int stallCount : 1; 
    }  _has;
    unsigned int  _localFairPlayCount;
    unsigned int  _localNonFairPlayCount;
    unsigned int  _readyToPlayMs;
    int  _reason;
    unsigned int  _remoteFairPlayCount;
    unsigned int  _remoteNonFairPlayCount;
    NSString * _sessionUUID;
    unsigned int  _stallCount;
    unsigned int  _timestamp;
}

@property (nonatomic) double bandwidthMax;
@property (nonatomic) double bandwidthMean;
@property (nonatomic) double bandwidthStdDev;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasBandwidthMax;
@property (nonatomic) BOOL hasBandwidthMean;
@property (nonatomic) BOOL hasBandwidthStdDev;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasLocalFairPlayCount;
@property (nonatomic) BOOL hasLocalNonFairPlayCount;
@property (nonatomic) BOOL hasReadyToPlayMs;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRemoteFairPlayCount;
@property (nonatomic) BOOL hasRemoteNonFairPlayCount;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStallCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int localFairPlayCount;
@property (nonatomic) unsigned int localNonFairPlayCount;
@property (nonatomic) unsigned int readyToPlayMs;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int remoteFairPlayCount;
@property (nonatomic) unsigned int remoteNonFairPlayCount;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int stallCount;
@property (nonatomic) unsigned int timestamp;

- (double)bandwidthMax;
- (double)bandwidthMean;
- (double)bandwidthStdDev;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (BOOL)hasBandwidthMax;
- (BOOL)hasBandwidthMean;
- (BOOL)hasBandwidthStdDev;
- (BOOL)hasDuration;
- (BOOL)hasLocalFairPlayCount;
- (BOOL)hasLocalNonFairPlayCount;
- (BOOL)hasReadyToPlayMs;
- (BOOL)hasReason;
- (BOOL)hasRemoteFairPlayCount;
- (BOOL)hasRemoteNonFairPlayCount;
- (BOOL)hasSessionUUID;
- (BOOL)hasStallCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)localFairPlayCount;
- (unsigned int)localNonFairPlayCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)readyToPlayMs;
- (int)reason;
- (unsigned int)remoteFairPlayCount;
- (unsigned int)remoteNonFairPlayCount;
- (id)sessionUUID;
- (void)setBandwidthMax:(double)arg1;
- (void)setBandwidthMean:(double)arg1;
- (void)setBandwidthStdDev:(double)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasBandwidthMax:(BOOL)arg1;
- (void)setHasBandwidthMean:(BOOL)arg1;
- (void)setHasBandwidthStdDev:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasLocalFairPlayCount:(BOOL)arg1;
- (void)setHasLocalNonFairPlayCount:(BOOL)arg1;
- (void)setHasReadyToPlayMs:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasRemoteFairPlayCount:(BOOL)arg1;
- (void)setHasRemoteNonFairPlayCount:(BOOL)arg1;
- (void)setHasStallCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLocalFairPlayCount:(unsigned int)arg1;
- (void)setLocalNonFairPlayCount:(unsigned int)arg1;
- (void)setReadyToPlayMs:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setRemoteFairPlayCount:(unsigned int)arg1;
- (void)setRemoteNonFairPlayCount:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStallCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned int)stallCount;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end
