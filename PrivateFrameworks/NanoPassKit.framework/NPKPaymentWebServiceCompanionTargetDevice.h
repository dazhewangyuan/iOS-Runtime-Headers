/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentWebServiceCompanionTargetDevice : NPKPaymentWebServiceTargetDevice <IDSServiceDelegate, PKPaymentWebServiceArchiver, PKPaymentWebServiceTargetDeviceProtocol> {
    NPKCompanionAgentConnection * _companionAgentConnection;
    unsigned int  _context;
    <NPKPaymentWebServiceCompanionTargetDeviceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _outstandingRequests;
    NRActiveDeviceAssertion * _provisioningActiveDeviceAssertion;
    IDSService * _provisioningService;
    NSObject<OS_dispatch_queue> * _responseQueue;
}

@property (nonatomic, retain) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic) unsigned int context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKPaymentWebServiceCompanionTargetDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, retain) NRActiveDeviceAssertion *provisioningActiveDeviceAssertion;
@property (nonatomic, retain) IDSService *provisioningService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_deviceIsDaytonaOrLater;
- (void)_getPairingInfoWithCompletion:(id /* block */)arg1;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3;
- (id)_serialNumbersOfAllPairedDevices;
- (void)_setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg1;
- (void)_setNewAuthRandomReturningPairingState:(id /* block */)arg1;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (id)bridgedClientInfo;
- (id)companionAgentConnection;
- (void)configurationDataResponse:(id)arg1;
- (unsigned int)context;
- (id)delegate;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)didRegisterResponse:(id)arg1;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(id /* block */)arg1;
- (void)getPairingInfoResponse:(id)arg1;
- (void)handlePaymentOptionsDefaultsChanged;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)handleShowPaymentSetupRequest:(id)arg1;
- (void)handleValueAddedServiceTransactions:(id)arg1;
- (void)handleWebServiceContextNeededRequest:(id)arg1;
- (id)init;
- (id)initWithContext:(unsigned int)arg1 responseQueue:(id)arg2;
- (id)internalQueue;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (id)outstandingRequests;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned int)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned int)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)preferredAIDRequest:(id)arg1;
- (void)preferredAIDResponse:(id)arg1;
- (id)provisioningActiveDeviceAssertion;
- (void)provisioningDataResponse:(id)arg1;
- (id)provisioningService;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)registrationDataResponse:(id)arg1;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)responseQueue;
- (void)secureElementCardsWithCompletion:(id /* block */)arg1;
- (void)secureElementGetAppletsResponse:(id)arg1;
- (id)secureElementIdentifiers;
- (void)secureElementRemoveAppletsResponse:(id)arg1;
- (void)sendWebServiceContextToWatch:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCompanionAgentConnection:(id)arg1;
- (void)setContext:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(id /* block */)arg1;
- (void)setNewAuthRandomResponse:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setProvisioningActiveDeviceAssertion:(id)arg1;
- (void)setProvisioningService:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)signDataResponse:(id)arg1;
- (BOOL)supportsAutomaticPassPresentation;
- (void)updatePaymentPass:(id)arg1;
- (void)updatePushToken:(id)arg1;

@end
