/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernel : NSObject {
    void * _priv;
}

@property (readonly) NSString *name;

+ (id)betterString:(id)arg1;
+ (id)colorMatrixBiasKernel;
+ (id)hashForString:(id)arg1;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)modifiedKernelStringForFosl:(id)arg1;

- (SEL)ROISelector;
- (id)_initWithDict:(id)arg1;
- (id)_initWithFirstKernelFromString:(id)arg1 withCruftCompatibility:(bool)arg2;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (void*)_internalRepresentation;
- (BOOL)_isValidOutputPixelFormat:(int)arg1;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; char *x3; char *x4; bool x5; struct SerialIntArray {} *x6; struct SerialStringArray {} *x7; struct __CFString {} *x8; bool x9; bool x10; bool x11; int x12; }*)arg2;
- (int)_outputPixelFormatFromExplicitAttributes:(id)arg1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)name;
- (id)parameters;
- (void)setROISelector:(SEL)arg1;

@end
