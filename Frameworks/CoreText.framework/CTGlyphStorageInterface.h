/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface CTGlyphStorageInterface : NSObject {
    int * _absorbedCounts;
    struct CGSize { double x1; double x2; } * _advances;
    long  _glyphCount;
    unsigned short * _glyphs;
    struct CGPoint { double x1; double x2; } * _origins;
    unsigned int * _props;
    int * _stringIndexes;
}

- (struct __CTGlyphStorage { }*)createCopy:(struct { int x1; int x2; })arg1;
- (void)disposeGlyphStack;
- (void)getCustomAdvance:(struct CGSize { double x1; double x2; }*)arg1 forIndex:(long)arg2;
- (void)initGlyphStack:(long)arg1;
- (void)insertGlyphs:(struct { int x1; int x2; })arg1;
- (void)moveGlyphsTo:(long)arg1 from:(struct { int x1; int x2; })arg2;
- (void)popGlyph:(long)arg1;
- (void)pushGlyph:(long)arg1;
- (void)setAbsorbedCount:(long)arg1 forIndex:(long)arg2;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 forIndex:(long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long)arg2;
- (void)setStringIndex:(long)arg1 forIndex:(long)arg2;
- (void)swapGlyph:(long)arg1 withIndex:(long)arg2;

@end
