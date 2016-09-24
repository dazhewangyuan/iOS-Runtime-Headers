/* Generated by RuntimeBrowser.
 */

@protocol MTLRenderCommandEncoder <MTLCommandEncoder>

@required

- (void)drawIndexedPatches:(unsigned int)arg1 patchIndexBuffer:(id <MTLBuffer>)arg2 patchIndexBufferOffset:(unsigned int)arg3 controlPointIndexBuffer:(id <MTLBuffer>)arg4 controlPointIndexBufferOffset:(unsigned int)arg5 indirectBuffer:(id <MTLBuffer>)arg6 indirectBufferOffset:(unsigned int)arg7;
- (void)drawIndexedPatches:(unsigned int)arg1 patchStart:(unsigned int)arg2 patchCount:(unsigned int)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned int)arg5 controlPointIndexBuffer:(id <MTLBuffer>)arg6 controlPointIndexBufferOffset:(unsigned int)arg7 instanceCount:(unsigned int)arg8 baseInstance:(unsigned int)arg9;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned int)arg5;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseVertex:(int)arg7 baseInstance:(unsigned int)arg8;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexType:(unsigned int)arg2 indexBuffer:(id <MTLBuffer>)arg3 indexBufferOffset:(unsigned int)arg4 indirectBuffer:(id <MTLBuffer>)arg5 indirectBufferOffset:(unsigned int)arg6;
- (void)drawPatches:(unsigned int)arg1 patchIndexBuffer:(id <MTLBuffer>)arg2 patchIndexBufferOffset:(unsigned int)arg3 indirectBuffer:(id <MTLBuffer>)arg4 indirectBufferOffset:(unsigned int)arg5;
- (void)drawPatches:(unsigned int)arg1 patchStart:(unsigned int)arg2 patchCount:(unsigned int)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseInstance:(unsigned int)arg7;
- (void)drawPrimitives:(unsigned int)arg1 indirectBuffer:(id <MTLBuffer>)arg2 indirectBufferOffset:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4 baseInstance:(unsigned int)arg5;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setColorStoreAction:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setCullMode:(unsigned int)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthClipMode:(unsigned int)arg1;
- (void)setDepthStencilState:(id <MTLDepthStencilState>)arg1;
- (void)setDepthStoreAction:(unsigned int)arg1;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned int*)arg2 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setFrontFacingWinding:(unsigned int)arg1;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
- (void)setScissorRect:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned int)arg1;
- (void)setTessellationFactorBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 instanceStride:(unsigned int)arg3;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTriangleFillMode:(unsigned int)arg1;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned int*)arg2 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setVertexTexture:(id <MTLTexture>)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVisibilityResultMode:(unsigned int)arg1 offset:(unsigned int)arg2;
- (void)textureBarrier;
- (void)updateFence:(id <MTLFence>)arg1 afterStages:(unsigned int)arg2;
- (void)waitForFence:(id <MTLFence>)arg1 beforeStages:(unsigned int)arg2;

@end
