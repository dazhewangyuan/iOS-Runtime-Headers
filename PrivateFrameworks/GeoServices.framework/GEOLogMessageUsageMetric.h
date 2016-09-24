/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageUsageMetric : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionId : 1; 
        unsigned int messageSize : 1; 
        unsigned int messageCount : 1; 
        unsigned int metricState : 1; 
        unsigned int metricType : 1; 
        unsigned int retryCount : 1; 
    }  _has;
    unsigned int  _messageCount;
    unsigned int  _messageSize;
    int  _metricState;
    int  _metricType;
    unsigned int  _retryCount;
    struct GEOSessionID { 
        unsigned int _high; 
        unsigned int _low; 
    }  _sessionId;
}

@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) BOOL hasMetricState;
@property (nonatomic) BOOL hasMetricType;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) unsigned int messageSize;
@property (nonatomic) int metricState;
@property (nonatomic) int metricType;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) struct GEOSessionID { unsigned int x1; unsigned int x2; } sessionId;

+ (id)logMessageUsageMetricForFailedMsgWithCount:(int)arg1;
+ (id)logMessageUsageMetricForForcePurgeWithState:(int)arg1;
+ (id)logMessageUsageMetricForNetworkWithState:(int)arg1 messageCount:(int)arg2 messageSize:(int)arg3 retryCount:(int)arg4;
+ (id)logMessageUsageMetricForPurgeWithState:(int)arg1 messageCount:(int)arg2;

- (int)StringAsMetricState:(id)arg1;
- (int)StringAsMetricType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMessageCount;
- (BOOL)hasMessageSize;
- (BOOL)hasMetricState;
- (BOOL)hasMetricType;
- (BOOL)hasRetryCount;
- (BOOL)hasSessionId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageCount;
- (unsigned int)messageSize;
- (int)metricState;
- (id)metricStateAsString:(int)arg1;
- (int)metricType;
- (id)metricTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)retryCount;
- (struct GEOSessionID { unsigned int x1; unsigned int x2; })sessionId;
- (void)setHasMessageCount:(BOOL)arg1;
- (void)setHasMessageSize:(BOOL)arg1;
- (void)setHasMetricState:(BOOL)arg1;
- (void)setHasMetricType:(BOOL)arg1;
- (void)setHasRetryCount:(BOOL)arg1;
- (void)setHasSessionId:(BOOL)arg1;
- (void)setMessageCount:(unsigned int)arg1;
- (void)setMessageSize:(unsigned int)arg1;
- (void)setMetricState:(int)arg1;
- (void)setMetricType:(int)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned int x1; unsigned int x2; })arg1;
- (void)writeTo:(id)arg1;

@end
