/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying> {
    struct { 
        unsigned int locationBucket : 1; 
        unsigned int isCurrentLocationInViewport : 1; 
    }  _has;
    BOOL  _isCurrentLocationInViewport;
    int  _locationBucket;
}

@property (nonatomic) BOOL hasIsCurrentLocationInViewport;
@property (nonatomic) BOOL hasLocationBucket;
@property (nonatomic) BOOL isCurrentLocationInViewport;
@property (nonatomic) int locationBucket;

- (int)StringAsLocationBucket:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsCurrentLocationInViewport;
- (BOOL)hasLocationBucket;
- (unsigned int)hash;
- (BOOL)isCurrentLocationInViewport;
- (BOOL)isEqual:(id)arg1;
- (int)locationBucket;
- (id)locationBucketAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsCurrentLocationInViewport:(BOOL)arg1;
- (void)setHasLocationBucket:(BOOL)arg1;
- (void)setIsCurrentLocationInViewport:(BOOL)arg1;
- (void)setLocationBucket:(int)arg1;
- (void)writeTo:(id)arg1;

@end
