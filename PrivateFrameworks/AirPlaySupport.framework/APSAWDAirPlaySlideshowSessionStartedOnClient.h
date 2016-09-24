/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlaySlideshowSessionStartedOnClient : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int repeat : 1; 
        unsigned int slideMs : 1; 
        unsigned int status : 1; 
    }  _has;
    unsigned int  _repeat;
    NSString * _sessionUUID;
    unsigned int  _slideMs;
    int  _status;
    NSString * _theme;
    unsigned int  _timestamp;
    NSString * _transition;
}

@property (nonatomic) BOOL hasRepeat;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSlideMs;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, readonly) BOOL hasTheme;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTransition;
@property (nonatomic) unsigned int repeat;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int slideMs;
@property (nonatomic) int status;
@property (nonatomic, retain) NSString *theme;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) NSString *transition;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRepeat;
- (BOOL)hasSessionUUID;
- (BOOL)hasSlideMs;
- (BOOL)hasStatus;
- (BOOL)hasTheme;
- (BOOL)hasTimestamp;
- (BOOL)hasTransition;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)repeat;
- (id)sessionUUID;
- (void)setHasRepeat:(BOOL)arg1;
- (void)setHasSlideMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlideMs:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTheme:(id)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransition:(id)arg1;
- (unsigned int)slideMs;
- (int)status;
- (id)theme;
- (unsigned int)timestamp;
- (id)transition;
- (void)writeTo:(id)arg1;

@end
