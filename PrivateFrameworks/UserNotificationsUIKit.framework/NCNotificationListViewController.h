/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, NCNotificationViewControllerDelegatePrivate, UIGestureRecognizerDelegate> {
    BOOL  _backgroundBlurred;
    NCNotificationListCell * _cellWithRevealedActions;
    NSMutableDictionary * _cellsSizesCaches;
    NCAnimationCoordinator * _childPreferredContentSizeChangeCoordinator;
    <NCNotificationListViewControllerDestinationDelegate> * _destinationDelegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetMargins;
    BOOL  _needsReloadData;
    BOOL  _notificationRequestRemovedWhileInLongLook;
    NCNotificationViewController * _notificationViewControllerForSizing;
    NSHashTable * _observers;
    BOOL  _supportsSwipeToDefaultAction;
    NCNotificationListTouchEater * _touchEater;
    <NCNotificationListViewControllerUserInteractionDelegate> * _userInteractionDelegate;
    struct { 
        unsigned int significantUserInteraction : 1; 
        unsigned int didScroll : 1; 
        unsigned int didEndScrolling : 1; 
    }  _userInteractionDelegateFlags;
    NCNotificationViewController * _viewControllerPresentingLongLook;
}

@property (getter=isBackgroundBlurred, nonatomic) BOOL backgroundBlurred;
@property (nonatomic) NCNotificationListCell *cellWithRevealedActions;
@property (nonatomic, retain) NSMutableDictionary *cellsSizesCaches;
@property (nonatomic, retain) NCAnimationCoordinator *childPreferredContentSizeChangeCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NCNotificationListViewControllerDestinationDelegate> *destinationDelegate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetMargins;
@property (nonatomic) BOOL needsReloadData;
@property (nonatomic) BOOL notificationRequestRemovedWhileInLongLook;
@property (nonatomic, retain) NCNotificationViewController *notificationViewControllerForSizing;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSwipeToDefaultAction;
@property (nonatomic, retain) NCNotificationListTouchEater *touchEater;
@property (nonatomic) <NCNotificationListViewControllerUserInteractionDelegate> *userInteractionDelegate;
@property (nonatomic) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; } userInteractionDelegateFlags;
@property (nonatomic, retain) NCNotificationViewController *viewControllerPresentingLongLook;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_forceTouchAvailabilityDidChange:(id)arg1;
- (void)_handleEatenTouch:(id)arg1;
- (void)_installTouchEater;
- (BOOL)_isPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1 insideCell:(id)arg2;
- (void)_performCollectionViewOperationBlock:(id /* block */)arg1;
- (void)_performCollectionViewOperationBlockIfNecessary:(id /* block */)arg1;
- (void)_reloadCollectionViewDataIfNecessary;
- (void)_removeCachedSizesForNotificationRequest:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (id)cellWithRevealedActions;
- (id)cellsSizesCaches;
- (id)childPreferredContentSizeChangeCoordinator;
- (void)clearAll;
- (void)clearAllNonPersistent;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)customBackgroundViewForNotificationListCell:(id)arg1;
- (id)customBackgroundViewForNotificationViewController:(id)arg1;
- (id)destinationDelegate;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasVisibleContent;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)init;
- (void)insertNotificationRequest:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMargins;
- (BOOL)isBackgroundBlurred;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (BOOL)needsReloadData;
- (void)notificationListCell:(id)arg1 requestsClearingNotificationRequest:(id)arg2;
- (void)notificationListCell:(id)arg1 requestsPerformAction:(id)arg2 forNotificationRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)notificationListCell:(id)arg1 requestsPresentingLongLookForNotificationRequest:(id)arg2;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellHideCellActions:(id)arg1;
- (void)notificationListCellRevealCellActions:(id)arg1;
- (BOOL)notificationListCellShouldShowActionsForNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestInLongLook;
- (BOOL)notificationRequestRemovedWhileInLongLook;
- (void)notificationViewController:(id)arg1 didDismissLongLook:(BOOL)arg2;
- (void)notificationViewController:(id)arg1 didPresentLongLook:(BOOL)arg2;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (id)notificationViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(id /* block */)arg2;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (id)notificationViewControllerForSizing;
- (BOOL)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (BOOL)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notifyContentObservers;
- (id)observers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeContentObserver:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBackgroundBlurred:(BOOL)arg1;
- (void)setCellWithRevealedActions:(id)arg1;
- (void)setCellsSizesCaches:(id)arg1;
- (void)setChildPreferredContentSizeChangeCoordinator:(id)arg1;
- (void)setDestinationDelegate:(id)arg1;
- (void)setNeedsReloadData:(BOOL)arg1;
- (void)setNotificationRequestRemovedWhileInLongLook:(BOOL)arg1;
- (void)setNotificationViewControllerForSizing:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSupportsSwipeToDefaultAction:(BOOL)arg1;
- (void)setTouchEater:(id)arg1;
- (void)setTouchEaterEnabled:(BOOL)arg1;
- (void)setUserInteractionDelegate:(id)arg1;
- (void)setUserInteractionDelegateFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
- (void)setViewControllerPresentingLongLook:(id)arg1;
- (BOOL)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (BOOL)supportsSwipeToDefaultAction;
- (id)touchEater;
- (id)userInteractionDelegate;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; })userInteractionDelegateFlags;
- (id)viewControllerPresentingLongLook;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;

@end
