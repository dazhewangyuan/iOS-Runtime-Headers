/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUScrubberView : UIView <PUBrowsingViewModelChangeObserver, PUPlaybackTimeIndicatorTileViewControllerDelegate, PUScrubberTilingLayoutDelegate, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUVideoScrubberControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    double  __decelerationDistance;
    NSIndexPath * __decelerationTargetIndexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  __decelerationTargetOffset;
    BOOL  __isHandlingScrollViewWillEndDragging;
    BOOL  __isHandlingUserScroll;
    BOOL  __isScrubbingAwayFromContentEdge;
    int  __layoutTransitionsDisabledCount;
    BOOL  __scrollViewSettled;
    PUScrubberTilingLayout * __scrubberLayout;
    double  __scrubbingTransitionProgress;
    BOOL  __snapToExpandedItem;
    UITapGestureRecognizer * __tapGestureRecognizer;
    BOOL  __thinLoupe;
    PUTilingView * __tilingView;
    BOOL  __useLoupe;
    BOOL  __useSmoothingTransitionCoordinator;
    PUVideoScrubberController * __videoScrubberController;
    NSMutableDictionary * _aspectRatioByIndexPath;
    PUBrowsingSession * _browsingSession;
    NSString * _contentScrubbingIdentifier;
    <PUScrubberViewDelegate> * _delegate;
    struct { 
        BOOL respondsToShouldIgnoreHitTestWithEvent; 
    }  _delegateFlags;
    BOOL  _isForPreview;
    BOOL  _loupeEffectIsValid;
    BOOL  _scrubberLayoutIsValid;
    BOOL  _scrubberLayoutNeedsTransition;
    NSString * _scrubbingIdentifier;
    BOOL  _snapToExpandedIsValid;
    PUTouchingGestureRecognizer * _touchingGestureRecognizer;
    NSString * _transitionLayoutIdentifier;
    int  _type;
}

@property (setter=_setDecelerationDistance:, nonatomic) double _decelerationDistance;
@property (setter=_setDecelerationTargetIndexPath:, nonatomic, retain) NSIndexPath *_decelerationTargetIndexPath;
@property (setter=_setDecelerationTargetOffset:, nonatomic) struct CGPoint { double x1; double x2; } _decelerationTargetOffset;
@property (setter=_setHandlingScrollViewWillEndDragging:, nonatomic) BOOL _isHandlingScrollViewWillEndDragging;
@property (setter=_setIsHandlingUserScroll:, nonatomic) BOOL _isHandlingUserScroll;
@property (setter=_setScrubbingAwayFromContentEdge:, nonatomic) BOOL _isScrubbingAwayFromContentEdge;
@property (setter=_setLayoutTransitionsDisabledCount:, nonatomic) int _layoutTransitionsDisabledCount;
@property (setter=_setScrollViewSettled:, nonatomic) BOOL _scrollViewSettled;
@property (setter=_setScrubberLayout:, nonatomic, retain) PUScrubberTilingLayout *_scrubberLayout;
@property (setter=_setScrubbingTransitionProgress:, nonatomic) double _scrubbingTransitionProgress;
@property (setter=_setSnapToExpandedItem:, nonatomic) BOOL _snapToExpandedItem;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setThinLoupe:, nonatomic) BOOL _thinLoupe;
@property (setter=_setTilingView:, nonatomic, retain) PUTilingView *_tilingView;
@property (setter=_setUseLoupe:, nonatomic) BOOL _useLoupe;
@property (setter=_setUseSmoothingTransitionCoordinator:, nonatomic) BOOL _useSmoothingTransitionCoordinator;
@property (setter=_setVideoScrubberController:, nonatomic, retain) PUVideoScrubberController *_videoScrubberController;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUScrubberViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isForPreview;
@property (nonatomic, readonly) UIScrollView *scrollViewForPreviewing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topOutset;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (BOOL)_allowExitFromContentScrubbing;
- (BOOL)_areLayoutTransitionsDisabled;
- (id)_currentAssetsDataSource;
- (float)_decelerationDistance;
- (id)_decelerationTargetIndexPath;
- (struct CGPoint { double x1; double x2; })_decelerationTargetOffset;
- (void)_disableLayoutTransitionsForDuration:(double)arg1;
- (void)_endScrubbing;
- (id)_expandedAssetReference;
- (float)_expandedItemWidth;
- (void)_handleTap:(id)arg1;
- (void)_handleUserScrollWillBegin:(BOOL)arg1;
- (void)_invalidateLoupeEffect;
- (void)_invalidateScrubberLayout;
- (void)_invalidateScrubberLayoutEnsureTransition;
- (void)_invalidateSnapToExpandedItem;
- (BOOL)_isContentScrubbing;
- (BOOL)_isDrivingPlayheadProgress;
- (BOOL)_isHandlingScrollViewWillEndDragging;
- (BOOL)_isHandlingUserScroll;
- (BOOL)_isLibraryScrubbing;
- (BOOL)_isScrubbingAwayFromContentEdge;
- (int)_layoutTransitionsDisabledCount;
- (float)_lengthForDuration:(double)arg1;
- (id)_newScrubberLayout;
- (void)_reenableLayoutTransitions;
- (BOOL)_scrollViewSettled;
- (id)_scrubberLayout;
- (float)_scrubbingTransitionProgress;
- (void)_setDecelerationDistance:(float)arg1;
- (void)_setDecelerationTargetIndexPath:(id)arg1;
- (void)_setDecelerationTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setHandlingScrollViewWillEndDragging:(BOOL)arg1;
- (void)_setIsHandlingUserScroll:(BOOL)arg1;
- (void)_setLayoutTransitionsDisabledCount:(int)arg1;
- (void)_setNeedsUpdate;
- (void)_setScrollViewSettled:(BOOL)arg1;
- (void)_setScrubberLayout:(id)arg1;
- (void)_setScrubbingAwayFromContentEdge:(BOOL)arg1;
- (void)_setScrubbingTransitionProgress:(float)arg1;
- (void)_setSnapToExpandedItem:(BOOL)arg1;
- (void)_setThinLoupe:(BOOL)arg1;
- (void)_setTilingView:(id)arg1;
- (void)_setUseLoupe:(BOOL)arg1;
- (void)_setUseSmoothingTransitionCoordinator:(BOOL)arg1;
- (void)_setVideoScrubberController:(id)arg1;
- (BOOL)_snapToExpandedItem;
- (id)_tapGestureRecognizer;
- (BOOL)_thinLoupe;
- (id)_tilingView;
- (void)_updateLoupeEffectIfNeeded;
- (void)_updateScrollPositionAnimated:(BOOL)arg1;
- (void)_updateScrubberLayoutIfNeeded;
- (void)_updateScrubbingAwayFromContentEdgeBeganDragging:(BOOL)arg1;
- (void)_updateSnapToExpandedItemIfNeeded;
- (void)_updateTilingViewIfNeeded;
- (BOOL)_useLoupe;
- (BOOL)_useSmoothingTransitionCoordinator;
- (id)_videoScrubberController;
- (void)beginPreviewing;
- (id)browsingSession;
- (void)dealloc;
- (id)delegate;
- (void)endPreviewing;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTouchGesture:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isForPreview;
- (float)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (BOOL)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewForPreviewing;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsForPreview:(BOOL)arg1;
- (void)setType:(int)arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg2 withLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (float)topOutset;
- (int)type;
- (void)updateIfNeeded;
- (void)videoScrubberController:(id)arg1 desiredSeekTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;
- (float)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberControllerDidUpdate:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
