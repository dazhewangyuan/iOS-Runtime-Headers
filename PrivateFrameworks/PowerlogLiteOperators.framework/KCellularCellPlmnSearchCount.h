/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularCellPlmnSearchCount : PBCodable <NSCopying> {
    unsigned int  _durationMs;
    unsigned int  _gsmSearchCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int durationMs : 1; 
        unsigned int gsmSearchCount : 1; 
        unsigned int lteSearchCount : 1; 
        unsigned int tdscdmaSearchCount : 1; 
        unsigned int umtsSearchCount : 1; 
    }  _has;
    unsigned int  _lteSearchCount;
    unsigned int  _tdscdmaSearchCount;
    unsigned int  _timestamp;
    unsigned int  _umtsSearchCount;
}

@property (nonatomic) unsigned int durationMs;
@property (nonatomic) unsigned int gsmSearchCount;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasGsmSearchCount;
@property (nonatomic) BOOL hasLteSearchCount;
@property (nonatomic) BOOL hasTdscdmaSearchCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUmtsSearchCount;
@property (nonatomic) unsigned int lteSearchCount;
@property (nonatomic) unsigned int tdscdmaSearchCount;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) unsigned int umtsSearchCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationMs;
- (unsigned int)gsmSearchCount;
- (BOOL)hasDurationMs;
- (BOOL)hasGsmSearchCount;
- (BOOL)hasLteSearchCount;
- (BOOL)hasTdscdmaSearchCount;
- (BOOL)hasTimestamp;
- (BOOL)hasUmtsSearchCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lteSearchCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDurationMs:(unsigned int)arg1;
- (void)setGsmSearchCount:(unsigned int)arg1;
- (void)setHasDurationMs:(BOOL)arg1;
- (void)setHasGsmSearchCount:(BOOL)arg1;
- (void)setHasLteSearchCount:(BOOL)arg1;
- (void)setHasTdscdmaSearchCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUmtsSearchCount:(BOOL)arg1;
- (void)setLteSearchCount:(unsigned int)arg1;
- (void)setTdscdmaSearchCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setUmtsSearchCount:(unsigned int)arg1;
- (unsigned int)tdscdmaSearchCount;
- (unsigned int)timestamp;
- (unsigned int)umtsSearchCount;
- (void)writeTo:(id)arg1;

@end
