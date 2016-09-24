/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderer : NSObject {
    NSString * _cacheKey;
    struct CGContext { } * _cachingContext;
    id /* block */  _cachingContextCompletion;
    int  _colorCount;
    BOOL  _colorDetectMode;
    int  _contentColorFormat;
    struct CGContext { } * _ctx;
    BOOL  _disableInternalCaching;
    int  _forceColorFormat;
    BOOL  _opaque;
    int  _renderFlags;
    UIImage * _renderedImage;
    double  _scale;
    UIColor * _singleColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic) BOOL colorDetectMode;
@property (nonatomic, readonly) int contentColorFormat;
@property (nonatomic, readonly) struct CGContext { }*context;
@property (nonatomic, readonly) NSData *contextData;
@property (nonatomic) BOOL disableInternalCaching;
@property (nonatomic, readonly) BOOL opaque;
@property (nonatomic, readonly) int renderFlags;
@property (nonatomic, readonly) UIImage *renderedImage;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) UIColor *singleColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (void)clearInternalCaches;
+ (struct CGContext { }*)imageContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(float)arg2 colorFormat:(int)arg3 opaque:(BOOL)arg4 invert:(BOOL)arg5;
+ (id)rendererWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 withScale:(float)arg3 opaque:(BOOL)arg4 renderFlags:(int)arg5;

- (void)_addDetectedColor:(struct CGColor { }*)arg1;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg1;
- (struct CGPath { }*)_deleteGlyphPaths;
- (void)_drawKeyImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3 force1xImages:(BOOL)arg4 flipHorizontally:(BOOL)arg5;
- (BOOL)_drawKeyString:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_drawLinearGradient:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)_drawSingleSymbol:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2;
- (struct CGPath { }*)_thickShiftGlyphPath;
- (struct CGPath { }*)_thinShiftGlyphPath;
- (void)addPathForFlickGeometry:(id)arg1;
- (void)addPathForFlickPopupGeometries:(id)arg1;
- (void)addPathForRenderGeometry:(id)arg1;
- (void)addPathForSplitGeometry:(id)arg1;
- (void)addPathForTraits:(id)arg1 displayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)addRoundRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(float)arg2 corners:(unsigned int)arg3;
- (id)cacheKey;
- (BOOL)colorDetectMode;
- (int)contentColorFormat;
- (struct CGContext { }*)context;
- (id)contextData;
- (void)dealloc;
- (id)description;
- (void)detectColorsForEffect:(id)arg1;
- (void)detectColorsForGradient:(id)arg1;
- (void)detectColorsForNamedColor:(id)arg1;
- (BOOL)disableInternalCaching;
- (void)drawPath:(struct CGPath { }*)arg1 weight:(float)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 color:(struct CGColor { }*)arg4 fill:(BOOL)arg5;
- (void)drawShiftPath:(BOOL)arg1 weight:(float)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 color:(struct CGColor { }*)arg4;
- (void)ensureContext;
- (void)forceColorFormat:(int)arg1;
- (id)initWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 withScale:(float)arg3 opaque:(BOOL)arg4 renderFlags:(int)arg5;
- (BOOL)loadCachedImageForHashString:(id)arg1;
- (BOOL)opaque;
- (id)pathForConcaveCornerWithGeometry:(id)arg1;
- (id)pathForFlickGeometry:(id)arg1;
- (id)pathForFlickPopupGeometries:(id)arg1;
- (id)pathForRenderGeometry:(id)arg1;
- (id)pathForSplitGeometry:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1 allowCaching:(BOOL)arg2;
- (void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2;
- (int)renderFlags;
- (void)renderKeyContents:(id)arg1 withTraits:(id)arg2;
- (unsigned int)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 status:(unsigned int)arg3;
- (BOOL)renderKeyPathContents:(id)arg1 withTraits:(id)arg2;
- (unsigned int)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 status:(unsigned int)arg3;
- (void)renderShadowEffect:(id)arg1 withTraits:(id)arg2;
- (id)renderedImage;
- (float)scale;
- (void)setCacheKey:(id)arg1;
- (void)setColorDetectMode:(BOOL)arg1;
- (void)setDisableInternalCaching:(BOOL)arg1;
- (id)singleColor;
- (struct CGSize { double x1; double x2; })size;

@end
