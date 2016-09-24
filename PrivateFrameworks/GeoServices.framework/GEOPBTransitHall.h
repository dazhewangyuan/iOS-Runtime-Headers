/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitHall : PBCodable <GEOTransitNamedItem, NSCopying> {
    unsigned int  _hallIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int hallIndex : 1; 
        unsigned int stationIndex : 1; 
    }  _has;
    GEOLatLng * _location;
    unsigned int  _muid;
    NSString * _nameDisplayString;
    unsigned int  _stationIndex;
    GEOStyleAttributes * _styleAttributes;
    NSMutableArray * _zoomNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hallIndex;
@property (nonatomic) BOOL hasHallIndex;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasNameDisplayString;
@property (nonatomic) BOOL hasStationIndex;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned int muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *zoomNames;

+ (Class)zoomNameType;

- (void)addZoomName:(id)arg1;
- (id)bestName;
- (id)bestNameWithLocale:(out id*)arg1;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hallIndex;
- (BOOL)hasHallIndex;
- (BOOL)hasLocation;
- (BOOL)hasMuid;
- (BOOL)hasNameDisplayString;
- (BOOL)hasStationIndex;
- (BOOL)hasStyleAttributes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned int)muid;
- (id)nameDisplayString;
- (BOOL)readFrom:(id)arg1;
- (void)setHallIndex:(unsigned int)arg1;
- (void)setHasHallIndex:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasStationIndex:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned int)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setZoomNames:(id)arg1;
- (unsigned int)stationIndex;
- (id)styleAttributes;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned int)arg1;
- (id)zoomNames;
- (unsigned int)zoomNamesCount;

@end
