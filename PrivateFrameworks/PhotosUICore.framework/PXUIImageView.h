/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIImageView : UIView <PXAdjustableContentsView> {
    PXRoundedCornerOverlayView * __cornerView;
    PXFocusableUIImageView * __imageView;
    NSArray * __overlaySpecs;
    BOOL  _animating;
    UIView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _floatingInsets;
    UIView * _floatingOverlayView;
    BOOL  _floatingRotationEnabled;
    BOOL  _floatingViewEnabled;
    BOOL  _hasParallax;
    UIImage * _image;
    NSMutableArray * _overlayViews;
    PXImageViewSpec * _spec;
}

@property (setter=_setCornerView:, nonatomic, retain) PXRoundedCornerOverlayView *_cornerView;
@property (nonatomic, readonly) PXFocusableUIImageView *_imageView;
@property (setter=_setOverlaySpecs:, nonatomic, copy) NSArray *_overlaySpecs;
@property (nonatomic) BOOL allowsFocus;
@property (getter=isAnimating, nonatomic) BOOL animating;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingRotationEnabled, nonatomic) BOOL floatingRotationEnabled;
@property (nonatomic) BOOL floatingViewEnabled;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PXImageViewSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_PXUIImageViewInitialization;
- (id)_cornerView;
- (id)_imageView;
- (id)_overlaySpecs;
- (void)_setCornerView:(id)arg1;
- (void)_setOverlaySpecs:(id)arg1;
- (void)_updateCorners;
- (void)_updateFloatingOverlay;
- (void)_updateSubviewsOrdering;
- (BOOL)allowsFocus;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (BOOL)floatingViewEnabled;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isAnimating;
- (BOOL)isFloatingRotationEnabled;
- (void)setAllowsFocus:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setContentMode:(int)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFloatingOverlay:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 parallax:(BOOL)arg3;
- (void)setFloatingRotationEnabled:(BOOL)arg1;
- (void)setFloatingViewEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)traitCollectionDidChange:(id)arg1;

@end
