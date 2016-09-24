/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView {
    BOOL  _didDrawOnce;
    double  _fillFraction;
    NTKColoringImageView * _fillFractionRing;
}

@property (nonatomic) double fillFraction;
@property (nonatomic, retain) NTKColoringImageView *fillFractionRing;

- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (float)fillFraction;
- (id)fillFractionRing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)ringColor;
- (void)setFillFraction:(float)arg1;
- (void)setFillFractionRing:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(float)arg2;

@end
