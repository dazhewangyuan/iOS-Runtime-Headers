/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextBox : GQHParagraphStyle

+ (void)createExternalWrapSandbagStyles:(id)arg1;
+ (int)handleLayoutStorage:(id)arg1 state:(id)arg2;
+ (int)handleShapeText:(id)arg1 boundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 floating:(BOOL)arg3 state:(id)arg4;
+ (void)mapLayout:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapScaledImageFill:(id)arg1 style:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (const char *)name;
+ (int)outputInnerSandbagsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawable:(id)arg2 state:(id)arg3;
+ (int)outputInnerSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;
+ (void)outputSandbag:(id)arg1 state:(id)arg2;
+ (int)outputWrapSandbagsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4;
+ (BOOL)outputWrapSandbagsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4 isPageFrame:(BOOL)arg5;
+ (int)outputWrapSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;
+ (BOOL)styleNeedsImageFillMapping:(id)arg1;

@end
