/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerWifidAvailability : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int wifidBootTimeDiff : 1; 
        unsigned int pid : 1; 
    }  _has;
    unsigned int  _pid;
    unsigned long long  _timestamp;
    double  _wifidBootTimeDiff;
}

@property (nonatomic) BOOL hasPid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWifidBootTimeDiff;
@property (nonatomic) unsigned int pid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) double wifidBootTimeDiff;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPid;
- (BOOL)hasTimestamp;
- (BOOL)hasWifidBootTimeDiff;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pid;
- (BOOL)readFrom:(id)arg1;
- (void)setHasPid:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWifidBootTimeDiff:(BOOL)arg1;
- (void)setPid:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifidBootTimeDiff:(double)arg1;
- (unsigned long long)timestamp;
- (double)wifidBootTimeDiff;
- (void)writeTo:(id)arg1;

@end
