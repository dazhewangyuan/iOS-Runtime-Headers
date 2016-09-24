/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {
    int  _cacheState;
    int  _connectDuration;
    int  _dnsDuration;
    int  _errorCode;
    struct { 
        unsigned int connectDuration : 1; 
        unsigned int dnsDuration : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatusCode : 1; 
        unsigned int requestDuration : 1; 
        unsigned int responseDuration : 1; 
        unsigned int responseSize : 1; 
        unsigned int startTime : 1; 
        unsigned int cacheState : 1; 
    }  _has;
    int  _httpStatusCode;
    int  _requestDuration;
    int  _responseDuration;
    int  _responseSize;
    int  _startTime;
}

@property (nonatomic) int cacheState;
@property (nonatomic) int connectDuration;
@property (nonatomic) int dnsDuration;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) BOOL hasRequestDuration;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) int httpStatusCode;
@property (nonatomic) int requestDuration;
@property (nonatomic) int responseDuration;
@property (nonatomic) int responseSize;
@property (nonatomic) int startTime;

- (int)cacheState;
- (int)connectDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)dnsDuration;
- (int)errorCode;
- (BOOL)hasCacheState;
- (BOOL)hasConnectDuration;
- (BOOL)hasDnsDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasHttpStatusCode;
- (BOOL)hasRequestDuration;
- (BOOL)hasResponseDuration;
- (BOOL)hasResponseSize;
- (BOOL)hasStartTime;
- (unsigned int)hash;
- (int)httpStatusCode;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestDuration;
- (int)responseDuration;
- (int)responseSize;
- (void)setCacheState:(int)arg1;
- (void)setConnectDuration:(int)arg1;
- (void)setDnsDuration:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasCacheState:(BOOL)arg1;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setHasDnsDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasHttpStatusCode:(BOOL)arg1;
- (void)setHasRequestDuration:(BOOL)arg1;
- (void)setHasResponseDuration:(BOOL)arg1;
- (void)setHasResponseSize:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHttpStatusCode:(int)arg1;
- (void)setRequestDuration:(int)arg1;
- (void)setResponseDuration:(int)arg1;
- (void)setResponseSize:(int)arg1;
- (void)setStartTime:(int)arg1;
- (int)startTime;
- (void)writeTo:(id)arg1;

@end
