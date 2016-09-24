/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserCredentials : PBCodable <NSCopying> {
    NSString * _icloudUserMapsAuthToken;
    NSString * _icloudUserPersonId;
}

@property (nonatomic, readonly) BOOL hasIcloudUserMapsAuthToken;
@property (nonatomic, readonly) BOOL hasIcloudUserPersonId;
@property (nonatomic, retain) NSString *icloudUserMapsAuthToken;
@property (nonatomic, retain) NSString *icloudUserPersonId;

+ (id)_credentialsForPrimaryICloudAccount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIcloudUserMapsAuthToken;
- (BOOL)hasIcloudUserPersonId;
- (unsigned int)hash;
- (id)icloudUserMapsAuthToken;
- (id)icloudUserPersonId;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIcloudUserMapsAuthToken:(id)arg1;
- (void)setIcloudUserPersonId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
