/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate> {
    _UIBackdropView * _backdropView;
    BOOL  _backlightActive;
    NSArray * _fieldPassUniqueIdentifiers;
    PKFieldProperties * _fieldProperties;
    NSObject<OS_dispatch_group> * _fieldPropertiesLookupGroup;
    BOOL  _homeButtonDoubleTapAlertHasOccurred;
    PKPassGroupsViewController * _passGroupsViewController;
    NSString * _passUniqueIdentifier;
    CLInUseAssertion * _passbookForegroundAssertion;
    PKPaymentService * _paymentService;
    int  _presentationSource;
    unsigned int  _presentationStartTime;
    BOOL  _processHomeButtonEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_isSecureForRemoteViewService;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)groupsControllerWithSource:(int)arg1;

- (void).cxx_destruct;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)arg1;
- (void)_dismissForSource:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_dismissIfRestricted;
- (BOOL)_notificationIsFromChildViewController:(id)arg1;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_setupGroupController;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (void)handleHomeButtonPressed;
- (id)init;
- (void)linkedApplicationOpen:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
