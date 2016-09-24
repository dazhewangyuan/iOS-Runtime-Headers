/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayPhotoSessionStartedOnServer : PBCodable <NSCopying> {
    NSString * _clientModel;
    NSString * _clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    }  _has;
    NSString * _sessionUUID;
    int  _status;
    unsigned int  _timestamp;
    unsigned int  _transportType;
}

@property (nonatomic, retain) NSString *clientModel;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, readonly) BOOL hasClientModel;
@property (nonatomic, readonly) BOOL hasClientVersion;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned int timestamp;
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
- (BOOL)hasSessionUUID;
- (BOOL)hasStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setClientModel:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned int)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
