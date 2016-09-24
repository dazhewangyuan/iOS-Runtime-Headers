/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {
    UIColor * _averageColor;
    <SBFCancelable> * _colorBoxCancelToken;
    UIImageView * _gradientView;
    UIImageView * _imageView;
    double  _minimumZoomScale;
    double  _minimumZoomScaleForParallax;
    BOOL  _parallaxCanBeEnabledAutomatically;
    <SBFCancelable> * _parallaxCancelToken;
    SBFLockScreenWallpaperParallaxSettings * _parallaxSettings;
    UIScrollView * _scrollView;
    SBFSubject * _scrollViewObserver;
}

@property (readonly) UIColor *averageColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_canCacheImages;
+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)_shouldScaleForParallax;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_boundedContentOffsetForOverhang;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRect;
- (struct CGSize { double x1; double x2; })_imageSize;
- (struct CGPoint { double x1; double x2; })_maximumContentOffsetForOverhang;
- (struct CGPoint { double x1; double x2; })_minimumContentOffsetForOverhang;
- (id)_newImageView;
- (float)_parallaxFactorWithZoomScale:(float)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_scrollView;
- (float)_scrollViewParallaxFactor;
- (void)_setupColorBoxObserver;
- (void)_setupContentView;
- (void)_setupParallaxObserver;
- (void)_setupScrollView;
- (void)_setupScrollViewObserver;
- (float)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;
- (id)averageColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (float)cropZoomScale;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (void)layoutSubviews;
- (void)legibilitySettingsDidChange;
- (float)parallaxFactor;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)setParallaxEnabled:(BOOL)arg1;
- (BOOL)supportsCropping;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
