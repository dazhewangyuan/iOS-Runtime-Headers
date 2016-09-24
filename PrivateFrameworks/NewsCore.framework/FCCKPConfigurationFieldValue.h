/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPConfigurationFieldValue : PBCodable <NSCopying> {
    BOOL  _boolValue;
    NSData * _bytesValue;
    double  _doubleValue;
    NSMutableArray * _fieldValues;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int longValue : 1; 
        unsigned int type : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    NSMutableArray * _listValues;
    int  _longValue;
    NSString * _stringValue;
    int  _type;
}

@property (nonatomic) BOOL boolValue;
@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, retain) NSMutableArray *fieldValues;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic, readonly) BOOL hasBytesValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasLongValue;
@property (nonatomic, readonly) BOOL hasStringValue;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSMutableArray *listValues;
@property (nonatomic) int longValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int type;

- (void)addFieldValues:(id)arg1;
- (void)addListValues:(id)arg1;
- (BOOL)boolValue;
- (id)bytesValue;
- (void)clearFieldValues;
- (void)clearListValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (id)fieldValues;
- (id)fieldValuesAtIndex:(unsigned int)arg1;
- (unsigned int)fieldValuesCount;
- (BOOL)hasBoolValue;
- (BOOL)hasBytesValue;
- (BOOL)hasDoubleValue;
- (BOOL)hasLongValue;
- (BOOL)hasStringValue;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)listValues;
- (id)listValuesAtIndex:(unsigned int)arg1;
- (unsigned int)listValuesCount;
- (int)longValue;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBoolValue:(BOOL)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFieldValues:(id)arg1;
- (void)setHasBoolValue:(BOOL)arg1;
- (void)setHasDoubleValue:(BOOL)arg1;
- (void)setHasLongValue:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setListValues:(id)arg1;
- (void)setLongValue:(int)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(int)arg1;
- (id)stringValue;
- (int)type;
- (void)writeTo:(id)arg1;

@end
