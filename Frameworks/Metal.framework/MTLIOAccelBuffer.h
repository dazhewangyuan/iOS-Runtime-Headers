/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelBuffer : MTLIOAccelResource {
    id /* block */  _deallocator;
    struct __IOSurface { } * _iosurface;
    unsigned int  _length;
    MTLIOAccelBuffer * _masterBuffer;
    short  _masterBufferIndex;
    int  _masterBufferOffset;
    short  _masterHeapIndex;
    void * _pointer;
}

@property (nonatomic, readonly) void*contents;
@property (readonly) struct __IOSurface { }*iosurface;
@property (readonly) unsigned int length;

- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void*)contents;
- (struct __CFArray { }*)copyAnnotations;
- (void)dealloc;
- (void)didModifyRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithDevice:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14[2]; union { struct { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; unsigned int x_1_3_6[1]; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned int x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg3 argsSize:(unsigned int)arg4;
- (id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned int)arg3 options:(unsigned int)arg4 sysMemSize:(unsigned int)arg5 vidMemSize:(unsigned int)arg6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14[2]; union { struct { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; unsigned int x_1_3_6[1]; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned int x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg7 argsSize:(unsigned int)arg8 deallocator:(id /* block */)arg9;
- (id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned int)arg3 length:(unsigned int)arg4;
- (id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14[2]; union { struct { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; unsigned int x_1_3_6[1]; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned int x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg6 argsSize:(unsigned int)arg7;
- (struct __IOSurface { }*)iosurface;
- (unsigned int)length;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 bytesPerImage:(unsigned int)arg4;
- (void)removeAllDebugMarkers;

@end
