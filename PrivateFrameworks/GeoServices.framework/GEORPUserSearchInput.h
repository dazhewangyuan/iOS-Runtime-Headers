/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserSearchInput : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOLatLng * _coordinate;
    struct { 
        unsigned int origin : 1; 
    }  _has;
    int  _origin;
    GEOPDPlace * _place;
    NSString * _searchString;
    NSString * _singleLineAddressString;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) BOOL hasAutocompleteEntry;
@property (nonatomic, readonly) BOOL hasCoordinate;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic, readonly) BOOL hasPlace;
@property (nonatomic, readonly) BOOL hasSearchString;
@property (nonatomic, readonly) BOOL hasSingleLineAddressString;
@property (nonatomic) int origin;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSString *singleLineAddressString;

- (int)StringAsOrigin:(id)arg1;
- (id)autocompleteEntry;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAutocompleteEntry;
- (BOOL)hasCoordinate;
- (BOOL)hasOrigin;
- (BOOL)hasPlace;
- (BOOL)hasSearchString;
- (BOOL)hasSingleLineAddressString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (id)place;
- (BOOL)readFrom:(id)arg1;
- (id)searchString;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasOrigin:(BOOL)arg1;
- (void)setOrigin:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSingleLineAddressString:(id)arg1;
- (id)singleLineAddressString;
- (void)writeTo:(id)arg1;

@end
