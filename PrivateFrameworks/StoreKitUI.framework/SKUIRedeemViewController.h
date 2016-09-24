/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemViewController : UINavigationController {
    BOOL  _attempsAutomaticRedeem;
    BOOL  _cameraRedeemEnabled;
    int  _category;
    SKUIClientContext * _clientContext;
    int  _initialBarStyle;
    NSString * _initialCode;
    NSOperationQueue * _operationQueue;
    SKUIRedeemPreflightOperation * _preflightOperation;
    SKUIRedeemConfiguration * _redeemConfiguration;
    SKUIRedeemStepViewController * _rootViewController;
}

@property (nonatomic) BOOL attempsAutomaticRedeem;
@property (nonatomic, readonly) int category;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) NSString *initialCode;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_attemptAutomaticRedeemWithMetadata:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_finishPreflightWithResult:(id)arg1;
- (void)_loadRootViewController;
- (id)_newRootViewController;
- (void)_showRootViewController;
- (BOOL)attempsAutomaticRedeem;
- (int)category;
- (id)clientContext;
- (id)initWithRedeemCategory:(int)arg1;
- (id)initialCode;
- (id)operationQueue;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)redeemAgainAnimated:(BOOL)arg1;
- (void)setAttempsAutomaticRedeem:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setInitialCode:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
