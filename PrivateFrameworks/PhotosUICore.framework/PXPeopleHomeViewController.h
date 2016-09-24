/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleHomeViewController : UICollectionViewController <PXPeopleDragAndDropCollectionViewDelegate, PXPeopleHomeDataSourceDelegate, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate> {
    PXPeopleHomeDataSource * _dataSource;
    UIBarButtonItem * _debugMenuItem;
    struct { 
        unsigned int dragTimerFired : 1; 
        unsigned int allowReorder : 1; 
        unsigned int sectionsDiffer : 1; 
    }  _dragFlags;
    UILongPressGestureRecognizer * _dragRecognizer;
    UIBarButtonItem * _favoriteToolbarItem;
    UIBarButtonItem * _hideToolbarItem;
    BOOL  _ignoreChangeUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragPoint;
    UIBarButtonItem * _mergeToolbarItem;
    unsigned int  _mode;
    struct CGSize { 
        double width; 
        double height; 
    }  _nonPriorityItemSize;
    BOOL  _pendingChanges;
    struct CGSize { 
        double width; 
        double height; 
    }  _priorityItemSize;
    PXPeopleProgressManager * _progressManager;
    NSIndexPath * _proposedDropIndex;
    UIBarButtonItem * _selectItem;
    NSIndexPath * _sourceDragIndex;
}

@property (nonatomic, retain) PXPeopleHomeDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIBarButtonItem *debugMenuItem;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *dragRecognizer;
@property (nonatomic, retain) UIBarButtonItem *favoriteToolbarItem;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIBarButtonItem *hideToolbarItem;
@property BOOL ignoreChangeUpdates;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDragPoint;
@property (nonatomic, retain) UIBarButtonItem *mergeToolbarItem;
@property (nonatomic) unsigned int mode;
@property struct CGSize { double x1; double x2; } nonPriorityItemSize;
@property (nonatomic) BOOL pendingChanges;
@property struct CGSize { double x1; double x2; } priorityItemSize;
@property (nonatomic, retain) PXPeopleProgressManager *progressManager;
@property (nonatomic, retain) NSIndexPath *proposedDropIndex;
@property (nonatomic, retain) UIBarButtonItem *selectItem;
@property (nonatomic, retain) NSIndexPath *sourceDragIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFaceGroupObject;
- (void)_addPersonObject;
- (id)_bestTargetIndexGivenMergeIndexes:(id)arg1;
- (void)_calculateItemSize;
- (id)_changeMemberAtIndex:(id)arg1 toPersonType:(int)arg2;
- (void)_changeSelectedIndexes:(id)arg1 toPersonType:(int)arg2 alternatePersonType:(int)arg3 forSection:(int)arg4;
- (void)_clearPeopleObjects;
- (void)_configurePlusButtonForCell:(id)arg1;
- (void)_configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)_detailViewControllerAtIndexPath:(id)arg1;
- (void)_discloseAllSections;
- (BOOL)_favoritesEmpty;
- (id)_flowLayout;
- (void)_handleToolbarFavoriteAction:(id)arg1;
- (void)_handleToolbarHideAction:(id)arg1;
- (void)_handleToolbarMergeAction:(id)arg1;
- (BOOL)_indexPathIsTypeHidden:(id)arg1;
- (BOOL)_indexPathsContainMixedSections:(id)arg1;
- (id)_personItemAtIndexPath:(id)arg1;
- (int)_personTypeForIndexPath:(id)arg1;
- (unsigned int)_plusButtonCount;
- (id)_plusButtonIndexPath;
- (void)_postTemporaryActions:(id)arg1;
- (void)_presentAddViewController;
- (void)_progressChanged:(id)arg1;
- (void)_redetectFaces;
- (unsigned int)_requiredFooterStyle;
- (void)_resetDragFlags;
- (void)_resetSourceDragCell;
- (id)_rightBarItemsForMode:(unsigned int)arg1;
- (void)_selectAction:(id)arg1;
- (void)_setFooterDisclosureButtonsHidden:(BOOL)arg1;
- (BOOL)_shouldHideFooterDivider;
- (BOOL)_shouldShowFooterForSection:(unsigned int)arg1;
- (void)_startProgressMonitoring;
- (void)_stopProgressMonitoring;
- (id)_toolBarItemsForMode:(unsigned int)arg1;
- (void)_updateFavoriteShelfAndFooters;
- (void)_updateNavTitleForIndexes:(id)arg1;
- (void)_updateToolbarItemsForIndexes:(id)arg1;
- (BOOL)_wantsCenteringLayout;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidEndDrag:(id)arg1;
- (void)collectionViewDidEndInteractiveMode:(id)arg1;
- (void)commonInit;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGPath { }*)createShapePathForBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (void)dealloc;
- (id)debugMenuItem;
- (void)disclosureButtonTapped:(id)arg1;
- (id)dragRecognizer;
- (id)favoriteToolbarItem;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleDragToDeadSpace;
- (void)handleMoveFromIndex:(id)arg1 toIndex:(id)arg2 updateDataSource:(BOOL)arg3;
- (void)handleReorderingGesture:(id)arg1;
- (id)hideToolbarItem;
- (BOOL)ignoreChangeUpdates;
- (id)init;
- (id)initWithProgressManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })lastDragPoint;
- (id)mergeToolbarItem;
- (unsigned int)mode;
- (struct CGSize { double x1; double x2; })nonPriorityItemSize;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)pendingChanges;
- (void)peopleHomeDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleHomeDataSourceMembersChanged:(id)arg1;
- (void)ppt_navigateToPhotosDetails;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })priorityItemSize;
- (void)processDragState;
- (id)progressManager;
- (id)proposedDropIndex;
- (id)selectItem;
- (void)setDataSource:(id)arg1;
- (void)setDebugMenuItem:(id)arg1;
- (void)setDragRecognizer:(id)arg1;
- (void)setFavoriteToolbarItem:(id)arg1;
- (void)setHideToolbarItem:(id)arg1;
- (void)setIgnoreChangeUpdates:(BOOL)arg1;
- (void)setLastDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMergeToolbarItem:(id)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setNonPriorityItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPendingChanges:(BOOL)arg1;
- (void)setPriorityItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProgressManager:(id)arg1;
- (void)setProposedDropIndex:(id)arg1;
- (void)setSelectItem:(id)arg1;
- (void)setSourceDragIndex:(id)arg1;
- (void)showDetailsForMemberAtIndexPath:(id)arg1;
- (id)sourceDragIndex;
- (void)toggleHiddenStateForMemberAtIndexPath:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
