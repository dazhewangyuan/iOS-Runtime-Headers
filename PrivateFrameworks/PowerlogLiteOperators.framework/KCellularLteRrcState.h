/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularLteRrcState : PBCodable <NSCopying> {
    int  _cause;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int cause : 1; 
        unsigned int prevState : 1; 
        unsigned int prevStateDurMs : 1; 
        unsigned int state : 1; 
    }  _has;
    int  _prevState;
    unsigned int  _prevStateDurMs;
    int  _state;
    unsigned int  _timestamp;
}

@property (nonatomic) int cause;
@property (nonatomic) BOOL hasCause;
@property (nonatomic) BOOL hasPrevState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int prevState;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) int state;
@property (nonatomic) unsigned int timestamp;

- (int)cause;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCause;
- (BOOL)hasPrevState;
- (BOOL)hasPrevStateDurMs;
- (BOOL)hasState;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)prevState;
- (unsigned int)prevStateDurMs;
- (BOOL)readFrom:(id)arg1;
- (void)setCause:(int)arg1;
- (void)setHasCause:(BOOL)arg1;
- (void)setHasPrevState:(BOOL)arg1;
- (void)setHasPrevStateDurMs:(BOOL)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPrevState:(int)arg1;
- (void)setPrevStateDurMs:(unsigned int)arg1;
- (void)setState:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (int)state;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end
