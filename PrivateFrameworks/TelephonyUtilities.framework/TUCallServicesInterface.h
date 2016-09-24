/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallServicesInterface : NSObject <TUCallServicesClient, TUCallServicesProtocol> {
    TUCallCenter * _callCenter;
    TUCallNotificationManager * _callNotificationManager;
    TUCallServicesClientCapabilities * _callServicesClientCapabilities;
    int  _connectionRequestNotificationToken;
    NSArray * _currentCalls;
    <TUCallServicesDaemonDelegate> * _daemonDelegate;
    BOOL  _hasDaemonDelegateLaunched;
    NSObject<OS_dispatch_semaphore> * _initialStateSemaphore;
    NSArray * _localProxyCalls;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _uniqueProxyIdentifierToProxyCall;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) TUCallCenter *callCenter;
@property (nonatomic, retain) TUCallNotificationManager *callNotificationManager;
@property (nonatomic, retain) TUCallServicesClientCapabilities *callServicesClientCapabilities;
@property (nonatomic) int connectionRequestNotificationToken;
@property (nonatomic, copy) NSArray *currentCalls;
@property (nonatomic) <TUCallServicesDaemonDelegate> *daemonDelegate;
@property (nonatomic, readonly) BOOL daemonDelegateIsLocal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDaemonDelegateLaunched;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *initialStateSemaphore;
@property (nonatomic, copy) NSArray *localProxyCalls;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) void*queueContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *uniqueProxyIdentifierToProxyCall;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2;
- (id)_proxyCallWithCall:(id)arg1;
- (id)_proxyCallWithUniqueProxyIdentifier:(id)arg1;
- (void)_setUpXPCConnection;
- (void)_tearDownXPCConnection;
- (void)_tearDownXPCConnectionAndReconnectIfNecessary;
- (void)_updateCurrentCallsWithoutNotifications:(id)arg1;
- (void)_updateLocalProxyCallsWithCalls:(id)arg1;
- (void)answerCallWithRequest:(id)arg1;
- (id)callCenter;
- (id)callNotificationManager;
- (id)callServicesClientCapabilities;
- (int)connectionRequestNotificationToken;
- (id)currentCalls;
- (id)daemonDelegate;
- (BOOL)daemonDelegateIsLocal;
- (id)daemonDelegateWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)dialWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)disconnectAllCalls;
- (void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
- (void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
- (void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2 reply:(id /* block */)arg3;
- (void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;
- (BOOL)hasDaemonDelegateLaunched;
- (void)holdCallWithUniqueProxyIdentifier:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 callCenter:(id)arg2;
- (id)initialStateSemaphore;
- (id)localProxyCalls;
- (void)performBlockOnQueue:(id /* block */)arg1;
- (void)performBlockOnQueue:(id /* block */)arg1 andWait:(BOOL)arg2;
- (void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pullRelayingCallsFromClient;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (id)queue;
- (void*)queueContext;
- (void)registerCall:(id)arg1;
- (void)requestCurrentStateWithCompletionHandler:(id /* block */)arg1;
- (void)resetCallProvisionalStates;
- (void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
- (void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
- (void)sendTelephonyDigits:(id)arg1;
- (void)setCallCenter:(id)arg1;
- (void)setCallNotificationManager:(id)arg1;
- (void)setCallServicesClientCapabilities:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setConnectionRequestNotificationToken:(int)arg1;
- (void)setCurrentCalls:(id)arg1;
- (void)setCurrentInputDeviceToDeviceWithUID:(id)arg1;
- (void)setCurrentOutputDeviceToDeviceWithUID:(id)arg1;
- (void)setDaemonDelegate:(id)arg1;
- (void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (void)setHasDaemonDelegateLaunched:(BOOL)arg1;
- (void)setInitialStateSemaphore:(id)arg1;
- (void)setLocalProxyCalls:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
- (void)setUniqueProxyIdentifierToProxyCall:(id)arg1;
- (void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)swapCalls;
- (id)synchronousDaemonDelegateWithErrorHandler:(id /* block */)arg1;
- (void)tearDownXPCConnection;
- (void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
- (void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
- (id)uniqueProxyIdentifierToProxyCall;
- (void)updateCallWithProxy:(id)arg1;
- (id)xpcConnection;

@end
