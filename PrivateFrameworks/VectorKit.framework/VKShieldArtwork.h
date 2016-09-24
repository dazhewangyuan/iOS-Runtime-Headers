/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldArtwork : NSObject {
    struct CGImage { } * _backgroundImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSCache * _imageCache;
    double  _lineHeight;
    double  _lineSpacing;
    id /* block */  _newContext;
    struct __CTFont { } * _nonDigitFont;
    struct CGColor { } * _nonDigitFontColor;
    BOOL  _resizable;
    struct { 
        double leftCapWidth; 
        double rightCapWidth; 
        double leftPadding; 
        double rightPadding; 
    }  _resizableInfo;
    double  _scale;
    struct CGColor { } * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowRadius;
    NSDictionary * _stringAttributes;
    struct CGContext { } * _templateContext;
    double  _textBaseline;
    double  _textCenterOffsetX;
    NSMutableDictionary * _textSpecificArtworks;
}

@property (nonatomic, readonly) double scale;

- (id)_initWithBackgroundImage:(struct CGImage { }*)arg1 contentScale:(float)arg2 resizableInfo:(struct { double x1; double x2; double x3; double x4; }*)arg3 font:(struct __CTFont { }*)arg4 nonDigitFont:(struct __CTFont { }*)arg5 textColor:(struct CGColor { }*)arg6 nonDigitTextColor:(struct CGColor { }*)arg7 textCenterOffsetX:(float)arg8 textBaseline:(float)arg9 textStrokeWidth:(float)arg10 textStrokeColor:(struct CGColor { }*)arg11 textShadowOffset:(struct CGSize { double x1; double x2; })arg12 textShadowRadius:(float)arg13 textShadowColor:(struct CGColor { }*)arg14 lineSpacing:(float)arg15;
- (void)dealloc;
- (id)imageWithShieldText:(id)arg1;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2 widthPaddingMultiple:(float)arg3;
- (id)imageWithShieldText:(id)arg1 widthPaddingMultiple:(float)arg2;
- (id)initWithBackgroundImage:(struct CGImage { }*)arg1 contentScale:(float)arg2 font:(struct __CTFont { }*)arg3 nonDigitFont:(struct __CTFont { }*)arg4 textColor:(struct CGColor { }*)arg5 nonDigitTextColor:(struct CGColor { }*)arg6 textCenterOffsetX:(float)arg7 textBaseline:(float)arg8 textStrokeWidth:(float)arg9 textStrokeColor:(struct CGColor { }*)arg10 textShadowOffset:(struct CGSize { double x1; double x2; })arg11 textShadowRadius:(float)arg12 textShadowColor:(struct CGColor { }*)arg13;
- (id)initWithPackedVariant:(id)arg1 backgroundImage:(struct CGImage { }*)arg2 scale:(float)arg3 colors:(struct { struct Matrix<float, 4, 1> { double x_1_1_1[4]; } x1; }*)arg4;
- (id)initWithResizableBackgroundImage:(struct CGImage { }*)arg1 resizableInfo:(struct { double x1; double x2; double x3; double x4; }*)arg2 contentScale:(float)arg3 font:(struct __CTFont { }*)arg4 nonDigitFont:(struct __CTFont { }*)arg5 textColor:(struct CGColor { }*)arg6 nonDigitTextColor:(struct CGColor { }*)arg7 textCenterOffsetX:(float)arg8 textBaseline:(float)arg9 textStrokeWidth:(float)arg10 textStrokeColor:(struct CGColor { }*)arg11 textShadowOffset:(struct CGSize { double x1; double x2; })arg12 textShadowRadius:(float)arg13 textShadowColor:(struct CGColor { }*)arg14 lineSpacing:(float)arg15;
- (struct CGImage { }*)newImageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2 widthPaddingMultiple:(float)arg3 centerPoint:(struct CGPoint { double x1; double x2; }*)arg4;
- (float)scale;
- (void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2;

@end
