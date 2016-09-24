/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {
    NSMutableArray * _actionCaptures;
    unsigned int  _businessID;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int localSearchProviderID : 1; 
    }  _has;
    int  _localSearchProviderID;
    int  _placeID;
    struct GEOSessionID { 
        unsigned int _high; 
        unsigned int _low; 
    }  _sessionID;
}

@property (nonatomic, retain) NSMutableArray *actionCaptures;
@property (nonatomic) unsigned int businessID;
@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int placeID;
@property (nonatomic) struct GEOSessionID { unsigned int x1; unsigned int x2; } sessionID;

+ (Class)actionCaptureType;

- (id)actionCaptureAtIndex:(unsigned int)arg1;
- (id)actionCaptures;
- (unsigned int)actionCapturesCount;
- (void)addActionCapture:(id)arg1;
- (unsigned int)businessID;
- (void)clearActionCaptures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBusinessID;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasPlaceID;
- (BOOL)hasSessionID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (int)placeID;
- (BOOL)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned int x1; unsigned int x2; })sessionID;
- (void)setActionCaptures:(id)arg1;
- (void)setBusinessID:(unsigned int)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasPlaceID:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlaceID:(int)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned int x1; unsigned int x2; })arg1;
- (void)writeTo:(id)arg1;

@end
