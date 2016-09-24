/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreRNFActivityNotification : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hasRnfActivity : 1; 
    }  _has;
    BOOL  _hasRnfActivity;
    unsigned int  _timestamp;
}

@property (nonatomic) BOOL hasHasRnfActivity;
@property (nonatomic) BOOL hasRnfActivity;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHasRnfActivity;
- (BOOL)hasRnfActivity;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHasRnfActivity:(BOOL)arg1;
- (void)setHasRnfActivity:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end
