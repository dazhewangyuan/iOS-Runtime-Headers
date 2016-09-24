/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITile2Filter : CITileFilter {
    NSNumber * inputAcuteAngle;
}

@property (nonatomic, retain) NSNumber *inputAcuteAngle;

+ (id)customAttributes;

- (double)_roiArea;
- (struct vec2 { double x1; double x2; })_roiCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_roiRect;
- (id)_singlePixelImage;
- (id)inputAcuteAngle;
- (id)outputImage;
- (void)setInputAcuteAngle:(id)arg1;

@end
