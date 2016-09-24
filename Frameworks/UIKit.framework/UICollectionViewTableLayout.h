/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableLayout : UICollectionViewLayout <UICollectionViewTableAttributes, UICollectionViewTableLayoutSwipeActionPullViewDelegate, UIGestureRecognizerDelegate, UITable_Internal> {
    UIColor * _accessoryBaseColor;
    double  _backgroundInset;
    double  _bottomPadding;
    BOOL  _cellLayoutMarginsFollowReadableWidth;
    double  _confirmationTranslationAdjustment;
    <UITableConstants> * _constants;
    NSMutableArray * _deleteIndexPaths;
    _UISwipableTableViewCellDeleteScanlineView * _deleteScanLineView;
    BOOL  _dontResetSwipedRow;
    double  _estimatedRowHeight;
    double  _estimatedSectionFooterHeight;
    double  _estimatedSectionHeaderHeight;
    NSSet * _floatingElementKinds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _indexFrame;
    double  _initialDistance;
    double  _initialTranslation;
    NSMutableArray * _insertIndexPaths;
    UICollectionViewTableLayoutSwipeActionPullView * _leftSwipeView;
    UIColor * _multiselectCheckmarkColor;
    BOOL  _overlapsSectionHeaderViews;
    UICollectionViewTableLayoutSwipeActionPullView * _rightSwipeView;
    UITableViewRowData * _rowData;
    double  _rowHeight;
    double  _rowSpacing;
    double  _sectionBorderWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionContentInset;
    BOOL  _sectionContentInsetFollowsLayoutMargins;
    double  _sectionCornerRadius;
    double  _sectionFooterHeight;
    double  _sectionHeaderHeight;
    UIColor * _separatorColor;
    UIVisualEffect * _separatorEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInset;
    int  _separatorStyle;
    BOOL  _showingIndex;
    _UIFeedbackStatesBehavior * _swipeActionFeedbackBehavior;
    UIPanGestureRecognizer * _swipeActionPanRecognizer;
    UIGobblerGestureRecognizer * _swipeActionsGobblerGestureRecognizer;
    UICollectionViewTableCell * _swipeToDeleteCell;
    NSIndexPath * _swipedIndexPath;
    struct { 
        unsigned int navigationGestureWasEnabledBeforeSwipeActions : 1; 
        unsigned int didDisableNavigationGesture : 1; 
        unsigned int deleteCancelationAnimationInProgress : 1; 
        unsigned int editingForSwipeDelete : 1; 
    }  _tableLayoutFlags;
    double  _topPadding;
    BOOL  _usesVariableMargins;
}

@property (getter=_contentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInset;
@property (getter=_accessoryBaseColor, nonatomic, readonly) UIColor *accessoryBaseColor;
@property (nonatomic, readonly) BOOL allowsMultipleSelection;
@property (nonatomic, readonly) BOOL allowsMultipleSelectionDuringEditing;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (getter=_backgroundInset, nonatomic, readonly) double backgroundInset;
@property (getter=_bottomPadding, nonatomic, readonly) double bottomPadding;
@property (nonatomic, readonly) BOOL canBeEdited;
@property (nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;
@property (nonatomic) double confirmationTranslationAdjustment;
@property (getter=_constants, nonatomic, retain) <UITableConstants> *constants;
@property (getter=_dataSource, nonatomic, readonly) <UICollectionViewDataSourceTableLayout> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultSectionFooterHeight, nonatomic, readonly) double defaultSectionFooterHeight;
@property (getter=_defaultSectionHeaderHeight, nonatomic, readonly) double defaultSectionHeaderHeight;
@property (getter=_delegate, nonatomic, readonly) <UICollectionViewDelegateTableLayout> *delegate;
@property (nonatomic, retain) NSMutableArray *deleteIndexPaths;
@property (nonatomic, retain) _UISwipableTableViewCellDeleteScanlineView *deleteScanLineView;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (nonatomic, readonly) double estimatedRowHeight;
@property (nonatomic, readonly) double estimatedSectionFooterHeight;
@property (nonatomic, readonly) double estimatedSectionHeaderHeight;
@property (getter=_estimatesRowHeights, nonatomic, readonly) BOOL estimatesRowHeights;
@property (getter=_estimatesSectionFooterHeights, nonatomic, readonly) BOOL estimatesSectionFooterHeights;
@property (getter=_estimatesSectionHeaderHeights, nonatomic, readonly) BOOL estimatesSectionHeaderHeights;
@property (getter=_floatingElementKinds, setter=_setFloatingElementKinds:, nonatomic, retain) NSArray *floatingElementKinds;
@property (getter=_footerMarginWidth, nonatomic, readonly) double footerMarginWidth;
@property (getter=_footerRightMarginWidth, nonatomic, readonly) double footerRightMarginWidth;
@property (readonly) unsigned int hash;
@property (getter=_headerMarginWidth, nonatomic, readonly) double headerMarginWidth;
@property (getter=_headerRightMarginWidth, nonatomic, readonly) double headerRightMarginWidth;
@property (getter=_heightForTableFooter, nonatomic, readonly) double heightForTableFooter;
@property (getter=_heightForTableHeader, nonatomic, readonly) double heightForTableHeader;
@property (getter=_indexFrame, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } indexFrame;
@property (nonatomic) double initialDistance;
@property (nonatomic) double initialTranslation;
@property (nonatomic, retain) NSMutableArray *insertIndexPaths;
@property (getter=_isTableHeaderAutohiding, nonatomic, readonly) BOOL isTableHeaderAutohiding;
@property (nonatomic, retain) UICollectionViewTableLayoutSwipeActionPullView *leftSwipeView;
@property (getter=_marginWidth, nonatomic, readonly) double marginWidth;
@property (nonatomic, readonly) UIColor *multiselectCheckmarkColor;
@property (getter=_numberOfSections, nonatomic, readonly) int numberOfSections;
@property (nonatomic, readonly) BOOL overlapsSectionHeaderViews;
@property (getter=_providesRowHeights, nonatomic, readonly) BOOL providesRowHeights;
@property (getter=_rawSeparatorInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rawSeparatorInset;
@property (nonatomic, retain) UICollectionViewTableLayoutSwipeActionPullView *rightSwipeView;
@property (nonatomic, retain) UITableViewRowData *rowData;
@property (nonatomic) double rowHeight;
@property (getter=_rowSpacing, nonatomic, readonly) double rowSpacing;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=_sectionBorderWidth, nonatomic, readonly) double sectionBorderWidth;
@property (getter=_sectionContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property (getter=_sectionContentInsetFollowsLayoutMargins, nonatomic, readonly) BOOL sectionContentInsetFollowsLayoutMargins;
@property (getter=_sectionCornerRadius, nonatomic, readonly) double sectionCornerRadius;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic, copy) UIColor *separatorColor;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) int separatorStyle;
@property (getter=_shouldUseNewHeaderFooterBehavior, nonatomic, readonly) BOOL shouldUseNewHeaderFooterBehavior;
@property (getter=_shouldUseSearchBarHeaderBehavior, nonatomic, readonly) BOOL shouldUseSearchBarHeaderBehavior;
@property (getter=_isShowingIndex, nonatomic, readonly) BOOL showingIndex;
@property (getter=_sidePadding, nonatomic, readonly) double sidePadding;
@property (getter=_style, nonatomic, readonly) int style;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIFeedbackStatesBehavior *swipeActionFeedbackBehavior;
@property (nonatomic, retain) UIPanGestureRecognizer *swipeActionPanRecognizer;
@property (getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:, nonatomic, retain) UICollectionViewTableCell *swipeToDeleteCell;
@property (nonatomic, retain) NSIndexPath *swipedIndexPath;
@property (getter=_tableContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tableContentInset;
@property (getter=_tableFooterView, nonatomic, readonly) UIView *tableFooterView;
@property (getter=_tableHeaderView, nonatomic, readonly) UIView *tableHeaderView;
@property (getter=_topPadding, nonatomic, readonly) double topPadding;
@property (nonatomic, readonly) BOOL usesVariableMargins;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)_accessoryBaseColor;
- (int)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_activePullView;
- (float)_adjustedXOffsetForInputOffset:(float)arg1;
- (void)_animateSwipeCancelation;
- (void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(float)arg1;
- (float)_backgroundInset;
- (float)_bottomPadding;
- (BOOL)_canMoveRowAtIndexPath:(id)arg1;
- (void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1;
- (void)_cleanupStateFromDeleteConfirmation;
- (void)_cleanupStateFromDeleteConfirmationForPendingAnimatedDelete:(BOOL)arg1;
- (id)_constants;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (id)_dataSource;
- (float)_dataSourceHeightForFooterInSection:(int)arg1;
- (float)_dataSourceHeightForHeaderInSection:(int)arg1;
- (float)_dataSourceHeightForRowAtIndexPath:(id)arg1;
- (float)_defaultSectionFooterHeight;
- (float)_defaultSectionHeaderHeight;
- (id)_delegate;
- (float)_destructiveConfirmationPoint;
- (id)_detailTextForHeaderInSection:(int)arg1;
- (int)_editingStyleForRowAtIndexPath:(id)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (float)_estimatedHeightForFooterInSection:(int)arg1;
- (float)_estimatedHeightForHeaderInSection:(int)arg1;
- (float)_estimatedHeightForRowAtIndexPath:(id)arg1;
- (BOOL)_estimatesRowHeights;
- (BOOL)_estimatesSectionFooterHeights;
- (BOOL)_estimatesSectionHeaderHeights;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_extraSeparatorFrameForIndexPath:(id)arg1 offset:(float)arg2;
- (id)_floatingElementKinds;
- (float)_footerMarginWidth;
- (float)_footerRightMarginWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSectionElementKind:(id)arg1 atSection:(int)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 floating:(BOOL*)arg4;
- (void)_handleSwipeActionsGobbler:(id)arg1;
- (BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1;
- (float)_headerMarginWidth;
- (float)_headerRightMarginWidth;
- (float)_heightForFooterInSection:(int)arg1;
- (float)_heightForHeaderInSection:(int)arg1;
- (float)_heightForRowAtIndexPath:(id)arg1;
- (float)_heightForTableFooter;
- (float)_heightForTableHeader;
- (int)_indentationLevelForRowAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indexFrame;
- (void)_installSwipeActionsGobblerWithExcludedView:(id)arg1;
- (BOOL)_isShowingIndex;
- (BOOL)_isTableHeaderAutohiding;
- (id)_layoutAttributesForCellWithIndexPath:(id)arg1;
- (id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(int)arg2;
- (id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1;
- (id)_layoutAttributesForViewElementKind:(id)arg1;
- (BOOL)_makePullViewActive:(id)arg1 atIndexPath:(id)arg2;
- (float)_marginWidth;
- (float)_maxTitleWidthForFooterInSection:(int)arg1;
- (float)_maxTitleWidthForHeaderInSection:(int)arg1;
- (void)_moveCell:(id)arg1 toSwipeOffset:(float)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_moveCell:(id)arg1 toSwipeOffset:(float)arg2 animated:(BOOL)arg3 usingSpringWithStiffnessFactor:(float)arg4 completion:(id /* block */)arg5;
- (void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1;
- (void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1;
- (int)_numberOfRowsInSection:(int)arg1;
- (int)_numberOfSections;
- (void)_performAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 view:(id)arg4;
- (void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 view:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredLayoutMargins;
- (BOOL)_providesRowHeights;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSeparatorInset;
- (void)_removeSwipeActionsGobbler;
- (void)_resetSwipeViewPositionsImmediately;
- (void)_resolveSwipeActionsForPullView:(id)arg1 atIndexPath:(id)arg2;
- (float)_rowSpacing;
- (float)_rubberBandOffsetForOffset:(float)arg1 usingSwipeView:(id)arg2;
- (id)_scrollView;
- (float)_sectionBorderWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionContentInset;
- (BOOL)_sectionContentInsetFollowsLayoutMargins;
- (float)_sectionCornerRadius;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_sectionRangeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setFloatingElementKinds:(id)arg1;
- (void)_setSwipeToDeleteCell:(id)arg1;
- (void)_setSwipedIndexPath:(id)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float*)arg1;
- (BOOL)_shouldDrawSeparatorAtTop:(BOOL)arg1 ofSection:(int)arg2;
- (BOOL)_shouldHaveFooterViewForSection:(int)arg1;
- (BOOL)_shouldHaveGlobalViewForElementOfKind:(id)arg1;
- (BOOL)_shouldHaveHeaderViewForSection:(int)arg1;
- (BOOL)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(int)arg2;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (BOOL)_shouldStripHeaderTopPaddingForSection:(int)arg1;
- (BOOL)_shouldUseNewHeaderFooterBehavior;
- (BOOL)_shouldUseSearchBarHeaderBehavior;
- (float)_sidePadding;
- (float)_spacingForExtraSeparators;
- (int)_style;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(BOOL)arg2;
- (id)_swipeToDeleteCell;
- (float)_swipeToDeleteOffsetForRow:(int)arg1 inSection:(int)arg2;
- (id)_swipedCell;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableContentInset;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (int)_titleAlignmentForFooterInSection:(int)arg1;
- (int)_titleAlignmentForHeaderInSection:(int)arg1;
- (id)_titleForFooterInSection:(int)arg1;
- (id)_titleForHeaderInSection:(int)arg1;
- (float)_topPadding;
- (id)_viewForFooterInSection:(int)arg1;
- (id)_viewForHeaderInSection:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRect;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsMultipleSelectionDuringEditing;
- (id)backgroundColor;
- (BOOL)canBeEdited;
- (BOOL)cellLayoutMarginsFollowReadableWidth;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (float)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (float)confirmationTranslationAdjustment;
- (id)deleteConfirmationIndexPath;
- (id)deleteIndexPaths;
- (void)deleteRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)deleteScanLineView;
- (float)estimatedRowHeight;
- (float)estimatedSectionFooterHeight;
- (float)estimatedSectionHeaderHeight;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (float)initialDistance;
- (float)initialTranslation;
- (id)insertIndexPaths;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint { double x1; double x2; })arg4;
- (BOOL)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)leftSwipeView;
- (id)multiselectCheckmarkColor;
- (BOOL)overlapsSectionHeaderViews;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (void)resetSwipedRowWithCompletion:(id /* block */)arg1;
- (id)rightSwipeView;
- (id)rowData;
- (float)rowHeight;
- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (id)separatorColor;
- (id)separatorEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1;
- (void)setConfirmationTranslationAdjustment:(float)arg1;
- (void)setConstants:(id)arg1;
- (void)setDeleteIndexPaths:(id)arg1;
- (void)setDeleteScanLineView:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setInitialDistance:(float)arg1;
- (void)setInitialTranslation:(float)arg1;
- (void)setInsertIndexPaths:(id)arg1;
- (void)setLeftSwipeView:(id)arg1;
- (void)setRightSwipeView:(id)arg1;
- (void)setRowData:(id)arg1;
- (void)setRowHeight:(float)arg1;
- (void)setSectionFooterHeight:(float)arg1;
- (void)setSectionHeaderHeight:(float)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorEffect:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSwipeActionFeedbackBehavior:(id)arg1;
- (void)setSwipeActionPanRecognizer:(id)arg1;
- (void)setSwipedIndexPath:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)swipeActionFeedbackBehavior;
- (id)swipeActionPanRecognizer;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 view:(id)arg3;
- (void)swipeRecognizerDidRecognize:(id)arg1;
- (id)swipedIndexPath;
- (BOOL)usesVariableMargins;

@end
