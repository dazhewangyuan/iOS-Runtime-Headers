/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CARenderer : NSObject {
    struct CARendererPriv { id x1; /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*x2; void*x3; void*x4; void*x5; void*x6; int x7; double x8; void*x9; void*x10; id x11; id x12; struct Context {} x13; struct Renderer {} *x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct CGColorSpace {} *x16; struct Update {} *x17; unsigned int x18; unsigned int x19[2]; unsigned int x20[2]; unsigned int x21; unsigned int x22 : 8; unsigned int x23; BOOL x24[0]; } * _priv;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (retain) CAContext *context;
@property <CARendererDelegate> *delegate;
@property (retain) CALayer *layer;

+ (id)rendererWithEAGLContext:(id)arg1 options:(id)arg2;

- (id)_initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)_initWithOptions:(id)arg1;
- (void)addUpdateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginFrameAtTime:(double)arg1 timeStamp:(struct { unsigned int x1; int x2; int x3; unsigned int x4; double x5; int x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned int x8; unsigned int x9; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)endFrame;
- (BOOL)hasMissingContent;
- (id)layer;
- (double)nextFrameTime;
- (void)render;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })updateBounds;

@end
