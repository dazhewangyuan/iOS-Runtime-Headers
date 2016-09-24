/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoBitmap : PBCodable <NSCopying> {
    NSData * _bitmapData;
    unsigned int  _bitmapInfo;
    unsigned int  _bitsPerComponent;
    unsigned int  _bitsPerPixel;
    unsigned int  _bytesPerRow;
    unsigned int  _height;
    unsigned int  _width;
}

@property (nonatomic, retain) NSData *bitmapData;
@property (nonatomic) unsigned int bitmapInfo;
@property (nonatomic) unsigned int bitsPerComponent;
@property (nonatomic) unsigned int bitsPerPixel;
@property (nonatomic) unsigned int bytesPerRow;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;

- (void).cxx_destruct;
- (id)bitmapData;
- (unsigned int)bitmapInfo;
- (unsigned int)bitsPerComponent;
- (unsigned int)bitsPerPixel;
- (unsigned int)bytesPerRow;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (unsigned int)height;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBitmapData:(id)arg1;
- (void)setBitmapInfo:(unsigned int)arg1;
- (void)setBitsPerComponent:(unsigned int)arg1;
- (void)setBitsPerPixel:(unsigned int)arg1;
- (void)setBytesPerRow:(unsigned int)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
