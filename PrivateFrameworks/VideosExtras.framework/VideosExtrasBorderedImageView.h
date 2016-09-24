/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasBorderedImageView : UIImageView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _deferredTransform;
    BOOL  _shouldDeferSettingTransform;
    BOOL  _shouldSkipImageWhenReplicatingState;
    BOOL  _shouldUseTransformWhenReplicatingState;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } deferredTransform;
@property (nonatomic) BOOL shouldDeferSettingTransform;
@property (nonatomic) BOOL shouldSkipImageWhenReplicatingState;
@property (nonatomic) BOOL shouldUseTransformWhenReplicatingState;

- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)borderColor;
- (float)borderWidth;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setDeferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setShouldDeferSettingTransform:(BOOL)arg1;
- (void)setShouldSkipImageWhenReplicatingState:(BOOL)arg1;
- (void)setShouldUseTransformWhenReplicatingState:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (BOOL)shouldDeferSettingTransform;
- (BOOL)shouldSkipImageWhenReplicatingState;
- (BOOL)shouldUseTransformWhenReplicatingState;

@end
