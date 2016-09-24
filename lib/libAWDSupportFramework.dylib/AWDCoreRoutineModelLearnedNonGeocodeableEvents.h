/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelLearnedNonGeocodeableEvents : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int learnedNongeocodableEvents : 1; 
        unsigned int nongeocodableEvents : 1; 
        unsigned int unlearnedNongeocodableEvents : 1; 
    }  _has;
    int  _learnedNongeocodableEvents;
    int  _nongeocodableEvents;
    unsigned long long  _timestamp;
    int  _unlearnedNongeocodableEvents;
}

@property (nonatomic) BOOL hasLearnedNongeocodableEvents;
@property (nonatomic) BOOL hasNongeocodableEvents;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnlearnedNongeocodableEvents;
@property (nonatomic) int learnedNongeocodableEvents;
@property (nonatomic) int nongeocodableEvents;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int unlearnedNongeocodableEvents;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLearnedNongeocodableEvents;
- (BOOL)hasNongeocodableEvents;
- (BOOL)hasTimestamp;
- (BOOL)hasUnlearnedNongeocodableEvents;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)learnedNongeocodableEvents;
- (void)mergeFrom:(id)arg1;
- (int)nongeocodableEvents;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLearnedNongeocodableEvents:(BOOL)arg1;
- (void)setHasNongeocodableEvents:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUnlearnedNongeocodableEvents:(BOOL)arg1;
- (void)setLearnedNongeocodableEvents:(int)arg1;
- (void)setNongeocodableEvents:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnlearnedNongeocodableEvents:(int)arg1;
- (unsigned long long)timestamp;
- (int)unlearnedNongeocodableEvents;
- (void)writeTo:(id)arg1;

@end
