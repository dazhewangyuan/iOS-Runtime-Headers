/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent {
    int  _blendMode;
    unsigned int  _blurSize;
    CUIColor * _color;
    double  _opacity;
    unsigned int  _spread;
}

@property int blendMode;
@property unsigned int blurSize;
@property (retain) CUIColor *color;
@property double opacity;
@property unsigned int spread;

- (int)blendMode;
- (unsigned int)blurSize;
- (id)color;
- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (float)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setBlurSize:(unsigned int)arg1;
- (void)setColor:(id)arg1;
- (void)setOpacity:(float)arg1;
- (void)setSpread:(unsigned int)arg1;
- (unsigned int)spread;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
