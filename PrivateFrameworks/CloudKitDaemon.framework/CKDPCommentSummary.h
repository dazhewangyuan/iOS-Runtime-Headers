/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentSummary : PBCodable <NSCopying> {
    CKDPCommentedOnId * _identifier;
    CKDPLikeInfo * _likeInfo;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasLikeInfo;
@property (nonatomic, retain) CKDPCommentedOnId *identifier;
@property (nonatomic, retain) CKDPLikeInfo *likeInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (BOOL)hasLikeInfo;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)likeInfo;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLikeInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
