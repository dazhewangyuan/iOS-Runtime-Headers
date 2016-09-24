/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffectView : UIView <NSSecureCoding> {
    BOOL  __blurDisabled;
    _UIVisualEffectBackdropView * _backdropSubview;
    _UIVisualEffectFilterView * _colorBurnSubview;
    _UIVisualEffectFilterView * _colorSubview;
    _UIVisualEffectContentView * _contentView;
    double  _cornerRadius;
    _UIVisualEffectFilterView * _darkeningSubview;
    UIVisualEffect * _effect;
    NSArray * _effectConfigViews;
    struct { 
        unsigned int hasHadAlphaAnimated : 1; 
        unsigned int suppressReportingEmptyContentView : 1; 
        unsigned int interactiveAnimationInFlight : 1; 
        unsigned int interactiveAnimationCompleted : 1; 
        unsigned int cornerRadiusIsContinuous : 1; 
    }  _effectViewFlags;
    _UIVisualEffectFilterView * _grayscaleSubview;
    NSString * _groupName;
    UIImage * _maskImage;
    UIView * _maskView;
    UIVisualEffect * _overrideEffect;
}

@property (getter=_isBlurDisabled, setter=_setBlurDisabled:, nonatomic) BOOL _blurDisabled;
@property (setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (nonatomic, readonly) NSArray *_effectViews;
@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (setter=_setMaskImage:, nonatomic, retain) UIImage *_maskImage;
@property (nonatomic, readonly) UIVisualEffect *_trueEffect;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) UIVisualEffect *effect;
@property (nonatomic, retain) UIVisualEffect *overrideEffect;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyCornerRadiusToSubviews;
- (void)_applyGroupNameToSubviews;
- (id)_backdropSubview;
- (void)_commonInit;
- (void)_configureBackgroundColorForEffectIfNeeded;
- (void)_configureForCurrentEffect;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (float)_continuousCornerRadius;
- (float)_cornerRadius;
- (void)_createContentViewIfNecessary;
- (id)_effectViews;
- (id)_groupName;
- (BOOL)_isBlurDisabled;
- (id)_maskImage;
- (id)_maskViewImageMask;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_rebuildEffectViewForCurrentEffect;
- (void)_setBlurDisabled:(BOOL)arg1;
- (void)_setContinuousCornerRadius:(float)arg1;
- (void)_setCornerRadius:(float)arg1;
- (void)_setEffect:(id)arg1;
- (void)_setGroupName:(id)arg1;
- (void)_setMaskImage:(id)arg1;
- (void)_setTintOpacity:(float)arg1;
- (void)_setupEffectsViewsForSettings:(id)arg1;
- (BOOL)_shouldRegenerateMasksForNewMaskView:(id)arg1;
- (id)_trueEffect;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_updateEffectForInterfaceStyle:(int)arg1;
- (void)_updateEffectViewMasks;
- (id)_whatsWrongWithThisEffect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)contentView;
- (void)dealloc;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskView;
- (id)overrideEffect;
- (void)setContentView:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setOverrideEffect:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidMoveToSuperview;

@end
