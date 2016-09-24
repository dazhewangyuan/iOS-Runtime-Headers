/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {
    _UIPreviewInteractionCommitTransition * _currentCommitTransition;
    <_UIPreviewInteractionHighlighting> * _currentHighlighter;
    _UIPreviewPresentationController2 * _currentPresentationController;
    UIViewController * _currentPreviewViewController;
    <UIViewControllerPreviewing_Internal> * _currentPreviewingContext;
    _UIPreviewInteractionViewControllerTransition * _currentTransitionDelegate;
    <_UIPreviewInteractionControllerDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    UIPanGestureRecognizer * _modalPanGestureRecognizer;
    BOOL  _performingCommitTransition;
    BOOL  _performingPreviewTransition;
    UIViewController * _presentingViewController;
    _UIPreviewGestureRecognizer2 * _previewGestureRecognizer;
    UIPreviewInteraction * _previewInteraction;
    _UIRevealGestureRecognizer2 * _revealGestureRecognizer;
    UIView * _sourceView;
}

@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (nonatomic, retain) _UIPreviewInteractionCommitTransition *currentCommitTransition;
@property (nonatomic, retain) <_UIPreviewInteractionHighlighting> *currentHighlighter;
@property (nonatomic, retain) _UIPreviewPresentationController2 *currentPresentationController;
@property (nonatomic, retain) UIViewController *currentPreviewViewController;
@property (nonatomic) <UIViewControllerPreviewing_Internal> *currentPreviewingContext;
@property (nonatomic, retain) _UIPreviewInteractionViewControllerTransition *currentTransitionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, retain) UIPanGestureRecognizer *modalPanGestureRecognizer;
@property (nonatomic) BOOL performingCommitTransition;
@property (nonatomic) BOOL performingPreviewTransition;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) _UIPreviewGestureRecognizer2 *previewGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic, retain) _UIRevealGestureRecognizer2 *revealGestureRecognizer;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (void)_finalizeInteractivePreview;
- (void)_panningRecognizerDidFire:(id)arg1;
- (id)_preferredNavigationControllerForCommitTransition;
- (BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1;
- (BOOL)_previewingIsPossibleForView:(id)arg1;
- (void)_resetCustomPresentationHooks;
- (BOOL)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1;
- (id)beginPreviewGestureRecognizer;
- (void)commitInteractivePreview;
- (id)currentCommitTransition;
- (id)currentHighlighter;
- (id)currentPresentationController;
- (id)currentPreviewViewController;
- (id)currentPreviewingContext;
- (id)currentTransitionDelegate;
- (void)dealloc;
- (id)delegate;
- (id)gestureRecognizers;
- (id)initWithView:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (id)modalPanGestureRecognizer;
- (BOOL)performingCommitTransition;
- (BOOL)performingPreviewTransition;
- (id)presentationGestureRecognizer;
- (id)presentingViewController;
- (id)previewGestureRecognizer;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (id)revealGestureRecognizer;
- (void)setCurrentCommitTransition:(id)arg1;
- (void)setCurrentHighlighter:(id)arg1;
- (void)setCurrentPresentationController:(id)arg1;
- (void)setCurrentPreviewViewController:(id)arg1;
- (void)setCurrentPreviewingContext:(id)arg1;
- (void)setCurrentTransitionDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setModalPanGestureRecognizer:(id)arg1;
- (void)setPerformingCommitTransition:(BOOL)arg1;
- (void)setPerformingPreviewTransition:(BOOL)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviewGestureRecognizer:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setRevealGestureRecognizer:(id)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
