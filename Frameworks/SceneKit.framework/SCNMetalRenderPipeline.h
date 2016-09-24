/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalRenderPipeline : NSObject {
    unsigned int  _buffersUsageMask;
    NSArray * _frameBufferBindings;
    NSArray * _lightBufferBindings;
    NSArray * _nodeBufferBindings;
    struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; } * _pass;
    NSArray * _passBufferBindings;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _program;
    unsigned int  _samplersUsageMask;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _sceneBuffer;
    NSArray * _shadableBufferBindings;
    <MTLRenderPipelineState> * _state;
    unsigned int  _texturesUsageMask;
}

@property (nonatomic, copy) NSArray *frameBufferBindings;
@property (nonatomic, copy) NSArray *lightBufferBindings;
@property (nonatomic, copy) NSArray *nodeBufferBindings;
@property (nonatomic, copy) NSArray *passBufferBindings;
@property (nonatomic, copy) NSArray *shadableBufferBindings;
@property (nonatomic, retain) <MTLRenderPipelineState> *state;
@property (nonatomic, readonly) unsigned int vertexBuffersUsageMask;

- (void)_computeUsageForArguments:(id)arg1 stage:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)frameBufferBindings;
- (id)init;
- (id)lightBufferBindings;
- (id)nodeBufferBindings;
- (id)passBufferBindings;
- (void)setFrameBufferBindings:(id)arg1;
- (void)setLightBufferBindings:(id)arg1;
- (void)setNodeBufferBindings:(id)arg1;
- (void)setPassBufferBindings:(id)arg1;
- (void)setShadableBufferBindings:(id)arg1;
- (void)setState:(id)arg1;
- (id)shadableBufferBindings;
- (id)state;
- (unsigned int)vertexBuffersUsageMask;

@end
