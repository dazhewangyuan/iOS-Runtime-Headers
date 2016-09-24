/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGridModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {
    struct shared_ptr<ggl::ConstantDataTyped<ggl::GridBase::GridView> > { 
        struct ConstantDataTyped<ggl::GridBase::GridView> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _baseConstantData;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Grid::Style> > { 
        struct ConstantDataTyped<ggl::Grid::Style> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _constantData;
    struct Matrix<float, 4, 1> { 
        double _e[4]; 
    }  _fillColor;
    struct shared_ptr<ggl::GridBase::GridMesh> { 
        struct GridMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gridMesh;
    double  _gridMix;
    struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned int x6; double x7; struct Mesh {} *x8; struct Range { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct Range {} *x10; unsigned int x11; } * _gridRenderItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _gridRenderState;
    struct Matrix<float, 4, 1> { 
        double _e[4]; 
    }  _lineColor;
    VKMapModel * _mapModel;
    BOOL  _needsUpdatedColor;
    struct unique_ptr<ggl::Grid::GridPipelineSetup, std::__1::default_delete<ggl::Grid::GridPipelineSetup> > { 
        struct __compressed_pair<ggl::Grid::GridPipelineSetup *, std::__1::default_delete<ggl::Grid::GridPipelineSetup> > { 
            struct GridPipelineSetup {} *__first_; 
        } __ptr_; 
    }  _pipelineSetup;
    struct shared_ptr<ggl::Grid::GridPipelineState> { 
        struct GridPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pipelineState;
    unsigned char  _renderPass;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::SimpleGrid::Style> > { 
        struct ConstantDataTyped<ggl::SimpleGrid::Style> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _simpleConstantData;
    BOOL  _simpleGridEnabled;
    struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned int x6; double x7; struct Mesh {} *x8; struct Range { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct Range {} *x10; unsigned int x11; } * _simpleGridRenderItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _simpleGridRenderState;
    struct unique_ptr<ggl::SimpleGrid::GridPipelineSetup, std::__1::default_delete<ggl::SimpleGrid::GridPipelineSetup> > { 
        struct __compressed_pair<ggl::SimpleGrid::GridPipelineSetup *, std::__1::default_delete<ggl::SimpleGrid::GridPipelineSetup> > { 
            struct GridPipelineSetup {} *__first_; 
        } __ptr_; 
    }  _simplePipelineSetup;
    struct shared_ptr<ggl::SimpleGrid::GridPipelineState> { 
        struct GridPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _simplePipelineState;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { 
        struct ConstantDataTyped<ggl::Tile::View> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _viewConstantData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  fillColor; /* unknown property attribute:  1>=[4f]} */
@property (readonly) unsigned int hash;
@property (nonatomic) VKMapModel *mapModel;
@property (nonatomic) unsigned char renderPass;
@property (nonatomic) BOOL simpleGridEnabled;
@property (nonatomic, readonly) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct Matrix<float, 4, 1> { double x1[4]; })fillColor;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; double x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (unsigned int)mapLayerPosition;
- (id)mapModel;
- (unsigned char)renderPass;
- (void)setMapModel:(id)arg1;
- (void)setNeedsUpdatedGridColor;
- (void)setRenderPass:(unsigned char)arg1;
- (void)setSimpleGridEnabled:(BOOL)arg1;
- (BOOL)shouldLayoutWithoutStyleManager;
- (BOOL)simpleGridEnabled;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetDidChange;
- (void)stylesheetDoneChanging;
- (void)updateGridColor;

@end
