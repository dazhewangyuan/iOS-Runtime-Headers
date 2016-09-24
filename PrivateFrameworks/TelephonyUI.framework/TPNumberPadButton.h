/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {
    UIColor * _color;
    CALayer * _glyphLayer;
    CALayer * _highlightedGlyphLayer;
    TPRevealingRingView * _revealingRingView;
    unsigned int  character;
}

@property (nonatomic) double alphaOutsideAndInsideRing;
@property unsigned int character;
@property (nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CALayer *glyphLayer;
@property (readonly) unsigned int hash;
@property (retain) CALayer *highlightedGlyphLayer;
@property (nonatomic, readonly) TPRevealingRingView *revealingRingView;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (float)highlightCrossfadeHighlightBeginTime;
+ (float)highlightCrossfadeHighlightFadeDuration;
+ (float)highlightCrossfadeNormalBeginTime;
+ (float)highlightCrossfadeNormalFadeDuration;
+ (float)horizontalPadding;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)localizedLettersForCharacter:(unsigned int)arg1;
+ (float)outerCircleDiameter;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (void)resetLocale;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (float)unhighlightCrossfadeHighlightBeginTime;
+ (float)unhighlightCrossfadeHighlightFadeDuration;
+ (float)unhighlightCrossfadeNormalBeginTime;
+ (float)unhighlightCrossfadeNormalFadeDuration;
+ (BOOL)usesBoldAssets;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (float)verticalPadding;

- (void).cxx_destruct;
- (float)alphaOutsideAndInsideRing;
- (unsigned int)character;
- (id)color;
- (id)defaultColor;
- (id)glyphLayer;
- (id)highlightedGlyphLayer;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initForCharacter:(unsigned int)arg1;
- (void)loadImagesForCurrentCharacter;
- (id)revealingRingView;
- (void)setAlphaOutsideAndInsideRing:(float)arg1;
- (void)setCharacter:(unsigned int)arg1;
- (void)setColor:(id)arg1;
- (void)setGlyphLayer:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedGlyphLayer:(id)arg1;
- (void)setUsesColorBurnBlending;
- (void)setUsesColorDodgeBlending;
- (void)touchCancelled;
- (void)touchDown;
- (void)touchUp;

@end
