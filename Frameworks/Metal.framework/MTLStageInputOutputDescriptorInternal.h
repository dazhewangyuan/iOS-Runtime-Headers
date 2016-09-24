/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLAttributeDescriptorArrayInternal * _attributeArray;
    unsigned int  _indexBufferIndex;
    unsigned int  _indexType;
    MTLBufferLayoutDescriptorArrayInternal * _vertexBufferArray;
}

+ (id)vertexDescriptor;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (unsigned int)indexBufferIndex;
- (unsigned int)indexType;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)layouts;
- (id)newSerializedDescriptor;
- (void)reset;
- (void)setIndexBufferIndex:(unsigned int)arg1;
- (void)setIndexType:(unsigned int)arg1;
- (BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2;

@end
