/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerNetworkUsageMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSMutableArray * _usages;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *usages;

+ (Class)usageType;

- (void)addUsage:(id)arg1;
- (void)clearUsages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsages:(id)arg1;
- (unsigned long long)timestamp;
- (id)usageAtIndex:(unsigned int)arg1;
- (id)usages;
- (unsigned int)usagesCount;
- (void)writeTo:(id)arg1;

@end
