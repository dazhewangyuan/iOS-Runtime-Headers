/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideExporter : KNRenderingExporter

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (BOOL)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(BOOL)arg4;
- (BOOL)incrementPage;
- (void)setCurrentSlideNode:(id)arg1;
- (void)setup;

@end
