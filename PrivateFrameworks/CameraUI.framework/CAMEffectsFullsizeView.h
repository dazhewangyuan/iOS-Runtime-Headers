/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMEffectsFullsizeView : CAMGLView {
    int  _filterType;
    CIFilter * _selectedFilter;
    int  _selectedFilterType;
}

@property int filterType;

- (void).cxx_destruct;
- (void)_layoutGLLayer;
- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (id)_updateSelectedFilter;
- (int)filterType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (void)setFilterType:(int)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;

@end
