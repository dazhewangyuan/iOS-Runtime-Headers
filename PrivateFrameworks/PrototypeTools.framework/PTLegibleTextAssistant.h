/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTLegibleTextAssistant : NSObject {
    double  _alphaStrength;
    BOOL  _effectsDisabled;
    struct { 
        double meanRed; 
        double meanGreen; 
        double meanBlue; 
        double meanHue; 
        double meanSaturation; 
        double meanBrightness; 
        double meanAlpha; 
        double standardDeviationBrightness; 
        double standardDeviationSaturation; 
    }  _imageStatistics;
    double  _largestShadowRadius;
    double  _radiusStrength;
    PTLegibleTextAssistantSettings * _settings;
}

@property (nonatomic) double alphaStrength;
@property (nonatomic) BOOL effectsDisabled;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } imageStatistics;
@property (nonatomic) double largestShadowRadius;
@property (nonatomic) double radiusStrength;
@property (nonatomic, retain) PTLegibleTextAssistantSettings *settings;

- (void).cxx_destruct;
- (float)alphaStrength;
- (BOOL)effectsDisabled;
- (id)generateForegroundImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)generateTextAssistantImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })imageStatistics;
- (id)initWithImageStatistics:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (float)largestShadowRadius;
- (id)legibleTextAssistantViewForText:(id)arg1 font:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legibleTextAssistantViewFrameForText:(id)arg1 font:(id)arg2;
- (float)radiusStrength;
- (void)setAlphaStrength:(float)arg1;
- (void)setEffectsDisabled:(BOOL)arg1;
- (void)setImageStatistics:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (void)setLargestShadowRadius:(float)arg1;
- (void)setRadiusStrength:(float)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
