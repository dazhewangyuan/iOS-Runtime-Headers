/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATextLayer : CALayer {
    struct CATextLayerPrivate { } * _state;
}

@property (copy) NSString *alignmentMode;
@property BOOL allowsFontSubpixelQuantization;
@property const void*font;
@property double fontSize;
@property struct CGColor { }*foregroundColor;
@property (copy) id string;
@property (getter=isTruncated, readonly) BOOL truncated;
@property (copy) NSString *truncationMode;
@property (copy) id truncationString;
@property (getter=isWrapped) BOOL wrapped;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)_applyLinesToFunction:(int (*)arg1 info:(void*)arg2;
- (void)_applyLinesToFunction:(int (*)arg1 info:(void*)arg2 truncated:(BOOL*)arg3;
- (id)_createStringDict;
- (struct __CTLine { }*)_createTruncationToken;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (struct __CTTypesetter { }*)_retainTypesetter;
- (id)alignmentMode;
- (BOOL)allowsFontSubpixelQuantization;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (const void*)font;
- (float)fontSize;
- (struct CGColor { }*)foregroundColor;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (BOOL)isTruncated;
- (BOOL)isWrapped;
- (void)setAlignmentMode:(id)arg1;
- (void)setAllowsFontSubpixelQuantization:(BOOL)arg1;
- (void)setFont:(void*)arg1;
- (void)setFontSize:(float)arg1;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)setString:(id)arg1;
- (void)setTruncationMode:(id)arg1;
- (void)setTruncationString:(id)arg1;
- (void)setWrapped:(BOOL)arg1;
- (id)string;
- (id)truncationMode;
- (id)truncationString;
- (BOOL)wrapped;

@end
