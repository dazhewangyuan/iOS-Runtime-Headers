/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRoundedCornerOverlayView : UIImageView {
    double  _cornerRadius;
    double  _displayScale;
    BOOL  _isPerformingChanges;
    BOOL  _isPerformingUpdates;
    struct { 
        BOOL image; 
    }  _needsUpdateFlags;
    UIColor * _overlayColor;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) UIColor *overlayColor;

- (void).cxx_destruct;
- (void)_invalidateImage;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (float)cornerRadius;
- (float)displayScale;
- (id)mutableChangeObject;
- (id)overlayColor;
- (void)performChanges:(id /* block */)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setDisplayScale:(float)arg1;
- (void)setOverlayColor:(id)arg1;

@end
