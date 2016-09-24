/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIActivityIndicatorView : SKUIViewReuseView <SKUIViewElementView> {
    unsigned int  _alignment;
    BOOL  _animating;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIImageView * _imageView;
    UIActivityIndicatorView * _indicatorView;
    double  _period;
    SKUIAttributedStringView * _stringView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_activityIndicatorSize;
+ (id)_attributedStringWithLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (BOOL)_isAnimating;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)_updateSpinnerAnimation;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
