/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView {
    NTKColoringLabel * _label;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (BOOL)supportsComplicationFamily:(int)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)_updateLabelsForFontChange;
- (BOOL)_wantsPlatter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)updateLabelWithString:(id)arg1;

@end
