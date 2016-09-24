/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatInputController : NSObject <CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKDeviceOrientationManagerDelegate, CKFullScreenAppViewControllerDelegate, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate, CKMessageEntryViewInputDelegate, CKPhotoBrowserViewControllerSendDelegate, CKPluginEntryViewControllerDelegate> {
    IMBalloonPlugin * _browserPlugin;
    IMBalloonPluginDataSource * _browserPluginDataSource;
    CKBrowserSwitcherViewController * _browserSwitcher;
    CKKeyboardContentViewController * _currentInputViewController;
    <CKChatInputControllerDelegate> * _delegate;
    CKBrowserTransitionCoordinator * _digitalTouchTransitionCoordinator;
    UIWindow * _dimmingWindow;
    IMScheduledUpdater * _dismissEntryViewShelfUpdater;
    CKMessageEntryView * _entryView;
    CKHandwritingPresentationController * _handwritingPresentationController;
    BOOL  _inCollapseOrExpandAnimation;
    BOOL  _inputViewVisible;
    BOOL  _invalidateDigitalTouchTransitionCoordinatorOnDTDismissal;
    BOOL  _keyboardIsHiding;
    int  _lastSeenOrientation;
    UIViewController<CKBrowserViewControllerProtocol> * _modalBrowserViewController;
    CKDeviceOrientationManager * _orientationManager;
    CKScheduledUpdater * _orientationUpdater;
    UINavigationController * _presentedBrowserNavigationController;
    BOOL  _shouldRestoreAppSwitcher;
    BOOL  _shouldSuppressStatusBarForHandwriting;
    UIViewController * _statusBarStyleViewController;
    CKKeyboardContentViewController * _switcherInputViewController;
}

@property (nonatomic, readonly) BOOL appStoreIsDisplayed;
@property (nonatomic, retain) IMBalloonPlugin *browserPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *browserPluginDataSource;
@property (nonatomic, readonly) BOOL browserShouldAutorotate;
@property (nonatomic, readonly) unsigned int browserSupportedInterfaceOrientations;
@property (nonatomic, retain) CKBrowserSwitcherViewController *browserSwitcher;
@property (nonatomic, retain) CKKeyboardContentViewController *currentInputViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKChatInputControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKBrowserTransitionCoordinator *digitalTouchTransitionCoordinator;
@property (nonatomic, retain) UIWindow *dimmingWindow;
@property (nonatomic, retain) IMScheduledUpdater *dismissEntryViewShelfUpdater;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic, retain) CKHandwritingPresentationController *handwritingPresentationController;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inCollapseOrExpandAnimation;
@property (getter=isInputViewVisible, nonatomic) BOOL inputViewVisible;
@property (nonatomic) BOOL invalidateDigitalTouchTransitionCoordinatorOnDTDismissal;
@property (nonatomic) BOOL keyboardIsHiding;
@property (nonatomic) int lastSeenOrientation;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *modalBrowserViewController;
@property (nonatomic, retain) CKDeviceOrientationManager *orientationManager;
@property (nonatomic, retain) CKScheduledUpdater *orientationUpdater;
@property (nonatomic, retain) UINavigationController *presentedBrowserNavigationController;
@property (nonatomic, readonly) BOOL presentsHandwritingOnRotation;
@property (nonatomic) BOOL shouldRestoreAppSwitcher;
@property (nonatomic) BOOL shouldSuppressStatusBarForHandwriting;
@property (nonatomic, retain) UIViewController *statusBarStyleViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKKeyboardContentViewController *switcherInputViewController;

- (void).cxx_destruct;
- (id)_adamIDFromPluginPayloadData:(id)arg1;
- (void)_addGesturesToDimmingWindow:(id)arg1;
- (id)_browserViewControllerForInterfaceOrientationMethods;
- (id)_createDimmingWindow;
- (BOOL)_currentPluginIsDT;
- (BOOL)_currentPluginIsPhotos;
- (void)_deferredCommitPayload:(id)arg1;
- (void)_deferredCommitSticker:(id)arg1;
- (void)_deferredDismissToKeyboardAndFocusEntryView:(id)arg1;
- (void)_deferredRequestPresentationStyleExpanded:(id)arg1;
- (void)_dimmingWindowSwiped:(id)arg1;
- (void)_dimmingWindowTapped:(id)arg1;
- (void)_dismissBrowserViewControllerAndReloadInputViews:(BOOL)arg1;
- (void)_flashDimmingWindowWithFadeDuration:(float)arg1 initialAlpha:(float)arg2;
- (void)_handleOrientation;
- (void)_launchAppExtensionForDebugging;
- (void)_loadPhotosBrowser;
- (void)_loadPhotosBrowserCollapsingEntryField:(BOOL)arg1;
- (void)_openContainingBundleID:(id)arg1 applicationService:(id)arg2 withURL:(id)arg3 pluginID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_reconfigurePluginDataSourceWithBalloonControllerIfNecessary;
- (void)_restoreDimmingWindow;
- (void)_setupObserverForLaunchAppExtensionForDebugging;
- (BOOL)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)arg1;
- (void)_showFullScreenBrowser:(id)arg1;
- (void)_startEditingPayload:(id)arg1;
- (BOOL)_switcherPluginCanMessageAPI;
- (BOOL)_switcherPluginCanMessageAPIOnBehalfOfPlugin:(id)arg1;
- (BOOL)appStoreIsDisplayed;
- (void)applicationWillAddDeactivationReasonNotification:(id)arg1;
- (id)browserPlugin;
- (id)browserPluginDataSource;
- (BOOL)browserShouldAutorotate;
- (unsigned int)browserSupportedInterfaceOrientations;
- (id)browserSwitcher;
- (void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(int)arg3;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(int)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(int)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(int)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(int)arg2;
- (void)clearBrowserViewControllerIfNecessary;
- (void)commitPayload:(id)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 atScreenCoordinate:(struct CGPoint { double x1; double x2; })arg2 scale:(float)arg3 rotation:(float)arg4;
- (void)commitSticker:(id)arg1 forPlugin:(id)arg2;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (id)currentInputViewController;
- (void)dealloc;
- (id)delegate;
- (void)deviceOrientationManager:(id)arg1 orientationDidChange:(int)arg2;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)didTransitionFromOrientation:(int)arg1 toOrientation:(int)arg2;
- (id)digitalTouchTransitionCoordinator;
- (id)dimmingWindow;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(BOOL)arg1;
- (void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(id)arg2;
- (void)dismissBrowserViewController;
- (void)dismissEntryViewShelf;
- (id)dismissEntryViewShelfUpdater;
- (void)dismissPlugin;
- (void)dismissToKeyboard:(BOOL)arg1;
- (id)dragControllerTranscriptDelegate;
- (id)entryView;
- (void)entryViewDidChangeSize;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (BOOL)handwritingIsDisplayed;
- (id)handwritingPresentationController;
- (void)handwritingPresentationControllerDidShowHandwriting:(id)arg1;
- (void)handwritingPresentationControllerWillHideHandwriting:(id)arg1;
- (BOOL)inCollapseOrExpandAnimation;
- (id)init;
- (id)inputAccessoryView;
- (id)inputViewController;
- (BOOL)invalidateDigitalTouchTransitionCoordinatorOnDTDismissal;
- (BOOL)isInputViewVisible;
- (void)keyboardDidHide:(id)arg1;
- (BOOL)keyboardIsHiding;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (int)lastSeenOrientation;
- (BOOL)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewDigitalTouchButtonHit:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (int)messageEntryViewHighLightInputButton:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (id)modalBrowserViewController;
- (void)notifyBrowserViewControllerOfMatchingNewMessages:(id)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)orientationManager;
- (id)orientationUpdater;
- (id)pluginBundleID;
- (void)prepareForSuspend;
- (void)presentAppStoreForAdamID:(id)arg1;
- (void)presentAppStoreForURL:(id)arg1;
- (void)presentAppStoreToManagedTabForPlugin:(id)arg1;
- (void)presentViewControllerWithPluginChatItem:(id)arg1 expanded:(BOOL)arg2;
- (id)presentedBrowserNavigationController;
- (BOOL)presentsHandwritingOnRotation;
- (void)requestPhotoBrowserInitFromDraft:(id)arg1;
- (void)requestPhotoBrowserToAppendFinalImagesToComposition;
- (void)requestPhotoBrowserToPrepareForDraft;
- (void)requestPresentationStyleExpanded:(BOOL)arg1;
- (void)requestPresentationStyleExpanded:(BOOL)arg1 forPlugin:(id)arg2;
- (void)setBrowserPlugin:(id)arg1;
- (void)setBrowserPluginDataSource:(id)arg1;
- (void)setBrowserSwitcher:(id)arg1;
- (void)setCurrentInputViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitalTouchTransitionCoordinator:(id)arg1;
- (void)setDimmingWindow:(id)arg1;
- (void)setDismissEntryViewShelfUpdater:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewHidden:(BOOL)arg1;
- (void)setHandwritingPresentationController:(id)arg1;
- (void)setInCollapseOrExpandAnimation:(BOOL)arg1;
- (void)setInputViewVisible:(BOOL)arg1;
- (void)setInputViewVisible:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setInvalidateDigitalTouchTransitionCoordinatorOnDTDismissal:(BOOL)arg1;
- (void)setKeyboardIsHiding:(BOOL)arg1;
- (void)setLastSeenOrientation:(int)arg1;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)setModalBrowserViewController:(id)arg1;
- (void)setOrientationManager:(id)arg1;
- (void)setOrientationUpdater:(id)arg1;
- (void)setPresentedBrowserNavigationController:(id)arg1;
- (void)setShouldRestoreAppSwitcher:(BOOL)arg1;
- (void)setShouldSuppressStatusBarForHandwriting:(BOOL)arg1;
- (void)setStatusBarStyleViewController:(id)arg1;
- (void)setSwitcherInputViewController:(id)arg1;
- (BOOL)shouldRestoreAppSwitcher;
- (BOOL)shouldSuppressStatusBarForHandwriting;
- (void)showAppsBrowser;
- (void)showBrowserForPlugin:(id)arg1 dataSource:(id)arg2 expanded:(BOOL)arg3;
- (void)showDTCompose;
- (void)showEntryViewShelf:(id)arg1;
- (void)showHandwritingBrowser;
- (void)showHandwritingBrowserWithExistingPayload:(id)arg1;
- (void)showKeyboard;
- (void)showPhotosBrowser;
- (void)showPhotosBrowserCollapsingEntryField:(BOOL)arg1;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2;
- (void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 forPlugin:(id)arg3;
- (id)statusBarStyleViewController;
- (id)switcherInputViewController;
- (void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
- (void)switcherViewControllerDidStartSwitching:(id)arg1;
- (id)transcriptEntryViewForBrowserTransitionCoordinator:(id)arg1;
- (id)workingDirForDraft;

@end
