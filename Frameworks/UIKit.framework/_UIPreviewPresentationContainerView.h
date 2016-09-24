/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewPresentationContainerView : UIView {
    UIView * _contentTransformView;
    UIView * _contentView;
    double  _cornerRadius;
    _UIPreviewPresentationEffectView * _platterClippingView;
    UIView * _platterShadowView;
    _UIPreviewPresentationEffectView * _platterView;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    BOOL  _shouldLayoutForCommitPhase;
}

@property (nonatomic) double blurRadius;
@property (nonatomic, retain) UIView *contentTransformView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *platterClippingView;
@property (nonatomic, retain) UIView *platterShadowView;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *platterView;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) BOOL shouldLayoutForCommitPhase;
@property (nonatomic) BOOL shouldRasterizeForTransition;

- (void).cxx_destruct;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (struct CGSize { double x1; double x2; })_standardPreferredContentSize;
- (float)blurRadius;
- (id)contentTransformView;
- (id)contentView;
- (float)cornerRadius;
- (void)initPlatterViewsIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)platterClippingView;
- (id)platterShadowView;
- (id)platterView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setBlurRadius:(float)arg1;
- (void)setContentTransformView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setPlatterClippingView:(id)arg1;
- (void)setPlatterShadowView:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldLayoutForCommitPhase:(BOOL)arg1;
- (void)setShouldRasterizeForTransition:(BOOL)arg1;
- (BOOL)shouldLayoutForCommitPhase;
- (BOOL)shouldRasterizeForTransition;

@end
