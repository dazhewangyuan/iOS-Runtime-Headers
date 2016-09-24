/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkUsageLogMessage : PBCodable <NSCopying> {
    int  _connectionType;
    struct { 
        unsigned int requestErrorCode : 1; 
        unsigned int connectionType : 1; 
        unsigned int networkService : 1; 
        unsigned int placeRequestType : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int responseTime : 1; 
        unsigned int isConnectedToCarplay : 1; 
    }  _has;
    BOOL  _isConnectedToCarplay;
    int  _networkService;
    int  _placeRequestType;
    int  _requestDataSize;
    int  _requestErrorCode;
    NSString * _requestErrorDescription;
    NSString * _requestErrorDomain;
    int  _responseDataSize;
    int  _responseTime;
    NSMutableArray * _tileSetUsages;
}

@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasIsConnectedToCarplay;
@property (nonatomic) BOOL hasNetworkService;
@property (nonatomic) BOOL hasPlaceRequestType;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic, readonly) BOOL hasRequestErrorDescription;
@property (nonatomic, readonly) BOOL hasRequestErrorDomain;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) BOOL hasResponseTime;
@property (nonatomic) BOOL isConnectedToCarplay;
@property (nonatomic) int networkService;
@property (nonatomic) int placeRequestType;
@property (nonatomic) int requestDataSize;
@property (nonatomic) int requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDescription;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) int responseDataSize;
@property (nonatomic) int responseTime;
@property (nonatomic, retain) NSMutableArray *tileSetUsages;

+ (Class)tileSetUsageType;

- (int)StringAsConnectionType:(id)arg1;
- (int)StringAsNetworkService:(id)arg1;
- (int)StringAsPlaceRequestType:(id)arg1;
- (void)addTileSetUsage:(id)arg1;
- (void)clearTileSetUsages;
- (int)connectionType;
- (id)connectionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConnectionType;
- (BOOL)hasIsConnectedToCarplay;
- (BOOL)hasNetworkService;
- (BOOL)hasPlaceRequestType;
- (BOOL)hasRequestDataSize;
- (BOOL)hasRequestErrorCode;
- (BOOL)hasRequestErrorDescription;
- (BOOL)hasRequestErrorDomain;
- (BOOL)hasResponseDataSize;
- (BOOL)hasResponseTime;
- (unsigned int)hash;
- (BOOL)isConnectedToCarplay;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkService;
- (id)networkServiceAsString:(int)arg1;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestDataSize;
- (int)requestErrorCode;
- (id)requestErrorDescription;
- (id)requestErrorDomain;
- (int)responseDataSize;
- (int)responseTime;
- (void)setConnectionType:(int)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasIsConnectedToCarplay:(BOOL)arg1;
- (void)setHasNetworkService:(BOOL)arg1;
- (void)setHasPlaceRequestType:(BOOL)arg1;
- (void)setHasRequestDataSize:(BOOL)arg1;
- (void)setHasRequestErrorCode:(BOOL)arg1;
- (void)setHasResponseDataSize:(BOOL)arg1;
- (void)setHasResponseTime:(BOOL)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setNetworkService:(int)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (void)setRequestErrorDescription:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setTileSetUsages:(id)arg1;
- (id)tileSetUsageAtIndex:(unsigned int)arg1;
- (id)tileSetUsages;
- (unsigned int)tileSetUsagesCount;
- (void)writeTo:(id)arg1;

@end
