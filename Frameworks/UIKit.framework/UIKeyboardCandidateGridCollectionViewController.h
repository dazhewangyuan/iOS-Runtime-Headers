/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateGridLayoutDelegate, UIKeyboardCandidateList> {
    BOOL  __usesDeemphasizedTextAppearance;
    NSArray * _candidateGroups;
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    int  _candidatesVisualStyle;
    <UIKeyboardCandidateGridCollectionViewControllerDelegate> * _delegate;
    NSArray * _filteredCandidates;
    double  _groupBarWidth;
    BOOL  _hasSecondaryCandidates;
    UIView * _headerView;
    BOOL  _layoutExtensionCandidates;
    UIButton * _padInlineFloatingArrowButton;
    double  _rowHeight;
    UIKBCandidateCollectionView * _secondaryCandidatesView;
    BOOL  _secondaryCandidatesViewIsCurrent;
    BOOL  _singleLineMode;
    BOOL  _supportsNumberKeySelection;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    }  _visualStyling;
}

@property (nonatomic) BOOL _usesDeemphasizedTextAppearance;
@property (nonatomic, retain) NSArray *candidateGroups;
@property (nonatomic) <UIKeyboardCandidateListDelegate> *candidateListDelegate;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic, readonly) UIKeyboardCandidateGridCollectionView *collectionView;
@property (nonatomic, readonly) UIKeyboardCandidateGridLayout *collectionViewGridLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCandidateGridCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filteredCandidates;
@property (nonatomic) double groupBarWidth;
@property (nonatomic) BOOL hasSecondaryCandidates;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) BOOL layoutExtensionCandidates;
@property (nonatomic, readonly) UIButton *padInlineFloatingArrowButton;
@property (nonatomic) double rowHeight;
@property (nonatomic, retain) UIKBCandidateCollectionView *secondaryCandidatesView;
@property (nonatomic) BOOL secondaryCandidatesViewIsCurrent;
@property (nonatomic) BOOL singleLineMode;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsNumberKeySelection;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;

- (BOOL)_usesDeemphasizedTextAppearance;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndexPath:(id)arg1;
- (id)candidateGroups;
- (unsigned int)candidateIndexOffset;
- (id)candidateListDelegate;
- (id)candidateSet;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (void)candidatesDidChange;
- (int)candidatesVisualStyle;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewGridLayout;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (id)delegate;
- (id)filteredCandidates;
- (id)firstCandidateIndexPath;
- (id)firstCandidateIndexPathInGroupAtIndex:(unsigned int)arg1;
- (id)groupAtIndex:(unsigned int)arg1;
- (float)groupBarWidth;
- (unsigned int)groupsCount;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)hasCandidates;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (BOOL)hasSecondaryCandidates;
- (id)headerView;
- (id)indexPathForCandidate:(id)arg1;
- (id)init;
- (BOOL)isExtendedList;
- (id)keyboardBehaviors;
- (id)lastCandidateIndexPath;
- (id)lastCandidateIndexPathInGroupAtIndex:(unsigned int)arg1;
- (void)layout;
- (BOOL)layoutExtensionCandidates;
- (void)loadSecondaryCandidatesView;
- (void)loadView;
- (unsigned int)maxNumberOfProactiveCells;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)padInlineFloatingArrowButton;
- (void)padInlineFloatingExpand;
- (BOOL)padInlineFloatingIsExpanded;
- (unsigned int)padInlineHighlightedRowIndex;
- (void)reloadData;
- (void)revealHiddenCandidates;
- (float)rowHeight;
- (unsigned int)rowIndexForCellAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })rowSizeForGridLayout;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (void)scrollToTopWithAnimation:(BOOL)arg1 revealHeaderView:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewIndexChanged:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)secondaryCandidatesView;
- (BOOL)secondaryCandidatesViewIsCurrent;
- (id)secureCandidateRenderTraits;
- (id)selectedItemIndexPath;
- (unsigned int)selectedSortIndex;
- (void)setCandidateGroups:(id)arg1;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupBarWidth:(float)arg1;
- (void)setHasSecondaryCandidates:(BOOL)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setLayoutExtensionCandidates:(BOOL)arg1;
- (void)setRowHeight:(float)arg1;
- (void)setSecondaryCandidatesView:(id)arg1;
- (void)setSecondaryCandidatesViewIsCurrent:(BOOL)arg1;
- (void)setSingleLineMode:(BOOL)arg1;
- (void)setSupportsNumberKeySelection:(BOOL)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (void)set_usesDeemphasizedTextAppearance:(BOOL)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (BOOL)singleLineMode;
- (id)statisticsIdentifier;
- (void)stepOneLine:(BOOL)arg1;
- (BOOL)supportsNumberKeySelection;
- (void)updateHeaderView;
- (void)updateIndexTitles;
- (void)viewDidLoad;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;

@end
