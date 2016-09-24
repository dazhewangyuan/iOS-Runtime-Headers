/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKView : UIView {
    NSMutableDictionary * __info;
    struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; } * __layerBackedRenderer;
    BOOL  _allowsTransparency;
    unsigned int  _colorRenderBuffer;
    struct SKCStats { 
        int (**_vptr$SKCStats)(); 
        double frameBeginTime; 
        double frameDuration; 
        double baseTime; 
        double currentTime; 
        int frameCount; 
        struct { 
            double beginTime; 
            double duration; 
        } clientUpdate; 
        struct { 
            double beginTime; 
            double duration; 
        } update; 
        struct { 
            double beginTime; 
            double duration; 
            int bodyCount; 
        } physics; 
        struct { 
            double beginTime; 
            double duration; 
            int constraintCount; 
        } constraints; 
        struct { 
            double beginTime; 
            double duration; 
            int opCount; 
            int quadCount; 
            int nodeTraversalCount; 
            int sknodeTraversalCount; 
            int nodeRenderCount; 
            int drawCallCount; 
            int passCount; 
            int maxBatchElementCount; 
        } render; 
    }  _currentStats;
    NSObject<SKViewDelegate> * _delegate;
    unsigned int  _depthStencilRenderBuffer;
    BOOL  _didRunOnce;
    BOOL  _disableInput;
    SKDisplayLink * _displayLink;
    id /* block */  _dynamicRenderBlock;
    CAEAGLLayer * _eaglLayer;
    struct shared_ptr<jet_texture> { 
        struct jet_texture {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _frameBufferColorTexture;
    struct shared_ptr<jet_texture> { 
        struct jet_texture {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _frameBufferDepthStencilTexture;
    unsigned int  _frameInterval;
    struct SKCStats { 
        int (**_vptr$SKCStats)(); 
        double frameBeginTime; 
        double frameDuration; 
        double baseTime; 
        double currentTime; 
        int frameCount; 
        struct { 
            double beginTime; 
            double duration; 
        } clientUpdate; 
        struct { 
            double beginTime; 
            double duration; 
        } update; 
        struct { 
            double beginTime; 
            double duration; 
            int bodyCount; 
        } physics; 
        struct { 
            double beginTime; 
            double duration; 
            int constraintCount; 
        } constraints; 
        struct { 
            double beginTime; 
            double duration; 
            int opCount; 
            int quadCount; 
            int nodeTraversalCount; 
            int sknodeTraversalCount; 
            int nodeRenderCount; 
            int drawCallCount; 
            int passCount; 
            int maxBatchElementCount; 
        } render; 
    }  _frameStats;
    struct shared_ptr<jet_framebuffer> { 
        struct jet_framebuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _framebuffer;
    BOOL  _hasRenderedForCurrentUpdate;
    BOOL  _hasRenderedOnce;
    BOOL  _isBackgrounded;
    SKMetalLayer * _metalLayer;
    BOOL  _mouseIsDown;
    BOOL  _needsInitialUpdate;
    SKScene * _nextScene;
    struct SKCStats { 
        int (**_vptr$SKCStats)(); 
        double frameBeginTime; 
        double frameDuration; 
        double baseTime; 
        double currentTime; 
        int frameCount; 
        struct { 
            double beginTime; 
            double duration; 
        } clientUpdate; 
        struct { 
            double beginTime; 
            double duration; 
        } update; 
        struct { 
            double beginTime; 
            double duration; 
            int bodyCount; 
        } physics; 
        struct { 
            double beginTime; 
            double duration; 
            int constraintCount; 
        } constraints; 
        struct { 
            double beginTime; 
            double duration; 
            int opCount; 
            int quadCount; 
            int nodeTraversalCount; 
            int sknodeTraversalCount; 
            int nodeRenderCount; 
            int drawCallCount; 
            int passCount; 
            int maxBatchElementCount; 
        } render; 
    }  _nextStats;
    BOOL  _paused;
    double  _physicsDebugStrokeWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    unsigned int  _preferredFramesPerSecond;
    BOOL  _prefersLowPowerGPU;
    double  _prevBackingScaleFactor;
    double  _prevRenderTime;
    double  _prevVsyncRenderTime;
    BOOL  _priorResignActivePausedState;
    int  _queuedFrameCount;
    struct shared_ptr<jet_fence> { 
        struct jet_fence {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderFence;
    NSObject<OS_dispatch_queue> * _renderQueue;
    NSObject<OS_dispatch_semaphore> * _renderSemaphore;
    struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; } * _renderer;
    SKScene * _scene;
    NSData * _spriteArrayHint;
    double  _timePreviousUpdate;
    NSMapTable * _touchMap;
    SKTransition * _transition;
    NSObject<OS_dispatch_queue> * _updateQueue;
    BOOL  _usesAsyncUpdateQueue;
    BOOL  _viewFramebufferIsValid;
    void _viewFramebufferPixelSize;
    NSMutableDictionary * _viewRenderOptions;
    void _viewScale;
    void _viewTranslation;
}

@property (nonatomic, retain) NSMutableDictionary *_info;
@property struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; /* Warning: unhandled struct encoding: '{list<std::__1::shared_ptr<SKCRenderPass>' */ struct x5; }*_layerBackedRenderer; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}@} */
@property (nonatomic) BOOL allowsTransparency;
@property (getter=isAsynchronous, nonatomic) BOOL asynchronous;
@property (nonatomic) NSObject<SKViewDelegate> *delegate;
@property (nonatomic) BOOL disableStencilBuffers;
@property (nonatomic) int frameInterval;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (readonly) NSMutableDictionary *options;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) double physicsDebugStrokeWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) double preferredFrameRate;
@property (nonatomic) int preferredFramesPerSecond;
@property (nonatomic, readonly) SKScene *scene;
@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsQuadCount;

+ (Class)layerClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)_commonInit;
- (void)_endFrameStats;
- (void)_ensureRenderer;
- (id)_focusedItemRegionContainer;
- (float)_fps;
- (unsigned int)_getEffectivePreferredFramesPerSecond;
- (id)_getFocusNodesFromScene;
- (id)_getPerformanceStats;
- (float)_getViewContentsScale;
- (id)_info;
- (struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)_layerBackedRenderer;
- (int)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inScreen:(id)arg2;
- (void)_renderContent;
- (void)_renderSynchronouslyForTime:(double)arg1 preRender:(id /* block */)arg2 postRender:(id /* block */)arg3;
- (void)_renderToIOSurfaceID:(unsigned int)arg1 scaleFactor:(float)arg2 asynchronous:(BOOL)arg3 preRender:(id /* block */)arg4 postRender:(id /* block */)arg5;
- (void)_reshape;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_setUpdateQueue:(id)arg1;
- (BOOL)_shouldRenderForTime:(double)arg1;
- (void)_showAllStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsGPUStats;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (BOOL)_usesAsyncUpdateQueue;
- (float)_viewScale;
- (struct CGPoint { double x1; double x2; })_viewTranslation;
- (void)_vsyncRenderForTime:(double)arg1 preRender:(id /* block */)arg2 postRender:(id /* block */)arg3;
- (BOOL)allowsTransparency;
- (float)alphaValue;
- (id)archiveToFile:(id)arg1;
- (id)captureToFile:(id)arg1;
- (struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)chooseViewRenderer;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromScene:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toScene:(id)arg2;
- (void)dealloc;
- (void)debugPrint;
- (id)delegate;
- (void)didMoveToWindow;
- (BOOL)disableStencilBuffers;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)frameInterval;
- (id)getRenderOptions;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)getRootNode;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getViewTransform;
- (void)getViewport;
- (BOOL)hasValidViewFramebuffer;
- (BOOL)ignoresSiblingOrder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateQueue:(id)arg2;
- (BOOL)isAsynchronous;
- (BOOL)isOpaque;
- (BOOL)isPaused;
- (void)layoutSubviews;
- (struct shared_ptr<jet_framebuffer> { struct jet_framebuffer {} *x1; struct __shared_weak_count {} *x2; })nextFramebuffer;
- (void)notifyWillRenderContent;
- (void)onInit;
- (id)options;
- (float)physicsDebugStrokeWidth;
- (struct CGSize { double x1; double x2; })pixelSize;
- (float)preferredFrameRate;
- (int)preferredFramesPerSecond;
- (void)presentScene:(id)arg1;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)remakeFramebuffer;
- (void)remakeFramebuffer:(float)arg1;
- (void)renderContent;
- (void)renderForTime:(double)arg1 shouldBlock:(BOOL)arg2;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(float)arg2;
- (void)runOnce;
- (id)scene;
- (void)setAllowsTransparency:(BOOL)arg1;
- (void)setAsynchronous:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableStencilBuffers:(BOOL)arg1;
- (void)setDynamicRenderBlock:(id /* block */)arg1;
- (void)setFrameInterval:(int)arg1;
- (void)setIgnoresSiblingOrder:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPhysicsDebugStrokeWidth:(float)arg1;
- (void)setPreferredFrameRate:(float)arg1;
- (void)setPreferredFramesPerSecond:(int)arg1;
- (void)setShouldCullNonVisibleNodes:(BOOL)arg1;
- (void)setShowsDrawCount:(BOOL)arg1;
- (void)setShowsFPS:(BOOL)arg1;
- (void)setShowsFields:(BOOL)arg1;
- (void)setShowsNodeCount:(BOOL)arg1;
- (void)setShowsPhysics:(BOOL)arg1;
- (void)setShowsQuadCount:(BOOL)arg1;
- (void)setUpRenderCallback;
- (void)set_info:(id)arg1;
- (void)set_layerBackedRenderer:(struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)arg1;
- (void)set_showsCPUStats:(BOOL)arg1;
- (void)set_showsGPUStats:(BOOL)arg1;
- (void)set_usesAsyncUpdateQueue:(BOOL)arg1;
- (void)set_viewScale:(float)arg1;
- (void)set_viewTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)shouldCullNonVisibleNodes;
- (BOOL)showsDrawCount;
- (BOOL)showsFPS;
- (BOOL)showsFields;
- (BOOL)showsNodeCount;
- (BOOL)showsPhysics;
- (BOOL)showsQuadCount;
- (id)snapshot;
- (void)startRenderCallbacks;
- (void)stopRenderCallbacks;
- (id)textureFromNode:(id)arg1;
- (id)textureFromNode:(id)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)textureFromNode:(id)arg1 withOptions:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)willRenderContent;
- (void)writeContentsToPNG:(id)arg1;

@end
