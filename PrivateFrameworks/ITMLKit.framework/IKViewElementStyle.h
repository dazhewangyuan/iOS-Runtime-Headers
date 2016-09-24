/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementStyle : NSObject {
    NSString * _classDescriptorString;
    IKCSSRule * _cssRule;
    BOOL  _filterBlockedStyles;
    NSArray * _mediaQueryList;
    NSMutableDictionary * _styleDict;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSString *badgeTreatment;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderMargins;
@property (nonatomic, readonly) IKFourTuple *borderRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidths;
@property (nonatomic, readonly) NSString *cardType;
@property (nonatomic, readonly) NSString *classDescriptorString;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) int columnCount;
@property (nonatomic, readonly) NSString *columnItemType;
@property (nonatomic, readonly) NSString *columnType;
@property (nonatomic, retain) IKCSSRule *cssRule;
@property (nonatomic, readonly) NSString *dividerType;
@property (nonatomic, readonly) unsigned int elementAlignment;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementMargin;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementPadding;
@property (nonatomic, readonly) unsigned int elementPosition;
@property (nonatomic, readonly) int fillImage;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) NSString *fontWeight;
@property (nonatomic, readonly) IKColor *ikBackgroundColor;
@property (nonatomic, readonly) IKColor *ikBorderColor;
@property (nonatomic, readonly) IKColor *ikColor;
@property (nonatomic, readonly) IKColor *ikHighlightColor;
@property (nonatomic, readonly) IKColor *imageMaskColor;
@property (nonatomic, readonly) IKColor *imagePlaceholderBackgroundColor;
@property (nonatomic, readonly) NSURL *imagePlaceholderURL;
@property (nonatomic, readonly) unsigned int imagePosition;
@property (nonatomic, readonly) NSString *imageTreatment;
@property (nonatomic, readonly) NSString *itemHeight;
@property (nonatomic, readonly) NSString *itemWidth;
@property (nonatomic, readonly) NSString *labelsState;
@property (nonatomic, readonly) NSNumber *letterSpacing;
@property (nonatomic, readonly) NSString *lockupType;
@property (nonatomic, readonly) NSString *maxHeight;
@property (nonatomic, readonly) int maxTextLines;
@property (nonatomic, readonly) NSString *maxWidth;
@property (nonatomic, retain) NSArray *mediaQueryList;
@property (nonatomic, readonly) unsigned int ordinalMaxLength;
@property (nonatomic, readonly) int reflectImage;
@property (nonatomic, readonly) NSString *rowHeight;
@property (nonatomic, retain) NSMutableDictionary *styleDict;
@property (nonatomic, readonly) unsigned int textAlignment;
@property (nonatomic, readonly) NSString *textScale;
@property (nonatomic, readonly) NSShadow *textShadow;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) NSString *transition;
@property (nonatomic, readonly) NSNumber *transitionInterval;
@property (nonatomic, readonly) NSString *visibility;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (void)addBlockedStyle:(id)arg1;
+ (unsigned int)alignmentFromString:(id)arg1;
+ (void)clearBlockedStyles;
+ (id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3;
+ (id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2;
+ (id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(BOOL)arg3;
+ (id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3;
+ (unsigned int)imageTreatmentFromString:(id)arg1;
+ (void)initialize;
+ (id)normalizeClassSelectorString:(id)arg1;
+ (unsigned int)positionFromString:(id)arg1;
+ (void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned int)arg3 inherited:(BOOL)arg4;
+ (void)registerStyle:(id)arg1 withType:(unsigned int)arg2 inherited:(BOOL)arg3;
+ (id)registeredAliases;
+ (id)registeredStyles;
+ (unsigned int)transitionFromString:(id)arg1;
+ (void)unregisterStyles;

- (void).cxx_destruct;
- (void)_addElementStyle:(id)arg1;
- (void)_addParentStyle:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForStyleKey:(id)arg1;
- (id)_gradientFromString:(id)arg1;
- (id)_newColorFromString:(id)arg1;
- (id)backgroundColor;
- (id)badgeTreatment;
- (id)borderColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderMargins;
- (id)borderRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidths;
- (id)cardType;
- (id)classDescriptorString;
- (id)color;
- (int)columnCount;
- (id)columnItemType;
- (id)columnType;
- (id)cssRule;
- (id)debugDescription;
- (id)description;
- (id)dividerType;
- (unsigned int)elementAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementPadding;
- (unsigned int)elementPosition;
- (int)fillImage;
- (float)fontSize;
- (id)fontWeight;
- (id)ikBackgroundColor;
- (id)ikBorderColor;
- (id)ikColor;
- (id)ikHighlightColor;
- (id)imageMaskColor;
- (id)imagePlaceholderBackgroundColor;
- (id)imagePlaceholderURL;
- (unsigned int)imagePosition;
- (id)imageTreatment;
- (id)initWithCSSRule:(id)arg1 filterBlockedStyles:(BOOL)arg2 selStr:(id)arg3;
- (id)initWithClassSelector:(id)arg1;
- (id)initWithStyle:(id)arg1 classSelector:(id)arg2;
- (id)itemHeight;
- (id)itemWidth;
- (id)labelsState;
- (id)letterSpacing;
- (id)lockupType;
- (id)maxHeight;
- (int)maxTextLines;
- (id)maxWidth;
- (id)mediaQueryList;
- (unsigned int)ordinalMaxLength;
- (int)reflectImage;
- (id)rowHeight;
- (void)setCssRule:(id)arg1;
- (void)setMediaQueryList:(id)arg1;
- (void)setStyleDict:(id)arg1;
- (id)styleDict;
- (unsigned int)textAlignment;
- (id)textScale;
- (id)textShadow;
- (id)textStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)transition;
- (id)transitionInterval;
- (unsigned int)typeForStyle:(id)arg1;
- (id)valueForStyle:(id)arg1;
- (id)visibility;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

+ (id)positionConstraintsForView:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 position:(unsigned int)arg3;

@end
