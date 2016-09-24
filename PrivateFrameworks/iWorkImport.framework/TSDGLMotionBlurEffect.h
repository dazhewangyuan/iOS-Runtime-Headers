/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLMotionBlurEffect : NSObject {
    TSDGLDataBuffer * _FBODataBuffer;
    TSDGLState * _GLState;
    TSDGLDataBuffer * _colorFBODataBuffer;
    TSDGLFrameBuffer * _colorFramebuffer;
    TSDGLFrameBuffer * _combinedFramebuffer;
    int  _debugDrawMode;
    TSDGLShader * _defaultTextureShader;
    double  _framebufferScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _framebufferSize;
    BOOL  _isSingleObject;
    double  _motionBlurStrength;
    int  _originalViewport;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _slideSize;
    TSDGLShader * _velocityCollectionShader;
    TSDGLDataBuffer * _velocityFBODataBuffer;
    TSDGLFrameBuffer * _velocityFramebuffer;
    TSDGLShader * _velocityNeighborMaxHorizontalShader;
    TSDGLShader * _velocityNeighborMaxVerticalShader;
    TSDGLDataBuffer * _velocitySquashedFBODataBuffer;
    TSDGLShader * _velocityTileMaxHorizontalShader;
    TSDGLShader * _velocityTileMaxVerticalShader;
    TSDGLShader * _velocityVisualizerShader;
}

@property (nonatomic, retain) TSDGLState *GLState;
@property (nonatomic) int debugDrawMode;
@property (nonatomic) double framebufferScale;
@property (nonatomic) BOOL isSingleObject;
@property (nonatomic) double motionBlurStrength;

- (id)GLState;
- (void)bindColorAndVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)dealloc;
- (int)debugDrawMode;
- (id)description;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (float)framebufferScale;
- (id)initWithFramebufferSize:(struct CGSize { double x1; double x2; })arg1 slideSize:(struct CGSize { double x1; double x2; })arg2 randomGenerator:(id)arg3;
- (BOOL)isSingleObject;
- (float)motionBlurStrength;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_setupShaders;
- (void)p_setupVelocityFramebufferIfNecessary;
- (struct CGSize { double x1; double x2; })p_squashedVelocityFramebufferSize;
- (void)p_updateMaxVelocityInShadersWithScale:(float)arg1 isColorFBO:(BOOL)arg2;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferSize;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferTextureScale;
- (void)setDebugDrawMode:(int)arg1;
- (void)setFramebufferScale:(float)arg1;
- (void)setGLState:(id)arg1;
- (void)setIsSingleObject:(BOOL)arg1;
- (void)setMotionBlurStrength:(float)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize { double x1; double x2; })velocityScaleForColorFBO:(BOOL)arg1;

@end
