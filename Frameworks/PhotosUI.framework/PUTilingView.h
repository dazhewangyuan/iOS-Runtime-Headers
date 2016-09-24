/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingView : UIScrollView {
    PUTileTree * __activeTileControllers;
    PUTileTree * __detachedTileControllers;
    PUTileTree * __inactiveTileControllers;
    BOOL  __needsUpdateLayout;
    BOOL  __needsUpdateLayoutCoordinateSystem;
    BOOL  __needsUpdateLayoutVisibleRect;
    BOOL  __needsUpdateReferencedCoordinateSystems;
    BOOL  __needsUpdateReferencedDataSources;
    BOOL  __needsUpdateScrollViewProperties;
    BOOL  __needsUpdateTileControllers;
    BOOL  __needsUpdateTileControllersVisibleRect;
    double  __pagingFrictionAdjustment;
    double  __pagingSpringPullAdjustment;
    PUTilingLayout * __pendingLayout;
    NSMutableArray * __pendingUpdateItems;
    BOOL  __performingBatchUpdates;
    NSMutableDictionary * __postLayoutBlocks;
    int  __reasonForNextLayoutCoordinateSystemUpdate;
    NSMutableSet * __referencedCoordinateSystems;
    NSMutableDictionary * __referencedDataSourcesByIdentifiers;
    PUReuseQueue * __tileControllerReuseQueue;
    PUTileTransitionCoordinator * __tileTransitionCoordinatorForNextLayout;
    <PUTilingCoordinateSystem> * _contentCoordinateSystem;
    <PUTilingCoordinateSystem> * _fixedCoordinateSystem;
    PUTilingLayout * _layout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _loadingInsets;
    id /* block */  _onNextTileControllersUpdateBlock;
    <PUTilingViewScrollDelegate> * _scrollDelegate;
    struct { 
        BOOL respondsToScrollInfoWithLayout; 
        BOOL respondsToInitialVisibleOriginWithLayout; 
        BOOL respondsToTargetVisibleOriginForProposedVisibleOrigin; 
    }  _scrollDelegateFlags;
    PUTileAnimator * _tileAnimator;
    <PUTilingViewTileSource> * _tileSource;
    <PUTilingViewTileTransitionDelegate> * _tileTransitionDelegate;
    struct { 
        BOOL respondsToDataSourceConverterForTransitionFromLayoutToLayout; 
        BOOL respondsToTileTransitionCoordinatorForTransitionFromLayoutWithContext; 
        BOOL respondsToTileTransitionCoordinatorForUpdateWithItems; 
        BOOL respondsToTileTransitionCoordinatorForChangeFromFrame; 
        BOOL respondsToTileTransitionCoordinatorForReattachedTileControllers; 
        BOOL respondsToTileTransitionCoordinatorForLayoutInvalidationContext; 
        BOOL respondsToCanBypass20069585Check; 
    }  _tileTransitionDelegateFlags;
    <PUTilingViewTileUseDelegate> * _tileUseDelegate;
    struct { 
        BOOL respondsToWillStartUsingTileController; 
        BOOL respondsToDidStopUsingTileController; 
        BOOL respondsToDidUpdateTileControllers; 
        BOOL respondsToDidEndAnimatingTileControllers; 
    }  _tileUseDelegateFlags;
}

@property (nonatomic, readonly) PUTileTree *_activeTileControllers;
@property (nonatomic, readonly) PUTileTree *_detachedTileControllers;
@property (nonatomic, readonly) PUTileTree *_inactiveTileControllers;
@property (setter=_setNeedsUpdateLayout:, nonatomic) BOOL _needsUpdateLayout;
@property (setter=_setNeedsUpdateLayoutCoordinateSystem:, nonatomic) BOOL _needsUpdateLayoutCoordinateSystem;
@property (setter=_setNeedsUpdateLayoutVisibleRect:, nonatomic) BOOL _needsUpdateLayoutVisibleRect;
@property (setter=_setNeedsUpdateReferencedCoordinateSystems:, nonatomic) BOOL _needsUpdateReferencedCoordinateSystems;
@property (setter=_setNeedsUpdateReferencedDataSources:, nonatomic) BOOL _needsUpdateReferencedDataSources;
@property (setter=_setNeedsUpdateScrollViewProperties:, nonatomic) BOOL _needsUpdateScrollViewProperties;
@property (setter=_setNeedsUpdateTileControllers:, nonatomic) BOOL _needsUpdateTileControllers;
@property (setter=_setNeedsUpdateTileControllersVisibleRect:, nonatomic) BOOL _needsUpdateTileControllersVisibleRect;
@property (setter=_setPagingFrictionAdjustment:, nonatomic) double _pagingFrictionAdjustment;
@property (setter=_setPagingSpringPullAdjustment:, nonatomic) double _pagingSpringPullAdjustment;
@property (setter=_setPendingLayout:, nonatomic, retain) PUTilingLayout *_pendingLayout;
@property (nonatomic, readonly) NSMutableArray *_pendingUpdateItems;
@property (getter=_isPerformingBatchUpdates, setter=_setPerformingBatchUpdates:, nonatomic) BOOL _performingBatchUpdates;
@property (nonatomic, readonly) NSMutableDictionary *_postLayoutBlocks;
@property (setter=_setReasonForNextLayoutCoordinateSystemUpdate:, nonatomic) int _reasonForNextLayoutCoordinateSystemUpdate;
@property (nonatomic, readonly) NSMutableSet *_referencedCoordinateSystems;
@property (nonatomic, readonly) NSMutableDictionary *_referencedDataSourcesByIdentifiers;
@property (nonatomic, readonly) PUReuseQueue *_tileControllerReuseQueue;
@property (setter=_setTileTransitionCoordinatorForNextLayout:, nonatomic, retain) PUTileTransitionCoordinator *_tileTransitionCoordinatorForNextLayout;
@property (nonatomic, readonly) <PUTilingCoordinateSystem> *contentCoordinateSystem;
@property (nonatomic, readonly) <PUTilingCoordinateSystem> *fixedCoordinateSystem;
@property (nonatomic, readonly) BOOL isAnyTileControllerAnimating;
@property (setter=_setLayout:, nonatomic, retain) PUTilingLayout *layout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } loadingInsets;
@property (nonatomic, copy) id /* block */ onNextTileControllersUpdateBlock;
@property (nonatomic) <PUTilingViewScrollDelegate> *scrollDelegate;
@property (nonatomic) PUTileAnimator *tileAnimator;
@property (nonatomic) <PUTilingViewTileSource> *tileSource;
@property (nonatomic) <PUTilingViewTileTransitionDelegate> *tileTransitionDelegate;
@property (nonatomic) <PUTilingViewTileUseDelegate> *tileUseDelegate;

- (void).cxx_destruct;
- (id)_activeTileControllers;
- (void)_adjustScrollViewPagingDeceleration;
- (void)_applyPendingUpdates;
- (id)_createTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 tileSource:(id)arg4;
- (id)_dataSourceWithIdentifier:(id)arg1;
- (id)_detachedTileControllers;
- (void)_enumerateActiveTileControllersUsingBlock:(id /* block */)arg1;
- (void)_enumerateAllTileControllersUsingBlock:(id /* block */)arg1;
- (void)_handleChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_inactiveTileControllers;
- (void)_invalidateLayout;
- (void)_invalidateLayoutCoordinateSystemWithReason:(int)arg1;
- (void)_invalidateLayoutVisibleRect;
- (void)_invalidateReferencedCoordinateSystems;
- (void)_invalidateReferencedDataSources;
- (void)_invalidateScrollViewProperties;
- (void)_invalidateTileControllers;
- (void)_invalidateTileControllersVisibleRect;
- (void)_invalidateTileControllersWithTileTransitionCoordinator:(id)arg1;
- (BOOL)_isPerformingBatchUpdates;
- (BOOL)_needsUpdateLayout;
- (BOOL)_needsUpdateLayoutCoordinateSystem;
- (BOOL)_needsUpdateLayoutVisibleRect;
- (BOOL)_needsUpdateReferencedCoordinateSystems;
- (BOOL)_needsUpdateReferencedDataSources;
- (BOOL)_needsUpdateScrollViewProperties;
- (BOOL)_needsUpdateTileControllers;
- (BOOL)_needsUpdateTileControllersVisibleRect;
- (float)_pagingFrictionAdjustment;
- (float)_pagingSpringPullAdjustment;
- (id)_pendingLayout;
- (id)_pendingUpdateItems;
- (id)_postLayoutBlocks;
- (int)_reasonForNextLayoutCoordinateSystemUpdate;
- (id)_referencedCoordinateSystems;
- (id)_referencedDataSourcesByIdentifiers;
- (void)_registerDataSource:(id)arg1;
- (void)_runPostLayoutBlocks;
- (void)_setLayout:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateLayout:(BOOL)arg1;
- (void)_setNeedsUpdateLayoutCoordinateSystem:(BOOL)arg1;
- (void)_setNeedsUpdateLayoutVisibleRect:(BOOL)arg1;
- (void)_setNeedsUpdateReferencedCoordinateSystems:(BOOL)arg1;
- (void)_setNeedsUpdateReferencedDataSources:(BOOL)arg1;
- (void)_setNeedsUpdateScrollViewProperties:(BOOL)arg1;
- (void)_setNeedsUpdateTileControllers:(BOOL)arg1;
- (void)_setNeedsUpdateTileControllersVisibleRect:(BOOL)arg1;
- (void)_setPagingFrictionAdjustment:(float)arg1;
- (void)_setPagingSpringPullAdjustment:(float)arg1;
- (void)_setPendingLayout:(id)arg1;
- (void)_setPerformingBatchUpdates:(BOOL)arg1;
- (void)_setReasonForNextLayoutCoordinateSystemUpdate:(int)arg1;
- (void)_setTileTransitionCoordinatorForNextLayout:(id)arg1;
- (id)_tileControllerReuseQueue;
- (id)_tileTransitionCoordinatorForNextLayout;
- (void)_transferTileControllersToDataSource:(id)arg1 usingDataSourceConverter:(id)arg2;
- (void)_updateIfNeeded;
- (void)_updateLayoutCoordinateSystemIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateLayoutVisibleRectIfNeeded;
- (void)_updateReferencedCoordinateSystemsIfNeeded;
- (void)_updateReferencedDataSourcesIfNeeded;
- (void)_updateScrollViewPropertiesIfNeeded;
- (void)_updateScrollViewPropertiesWithLayout:(id)arg1;
- (void)_updateTileControllersIfNeeded;
- (void)_updateTileControllersVisibleRectIfNeeded;
- (void)_updateTileControllersWithLayout:(id)arg1 reactivatability:(id /* block */)arg2 appearanceHandler:(id /* block */)arg3 updateHandler:(id /* block */)arg4 disappearanceHandler:(id /* block */)arg5 heartBeatHandler:(id /* block */)arg6;
- (void)_updateTileControllersWithLayout:(id)arg1 tileTransitionCoordinator:(id)arg2;
- (id)contentCoordinateSystem;
- (void)deleteItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (id)dequeueTileControllerWithReuseIdentifier:(id)arg1;
- (void)detachTileControllers:(id)arg1;
- (void)enqueueTileControllerForReuse:(id)arg1;
- (void)enumerateAllTileControllersUsingBlock:(id /* block */)arg1;
- (void)enumeratePresentedTileControllersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)fixedCoordinateSystem;
- (id)freezeTileController:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(id)arg2;
- (void)insertItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)invalidateLayout:(id)arg1 withContext:(id)arg2;
- (BOOL)isAnyTileControllerAnimating;
- (id)layout;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })loadingInsets;
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 dataSource:(id)arg3;
- (id /* block */)onNextTileControllersUpdateBlock;
- (void)performBatchUpdates:(id /* block */)arg1;
- (id)presentedTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (void)reattachTileControllers:(id)arg1 withContext:(id)arg2;
- (void)registerPostLayoutBlock:(id /* block */)arg1 forIdentifier:(id)arg2;
- (void)registerTileControllerClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (void)reloadItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (id)scrollDelegate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLoadingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOnNextTileControllersUpdateBlock:(id /* block */)arg1;
- (void)setScrollDelegate:(id)arg1;
- (void)setTileAnimator:(id)arg1;
- (void)setTileSource:(id)arg1;
- (void)setTileTransitionDelegate:(id)arg1;
- (void)setTileUseDelegate:(id)arg1;
- (id)tileAnimator;
- (void)tileControllerDidEndAnimating:(id)arg1;
- (id)tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (id)tileSource;
- (id)tileTransitionDelegate;
- (id)tileUseDelegate;
- (void)transitionToLayout:(id)arg1;
- (void)transitionToLayout:(id)arg1 withContext:(id)arg2 animationSetupCompletionHandler:(id /* block */)arg3;

@end
