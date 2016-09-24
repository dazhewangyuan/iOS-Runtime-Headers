/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {
    <MTLDevice> * _device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)newBuffer:(unsigned int)arg1 type:(unsigned int)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned int)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned int)arg2 type:(unsigned int)arg3;
- (id)newBufferWithData:(id)arg1 type:(unsigned int)arg2;
- (id)newZone:(unsigned int)arg1;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;

@end
