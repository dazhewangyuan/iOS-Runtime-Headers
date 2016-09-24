/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPArtist : PBCodable <NSCopying> {
    NSString * _artworkId;
    struct { 
        unsigned int persistentId : 1; 
        unsigned int storeId : 1; 
    }  _has;
    NSString * _name;
    int  _persistentId;
    NSString * _sortName;
    int  _storeId;
}

@property (nonatomic, retain) NSString *artworkId;
@property (nonatomic, readonly) BOOL hasArtworkId;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic, readonly) BOOL hasSortName;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int persistentId;
@property (nonatomic, retain) NSString *sortName;
@property (nonatomic) int storeId;

- (void).cxx_destruct;
- (id)artworkId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtworkId;
- (BOOL)hasName;
- (BOOL)hasPersistentId;
- (BOOL)hasSortName;
- (BOOL)hasStoreId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (int)persistentId;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setHasPersistentId:(BOOL)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentId:(int)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(int)arg1;
- (id)sortName;
- (int)storeId;
- (void)writeTo:(id)arg1;

@end
