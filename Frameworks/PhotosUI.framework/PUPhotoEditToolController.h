/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditToolController : UIViewController <PUPhotoEditLayoutDynamicAdaptable, PUViewControllerSpecChangeObserver, UIScrollViewDelegate> {
    UIView * __dummyScrollContentView;
    UIScrollView * __toolControllerScrollView;
    PLPhotoEditAggregateSession * _aggregateSession;
    <PUPhotoEditToolControllerDelegate> * _delegate;
    int  _layoutOrientation;
    NSString * _localizedName;
    BOOL  _performingLiveInteraction;
    PLPhotoEditMutableModel * _photoEditModel;
    UIButton * _preferredAlternateToolbarButton;
    unsigned int  _preferredRenderMode;
    UIImage * _selectedToolbarIcon;
    PUPhotoEditToolControllerSpec * _spec;
    UIImage * _toolbarIcon;
    PUPhotoEditValuesCalculator * _valuesCalculator;
}

@property (setter=_setDummyScrollContentView:, nonatomic, retain) UIView *_dummyScrollContentView;
@property (setter=_setToolControllerScrollView:, nonatomic, retain) UIScrollView *_toolControllerScrollView;
@property (nonatomic, readonly) PLPhotoEditAggregateSession *aggregateSession;
@property (nonatomic, readonly) BOOL canResetToDefaultValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditToolControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int layoutOrientation;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedResetToolActionTitle;
@property (getter=isPerformingLiveInteraction, nonatomic, readonly) BOOL performingLiveInteraction;
@property (nonatomic, readonly) PLPhotoEditMutableModel *photoEditModel;
@property (nonatomic, readonly) UIButton *preferredAlternateToolbarButton;
@property (nonatomic, readonly, copy) UIColor *preferredPreviewBackgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredPreviewViewInsets;
@property (nonatomic, readonly) unsigned int preferredRenderMode;
@property (nonatomic, readonly) UIImage *selectedToolbarIcon;
@property (nonatomic, readonly) PUPhotoEditToolControllerSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *toolbarIcon;
@property (nonatomic, readonly) PUPhotoEditValuesCalculator *valuesCalculator;
@property (nonatomic, readonly) BOOL wantsDefaultPreviewView;
@property (nonatomic, readonly) BOOL wantsSecondaryToolbarVisible;
@property (nonatomic, readonly) BOOL wantsZoomAndPanEnabled;

- (void).cxx_destruct;
- (id)_dummyScrollContentView;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_setDummyScrollContentView:(id)arg1;
- (void)_setToolControllerScrollView:(id)arg1;
- (id)_toolControllerScrollView;
- (void)_updateScrollViewCentering;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)aggregateSession;
- (void)animateBecomingActiveTool;
- (void)animateResigningActiveTool;
- (void)baseLivePhotoInvalidated;
- (void)basePhotoInvalidated;
- (BOOL)canResetToDefaultValue;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (BOOL)installTogglePreviewGestureRecognizer:(id)arg1;
- (BOOL)isPerformingLiveInteraction;
- (int)layoutOrientation;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (id)photoEditModel;
- (void)photoEditModelDidChange;
- (id)preferredAlternateToolbarButton;
- (id)preferredPreviewBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (unsigned int)preferredRenderMode;
- (void)resetForZoomAndPan;
- (void)resetToDefaultValueAnimated:(BOOL)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)selectedToolbarIcon;
- (void)setAggregateSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(int)arg1;
- (void)setLayoutOrientation:(int)arg1 withTransitionCoordinator:(id)arg2;
- (void)setPerformingLiveInteraction:(BOOL)arg1;
- (void)setPreferredAlternateToolbarButton:(id)arg1;
- (void)setPreferredRenderMode:(unsigned int)arg1;
- (void)setSpec:(id)arg1;
- (void)setupWithPhotoEditModel:(id)arg1 valuesCalculator:(id)arg2;
- (id)spec;
- (void)specDidChange;
- (id)toolbarIcon;
- (void)traitCollectionDidChange:(id)arg1;
- (id)valuesCalculator;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsDefaultPreviewView;
- (BOOL)wantsSecondaryToolbarVisible;
- (BOOL)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

@end
