/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICatalogCSIGenerator : CSIGenerator {
    CUIRenditionKey * _baseKey;
    CSIBitmapWrapper * _flattenedBitmap;
}

@property (nonatomic, retain) CUIRenditionKey *baseKey;
@property (nonatomic, retain) CSIBitmapWrapper *flattenedBitmap;

- (void)addLayerReference:(id)arg1 withImage:(struct CGImage { }*)arg2;
- (id)baseKey;
- (void)dealloc;
- (id)flattenedBitmap;
- (id)initWithLayerStackData:(id)arg1 withCanvasSize:(struct CGSize { double x1; double x2; })arg2 isOpaque:(BOOL)arg3;
- (void)setBaseKey:(id)arg1;
- (void)setFlattenedBitmap:(id)arg1;

@end
