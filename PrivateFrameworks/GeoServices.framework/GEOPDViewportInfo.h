/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int mapType : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
    }  _has;
    GEOMapRegion * _mapRegion;
    int  _mapType;
    unsigned int  _timeSinceMapViewportChanged;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)viewportInfoForTraits:(id)arg1;

- (int)StringAsMapType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMapRegion;
- (BOOL)hasMapType;
- (BOOL)hasTimeSinceMapViewportChanged;
- (unsigned int)hash;
- (id)initWithTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMapType:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (unsigned int)timeSinceMapViewportChanged;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
