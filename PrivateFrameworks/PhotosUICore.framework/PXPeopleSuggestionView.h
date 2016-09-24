/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSuggestionView : PXSmartScaleView {
    UIView * _dimView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceRect;
    NSTimer * _imageLoadInvalidationTimer;
    UIImageView * _imageView;
    BOOL  _needsSpotlightUpdate;
    CAShapeLayer * _spotlightLayer;
    <PXFaceCollection> * _suggestion;
    UIView * _suggestionView;
    BOOL  _validSpotlight;
}

@property (nonatomic, retain) UIView *dimView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property (retain) NSTimer *imageLoadInvalidationTimer;
@property (nonatomic, retain) UIImageView *imageView;
@property BOOL needsSpotlightUpdate;
@property (nonatomic, retain) CAShapeLayer *spotlightLayer;
@property (nonatomic, readonly) <PXFaceCollection> *suggestion;
@property (nonatomic, retain) UIView *suggestionView;
@property BOOL validSpotlight;

- (void).cxx_destruct;
- (float)_faceScale;
- (void)_fetchImageForSuggestion:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledFaceRect;
- (void)_updateSpotlightAnimated:(BOOL)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)dimView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (id)imageLoadInvalidationTimer;
- (id)imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)needsSpotlightUpdate;
- (void)setDimView:(id)arg1;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageLoadInvalidationTimer:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setNeedsSpotlightUpdate:(BOOL)arg1;
- (void)setSpotlightLayer:(id)arg1;
- (void)setSuggestion:(id)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)setSuggestionView:(id)arg1;
- (void)setValidSpotlight:(BOOL)arg1;
- (id)spotlightLayer;
- (id)suggestion;
- (id)suggestionView;
- (void)updateSuggestionImageWithAnimatedSpotlight:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)validSpotlight;
- (void)viewScaleDidChange;

@end
