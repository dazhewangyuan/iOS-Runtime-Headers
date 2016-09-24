/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTiledLayer : CALayer {
    struct CGColorSpace { } * _colorspace;
    unsigned long  _conversionPixelFormat;
    NSObject<OS_dispatch_queue> * _conversionQueue;
    unsigned long  _decodePixelFormat;
    NSObject<OS_dispatch_queue> * _decodeQueue;
    int  _decoderCount;
    /* Warning: unhandled struct encoding: '{jpegDecoder=^{ajdec}@}' */ struct jpegDecoder { struct ajdec {} *x1; id x2; } * _decoders;
    long  _err;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
    BOOL  _hasExtendedColorDisplay;
    NSData * _jpegData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastVisibleRect;
    double  _lastZoomScale;
    int  _lock;
    int  _maxNumberOfTiles;
    <MTLCommandQueue> * _metalCmdQueue;
    MPSImageConversion * _metalConverter;
    <MTLDevice><MTLDeviceSPI> * _metalDevice;
    struct CGImage { } * _placeholderImage;
    CALayer * _placeholderLayer;
    unsigned int  _requestId;
    BOOL  _shouldTile;
    BOOL  _showTileBorders;
    NSMutableDictionary * _subLayers;
    struct iosPoolOpaque { } * _surfacePool;
    PLCache * _tileCache;
    int  _tilePixelSize;
    struct vImageConverter { } * _vimageConverter;
    NSMutableSet * _visibleTileIds;
    int  _zoomLevel;
    double  _zoomStartScale;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } jpegImageSize;

- (void)dealloc;
- (void)decodeImageRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLevel:(int)arg2 requestId:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)flushCache;
- (id)initWithJPEGData:(id)arg1 placeholderImage:(struct CGImage { }*)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })jpegImageSize;
- (struct CGColorSpace { }*)newColorSpaceFromSession:(struct ajdec { }*)arg1 imageInfo:(struct applejpeg_image_info { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8[3]; }*)arg2 imageData:(id)arg3;
- (void)prepareForDecoding;
- (void)removeAllTiles;
- (void)runMetalConversionOnSurface:(struct __IOSurface { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)runVImageConversionOnSurface:(struct __IOSurface { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)setupConverterForSourceColorSpace:(struct CGColorSpace { }*)arg1 destinationColorSpace:(struct CGColorSpace { }*)arg2;
- (void)updateSubLayers:(id)arg1;
- (BOOL)visibleTileRegionHasChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 level:(int)arg2;
- (float)zoomStartScaleForImage:(struct CGSize { double x1; double x2; })arg1 placeholderImageSize:(struct CGSize { double x1; double x2; })arg2;

@end
