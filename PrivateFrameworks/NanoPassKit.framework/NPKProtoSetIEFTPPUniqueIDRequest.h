/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetIEFTPPUniqueIDRequest : PBRequest <NSCopying> {
    BOOL  _cancelOutstandingRequests;
    struct { 
        unsigned int cancelOutstandingRequests : 1; 
    }  _has;
    NSString * _uniqueID;
}

@property (nonatomic) BOOL cancelOutstandingRequests;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (nonatomic, readonly) BOOL hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (BOOL)cancelOutstandingRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCancelOutstandingRequests;
- (BOOL)hasUniqueID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCancelOutstandingRequests:(BOOL)arg1;
- (void)setHasCancelOutstandingRequests:(BOOL)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
