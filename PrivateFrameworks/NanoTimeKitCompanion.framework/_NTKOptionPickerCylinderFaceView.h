/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKOptionPickerCylinderFaceView : UIView <NTKPolygonCylinderFaceView> {
    double  _breathingScale;
    double  _contentAlpha;
    UIView * _optionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *optionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)applyBreathingScale:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)optionView;
- (void)setOptionView:(id)arg1;
- (void)setRotationFromFront:(float)arg1;

@end
