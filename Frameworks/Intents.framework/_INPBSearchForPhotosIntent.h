/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForPhotosIntent : PBCodable <NSCopying> {
    _INPBString * _albumName;
    _INPBDateTimeRange * _dateCreated;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _excludedAttributes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _includedAttributes;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _locationCreated;
    _INPBContactList * _peopleInPhoto;
    _INPBStringList * _searchTerm;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *albumName;
@property (nonatomic, retain) _INPBDateTimeRange *dateCreated;
@property (nonatomic, readonly) int*excludedAttributes;
@property (nonatomic, readonly) unsigned int excludedAttributesCount;
@property (nonatomic, readonly) BOOL hasAlbumName;
@property (nonatomic, readonly) BOOL hasDateCreated;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, readonly) BOOL hasLocationCreated;
@property (nonatomic, readonly) BOOL hasPeopleInPhoto;
@property (nonatomic, readonly) BOOL hasSearchTerm;
@property (nonatomic, readonly) int*includedAttributes;
@property (nonatomic, readonly) unsigned int includedAttributesCount;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *locationCreated;
@property (nonatomic, retain) _INPBContactList *peopleInPhoto;
@property (nonatomic, retain) _INPBStringList *searchTerm;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (void)addExcludedAttribute:(int)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (id)albumName;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)excludedAttributeAtIndex:(unsigned int)arg1;
- (int*)excludedAttributes;
- (unsigned int)excludedAttributesCount;
- (BOOL)hasAlbumName;
- (BOOL)hasDateCreated;
- (BOOL)hasIntentMetadata;
- (BOOL)hasLocationCreated;
- (BOOL)hasPeopleInPhoto;
- (BOOL)hasSearchTerm;
- (unsigned int)hash;
- (int)includedAttributeAtIndex:(unsigned int)arg1;
- (int*)includedAttributes;
- (unsigned int)includedAttributesCount;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (id)locationCreated;
- (void)mergeFrom:(id)arg1;
- (id)peopleInPhoto;
- (BOOL)readFrom:(id)arg1;
- (id)searchTerm;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setExcludedAttributes:(int*)arg1 count:(unsigned int)arg2;
- (void)setIncludedAttributes:(int*)arg1 count:(unsigned int)arg2;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
