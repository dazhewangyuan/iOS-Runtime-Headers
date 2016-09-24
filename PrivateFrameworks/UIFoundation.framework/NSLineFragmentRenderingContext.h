/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSLineFragmentRenderingContext : NSObject {
    struct CGSize { double x1; double x2; } * _advancements;
    CUICatalog * _catalog;
    double  _elasticWidth;
    struct { 
        unsigned int _isRTL : 1; 
        unsigned int _vAdvance : 1; 
        unsigned int _flipped : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _reserved : 28; 
    }  _flags;
    unsigned short * _glyphs;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageBounds;
    double  _leftControlWidth;
    double  _leftSideDelta;
    double  _lineWidth;
    long  _numRuns;
    int  _resolvedAlignment;
    int  _resolvedDirection;
    double  _rightControlWidth;
    void * _runs;
    CUIStyleEffectConfiguration * _styleEffects;
}

@property (nonatomic, retain) CUICatalog *cuiCatalog;
@property (nonatomic, retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property int resolvedBaseWritingDirection;
@property int resolvedTextAlignment;
@property (getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:, nonatomic) BOOL usesSimpleTextEffects;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (BOOL)_isDeallocating;
- (void)_setUsesSimpleTextEffects:(BOOL)arg1;
- (BOOL)_tryRetain;
- (BOOL)_usesSimpleTextEffects;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (float)elasticWidth;
- (void)finalize;
- (void)getMaximumAscender:(float*)arg1 minimumDescender:(float*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (id)initWithRuns:(struct __CFArray { }*)arg1 glyphOrigin:(float)arg2 lineFragmentWidth:(float)arg3 elasticWidth:(float)arg4 usesScreenFonts:(BOOL)arg5 isRTL:(BOOL)arg6;
- (BOOL)isRTL;
- (float)lineFragmentWidth;
- (oneway void)release;
- (int)resolvedBaseWritingDirection;
- (int)resolvedTextAlignment;
- (void)setCuiCatalog:(id)arg1;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setResolvedBaseWritingDirection:(int)arg1;
- (void)setResolvedTextAlignment:(int)arg1;
- (struct CGSize { double x1; double x2; })sizeWithBehavior:(int)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(float*)arg3;

@end
