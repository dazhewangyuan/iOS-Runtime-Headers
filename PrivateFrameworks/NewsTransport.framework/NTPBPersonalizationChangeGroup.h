/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {
    unsigned int  _changeNumber;
    NSMutableArray * _deltas;
    struct { 
        unsigned int changeNumber : 1; 
    }  _has;
    NSString * _instanceIdentifier;
}

@property (nonatomic) unsigned int changeNumber;
@property (nonatomic, retain) NSMutableArray *deltas;
@property (nonatomic) BOOL hasChangeNumber;
@property (nonatomic, readonly) BOOL hasInstanceIdentifier;
@property (nonatomic, retain) NSString *instanceIdentifier;

+ (Class)deltasType;

- (void)addDeltas:(id)arg1;
- (unsigned int)changeNumber;
- (void)clearDeltas;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deltas;
- (id)deltasAtIndex:(unsigned int)arg1;
- (unsigned int)deltasCount;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasChangeNumber;
- (BOOL)hasInstanceIdentifier;
- (unsigned int)hash;
- (id)instanceIdentifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChangeNumber:(unsigned int)arg1;
- (void)setDeltas:(id)arg1;
- (void)setHasChangeNumber:(BOOL)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
