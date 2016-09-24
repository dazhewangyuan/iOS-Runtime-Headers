/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {
    BOOL  _didSetupTextureAdjustment;
    BOOL  _didTeardown;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _incomingTextBounds;
    struct { 
        double r; 
        double g; 
        double b; 
        double a; 
    }  _incomingTextColor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _incomingTextureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo * _incomingTextureInfo;
    BOOL  _isTextStyleIdenticalExceptSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outgoingTextBounds;
    struct { 
        double r; 
        double g; 
        double b; 
        double a; 
    }  _outgoingTextColor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _outgoingTextureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo * _outgoingTextureInfo;
    TSDGLShader * _shader;
    struct { 
        double skew; 
        double skewOffset; 
        double scale; 
    }  _textureAdjustment;
}

@property (nonatomic, readonly) TSDGLTextureInfo *incomingTextureInfo;
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize;
@property (nonatomic, readonly) TSDGLTextureInfo *outgoingTextureInfo;
@property (nonatomic, readonly) TSDGLShader *shader;

+ (void)didEndUsingShaders;
+ (id)willBeginUsingShadersWithMotionBlur:(BOOL)arg1 motionBlurIgnoreTextureOpacity:(BOOL)arg2;

- (void)dealloc;
- (id)incomingTextureInfo;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2 GLState:(id)arg3 motionBlur:(BOOL)arg4 motionBlurIgnoreTextureOpacity:(BOOL)arg5;
- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize { double x1; double x2; })arg2 outgoingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outgoingColor:(struct { double x1; double x2; double x3; double x4; })arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize { double x1; double x2; })arg6 incomingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 incomingColor:(struct { double x1; double x2; double x3; double x4; })arg8 GLState:(id)arg9 motionBlur:(BOOL)arg10 motionBlurIgnoreTextureOpacity:(BOOL)arg11;
- (BOOL)isTextStyleIdenticalExceptSize;
- (struct CGContext { }*)newContextFromTexture:(id)arg1;
- (id)outgoingTextureInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_affineTransformWithTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 textureSize:(struct CGSize { double x1; double x2; })arg2;
- (float)p_errorFromApplyingTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 toOutgoingScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg2 outgoingScanlineZeroes:(struct CGPoint { double x1; double x2; }*)arg3 incomingScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg4 incomingScanlineZeroes:(struct CGPoint { double x1; double x2; }*)arg5 samples:(unsigned int)arg6;
- (float)p_errorFromApplyingTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 toOutgoingValue:(float)arg2 incomingValue:(float)arg3 sample:(unsigned int)arg4 sampleCount:(unsigned int)arg5;
- (BOOL)p_fillScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg1 scanlineMinMaxZeroes:(struct CGPoint { double x1; double x2; }*)arg2 samples:(unsigned int)arg3 fromTexture:(unsigned int)arg4 textureSize:(struct CGSize { double x1; double x2; })arg5;
- (void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1;
- (void)setupIfNecessary;
- (void)setupShaderWithMorphPercent:(float)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 generateTextureMatrices:(BOOL)arg3;
- (void)setupShaderWithMorphPercent:(float)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 outgoingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 incomingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)shader;
- (void)teardown;
- (struct { double x1; double x2; double x3; })textureMatchingTextureAdjustment;

@end
