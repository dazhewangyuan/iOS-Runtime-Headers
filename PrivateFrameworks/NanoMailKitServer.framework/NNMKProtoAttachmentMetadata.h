/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {
    NSString * _contentId;
    NSString * _fileName;
    unsigned int  _fileSize;
    struct { 
        unsigned int fileSize : 1; 
        unsigned int imageHeight : 1; 
        unsigned int imageWidth : 1; 
        unsigned int type : 1; 
        unsigned int renderOnClient : 1; 
    }  _has;
    double  _imageHeight;
    double  _imageWidth;
    BOOL  _renderOnClient;
    unsigned int  _type;
}

@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic, readonly) BOOL hasContentId;
@property (nonatomic, readonly) BOOL hasFileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) BOOL hasImageWidth;
@property (nonatomic) BOOL hasRenderOnClient;
@property (nonatomic) BOOL hasType;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (nonatomic) BOOL renderOnClient;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (id)contentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fileName;
- (unsigned int)fileSize;
- (BOOL)hasContentId;
- (BOOL)hasFileName;
- (BOOL)hasFileSize;
- (BOOL)hasImageHeight;
- (BOOL)hasImageWidth;
- (BOOL)hasRenderOnClient;
- (BOOL)hasType;
- (unsigned int)hash;
- (float)imageHeight;
- (float)imageWidth;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)renderOnClient;
- (void)setContentId:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned int)arg1;
- (void)setHasFileSize:(BOOL)arg1;
- (void)setHasImageHeight:(BOOL)arg1;
- (void)setHasImageWidth:(BOOL)arg1;
- (void)setHasRenderOnClient:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setImageHeight:(float)arg1;
- (void)setImageWidth:(float)arg1;
- (void)setRenderOnClient:(BOOL)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
