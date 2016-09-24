/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient> {
    <VKTileProviderClient> * _client;
    double  _contentScale;
    <VKMapLayer> * _debugLayer;
    GEOTileKeyList * _debugLayerKeys;
    _VKTileProviderTimerTarget * _evaluationTarget;
    VKTimer * _evaluationTimer;
    BOOL  _exclusionAreaVisible;
    struct vector<md::TileExclusionArea, std::__1::allocator<md::TileExclusionArea> > { 
        struct TileExclusionArea {} *__begin_; 
        struct TileExclusionArea {} *__end_; 
        struct __compressed_pair<md::TileExclusionArea *, std::__1::allocator<md::TileExclusionArea> > { 
            struct TileExclusionArea {} *__first_; 
        } __end_cap_; 
    }  _exclusionAreas;
    BOOL  _fallbackEnabled;
    NSMutableSet * _fallbackTiles;
    BOOL  _finishedLoading;
    BOOL  _finishedLoadingOptionalLayers;
    BOOL  _hasFailedTile;
    NSArray * _holes;
    VKTileKeyList * _keysInView;
    struct VKCameraState { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } position; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } orientation; 
        double aspectRatio; 
        double verticalFieldOfView; 
        double horizontalOffset; 
    }  _lastCameraState;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    double  _lastMidDisplayZoomLevel;
    double  _loadingProgress;
    NSLocale * _locale;
    NSMutableSet * _lostTiles;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    int  _mode;
    VKTileKeyList * _neighborKeys;
    unsigned int  _neighborMode;
    NSMutableSet * _neighborTiles;
    VKTileSource * _optionalTileSources;
    BOOL  _prefetchEnabled;
    VKTileKeyList * _prefetchKeys;
    unsigned int  _prefetchNumberOfScreens;
    _VKTileProviderTimerTarget * _prefetchTarget;
    VKTimer * _prefetchTimer;
    VKMapRasterizer * _rasterizer;
    struct { 
        double x; 
        double y; 
    }  _sortPoint;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    unsigned int  _tileMaximumLimit;
    VKTileCache * _tilePool;
    unsigned int  _tileReserveLimit;
    VKTileSelection * _tileSelection;
    BOOL  _tilesChanged;
    VKTileSource * _tilesSources;
    NSMutableSet * _tilesToRender;
    BOOL  _useSmallTileCache;
}

@property (nonatomic) <VKTileProviderClient> *client;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <VKMapLayer> *debugLayer;
@property (nonatomic, readonly) GEOTileKeyList *debugLayerKeys;
@property (readonly, copy) NSString *description;
@property (getter=isFallbackEnabled, nonatomic) BOOL fallbackEnabled;
@property (getter=isFinishedLoading, nonatomic, readonly) BOOL finishedLoading;
@property (getter=isFinishedLoadingOptionalLayers, nonatomic, readonly) BOOL finishedLoadingOptionalLayers;
@property (nonatomic, readonly) BOOL hasFailedTile;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) VKTileKeyList *keysInView;
@property (nonatomic, readonly) double loadingProgress;
@property (nonatomic) double lodBias;
@property (nonatomic) int mode;
@property (nonatomic, readonly) VKTileKeyList *neighborKeys;
@property (nonatomic) unsigned int neighborMode;
@property (nonatomic, readonly) NSSet *neighborTiles;
@property (getter=isPrefetchEnabled, nonatomic) BOOL prefetchEnabled;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tilesToRender;
@property (nonatomic) BOOL useSmallTileCache;
@property (nonatomic, readonly) NSArray *visibleTileSets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned int)arg3;
- (void)_disableTimers;
- (void)_fetchAvailableTiles:(BOOL)arg1;
- (void)_fillHoles:(id)arg1 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; double x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (void)_prefetchTiles;
- (void)_resizeCache;
- (void)_updateTimers:(int)arg1;
- (BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3;
- (BOOL)canRenderTile:(id)arg1;
- (void)cancelLoadForMapTile:(id)arg1;
- (void)cancelLoadingTiles;
- (void)changeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 toState:(unsigned int)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned int)arg5;
- (void)clearScene;
- (id)client;
- (void)configureTileSelection;
- (float)contentScale;
- (void)dealloc;
- (id)debugLayer;
- (id)debugLayerKeys;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (void)describeTilesFromList:(id)arg1 outputtoDict:(id)arg2;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (BOOL)evaluateNeighborTileForRendering:(id)arg1;
- (BOOL)evaluateSelectedTileForRendering:(id)arg1;
- (void)flushCaches:(BOOL)arg1;
- (void)foreachActiveLayer:(id /* block */)arg1;
- (void)foreachOptionalLayer:(id /* block */)arg1;
- (BOOL)hasAllTileData:(id)arg1;
- (BOOL)hasFailedTile;
- (BOOL)hasRequiredTileData:(id)arg1;
- (BOOL)inFailedState:(id)arg1;
- (id)initWithClient:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)invalidateRasterizedTiles;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (BOOL)isFallbackEnabled;
- (BOOL)isFinishedLoading;
- (BOOL)isFinishedLoadingOptionalLayers;
- (BOOL)isPrefetchEnabled;
- (id)keysInView;
- (unsigned int)layerForSource:(id)arg1;
- (float)loadingProgress;
- (double)lodBias;
- (int)mode;
- (id)neighborKeys;
- (unsigned int)neighborMode;
- (id)neighborTiles;
- (void)prepareTileForRendering:(id)arg1;
- (void)quiesce;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (void)releaseFallbackTilesForTile:(id)arg1 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; double x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned int)arg1;
- (void)requireRasterization:(id)arg1;
- (void)retireNeighborTiles:(id)arg1;
- (void)retireRenderTiles:(id)arg1;
- (id)selectTiles:(int*)arg1 needRasterization:(BOOL*)arg2;
- (void)setClient:(id)arg1;
- (void)setContentScale:(float)arg1;
- (void)setDebugLayer:(id)arg1;
- (void)setFallbackEnabled:(BOOL)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setNeighborMode:(unsigned int)arg1;
- (void)setPrefetchEnabled:(BOOL)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTileExclusionAreas:(const struct vector<md::TileExclusionArea, std::__1::allocator<md::TileExclusionArea> > { struct TileExclusionArea {} *x1; struct TileExclusionArea {} *x2; struct __compressed_pair<md::TileExclusionArea *, std::__1::allocator<md::TileExclusionArea> > { struct TileExclusionArea {} *x_3_1_1; } x3; }*)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned int)arg2 optional:(BOOL)arg3;
- (void)setUseSmallTileCache:(BOOL)arg1;
- (id)sourceForLayer:(unsigned int)arg1;
- (id)sourceForMapLayer:(id)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (BOOL)tileExclusionAreaVisible;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (BOOL)tileMatters:(id)arg1;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg2 level:(int)arg3;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned int)arg2;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSourcesDidChange;
- (id)tilesToRender;
- (void)timerFired:(id)arg1;
- (void)updateWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; double x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 selectionScale:(float)arg2;
- (BOOL)useSmallTileCache;
- (id)visibleTileSets;
- (void)willStartLoadingTiles;

@end
