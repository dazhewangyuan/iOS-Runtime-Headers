/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying> {
    unsigned int  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int resolution : 1; 
    }  _has;
    int  _resolution;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;

- (int)StringAsResolution:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCount;
- (BOOL)hasResolution;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resolution;
- (id)resolutionAsString:(int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(BOOL)arg1;
- (void)setHasResolution:(BOOL)arg1;
- (void)setResolution:(int)arg1;
- (void)writeTo:(id)arg1;

@end
