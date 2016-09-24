/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPickerBannerView : UIView {
    int  __alignment;
    BOOL  __animatingStackView;
    id /* block */  __animationCompletionHandler;
    UILabel * __label;
    PUStackView * __stackView;
    NSArray * _images;
    UIView * _leftView;
    UIView * _rightView;
    unsigned int  _style;
    NSString * _title;
}

@property (setter=_setAlignment:, nonatomic) int _alignment;
@property (setter=_setAnimatingStackView:, nonatomic) BOOL _animatingStackView;
@property (setter=_setAnimationCompletionHandler:, nonatomic, copy) id /* block */ _animationCompletionHandler;
@property (setter=_setLabel:, nonatomic, retain) UILabel *_label;
@property (setter=_setStackView:, nonatomic, retain) PUStackView *_stackView;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic) unsigned int style;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (int)_alignment;
- (BOOL)_animatingStackView;
- (id /* block */)_animationCompletionHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameReversedIfRightToLeft:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_label;
- (void)_setAlignment:(int)arg1;
- (void)_setAnimatingStackView:(BOOL)arg1;
- (void)_setAnimationCompletionHandler:(id /* block */)arg1;
- (void)_setLabel:(id)arg1;
- (void)_setStackView:(id)arg1;
- (id)_stackView;
- (void)_updateAlignment;
- (void)_updateLabel;
- (void)_updateStackView;
- (void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)images;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftView;
- (id)rightView;
- (void)setImages:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setStyle:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (unsigned int)style;
- (id)title;

@end
