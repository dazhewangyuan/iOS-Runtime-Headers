/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPreviewViewController : UICollectionViewController <PageRangeDelegate, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate, UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UIViewControllerPreviewingDelegate_Private> {
    BOOL  _accessibilityScrollTriggered;
    BOOL  _annotationsOnPreview;
    NSArray * _arrayOfCellSizes;
    NSMutableArray * _arrayOfPageImages;
    UIPrintPaper * _destinationPaper;
    UIDocumentInteractionController * _documentInteractionController;
    BOOL  _grayscalePreview;
    int  _initialPageIndexToCenter;
    int  _numPages;
    int  _pageIndexOnPageLabel;
    UILabel * _pageLabel;
    UIView * _pageLabelBackgroundView;
    NSLayoutConstraint * _pageLabelBadgeVerticalPositionConstraint;
    UIImageView * _pageLabelOnImageView;
    NSObject<OS_dispatch_queue> * _pageRendererQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageSize;
    struct CGPDFDocument { } * _pdfDocRef;
    NSString * _pdfPassword;
    NSURL * _pdfURL;
    UIImageView * _pinchAnimationView;
    UIView * _pinchAnimationWhiteBackgroundView;
    UICollectionViewCell * _pinchGestureBeginningCell;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchGestureLastPoint;
    double  _pinchGestureLastScale;
    BOOL  _presentingDocumentInteractionController;
    UIPrintPanelViewController * _printPanelViewController;
    NSURL * _quickLookPDFURL;
    BOOL  _scaleUpOnDestinationPaper;
    NSURL * _sharePDFFileURL;
}

@property BOOL annotationsOnPreview;
@property (retain) NSArray *arrayOfCellSizes;
@property (retain) NSMutableArray *arrayOfPageImages;
@property (readonly) int currentCenterPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIPrintPaper *destinationPaper;
@property BOOL grayscalePreview;
@property (readonly) unsigned int hash;
@property int initialPageIndexToCenter;
@property (readonly) int numPages;
@property (retain) NSString *pdfPassword;
@property (retain) NSURL *pdfURL;
@property BOOL presentingDocumentInteractionController;
@property (retain) NSURL *quickLookPDFURL;
@property BOOL scaleUpOnDestinationPaper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_adjustScrollDirectionForLayout:(int)arg1;
- (BOOL)accessibilityScroll:(int)arg1;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1 forPageIndex:(int)arg2;
- (void)animateCellAndPresentDocumentInteractionController;
- (BOOL)annotationsOnPreview;
- (id)arrayOfCellSizes;
- (id)arrayOfPageImages;
- (BOOL)canAddAllPages:(id)arg1;
- (BOOL)canAddPage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canRemovePage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canSetEndPage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canSetStartPage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canShowMenuBar;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (int)currentCenterPageIndex;
- (void)dealloc;
- (id)destinationPaper;
- (void)didReceiveMemoryWarning;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)fetchPageInBackground:(unsigned int)arg1 reloadWhenDone:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)gestureRecognizersOfVisibleCells;
- (id)getPageImageForPage:(int)arg1 grayscale:(BOOL)arg2;
- (BOOL)grayscalePreview;
- (void)handlePinch:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithPageSize:(struct CGSize { double x1; double x2; })arg1 numberOfPages:(int)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 printPanelViewController:(id)arg4;
- (int)initialPageIndexToCenter;
- (BOOL)locationInTapTargetOfPageLabelBadge:(struct CGPoint { double x1; double x2; })arg1;
- (int)numPages;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageBadgeTapped:(id)arg1;
- (BOOL)pageIndexIsInRange:(int)arg1;
- (float)pageLabelBottomSpace;
- (void)pageRangeUpdated;
- (id)pathOfCenterMostCell;
- (id)pdfPassword;
- (id)pdfURL;
- (BOOL)presentingDocumentInteractionController;
- (void)previewPDF;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)quickLookPDFURL;
- (void)removePage:(id)arg1 forPageIndex:(int)arg2;
- (void)resetAllPageImages;
- (void)resetCellSizesArray;
- (BOOL)scaleUpOnDestinationPaper;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAnnotationsOnPreview:(BOOL)arg1;
- (void)setArrayOfCellSizes:(id)arg1;
- (void)setArrayOfPageImages:(id)arg1;
- (void)setDestinationPaper:(id)arg1;
- (void)setEndPage:(id)arg1 forPageIndex:(int)arg2;
- (void)setGrayscalePreview:(BOOL)arg1;
- (void)setInitialPageIndexToCenter:(int)arg1;
- (void)setPdfPassword:(id)arg1;
- (void)setPdfURL:(id)arg1;
- (void)setPresentingDocumentInteractionController:(BOOL)arg1;
- (void)setQuickLookPDFURL:(id)arg1;
- (void)setScaleUpOnDestinationPaper:(BOOL)arg1;
- (void)setStartPage:(id)arg1 forPageIndex:(int)arg2;
- (void)trackCenterCell;
- (void)updateLayout;
- (void)updatePageBadgeImage;
- (void)updatePageNumberBadgeLocation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
