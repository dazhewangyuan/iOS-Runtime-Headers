/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {
    NSString * _clientVersionETag;
    FCCKPRecordIdentifier * _recordIdentifier;
    FCCKPRequestedFields * _requestedFields;
    NSString * _versionETag;
}

@property (nonatomic, retain) NSString *clientVersionETag;
@property (nonatomic, readonly) BOOL hasClientVersionETag;
@property (nonatomic, readonly) BOOL hasRecordIdentifier;
@property (nonatomic, readonly) BOOL hasRequestedFields;
@property (nonatomic, readonly) BOOL hasVersionETag;
@property (nonatomic, retain) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) FCCKPRequestedFields *requestedFields;
@property (nonatomic, retain) NSString *versionETag;

+ (id)options;

- (id)clientVersionETag;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasClientVersionETag;
- (BOOL)hasRecordIdentifier;
- (BOOL)hasRequestedFields;
- (BOOL)hasVersionETag;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setClientVersionETag:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setVersionETag:(id)arg1;
- (id)versionETag;
- (void)writeTo:(id)arg1;

@end
