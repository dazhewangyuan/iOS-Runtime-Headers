/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVShapeManager : NSObject {
    OAVReadState * mOAVState;
    OCPPackagePart * mPackagePart;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * mShape;
    NSDictionary * mShapeStyle;
    NSDictionary * mTextBoxStyle;
    unsigned short  mType;
}

- (BOOL)autoInsets;
- (void)dealloc;
- (float)fillAngle;
- (float)fillBgAlpha;
- (id)fillBgColor;
- (float)fillFgAlpha;
- (id)fillFgColor;
- (float)fillFocus;
- (id)fillGradientColors;
- (id)fillType;
- (BOOL)fitShapeToText;
- (id)imageFillId;
- (id)imageFillTitle;
- (id)imageRelId;
- (id)initWithShape:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 state:(id)arg4;
- (BOOL)isFillOK;
- (BOOL)isFilled;
- (BOOL)isImage;
- (BOOL)isPolyline;
- (BOOL)isShadowOK;
- (BOOL)isShadowed;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (BOOL)isWordArt;
- (id)limo;
- (id)movieRelId;
- (id)oavState;
- (id)packagePart;
- (id)path;
- (id)points;
- (float)shadowAlpha;
- (id)shadowColor;
- (struct CGPoint { double x1; double x2; })shadowOffsets;
- (id)shadowType;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)shape;
- (id)strokeBgColor;
- (id)strokeCapStyle;
- (id)strokeCompoundType;
- (id)strokeDashStyle;
- (id)strokeEndArrowLength;
- (id)strokeEndArrowType;
- (id)strokeEndArrowWidth;
- (float)strokeFgAlpha;
- (id)strokeFgColor;
- (id)strokeFillType;
- (id)strokeJoinStyle;
- (float)strokeMiterLimit;
- (id)strokeStartArrowLength;
- (id)strokeStartArrowType;
- (id)strokeStartArrowWidth;
- (float)strokeWidth;
- (id)textAltLayoutFlow;
- (id)textAnchor;
- (id)textBodyRects;
- (struct OAVTextBoxInsets { double x1; double x2; double x3; double x4; })textInsets;
- (id)textLayoutFlow;
- (id)textRotation;
- (id)textWrapStyle;
- (unsigned short)type;

@end
