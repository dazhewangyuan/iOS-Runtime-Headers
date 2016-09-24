/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureLayerSource : SCNTextureOffscreenRenderingSource {
    double  _lastUpdate;
    CALayer * _layer;
    double  _nextUpdateDate;
}

@property (nonatomic, retain) CALayer *layer;

- (double)__renderLayer:(void *)arg1 withCARenderer:(void *)arg2 engineContext:(void *)arg3 viewport:(void *)arg4 atTime:(void *)arg5 forceUpdate:(void *)arg6 didUpdate:(void *)arg7; // needs 7 arg types, found 6: id, id, struct __C3DEngineContext { }*, double, BOOL, BOOL*
- (double)__updateTextureWithLayer:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; long x3; long x4; long x5; long x6; long x7; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; double x9; unsigned char x10; long x11; unsigned int x12; }*)arg3;
- (struct __C3DTexture { }*)_textureWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; long x3; long x4; long x5; long x6; long x7; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; double x9; unsigned char x10; long x11; unsigned int x12; }*)arg2 nextFrameTime:(double*)arg3;
- (void)cleanup:(struct __C3DRendererContext { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; struct __C3DTexture {} *x9; struct __C3DStack {} *x10; void *x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned long x17; struct __CFDictionary {} *x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_21_1_1; } x21; void *x22; int x23; struct __C3DFXProgramObject {} *x24; struct __C3DEngineStats { unsigned int x_25_1_1; unsigned int x_25_1_2; unsigned int x_25_1_3; unsigned int x_25_1_4; unsigned int x_25_1_5; unsigned int x_25_1_6; unsigned int x_25_1_7; unsigned int x_25_1_8; unsigned int x_25_1_9; unsigned int x_25_1_10; unsigned int x_25_1_11; unsigned int x_25_1_12; unsigned int x_25_1_13; unsigned int x_25_1_14; unsigned int x_25_1_15; unsigned int x_25_1_16; unsigned int x_25_1_17; unsigned int x_25_1_18; unsigned int x_25_1_19; unsigned int x_25_1_20; unsigned int x_25_1_21; unsigned int x_25_1_22; unsigned int x_25_1_23; unsigned int x_25_1_24; double x_25_1_25; double x_25_1_26; double x_25_1_27; double x_25_1_28; double x_25_1_29; double x_25_1_30; double x_25_1_31; double x_25_1_32; double x_25_1_33; double x_25_1_34; double x_25_1_35; double x_25_1_36; double x_25_1_37; double x_25_1_38; unsigned int x_25_1_39; unsigned int x_25_1_40; unsigned int x_25_1_41; unsigned int x_25_1_42; unsigned int x_25_1_43; unsigned int x_25_1_44; unsigned int x_25_1_45; unsigned int x_25_1_46; unsigned int x_25_1_47; } x25; }*)arg1;
- (void)dealloc;
- (id)layer;
- (struct CGSize { double x1; double x2; })layerSizeInPixels;
- (void)renderWithEngineContext:(struct __C3DEngineContext { }*)arg1 nextFrameTime:(double*)arg2;
- (void)setLayer:(id)arg1;
- (struct __C3DTexture { }*)textureWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; long x3; long x4; long x5; long x6; long x7; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; double x9; unsigned char x10; long x11; unsigned int x12; }*)arg2 nextFrameTime:(double*)arg3;

@end
