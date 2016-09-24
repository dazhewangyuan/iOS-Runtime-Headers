/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairedDeviceRegistry : NSObject <NRFrameworkDeviceDelegate, NRMutableStateParentDelegate, NRPairedDeviceRegistryXPCFrameworkDelegate, NSXPCConnectionDelegate> {
    BOOL  _areSecurePropertiesRequested;
    NSObject<OS_dispatch_queue> * _clientQueue;
    int  _demoModeNotifyToken;
    NRMutableDeviceCollection * _deviceCollection;
    NSMutableArray * _deviceCollectionUpdateBlocks;
    unsigned int  _devicesUpdateCounter;
    int  _devicesUpdateCounterNotifyToken;
    NSMutableArray * _finishedPairingSemaphores;
    BOOL  _hasSecurePropertyEntitlement;
    BOOL  _hasSomeEntitlements;
    int  _idleNotifyToken;
    BOOL  _initialLastCompatibilityStateHasBeenSent;
    BOOL  _initialStatusHasBeenSent;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BOOL  _isDeviceCollectionDiffRequested;
    BOOL  _isInitialized;
    unsigned short  _lastCompatibilityStateSent;
    unsigned int  _lastStatusSent;
    int  _maxPairingCompatibilityVersion;
    int  _minPairingCompatibilityVersion;
    NSMutableDictionary * _mutableDeviceDictionary;
    BOOL  _needToFetchSecureProperties;
    int  _pairingCompatibilityVersion;
    NSObject<OS_dispatch_queue> * _pairingOrSwitchCompleteQueue;
    BOOL  _secureDataIsAvailable;
    int  _securePropertiesUnlockedNotifyToken;
    NSMutableArray * _securePropertiesUpdateBlocks;
    NSMutableArray * _waitForDeviceCollectionBlocks;
    NSXPCConnection * _xpcConnection;
    BOOL  _xpcConnectionInvalidated;
}

@property (nonatomic) BOOL areSecurePropertiesRequested;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int demoModeNotifyToken;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NRMutableDeviceCollection *deviceCollection;
@property (nonatomic, retain) NSMutableArray *deviceCollectionUpdateBlocks;
@property (nonatomic) unsigned int devicesUpdateCounter;
@property (nonatomic) int devicesUpdateCounterNotifyToken;
@property (nonatomic, retain) NSMutableArray *finishedPairingSemaphores;
@property (nonatomic) BOOL hasSecurePropertyEntitlement;
@property (nonatomic) BOOL hasSomeEntitlements;
@property (readonly) unsigned int hash;
@property (nonatomic) int idleNotifyToken;
@property (nonatomic) BOOL initialLastCompatibilityStateHasBeenSent;
@property (nonatomic) BOOL initialStatusHasBeenSent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL isDeviceCollectionDiffRequested;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) unsigned short lastCompatibilityStateSent;
@property (nonatomic) unsigned int lastStatusSent;
@property (nonatomic) int maxPairingCompatibilityVersion;
@property (nonatomic) int minPairingCompatibilityVersion;
@property (nonatomic, retain) NSMutableDictionary *mutableDeviceDictionary;
@property (nonatomic) BOOL needToFetchSecureProperties;
@property (nonatomic) int pairingCompatibilityVersion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pairingOrSwitchCompleteQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL secureDataIsAvailable;
@property (nonatomic) int securePropertiesUnlockedNotifyToken;
@property (nonatomic, retain) NSMutableArray *securePropertiesUpdateBlocks;
@property (nonatomic, readonly) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *waitForDeviceCollectionBlocks;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL xpcConnectionInvalidated;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id /* block */)activeDeviceSelectorBlock;
+ (id /* block */)activePairedDeviceSelectorBlock;
+ (id /* block */)pairedDevicesSelectorBlock;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addRemoveRecoveryStepBackup:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDeleteAccounts:(BOOL)arg1;
- (void)_addRemoveRecoveryStepDeletePairingStore:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDisableDaemons:(BOOL)arg1;
- (void)_addRemoveRecoveryStepICloudDeletePaymentCards:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSFinalize:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSFinalizeQS:(BOOL)arg1 withPairedBTDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpair:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpairStart:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSUnpairStartQS:(BOOL)arg1 withPairedBTDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepObliterate:(BOOL)arg1 withStatePath:(id)arg2;
- (void)_addRemoveRecoveryStepRemoteUnpair:(BOOL)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3;
- (void)_addRemoveRecoveryStepResetNVRAM:(BOOL)arg1;
- (void)_addRemoveRecoveryStepStockholmReset:(BOOL)arg1;
- (void)_addRemoveRecoveryStepUnpairBluetooth:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (id)_deviceIDAtSwitchIndex:(unsigned long)arg1 date:(id*)arg2;
- (id)_findActivePairedDevice;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(id /* block */)arg1;
- (id)_getChangeHistory;
- (id)_getClientInfo;
- (id)_getLocalDeviceCollection;
- (id)_getSecureProperties:(id)arg1;
- (void)_getSwitchEventsFromIndex:(unsigned long)arg1 toIndex:(unsigned long)arg2 inlineCallback:(id /* block */)arg3;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (void)_pairingStorePathPairingID:(id /* block */)arg1;
- (void)_pingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned int)arg2 withBlock:(id /* block */)arg3;
- (id)_privateDaemonConnection;
- (id)_privateDaemonProxyWithErrorString:(id)arg1;
- (void)_qsRecoveryMigrationWithPairedBTDeviceID:(id)arg1;
- (id)_recoveryDescription;
- (void)_setObliterationEnabled:(BOOL)arg1;
- (void)_submitAlbertPairingReport;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned long)arg3;
- (BOOL)_supportsWatch;
- (id)_synchronousPrivateDaemonProxyWithErrorString:(id)arg1;
- (void)_triggerRecovery;
- (id)_xpcInitializeConnection;
- (void)_xpcInterruptionHandler;
- (void)_xpcInvalidationHandler;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (BOOL)areSecurePropertiesRequested;
- (void)beginDiscovery;
- (id)blockAndQueryVersions;
- (void)blockUntilDeviceCollectionIsInitialized;
- (void)checkStatusAndCompatibilityState;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)clientQueue;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(id /* block */)arg4;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (unsigned short)compatibilityState;
- (id)createDevicesFromMutableDevices:(id)arg1 andPropertyStore:(id)arg2;
- (void)createDevicesFromMutableDevicesAndPropertyStore:(id)arg1;
- (void)dealloc;
- (int)demoModeNotifyToken;
- (id)deviceCollection;
- (id)deviceCollectionUpdateBlocks;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (unsigned int)devicesUpdateCounter;
- (int)devicesUpdateCounterNotifyToken;
- (void)endDiscovery;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (id)finishedPairingSemaphores;
- (void)fireAllDeviceCollectionBlocksWithStatus:(BOOL)arg1;
- (void)fireAllInitialDeviceCollectionBlocksWith:(BOOL)arg1;
- (void)fireDeviceCollectionBlocksUpUntilIndex:(unsigned int)arg1;
- (id)getActivePairedDevice;
- (id)getAllDevices;
- (id)getDevices;
- (id)getDevicesMatching:(id /* block */)arg1;
- (void)getDevicesWithBlock:(id /* block */)arg1;
- (id)getPairedDevices;
- (void)getSwitchEventsFromIndex:(unsigned long)arg1 inlineCallback:(id /* block */)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (BOOL)hasSecurePropertyEntitlement;
- (BOOL)hasSomeEntitlements;
- (int)idleNotifyToken;
- (id)init;
- (void)initNotifyTokens;
- (BOOL)initialLastCompatibilityStateHasBeenSent;
- (BOOL)initialStatusHasBeenSent;
- (void)initializeWithShouldMakeEmptyDeviceCollection:(BOOL)arg1;
- (id)internalQueue;
- (BOOL)isDaemonIdle;
- (BOOL)isDeviceCollectionDiffRequested;
- (BOOL)isInitialized;
- (BOOL)isPaired;
- (unsigned short)lastCompatibilityStateSent;
- (unsigned int)lastStatusSent;
- (int)maxPairedDeviceCount;
- (int)maxPairingCompatibilityVersion;
- (int)minPairingCompatibilityVersion;
- (int)minQuickSwitchCompatibilityVersion;
- (id)mutableDeviceDictionary;
- (BOOL)needToFetchSecureProperties;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)overrideSignalStrengthLimit:(int)arg1;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
- (BOOL)pairedDeviceSupportQuickSwitch;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (int)pairingCompatibilityVersion;
- (id)pairingID;
- (id)pairingOrSwitchCompleteQueue;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(id /* block */)arg1;
- (void)parseDiffForNRDeviceUpdatesAndPairUnpair:(id)arg1 hasSecurePropertyEntitlement:(BOOL)arg2 shouldBeQuiet:(BOOL)arg3;
- (void)postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3;
- (id)queue;
- (unsigned int)readNotifyToken:(int)arg1;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(id /* block */)arg2;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (void)requestDeviceCollectionDiffWithForce:(BOOL)arg1;
- (void)requestSecureProperties;
- (void)resumePairingClientCrashMonitoring;
- (void)resumePairingOrSwitchCompleteQueue;
- (id)retrieveSecurePropertiesWithIDs:(id)arg1;
- (void)retriggerUnpairInfoDialog;
- (BOOL)secureDataIsAvailable;
- (int)securePropertiesUnlockedNotifyToken;
- (id)securePropertiesUpdateBlocks;
- (void)sendCompatibilityStateChangeNotification;
- (void)sendDevicesUpdatedNotification;
- (void)sendStatusChangeNotification;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(id /* block */)arg3;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(id /* block */)arg2;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(id /* block */)arg2;
- (void)setAreSecurePropertiesRequested:(BOOL)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDemoModeNotifyToken:(int)arg1;
- (void)setDeviceCollection:(id)arg1;
- (void)setDeviceCollectionUpdateBlocks:(id)arg1;
- (void)setDevicesUpdateCounter:(unsigned int)arg1;
- (void)setDevicesUpdateCounterNotifyToken:(int)arg1;
- (void)setFinishedPairingSemaphores:(id)arg1;
- (void)setHasSecurePropertyEntitlement:(BOOL)arg1;
- (void)setHasSomeEntitlements:(BOOL)arg1;
- (void)setIdleNotifyToken:(int)arg1;
- (void)setInitialLastCompatibilityStateHasBeenSent:(BOOL)arg1;
- (void)setInitialStatusHasBeenSent:(BOOL)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setIsDeviceCollectionDiffRequested:(BOOL)arg1;
- (void)setIsInitialized:(BOOL)arg1;
- (void)setLastCompatibilityStateSent:(unsigned short)arg1;
- (void)setLastStatusSent:(unsigned int)arg1;
- (void)setMaxPairingCompatibilityVersion:(int)arg1;
- (void)setMinPairingCompatibilityVersion:(int)arg1;
- (void)setMutableDeviceDictionary:(id)arg1;
- (void)setNeedToFetchSecureProperties:(BOOL)arg1;
- (void)setPairingCompatibilityVersion:(int)arg1;
- (void)setPairingOrSwitchCompleteQueue:(id)arg1;
- (void)setSecureDataIsAvailable:(BOOL)arg1;
- (void)setSecurePropertiesUnlockedNotifyToken:(int)arg1;
- (void)setSecurePropertiesUpdateBlocks:(id)arg1;
- (void)setWaitForDeviceCollectionBlocks:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionInvalidated:(BOOL)arg1;
- (void)setupDeviceCollectionObserver;
- (unsigned int)status;
- (BOOL)supportsPairedDevice;
- (void)suspendPairingClientCrashMonitoring;
- (unsigned long)switchIndex;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)syncDevicesWithDevice:(id)arg1;
- (void)transitionToCompatibilityState:(int)arg1 withBlock:(id /* block */)arg2;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(id /* block */)arg3;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateDeviceCollectionWithQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateSecurePropertiesWithQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)userIsCheckingForUpdate;
- (id)waitForActivePairedDevice;
- (id)waitForDeviceCollectionBlocks;
- (void)waitForPairingStorePathPairingID:(id /* block */)arg1;
- (id)xpcConnection;
- (BOOL)xpcConnectionInvalidated;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_deviceForIDSDevice:(id)arg1;

@end
