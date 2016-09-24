/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUColor : NSObject <NSCopying, TSSPreset, TSSPresetSource, TSSPropertyCommandSerializing> {
    struct CGColor { } * mCGColor;
    unsigned int  mColorRGBSpace;
}

@property (readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) double alphaComponent;
@property (nonatomic, readonly) double blueComponent;
@property (nonatomic, readonly) unsigned int colorRGBSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double greenComponent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) double redComponent;
@property (readonly) Class superclass;

+ (id)blackColor;
+ (id)blueColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 targetRGBSpace:(unsigned int)arg5;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)presetKinds;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (float)alphaComponent;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)blueComponent;
- (float)brightnessComponent;
- (unsigned int)colorRGBSpace;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getRGBAComponents:(float*)arg1;
- (id)grayscaleColor;
- (float)greenComponent;
- (unsigned int)hash;
- (id)hexString;
- (float)hueComponent;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCGColor:(struct CGColor { }*)arg1 colorSpace:(unsigned int)arg2;
- (id)initWithHexString:(id)arg1;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 targetRGBSpace:(unsigned int)arg5;
- (id)initWithMessage:(const struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; }*)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 colorSpace:(unsigned int)arg5;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (id)invertedColor;
- (BOOL)isAlmostEqualToColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualWithTolerance:(id)arg1;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (float)luminance;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)p_isEqualToColor:(id)arg1 withTolerance:(float)arg2;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)presetKind;
- (float)redComponent;
- (float)saturationComponent;
- (void)saveToArchive:(struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; }*)arg1 archiver:(id)arg2;
- (void)saveToMessage:(struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; }*)arg1;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (BOOL)wantsHighContrastBackgroundForDarkMode:(id)arg1;

@end
