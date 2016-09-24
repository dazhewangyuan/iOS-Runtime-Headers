/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlaySlideshowSessionStartedOnServer : PBCodable <NSCopying> {
    NSString * _clientModel;
    NSString * _clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int repeat : 1; 
        unsigned int slideMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    }  _has;
    unsigned int  _repeat;
    NSString * _sessionUUID;
    unsigned int  _slideMs;
    int  _status;
    NSString * _theme;
    unsigned int  _timestamp;
    NSString * _transition;
    unsigned int  _transportType;
}

@property (nonatomic, retain) NSString *clientModel;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, readonly) BOOL hasClientModel;
@property (nonatomic, readonly) BOOL hasClientVersion;
@property (nonatomic) BOOL hasRepeat;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSlideMs;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, readonly) BOOL hasTheme;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTransition;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int repeat;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int slideMs;
@property (nonatomic) int status;
@property (nonatomic, retain) NSString *theme;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) NSString *transition;
@property (nonatomic) unsigned int transportType;

- (id)clientModel;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasClientModel;
- (BOOL)hasClientVersion;
- (BOOL)hasRepeat;
- (BOOL)hasSessionUUID;
- (BOOL)hasSlideMs;
- (BOOL)hasStatus;
- (BOOL)hasTheme;
- (BOOL)hasTimestamp;
- (BOOL)hasTransition;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)repeat;
- (id)sessionUUID;
- (void)setClientModel:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasRepeat:(BOOL)arg1;
- (void)setHasSlideMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlideMs:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTheme:(id)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransition:(id)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned int)slideMs;
- (int)status;
- (id)theme;
- (unsigned int)timestamp;
- (id)transition;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
