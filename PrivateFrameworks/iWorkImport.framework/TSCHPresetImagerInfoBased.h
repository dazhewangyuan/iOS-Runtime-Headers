/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImagerInfoBased : TSCHPresetImager {
    TSCHChartType * mChartType;
}

+ (id)presetImagerForChartType:(id)arg1;

- (void)dealloc;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 imageScale:(float)arg4 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7;
- (id)initWithChartType:(id)arg1;
- (id)p_chartType;
- (id)p_imageRectAdjustments;
- (id)p_rectAdjustmentForChartType:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swatchImageEdgeInsetsForSize:(struct CGSize { double x1; double x2; })arg1;

@end
