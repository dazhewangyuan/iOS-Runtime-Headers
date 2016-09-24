/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDecimalNumberValue : PBCodable <NSCopying> {
    int  _exponent;
    struct { 
        unsigned int mantissa : 1; 
        unsigned int exponent : 1; 
        unsigned int isNegative : 1; 
    }  _has;
    BOOL  _isNegative;
    unsigned int  _mantissa;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) int exponent;
@property (nonatomic) BOOL hasExponent;
@property (nonatomic) BOOL hasIsNegative;
@property (nonatomic) BOOL hasMantissa;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic) BOOL isNegative;
@property (nonatomic) unsigned int mantissa;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)exponent;
- (BOOL)hasExponent;
- (BOOL)hasIsNegative;
- (BOOL)hasMantissa;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNegative;
- (unsigned int)mantissa;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExponent:(int)arg1;
- (void)setHasExponent:(BOOL)arg1;
- (void)setHasIsNegative:(BOOL)arg1;
- (void)setHasMantissa:(BOOL)arg1;
- (void)setIsNegative:(BOOL)arg1;
- (void)setMantissa:(unsigned int)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
