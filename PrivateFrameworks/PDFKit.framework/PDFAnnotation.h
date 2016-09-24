/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotation : NSObject <NSCoding, NSCopying> {
    PDFAnnotationPrivateVars * _private;
}

@property (nonatomic, retain) PDFBorder *border;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *contents;
@property (nonatomic, readonly) BOOL hasAppearanceStream;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) PDFAction *mouseUpAction;
@property (nonatomic) PDFPage *page;
@property (nonatomic, retain) PDFAnnotationPopup *popup;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) BOOL shouldPrint;
@property (nonatomic, readonly) NSString *toolTip;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, retain) NSString *userName;

+ (Class)classForAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;

- (void).cxx_destruct;
- (void)addActionToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addAdditionalActionsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addAppearanceForKey:(struct __CFString { }*)arg1 toDictionaryRef:(struct __CFDictionary { }*)arg2;
- (void)addBorderStyleToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addBorderToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addBoundsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addColor:(id)arg1 forKey:(struct __CFString { }*)arg2 toDictionaryRef:(struct __CFDictionary { }*)arg3;
- (void)addDefaultAppearanceDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addModificationDateToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAppearanceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addPageReferenceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addPopupToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addQuaddingToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addTextLabelToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (struct CGPDFForm { }*)appearance:(int)arg1;
- (id)border;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)color;
- (id)colorFromAppearanceTokens:(id)arg1;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (id)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)derotateContext:(struct CGContext { }*)arg1;
- (id)description;
- (struct __CFDictionary { }*)dictionaryRef;
- (void)drawAppearance:(struct CGPDFForm { }*)arg1 withBox:(int)arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawAppearance:(struct CGPDFForm { }*)arg1 withBox:(int)arg2 inContext:(struct CGContext { }*)arg3 scaleProportional:(BOOL)arg4;
- (void)drawWithBox:(int)arg1;
- (void)drawWithBox:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)fillOval:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
- (unsigned long)flags;
- (id)fontNameFromAppearanceTokens:(id)arg1;
- (BOOL)forExport;
- (struct __CFDictionary { }*)gcCreateAttributesForFont:(id)arg1 color:(id)arg2;
- (void)getAppearancesFromDictionary:(struct CGPDFDictionary { }*)arg1 ofType:(int)arg2;
- (id)getColorFromAppearanceString:(struct CGPDFString { }*)arg1;
- (id)getFontFromAppearanceString:(struct CGPDFString { }*)arg1;
- (id)getFullFieldNameFromDictionary:(struct CGPDFDictionary { }*)arg1;
- (id)getPDFKeyMappingDictionary;
- (BOOL)hasAppearanceStream;
- (id)init;
- (id)initCommonWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forPage:(id)arg2;
- (BOOL)isHidden;
- (BOOL)isMarkupAnnotation;
- (BOOL)isSelected;
- (id)modificationDate;
- (id)mouseDownAction;
- (id)mouseUpAction;
- (id)newUserControlWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)page;
- (float)pointSizeFromAppearanceTokens:(id)arg1;
- (id)popup;
- (struct CGPDFDictionary { }*)popupDictionary;
- (void)removeAllAppearanceStreams;
- (void)removeValueForAnnotationKey:(id)arg1;
- (BOOL)renderString:(id)arg1 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 font:(id)arg3 color:(id)arg4 alignment:(int)arg5 rotation:(int)arg6 breaks:(BOOL)arg7 context:(struct CGContext { }*)arg8;
- (BOOL)savesAppearanceStream;
- (void)secondaryInit;
- (void)setAppearance:(struct CGPDFForm { }*)arg1 forType:(int)arg2;
- (BOOL)setArray:(id)arg1 forKey:(id)arg2;
- (BOOL)setBoolean:(BOOL)arg1 forAnnotationKey:(id)arg2;
- (void)setBorder:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setContents:(id)arg1;
- (BOOL)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)setForExport:(BOOL)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setMouseDownAction:(id)arg1;
- (void)setMouseUpAction:(id)arg1;
- (void)setPDFAnnotationDictionary:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setPopup:(id)arg1;
- (BOOL)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAnnotationKey:(id)arg2;
- (void)setSavesAppearanceStream:(BOOL)arg1;
- (void)setShouldDisplay:(BOOL)arg1;
- (void)setShouldPrint:(BOOL)arg1;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (void)setType:(id)arg1;
- (void)setUserName:(id)arg1;
- (BOOL)setValue:(id)arg1 forAnnotationKey:(id)arg2;
- (BOOL)setVarious:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldDisplay;
- (BOOL)shouldPrint;
- (struct CGPDFDictionary { }*)sourceDictionary;
- (void)strokeOval:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
- (BOOL)supportsNSCoding;
- (id)tokenizeAppearanceString:(id)arg1;
- (id)toolTip;
- (id)type;
- (BOOL)updatesBoundsFromUserControlBounds;
- (id)userName;
- (id)valueForAnnotationKey:(id)arg1;

@end
