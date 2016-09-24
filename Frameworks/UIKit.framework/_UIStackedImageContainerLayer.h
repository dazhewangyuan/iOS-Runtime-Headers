/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate> {
    BOOL  _animatingStateChange;
    BOOL  _animatingToNormalState;
    double  _animationDelay;
    UIView * _animationView;
    _UIStackedImageConfiguration * _configuration;
    unsigned int  _controlState;
    CALayer * _cursorLayer;
    CALayer * _cursorLayerContainer;
    CATransformLayer * _cursorRotationTransformLayer;
    id  _flatImage;
    CALayer * _flatLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusDirection;
    CALayer * _focusKeylineStrokeLayer;
    CALayer * _frontmostPerspectiveTransformLayer;
    CATransformLayer * _frontmostRotationTransformLayer;
    double  _idleModeFocusSizeOffset;
    NSArray * _imageLayers;
    CALayer * _imageLayersContainer;
    CATransformLayer * _imagePerspectiveTransformLayer;
    CATransformLayer * _imageRotationTransformLayer;
    NSString * _imageStackContentsGravity;
    <UINamedLayerStack> * _layerStack;
    _UIStackedImageLayerDelegate * _layoutDelegate;
    CALayer * _maskLayer;
    CATransformLayer * _maskPerspectiveTransformLayer;
    CATransformLayer * _maskRotationTransformLayer;
    double  _maximumParallaxDepth;
    CALayer * _overlayContainerLayer;
    CALayer * _overlayLayer;
    NSArray * _parallaxImages;
    NSArray * _parallaxLayerDepths;
    struct CGSize { 
        double width; 
        double height; 
    }  _radiosityImageScale;
    CALayer * _radiosityLayer;
    BOOL  _radiosityNeedsLayout;
    double  _radiosityRequestTime;
    double  _rotationAmount;
    double  _scale;
    CALayer * _selectedPlaceholderLayer;
    double  _selectionDuration;
    double  _selectionStartTime;
    int  _selectionStyle;
    CALayer * _shadowLayer;
    CALayer * _specularLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationOffset;
    CALayer * _unmaskedOverlayContainerLayer;
    CALayer * _unmaskedOverlayLayer;
}

@property (nonatomic, retain) _UIStackedImageConfiguration *configuration;
@property (nonatomic) unsigned int controlState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) <UINamedLayerStack> *layerStack;
@property (getter=isPressed, nonatomic) BOOL pressed;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (readonly) Class superclass;

+ (id)_layerStackObservingKeys;
+ (struct CGSize { double x1; double x2; })_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(float)arg2 selectionStyle:(int)arg3;

- (void).cxx_destruct;
- (id)_TVTraitCollection;
- (void)_applyFocusDirectionTransform;
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cursorBounds;
- (void)_deselect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_displayFrameForModelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_flatLayer;
- (struct CGSize { double x1; double x2; })_focusCursorInsetSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (float)_focusedScaleFactorForCurrentBounds;
- (float)_focusedShadowRadius;
- (float)_getShadowOpacity;
- (float)_idleModeFocusSizeOffset;
- (id)_imageLayersContainer;
- (id)_imageStackContentsGravity;
- (BOOL)_isFocused;
- (BOOL)_isFocusedIdle;
- (BOOL)_isFocusedOrFocusedIdle;
- (BOOL)_isHighlighted;
- (BOOL)_isNormal;
- (BOOL)_isSelected;
- (id)_layerBelowTitles;
- (struct CGPoint { double x1; double x2; })_layerStackToDisplayScaleFactor;
- (void)_layoutRadiosityLayer;
- (id)_parallaxLayerDepths;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_perspectiveTransformForCurrentState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_positionAndSizeForLayerImage:(id)arg1;
- (id)_preferredLayoutDelegateForLayer:(id)arg1;
- (unsigned int)_primaryControlStateForState:(unsigned int)arg1;
- (BOOL)_radiosityEnabled;
- (id)_randomImage;
- (void)_resetAnimatingToNormalState;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_rotationTransformForCurrentFocusDirection;
- (struct CGSize { double x1; double x2; })_roundedBoundsSize;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_scaleTransformForCurrentState;
- (struct CGSize { double x1; double x2; })_scaledSizeForCurrentState;
- (int)_selectionStyle;
- (void)_setControlState:(unsigned int)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 completion:(id /* block */)arg4;
- (void)_setDefaultParallaxLayerDepths;
- (void)_setFlatImage:(id)arg1;
- (void)_setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)_setIdleModeFocusSizeOffset:(float)arg1;
- (void)_setImageStackContentsGravity:(id)arg1;
- (void)_setOverlayLayer:(id)arg1;
- (void)_setParallaxImages:(id)arg1;
- (void)_setParallaxLayerDepths:(id)arg1;
- (void)_setSelectionStyle:(int)arg1;
- (void)_setUnmaskedOverlayLayer:(id)arg1;
- (void)_setupFrontmostTransformLayers;
- (id)_shadowLayer;
- (void)_showImageLayers;
- (float)_unfocusedShadowRadius;
- (void)_updateCornerRadiusFromConfig;
- (void)_updateFocusKeylineStrokeScale;
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateFullBleedImageLayers;
- (void)_updateImageLayerFilterChains;
- (void)_updateLayerForSelection;
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1;
- (void)_updateNormalImageLayers;
- (void)_updatePerspective;
- (void)_updateRadiosityFromLayerStack;
- (void)_updateRotationAndTranslation:(id)arg1;
- (void)_updateShadowBounds;
- (void)_updateShadowPositionWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateShadowWithAnimationCoordinator:(id)arg1;
- (void)_updateSpecularLayerContentsRect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)configuration;
- (unsigned int)controlState;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (id)init;
- (BOOL)isPressed;
- (BOOL)isSelected;
- (id)layerStack;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAllAnimations;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setControlState:(unsigned int)arg1;
- (void)setControlState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setControlState:(unsigned int)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (void)setLayerStack:(id)arg1;
- (void)setPressed:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3;

@end
