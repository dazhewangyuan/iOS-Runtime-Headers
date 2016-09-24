/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColoringImageView : UIImageView <NTKColoringView> {
    _NTKColorManager * _colorManager;
    CLKImageProvider * _imageProvider;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    UIColor * _overrideColor;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CLKImageProvider *imageProvider;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, retain) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility;

- (void).cxx_destruct;
- (void)_commonInit;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateImageColor;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)imageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)overrideColor;
- (void)setImage:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setUsesLegibility:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (BOOL)usesLegibility;

@end
