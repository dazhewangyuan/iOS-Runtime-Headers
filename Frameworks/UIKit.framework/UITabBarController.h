/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarController : UIViewController <GKContentRefresh, GKURLHandling, NSCoding, UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UITabBarDelegate> {
    <UIViewControllerAnimatedTransitioning> * __animator;
    NSString * __backdropGroupName;
    <UIViewControllerInteractiveTransitioning> * __interactor;
    UIView * _accessoryView;
    UITapGestureRecognizer * _backGestureRecognizer;
    UILayoutContainerView * _containerView;
    UIFocusContainerGuide * _contentFocusContainerGuide;
    unsigned int  _customMaxItems;
    NSArray * _customizableViewControllers;
    unsigned int  _defaultMaxItems;
    <UITabBarControllerDelegate> * _delegate;
    NSMutableArray * _moreChildViewControllers;
    UIMoreNavigationController * _moreNavigationController;
    UITapGestureRecognizer * _nudgeLeftGestureRecognizer;
    UITapGestureRecognizer * _nudgeRightGestureRecognizer;
    NSMapTable * _rememberedFocusedItemsByViewController;
    UITapGestureRecognizer * _selectGestureRecognizer;
    UIViewController * _selectedViewController;
    UIViewController * _selectedViewControllerDuringWillAppear;
    UITabBar * _tabBar;
    struct { 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
        unsigned int editButtonOnLeft : 1; 
        unsigned int barLayoutIsValid : 1; 
        unsigned int reselectTab : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int preferTabBarFocused : 1; 
        unsigned int offscreen : 1; 
        unsigned int hidNavBar : 1; 
    }  _tabBarControllerFlags;
    id  _tabBarItemsToViewControllers;
    int  _tabBarPosition;
    UIGestureRecognizer * _touchDetectionGestureRecognizer;
    UIViewController * _transientViewController;
    UIView * _viewControllerTransitionView;
}

@property (setter=_setAccessoryView:, nonatomic, retain) UIView *_accessoryView;
@property (setter=_setAnimator:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *_animator;
@property (getter=_backdropGroupName, setter=_setBackdropGroupName:, nonatomic, retain) NSString *_backdropGroupName;
@property (setter=_setInteractor:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *_interactor;
@property (nonatomic, copy) NSArray *customizableViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITabBarControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *moreChildViewControllers;
@property (nonatomic, readonly) UINavigationController *moreNavigationController;
@property (nonatomic, readonly) BOOL pu_isTabBarHidden;
@property (getter=px_isTabBarHidden, nonatomic, readonly) BOOL px_tabBarHidden;
@property (getter=_rememberedFocusedItemsByViewController, nonatomic, readonly) NSMapTable *rememberedFocusedItemsByViewController;
@property (nonatomic) unsigned int selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (nonatomic, copy) NSArray *viewControllers;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
+ (Class)_moreNavigationControllerClass;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (id)_accessoryView;
- (id)_additionalViewControllersToCheckForUserActivity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustContentViewFrameForOffscreenFocus:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustTabBarFrameForOffscreenFocus:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 barPosition:(int)arg2;
- (id)_allContainedViewControllers;
- (BOOL)_allowSelectionWithinMoreList;
- (BOOL)_allowsAutorotation;
- (BOOL)_allowsCustomizing;
- (id)_animator;
- (id)_backdropBarGroupName;
- (id)_backdropGroupName;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (id)_deepestUnambiguousResponder;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
- (unsigned int)_effectiveMaxItems;
- (int)_effectiveTabBarPosition;
- (id)_existingMoreNavigationController;
- (void)_forgetFocusedItemForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; int x7; }*)arg1;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (BOOL)_ignoreUnselectedTabsForStateRestoration;
- (id)_interactor;
- (BOOL)_isBarHidden;
- (BOOL)_isPresentationContextByDefault;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_isTabBarFocused;
- (void)_layoutContainerView;
- (void)_layoutViewController:(id)arg1;
- (id)_overridingDestinationEnvironmentForFocusUpdateInContext:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (void)_performFocusGesture:(unsigned int)arg1;
- (void)_performLeftGesture:(id)arg1;
- (void)_performRightGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performTouchDetectionGesture:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)_prepareTabBar;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
- (id)_recallRememberedFocusedItemForViewController:(id)arg1;
- (void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (id)_rememberedFocusedItemsByViewController;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1;
- (id)_selectedViewControllerInTabBar;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAnimator:(id)arg1;
- (void)_setBackdropGroupName:(id)arg1;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (void)_setInteractor:(id)arg1;
- (void)_setMaximumNumberOfItems:(unsigned int)arg1;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (void)_setSelectedViewControllerNeedsLayout;
- (void)_setTabBarPosition:(int)arg1;
- (void)_setTabBarVisualAltitude;
- (void)_setUpFocusContainerGuides;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_shouldUseOnePartRotation;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (int)_subclassPreferredFocusedViewPrioritizationType;
- (void)_tabBarItemClicked:(id)arg1;
- (int)_tabBarPosition;
- (id)_transitionView;
- (BOOL)_transitionsChildViewControllers;
- (void)_updateGestureRecognizersForTraitCollection:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (void)_updateOffscreenStatus:(BOOL)arg1;
- (id)_viewControllerForSelectAtIndex:(unsigned int)arg1;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (id)_viewControllersInTabBar;
- (id)_viewForViewController:(id)arg1;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (id)_wrapperViewForViewController:(id)arg1;
- (id)allViewControllers;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)becomeFirstResponder;
- (void)beginCustomizingTabBar:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)concealTabBarSelection;
- (id)customizableViewControllers;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)focusedViewDidChange;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideBarWithTransition:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)moreChildViewControllers;
- (id)moreNavigationController;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (int)preferredInterfaceOrientationForPresentation;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)purgeMemoryForReason:(int)arg1;
- (void)revealTabBarSelection;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (unsigned int)selectedIndex;
- (id)selectedViewController;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMoreChildViewControllers:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (void)setTabBar:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setView:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)showBarWithTransition:(int)arg1;
- (BOOL)showsEditButtonOnLeft;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)tabBar;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transientViewController;
- (id)transitionCoordinator;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidStart:(id)arg1;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (BOOL)pu_isTabBarHidden;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)arg1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (BOOL)px_canPerformAddToTabAnimationForTab:(unsigned int)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_frameForTabItem:(unsigned int)arg1 inCoordinateSpace:(id)arg2;
- (BOOL)px_isTabBarHidden;
- (id)px_navigateToMemoryWithLocalIdentifier:(id)arg1;
- (void)px_performAddToTabAnimation:(unsigned int)arg1 withSnapshotView:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)selectedNavigationController;

@end
