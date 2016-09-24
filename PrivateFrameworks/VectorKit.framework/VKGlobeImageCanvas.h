/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap> {
    struct unique_ptr<md::GlobeAdapter, std::__1::default_delete<md::GlobeAdapter> > { 
        struct __compressed_pair<md::GlobeAdapter *, std::__1::default_delete<md::GlobeAdapter> > { 
            struct GlobeAdapter {} *__first_; 
        } __ptr_; 
    }  _globeAdapter;
    struct shared_ptr<md::VKGlobeStylesheet> { 
        struct VKGlobeStylesheet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _globeStyleSheet;
    struct GlobeView { int (**x1)(); struct AnchorManagerPrivate {} *x2; struct Scene {} *x3; struct Context {} *x4; struct DtmCacheNode {} *x5; struct DtmRequestManager {} *x6; struct FreezeViewNode {} *x7; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_8_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; struct FrameLatLon { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; struct PositionLatLonAlt { double x_5_2_1; double x_5_2_2; double x_5_2_3; } x_9_1_5; } x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; } * _globeView;
    BOOL  _notifyFullyDrawn;
    BOOL  _notifyFullyLoaded;
    struct _MDRenderTargetRef { 
        <MDRenderTarget> *ptr; 
    }  _renderTargetRef;
}

@property (nonatomic, retain) NSArray *customFeatureDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateCameraFromGlobe;
- (void)_updateViewTransform;
- (void)_updateViewport;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)cancelTileRequests;
- (id)customFeatureDataSources;
- (void)dealloc;
- (void)didLayout;
- (void)globeDidBecomeFullyDrawn;
- (void)globeWillBecomeFullyDrawn;
- (id)initWithTarget:(id)arg1 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2 homeQueue:(id)arg3 renderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; double x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; }*)arg4 manifestConfiguration:(id)arg5;
- (BOOL)isShowingNoDataPlaceholders;
- (unsigned char)labelScaleFactor;
- (BOOL)localizeLabels;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)removeRenderer;
- (void)setCustomFeatureDataSources:(id)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapType:(int)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (void)update;

@end
