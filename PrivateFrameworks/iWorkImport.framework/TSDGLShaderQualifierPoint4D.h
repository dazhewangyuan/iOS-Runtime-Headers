/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _GLPoint4DValue;
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _proposedGLPoint4DValue;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } GLPoint4DValue;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } proposedGLPoint4DValue;

- (struct { double x1; double x2; double x3; double x4; })GLPoint4DValue;
- (id)description;
- (struct { double x1; double x2; double x3; double x4; })proposedGLPoint4DValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLPoint4DValue:(struct { double x1; double x2; double x3; double x4; })arg1;

@end
