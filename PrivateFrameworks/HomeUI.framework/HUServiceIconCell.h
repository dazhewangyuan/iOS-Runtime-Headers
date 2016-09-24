/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceIconCell : UICollectionViewCell {
    BOOL  _hasConfiguredConstraints;
    <HFIconDescriptor> * _iconDescriptor;
    HUIconView * _iconView;
}

@property (nonatomic) BOOL hasConfiguredConstraints;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, readonly) HUIconView *iconView;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (BOOL)hasConfiguredConstraints;
- (id)iconDescriptor;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setHasConfiguredConstraints:(BOOL)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;

@end
