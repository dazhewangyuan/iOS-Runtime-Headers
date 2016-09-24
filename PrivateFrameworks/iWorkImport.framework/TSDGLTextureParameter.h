/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLTextureParameter : NSObject {
    double * _floatData;
    int * _intData;
    unsigned int  _paramCount;
    unsigned int  _pname;
}

+ (id)stringWithCurrentTextureParameters;
+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameter:(float)arg2;
+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameters:(float*)arg2 count:(unsigned int)arg3;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameter:(int)arg2;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameters:(int*)arg2 count:(unsigned int)arg3;

- (void)dealloc;
- (id)initWithPName:(unsigned int)arg1 paramCount:(unsigned int)arg2 intData:(int*)arg3 floatData:(float*)arg4;
- (void)setGLTextureParameter;

@end
