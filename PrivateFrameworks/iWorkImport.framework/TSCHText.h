/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHText : NSObject {
    TSUCache * mDigitWidthFonts;
    TSUCache * mNumberWidthCache;
    TSUCache * mTSWPColumnCache;
    TSUCache * mTSWPTextCache;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedText;

- (id)autorelease;
- (void)clearCaches;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawAttributedString:(struct __CFAttributedString { }*)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 atPosition:(struct CGPoint { double x1; double x2; })arg4 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 viewScale:(float)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 atPosition:(struct CGPoint { double x1; double x2; })arg4 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 viewScale:(float)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 atPosition:(struct CGPoint { double x1; double x2; })arg4 viewScale:(float)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 viewScale:(float)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 viewScale:(float)arg4;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(float)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 viewScale:(float)arg7;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext { }*)arg3 wrapWidth:(float)arg4 atPosition:(struct CGPoint { double x1; double x2; })arg5 viewScale:(float)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(float)arg4 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (id)init;
- (struct CGSize { double x1; double x2; })measureAttributedString:(struct __CFAttributedString { }*)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3 outErasableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 checkNumberTemplates:(BOOL)arg5;
- (id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(float)arg3;
- (BOOL)p_styleSupportsEqualDigits:(id)arg1;
- (id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(BOOL)arg3 wrapWidth:(float)arg4;
- (id)p_wpStorageForAttributedString:(struct __CFAttributedString { }*)arg1 paragraphStyle:(id)arg2;
- (id)p_wpTextForParagraphStyle:(id)arg1 textBlack:(BOOL)arg2;
- (struct CGSize { double x1; double x2; })p_wpWidthForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (struct __CTFont { }*)retainedCTFontForParagraphStyle:(id)arg1;

@end
