/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceField : NSObject {
    TSDGLState * _GLState;
    double  _downsampleScale;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    TSDGLFrameBuffer * _exteriorFramebuffer;
    unsigned int  _inputTexture;
    TSDGLFrameBuffer * _interiorFramebuffer;
    int  _oldViewport;
    TSDGLDataBuffer * _origDataBuffer;
    TSDGLDataBuffer * _rectDataBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _resultTextureSize;
    TSDGLDataBuffer * _squareDataBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _squareSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
}

+ (void)didEndUsingShaders;
+ (id)distanceFieldTextureWithTexture:(unsigned int)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2 maxDistance:(int)arg3 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 downsampleScale:(float)arg5 floatTexture:(BOOL)arg6 GLState:(id)arg7;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 downsampleScale:(float)arg4 GLState:(id)arg5;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1 floatTexture:(BOOL)arg2;
- (void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(int)arg2;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg1 withCurrentGLFramebuffer:(int)arg2;
- (void)p_seedTextureFromTexture:(unsigned int)arg1 invertSeed:(BOOL)arg2;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)p_writeIntoSquareTexture;
- (void)teardown;

@end
