/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoaderPVR3 : MTKTextureLoaderData {
    NSData * _imageData;
    unsigned int  _metaDataSize;
    struct MTLPixelFormatInfo { 
        char *name; 
        unsigned int flags; 
        unsigned int castClass; 
        union { 
            struct MTLNormalPixelFormatInfo { 
                unsigned int pixelBytes; 
                unsigned char componentCount; 
                unsigned int pixelBytesRender; 
                unsigned int pixelBytesRenderMSAA; 
            } normal; 
            struct MTLCompressedPixelFormatInfo { 
                unsigned int blockBytes; 
                unsigned int blockWidth; 
                unsigned int blockHeight; 
                unsigned int blockDepth; 
            } compressed; 
        } type; 
    }  _pixelFormatInfo;
    int  _pvrCompressedFormat;
}

+ (BOOL)isPVR3File:(id)arg1;

- (void)dealloc;
- (void)determineBlockSize:(unsigned int*)arg1 blocksWide:(unsigned int*)arg2 blocksHigh:(unsigned int*)arg3 bytesPerBlock:(unsigned int*)arg4 fromFormat:(unsigned int)arg5 width:(unsigned int)arg6 andHeight:(unsigned int)arg7;
- (unsigned int)determineFormat:(unsigned int)arg1 colorSpace:(unsigned int)arg2 channelType:(unsigned int)arg3 options:(id)arg4;
- (id)getDataForArrayElement:(unsigned int)arg1 face:(unsigned int)arg2 level:(unsigned int)arg3 depthPlane:(unsigned int)arg4 bytesPerRow:(unsigned int*)arg5 bytesPerImage:(unsigned int*)arg6;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (BOOL)parseMetadataWithError:(id*)arg1;

@end
