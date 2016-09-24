/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLBClientConnectionReport : PBCodable <NSCopying> {
    int  _bytesReceived;
    int  _bytesSent;
    int  _connectionDuration;
    int  _connectionJoiningFailure;
    int  _connectionJoiningLbConnectionMigration;
    int  _connectionJoiningLbConnectionState;
    unsigned int  _connectionServiceId;
    int  _dataPathResult;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int connectionServiceId : 1; 
        unsigned int timeToConnectionFailure : 1; 
        unsigned int timeToFirstResponse : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionJoiningFailure : 1; 
        unsigned int connectionJoiningLbConnectionMigration : 1; 
        unsigned int connectionJoiningLbConnectionState : 1; 
        unsigned int dataPathResult : 1; 
    }  _has;
    int  _timeToConnectionFailure;
    int  _timeToFirstResponse;
    unsigned int  _timestamp;
}

@property (nonatomic) int bytesReceived;
@property (nonatomic) int bytesSent;
@property (nonatomic) int connectionDuration;
@property (nonatomic) int connectionJoiningFailure;
@property (nonatomic) int connectionJoiningLbConnectionMigration;
@property (nonatomic) int connectionJoiningLbConnectionState;
@property (nonatomic) unsigned int connectionServiceId;
@property (nonatomic) int dataPathResult;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) BOOL hasConnectionJoiningFailure;
@property (nonatomic) BOOL hasConnectionJoiningLbConnectionMigration;
@property (nonatomic) BOOL hasConnectionJoiningLbConnectionState;
@property (nonatomic) BOOL hasConnectionServiceId;
@property (nonatomic) BOOL hasDataPathResult;
@property (nonatomic) BOOL hasTimeToConnectionFailure;
@property (nonatomic) BOOL hasTimeToFirstResponse;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int timeToConnectionFailure;
@property (nonatomic) int timeToFirstResponse;
@property (nonatomic) unsigned int timestamp;

- (int)bytesReceived;
- (int)bytesSent;
- (int)connectionDuration;
- (int)connectionJoiningFailure;
- (int)connectionJoiningLbConnectionMigration;
- (int)connectionJoiningLbConnectionState;
- (unsigned int)connectionServiceId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataPathResult;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBytesReceived;
- (BOOL)hasBytesSent;
- (BOOL)hasConnectionDuration;
- (BOOL)hasConnectionJoiningFailure;
- (BOOL)hasConnectionJoiningLbConnectionMigration;
- (BOOL)hasConnectionJoiningLbConnectionState;
- (BOOL)hasConnectionServiceId;
- (BOOL)hasDataPathResult;
- (BOOL)hasTimeToConnectionFailure;
- (BOOL)hasTimeToFirstResponse;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBytesReceived:(int)arg1;
- (void)setBytesSent:(int)arg1;
- (void)setConnectionDuration:(int)arg1;
- (void)setConnectionJoiningFailure:(int)arg1;
- (void)setConnectionJoiningLbConnectionMigration:(int)arg1;
- (void)setConnectionJoiningLbConnectionState:(int)arg1;
- (void)setConnectionServiceId:(unsigned int)arg1;
- (void)setDataPathResult:(int)arg1;
- (void)setHasBytesReceived:(BOOL)arg1;
- (void)setHasBytesSent:(BOOL)arg1;
- (void)setHasConnectionDuration:(BOOL)arg1;
- (void)setHasConnectionJoiningFailure:(BOOL)arg1;
- (void)setHasConnectionJoiningLbConnectionMigration:(BOOL)arg1;
- (void)setHasConnectionJoiningLbConnectionState:(BOOL)arg1;
- (void)setHasConnectionServiceId:(BOOL)arg1;
- (void)setHasDataPathResult:(BOOL)arg1;
- (void)setHasTimeToConnectionFailure:(BOOL)arg1;
- (void)setHasTimeToFirstResponse:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimeToConnectionFailure:(int)arg1;
- (void)setTimeToFirstResponse:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (int)timeToConnectionFailure;
- (int)timeToFirstResponse;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end
