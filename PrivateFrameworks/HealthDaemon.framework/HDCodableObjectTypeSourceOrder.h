/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {
    struct { 
        unsigned int objectType : 1; 
        unsigned int userOrdered : 1; 
    }  _has;
    int  _objectType;
    NSData * _sourceUUIDs;
    BOOL  _userOrdered;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic, readonly) BOOL hasSourceUUIDs;
@property (nonatomic) BOOL hasUserOrdered;
@property (nonatomic) int objectType;
@property (nonatomic, retain) NSData *sourceUUIDs;
@property (nonatomic) BOOL userOrdered;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)decodedDataTypeCode;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasObjectType;
- (BOOL)hasSourceUUIDs;
- (BOOL)hasUserOrdered;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)objectType;
- (BOOL)readFrom:(id)arg1;
- (void)setHasObjectType:(BOOL)arg1;
- (void)setHasUserOrdered:(BOOL)arg1;
- (void)setObjectType:(int)arg1;
- (void)setSourceUUIDs:(id)arg1;
- (void)setUserOrdered:(BOOL)arg1;
- (id)sourceUUIDs;
- (BOOL)userOrdered;
- (void)writeTo:(id)arg1;

@end
