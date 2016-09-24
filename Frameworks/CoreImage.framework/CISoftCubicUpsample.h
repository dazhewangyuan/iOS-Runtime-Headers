/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISoftCubicUpsample : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (struct vec2 { double x1; double x2; })_scale;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
