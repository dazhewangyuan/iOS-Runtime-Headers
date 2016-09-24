/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityDialView : UIView {
    NTKFaceColorScheme * _colorScheme;
    NSArray * _segments;
    BOOL  _shouldRasterize;
    double  _zoomFraction;
}

@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) double zoomFraction;

- (void).cxx_destruct;
- (float)_handAlphaForEditMode:(int)arg1;
- (float)_segmentAlphaForEditMode:(int)arg1;
- (void)applyTransitionFromScheme:(id)arg1 toScheme:(id)arg2 fraction:(float)arg3;
- (id)colorScheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)segments;
- (void)setColorScheme:(id)arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (void)setZoomFraction:(float)arg1;
- (BOOL)shouldRasterize;
- (float)zoomFraction;

@end
