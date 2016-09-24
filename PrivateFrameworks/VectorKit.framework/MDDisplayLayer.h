/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDDisplayLayer : NSObject <GGLLayerDelegate, GGLRenderQueueSource, MDRenderTarget> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _contentsScale;
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager> > { 
        struct __compressed_pair<md::DebugConsoleManager *, std::__1::default_delete<md::DebugConsoleManager> > { 
            struct DebugConsoleManager {} *__first_; 
        } __ptr_; 
    }  _debugConsoleManager;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } __m_; 
    }  _debugConsoleManagerCreationLock;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _depthStencil;
    struct shared_ptr<ggl::Device> { 
        struct Device {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned int colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _format;
    CALayer<GGLLayer> * _layer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _msaaTexture;
    BOOL  _readPixels;
    <GGLRenderQueueSource> * _renderSource;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    }  _renderTarget;
    struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; double x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; } * _renderer;
    BOOL  _requiresMultisampling;
    BOOL  _shouldRasterize;
    struct CGContext { } * _snapshotContext;
    BOOL  _useMultisampling;
}

@property (nonatomic, readonly) double averageFPS;
@property (nonatomic, readonly) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugEnableMultisampling;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{unique_ptr<md::SharedDeviceResources' */ struct x3; }*device; /* unknown property attribute:  std::__1::default_delete<md::SharedDeviceResources> >=^{SharedDeviceResources}}}} */
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned int x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) BOOL multiSample;
@property (nonatomic) <GGLRenderQueueSource> *renderSource;
@property (nonatomic, readonly) struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; double x7; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::DebugRenderer>' */ struct x8; }*renderer; /* unknown property attribute:  std::__1::default_delete<ggl::CommandBuffer> >=^{CommandBuffer}}}} */
@property (nonatomic, readonly) BOOL shouldRasterize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createLayer;
- (void)_createRenderTarget:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1;
- (float)averageFPS;
- (float)contentScale;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)dealloc;
- (struct DebugConsole { int (**x1)(); struct Matrix<float, 2, 1> { double x_2_1_1[2]; } x2; struct Matrix<float, 2, 1> { double x_3_1_1[2]; } x3; struct Matrix<float, 2, 1> { double x_4_1_1[2]; } x4; struct Matrix<float, 2, 1> { double x_5_1_1[2]; } x5; unsigned int x6; struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { struct RenderItem {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<ggl::DataWrite<ggl::ColoredText::My>, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::My> > > { struct __compressed_pair<ggl::DataWrite<ggl::ColoredText::My> *, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::My> > > { struct DataWrite<ggl::ColoredText::My> {} *x_1_2_1; } x_8_1_1; } x8; unsigned int x9; struct Matrix<float, 2, 1> {} *x10; struct Matrix<unsigned char, 4, 1> { unsigned char x_11_1_1[4]; } x11; struct Matrix<unsigned char, 4, 1> { unsigned char x_12_1_1[4]; } x12; double x13; struct CommonLibrary {} *x14; struct RenderTargetFormat { int x_15_1_1[4]; unsigned int x_15_1_2; unsigned int x_15_1_3; int x_15_1_4; } x15; }*)debugConsoleForId:(int)arg1;
- (BOOL)debugEnableMultisampling;
- (void)destroyLayer;
- (struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)device;
- (void)didEnterBackground;
- (void)didPresent;
- (void)didReadPixels:(struct shared_ptr<ggl::BitmapData> { struct BitmapData {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)didReceiveMemoryWarning;
- (void)disablePerformanceHUD:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawToTexture:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1 withTimestamp:(double)arg2;
- (void)drawToTexture:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1 withTimestamp:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)enablePerformanceHUD:(id)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (void)forceLayout;
- (const struct RenderTargetFormat { int x1[4]; unsigned int x2; unsigned int x3; int x4; }*)format;
- (id)initWithContentScale:(float)arg1 shouldRasterize:(BOOL)arg2;
- (id)layer;
- (BOOL)multiSample;
- (void)onTimerFired:(double)arg1;
- (void)recreateLayer;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_2_1_1; struct CommandBuffer {} **x_2_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)renderQueue;
- (id)renderSource;
- (struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; double x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; }*)renderer;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsScale:(float)arg1;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setRenderSource:(id)arg1;
- (BOOL)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;

@end
