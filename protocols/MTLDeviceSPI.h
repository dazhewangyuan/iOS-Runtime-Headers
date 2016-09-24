/* Generated by RuntimeBrowser.
 */

@protocol MTLDeviceSPI <MTLDevice>

@required

+ (void)registerDevices;

- (unsigned int)acceleratorPort;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (unsigned int)dedicatedMemorySize;
- (unsigned int)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned int)deviceLinearTextureAlignmentBytes;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned int)arg1;
- (BOOL)deviceSupportsFeatureSet:(unsigned int)arg1;
- (unsigned int)doubleFPConfig;
- (unsigned int)featureProfile;
- (unsigned int)halfFPConfig;
- (unsigned int)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned int)iosurfaceTextureAlignmentBytes;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; double x19; double x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; }*)limits;
- (unsigned int)linearTextureAlignmentBytes;
- (unsigned int)maxBufferLength;
- (unsigned int)maxColorAttachments;
- (unsigned int)maxComputeBuffers;
- (unsigned int)maxComputeInlineDataSize;
- (unsigned int)maxComputeLocalMemorySizes;
- (unsigned int)maxComputeSamplers;
- (unsigned int)maxComputeTextures;
- (unsigned int)maxComputeThreadgroupMemory;
- (unsigned int)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned int)maxFragmentBuffers;
- (unsigned int)maxFragmentInlineDataSize;
- (unsigned int)maxFragmentSamplers;
- (unsigned int)maxFragmentTextures;
- (unsigned int)maxFramebufferStorageBits;
- (unsigned int)maxFunctionConstantIndices;
- (unsigned int)maxInterpolants;
- (unsigned int)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned int)maxTextureDepth3D;
- (unsigned int)maxTextureDimensionCube;
- (unsigned int)maxTextureHeight2D;
- (unsigned int)maxTextureHeight3D;
- (unsigned int)maxTextureLayers;
- (unsigned int)maxTextureWidth1D;
- (unsigned int)maxTextureWidth2D;
- (unsigned int)maxTextureWidth3D;
- (unsigned int)maxTotalComputeThreadsPerThreadgroup;
- (unsigned int)maxVertexAttributes;
- (unsigned int)maxVertexBuffers;
- (unsigned int)maxVertexInlineDataSize;
- (unsigned int)maxVertexSamplers;
- (unsigned int)maxVertexTextures;
- (unsigned int)maxVisibilityQueryOffset;
- (BOOL)metalAssertionsEnabled;
- (unsigned int)minBufferNoCopyAlignmentBytes;
- (unsigned int)minConstantBufferAlignmentBytes;
- (<MTLBuffer> *)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (<MTLCommandQueue> *)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned int)arg3;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (void)setMetalAssertionsEnabled:(BOOL)arg1;
- (unsigned int)sharedMemorySize;
- (unsigned int)singleFPConfig;
- (BOOL)supportsSampleCount:(unsigned int)arg1;
- (void)unloadShaderCaches;

@optional

- (NSString *)familyName;
- (void*)getShaderCacheKeys;
- (BOOL)mapShaderSampleBufferWithBuffer:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 capacity:(unsigned int)arg2 size:(unsigned int)arg3;
- (void)newComputePipelineStateWithDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTLComputePipelineDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLComputePipelineState> *, NSError *, void*
- (<MTLComputePipelineState> *)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id*)arg2;
- (<MTLComputePipelineState> *)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (<MTLFunction> *)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned int)arg2;
- (<MTLFunction> *)newFunctionWithGLIR:(void*)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned int)arg3;
- (<MTLTextureLayout> *)newTextureLayoutWithDescriptor:(MTLTextureDescriptor *)arg1 isHeapOrBufferBacked:(BOOL)arg2;
- (<MTLTexture> *)newTextureWithBytesNoCopy:(void *)arg1 length:(void *)arg2 descriptor:(void *)arg3 deallocator:(void *)arg4; // needs 4 arg types, found 10: void*, unsigned int, MTLTextureDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned int, void*
- (NSString *)productName;
- (void)setShaderDebugInfoCaching:(BOOL)arg1;
- (BOOL)shaderDebugInfoCaching;
- (void)unmapShaderSampleBuffer;
- (NSString *)vendorName;

@end
