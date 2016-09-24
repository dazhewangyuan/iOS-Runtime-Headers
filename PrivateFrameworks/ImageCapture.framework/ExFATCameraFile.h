/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraFile : ICCameraFile {
    void * _exFATCameraFileProperties;
}

@property int bitsPerPixel;
@property (copy) NSString *exifCreationDateTime;
@property (copy) NSString *exifModificationDateTime;
@property (readonly) struct timespec { int x1; long x2; } fsCreationTime;
@property (readonly) struct timespec { int x1; long x2; } fsModificationTime;
@property (readonly) int fsSize;
@property int imgHeight;
@property int imgWidth;
@property (readonly) id object;
@property int thmHeight;
@property int thmOffset;
@property int thmSize;
@property int thmWidth;
@property unsigned int type;
@property BOOL updatedBasicMetadata;

- (int)bitsPerPixel;
- (void)dealloc;
- (struct CGDataProviderSequentialCallbacks { unsigned int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); })dpCallbacks;
- (int)dpOffset;
- (id)exifCreationDateTime;
- (id)exifModificationDateTime;
- (void)finalize;
- (struct timespec { int x1; long x2; })fsCreationTime;
- (struct timespec { int x1; long x2; })fsModificationTime;
- (int)fsSize;
- (id)fsStream;
- (unsigned long)getBytes:(void*)arg1 ofSize:(unsigned long)arg2;
- (int)imgHeight;
- (int)imgWidth;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(struct timespec { int x1; long x2; })arg5 fsModificationTime:(struct timespec { int x1; long x2; })arg6 fsSize:(int)arg7;
- (id)metadataDict;
- (id)object;
- (void)releaseProvider;
- (void)rewind;
- (void)setBitsPerPixel:(int)arg1;
- (void)setExifCreationDateTime:(id)arg1;
- (void)setExifModificationDateTime:(id)arg1;
- (void)setImgHeight:(int)arg1;
- (void)setImgWidth:(int)arg1;
- (void)setThmHeight:(int)arg1;
- (void)setThmOffset:(int)arg1;
- (void)setThmSize:(int)arg1;
- (void)setThmWidth:(int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUpdatedBasicMetadata:(BOOL)arg1;
- (void)setdpOffset:(int)arg1;
- (int)skipBytes:(int)arg1;
- (int)thmHeight;
- (int)thmOffset;
- (int)thmSize;
- (int)thmWidth;
- (id)thumbData;
- (unsigned int)type;
- (void)updateBasicMetadata;
- (BOOL)updateBasicMetadataIfNotRAW;
- (BOOL)updatedBasicMetadata;
- (long)writeDataToFile:(int)arg1 fromOffset:(int)arg2 ofLength:(int*)arg3;

@end
