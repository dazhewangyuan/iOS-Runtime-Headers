/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)beginEditing;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_addAttribute:(id)arg1 value:(id)arg2;
- (void)mf_removeAttribute:(id)arg1;
- (void)mf_setString:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_ui_restoreOriginalFontAttributes;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (void)dd_appendAttributedString:(id)arg1;
- (void)dd_chopResults;
- (void)dd_offsetResultsBy:(int)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned int)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned int)arg1 usingURLificationBlock:(id /* block */)arg2 context:(id)arg3;
- (void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned int)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (BOOL)dd_urlifyResult:(id)arg1 withBlock:(id /* block */)arg2 referenceDate:(id)arg3 context:(id)arg4;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (struct CGSize { double x1; double x2; })scaleFontAndKerningToFitSize:(struct CGSize { double x1; double x2; })arg1 minimumFontSize:(float)arg2 minimumKerning:(float)arg3 stillDidntFit:(BOOL*)arg4;
- (float)scaleFontSizeByAmount:(float)arg1 minimumFontSize:(float)arg2;
- (float)scaleNumericAttribute:(id)arg1 byAmount:(float)arg2;
- (void)scaleToFitWidth:(float)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)replaceNewlinesWithSpaces;
- (void)trimWhitespace;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)appendString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setParagraphStyleForWritingDirection:(int)arg1 andAlignment:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (void)scrcAppendFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

- (BOOL)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)setAlignment:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBaseWritingDirection:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)unscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

@end
