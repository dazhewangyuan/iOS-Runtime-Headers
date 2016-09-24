/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareFileIntent : PBCodable <NSCopying> {
    NSMutableArray * _entityNames;
    struct { 
        unsigned int shareMode : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _recipients;
    int  _shareMode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entityNames;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasShareMode;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic) int shareMode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entityNameType;
+ (id)options;
+ (Class)recipientsType;

- (void).cxx_destruct;
- (void)addEntityName:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)clearEntityNames;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned int)arg1;
- (id)entityNames;
- (unsigned int)entityNamesCount;
- (BOOL)hasIntentMetadata;
- (BOOL)hasShareMode;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned int)arg1;
- (unsigned int)recipientsCount;
- (void)setEntityNames:(id)arg1;
- (void)setHasShareMode:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setShareMode:(int)arg1;
- (int)shareMode;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
