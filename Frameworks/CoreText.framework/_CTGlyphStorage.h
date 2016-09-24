/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface _CTGlyphStorage : NSObject {
    const struct CGSize { double x1; double x2; } * _advances;
    long  _count;
    const unsigned short * _glyphs;
    const unsigned int * _props;
    const int * _stringIndices;
}

- (long)attachmentCountAtIndex:(long)arg1;
- (id)copyWithRange:(struct { int x1; int x2; })arg1;
- (void)disposeGlyphStack;
- (bool)implementsOrigins;
- (void)initGlyphStackWithCapacity:(long)arg1;
- (id)initWithCount:(long)arg1;
- (void)insertGlyphsAtRange:(struct { int x1; int x2; })arg1;
- (BOOL)isEqual:(id)arg1;
- (void)moveGlyphsFromRange:(struct { int x1; int x2; })arg1 toIndex:(long)arg2;
- (struct CGPoint { double x1; double x2; })originAtIndex:(long)arg1;
- (void)popGlyphAtIndex:(long)arg1;
- (void)puntStringIndicesInRange:(struct { int x1; int x2; })arg1 by:(long)arg2;
- (void)pushGlyphAtIndex:(long)arg1;
- (void*)refCon;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 atIndex:(long)arg2;
- (void)setAttachmentCount:(long)arg1 atIndex:(long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 atIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long)arg2;
- (void)setStringIndex:(long)arg1 atIndex:(long)arg2;
- (void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2;
- (void)sync;

@end
