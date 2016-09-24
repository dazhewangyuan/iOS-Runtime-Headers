/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLCurvedShadow : TSDGLShadow {
    TSDGLDataBuffer * mAlphaDataBuffer;
    TSDGLFrameBuffer * mAlphaFrameBuffer;
    TSDGLShader * mAlphaShader;
    char * mBuffer;
    CIContext * mCIContext;
    TSDGLDataBuffer * mCurveInterpolationDataBuffer;
    TSDGLFrameBuffer * mCurveInterpolationFrameBuffer;
    TSDGLShader * mCurveInterpolationShader;
    TSDGLShader * mCurvedShader;
}

- (float)baseBlurRadiusForCurve:(float)arg1 framebufferSize:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (void)drawShadow:(id)arg1 forImage:(struct CGImage { }*)arg2 inContext:(struct CGContext { }*)arg3 forSize:(struct CGSize { double x1; double x2; })arg4;
- (id)p_alphaOnlyImageFromImage:(id)arg1;
- (id)p_blurredImage:(id)arg1 edgeBlurRadius:(float)arg2 middleBlurRadius:(float)arg3 padding:(float)arg4 edgeOpacity:(float)arg5 middleOpacity:(float)arg6;
- (id)p_curvedImageFromImage:(id)arg1 curveAmount:(float)arg2 padding:(float)arg3;
- (id)p_debugColorOverlayImageFromImage:(id)arg1;
- (void)p_debugLogImage:(id)arg1 name:(id)arg2;
- (id)p_gradientImageWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 middleWhiteValue:(float)arg2 edgeWhiteValue:(float)arg3 includeAlpha:(BOOL)arg4 padding:(float)arg5;
- (id)p_imageByMultiplyingImage:(id)arg1 withImage:(id)arg2;
- (void)p_setupCIContext;
- (BOOL)p_shrinkImageIfNecessary:(struct CGImage { }*)arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 newImage:(struct CGImage {}**)arg3 newSize:(struct CGSize { double x1; double x2; }*)arg4;
- (id)p_tintedCIImageFromImage:(id)arg1 withColor:(struct { double x1; double x2; double x3; double x4; })arg2;

@end
