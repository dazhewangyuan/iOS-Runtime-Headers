/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTransportButton : UIButton <MPUTransportButton> {
    UIColor * _disabledColor;
    UIColor * _highlightedColor;
    UIColor * _regularColor;
    UIColor * _selectedColor;
    CALayer * _selectionIndicatorLayer;
    BOOL  _shouldInferColorsFromTintColor;
    BOOL  _shouldShowBackgroundForSelectedState;
    MPUTransportButtonEventHandler * _transportButtonEventHandler;
    UIImage * _transportButtonImage;
}

@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *disabledColor;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIColor *highlightedColor;
@property (nonatomic, retain) UIColor *regularColor;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) BOOL shouldInferColorsFromTintColor;
@property (nonatomic) BOOL shouldShowBackgroundForSelectedState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic, retain) UIImage *transportButtonImage;
@property (nonatomic) int transportButtonImageViewContentMode;

+ (id)_stringForDisplayedSkipInterval:(double)arg1;
+ (id)defaultDisabledColor;
+ (id)defaultHighlightedColor;
+ (id)defaultRegularColor;
+ (id)defaultSelectedColor;
+ (id)skipIntervalImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(float)arg4;
+ (id)transportButton;

- (void).cxx_destruct;
- (void)_updateDisabledTransportButtonImage;
- (void)_updateHighlightedTransportButtonImage;
- (void)_updateRegularTransportButtonImage;
- (void)_updateSelectedTransportButtonImage;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)disabledColor;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)highlightedColor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)regularColor;
- (id)selectedColor;
- (void)setDisabledColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlightedColor:(id)arg1;
- (void)setRegularColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShouldInferColorsFromTintColor:(BOOL)arg1;
- (void)setShouldShowBackgroundForSelectedState:(BOOL)arg1;
- (void)setTransportButtonImage:(id)arg1;
- (void)setTransportButtonImageViewContentMode:(int)arg1;
- (BOOL)shouldInferColorsFromTintColor;
- (BOOL)shouldShowBackgroundForSelectedState;
- (BOOL)shouldTrack;
- (id)transportButtonEventHandler;
- (id)transportButtonImage;
- (int)transportButtonImageViewContentMode;
- (BOOL)wantsCustomHighlightAppearance;

@end
