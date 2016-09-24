/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTDeviceSupport : NSObject {
    BOOL  _accountModificationRestricted;
    BOOL  _blockPost;
    int  _carrierBundleSupported;
    BOOL  _commCenterDead;
    BOOL  _faceTimeBlocked;
    int  _iMessageAllowedToken;
    BOOL  _iMessageBlocked;
    BOOL  _mmsConfigured;
    NSString * _number;
    int  _performanceClass;
    BOOL  _shouldUseSIMState;
    BOOL  _simBecameNotReady;
    BOOL  _simInserted;
    BOOL  _supportsApplePay;
    BOOL  _supportsBackCamera;
    BOOL  _supportsCellularData;
    BOOL  _supportsFT;
    BOOL  _supportsFTA;
    BOOL  _supportsFrontCamera;
    BOOL  _supportsHandoff;
    BOOL  _supportsMMS;
    BOOL  _supportsNonWiFiFaceTime;
    BOOL  _supportsRegistrationControl;
    BOOL  _supportsSMS;
    BOOL  _supportsTethering;
    BOOL  _supportsWLAN;
    BOOL  _supportsWiFi;
    BOOL  _supportsiMessage;
    BOOL  _wantsForcedCelluarQueries;
}

@property (nonatomic, readonly) NSDictionary *CTNetworkInformation;
@property (nonatomic, readonly) BOOL SIMInserted;
@property (nonatomic, readonly) BOOL accountModificationRestricted;
@property (nonatomic, readonly) BOOL callingAvailable;
@property (nonatomic, readonly) BOOL callingBlocked;
@property (nonatomic, readonly) BOOL callingSupported;
@property (nonatomic, readonly) BOOL commCenterDead;
@property (nonatomic, readonly) BOOL conferencingAllowed;
@property (nonatomic, readonly) BOOL conferencingBlocked;
@property (nonatomic, readonly) BOOL conferencingEnabled;
@property (nonatomic, readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSString *deviceIDPrefix;
@property (nonatomic, readonly) NSString *deviceInformationString;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) int deviceType;
@property (nonatomic, readonly) NSString *deviceTypeIDPrefix;
@property (nonatomic, readonly) NSString *enclosureColor;
@property (nonatomic, readonly) BOOL faceTimeAvailable;
@property (nonatomic, readonly) BOOL faceTimeBlocked;
@property (nonatomic, readonly) BOOL faceTimeSupported;
@property (nonatomic, readonly) BOOL iMessageAvailable;
@property (nonatomic, readonly) BOOL iMessageBlocked;
@property (nonatomic, readonly) BOOL iMessageSupported;
@property (nonatomic, readonly) BOOL identityServicesSupported;
@property (nonatomic, readonly) BOOL isC2KEquipment;
@property (nonatomic, readonly) BOOL isInMultiUserMode;
@property (nonatomic, readonly) BOOL isTelephonyDevice;
@property (nonatomic, readonly) BOOL madridAvailable;
@property (nonatomic, readonly) BOOL madridBlocked;
@property (nonatomic, readonly) BOOL madridSupported;
@property (nonatomic, readonly) BOOL mmsConfigured;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) BOOL nonWifiCallingAvailable;
@property (nonatomic, readonly) BOOL nonWifiFaceTimeAvailable;
@property (nonatomic, readonly) int performanceClass;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) BOOL registrationSupported;
@property (nonatomic, readonly) BOOL supportsAppleIDIdentification;
@property (nonatomic, readonly) BOOL supportsApplePay;
@property (nonatomic, readonly) BOOL supportsBackFacingCamera;
@property (nonatomic, readonly) BOOL supportsCellularData;
@property (nonatomic, readonly) BOOL supportsFrontFacingCamera;
@property (nonatomic, readonly) BOOL supportsHandoff;
@property (nonatomic, readonly) BOOL supportsMMS;
@property (nonatomic, readonly) BOOL supportsNonWiFiCalling;
@property (nonatomic, readonly) BOOL supportsNonWiFiFaceTime;
@property (nonatomic, readonly) BOOL supportsRegistrationControl;
@property (nonatomic, readonly) BOOL supportsSMS;
@property (nonatomic, readonly) BOOL supportsSMSIdentification;
@property (nonatomic, readonly) BOOL supportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic, readonly) BOOL supportsTethering;
@property (nonatomic, readonly) BOOL supportsWLAN;
@property (nonatomic, readonly) BOOL supportsWiFi;
@property (nonatomic, readonly) NSString *telephoneNumber;
@property (nonatomic, readonly) NSDictionary *telephonyCapabilities;
@property (nonatomic, readonly) NSString *userAgentString;
@property (nonatomic, readonly) BOOL wantsBreakBeforeMake;
@property (nonatomic, readonly) BOOL wantsForcedCelluarQueries;

+ (id)sharedInstance;

- (id)CTNetworkInformation;
- (BOOL)SIMInserted;
- (void)_carrierChanged;
- (void)_commCenterAlive;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_operatorChanged;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_simStatusChanged:(id)arg1;
- (void)_unregisterForCarrierNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_updateCapabilities;
- (void)_updateManagedConfigurationSettings;
- (void)_watchNotifyTokens;
- (BOOL)accountModificationRestricted;
- (BOOL)callingAvailable;
- (BOOL)callingBlocked;
- (BOOL)callingSupported;
- (void)carrierSettingsChanged:(id)arg1;
- (BOOL)commCenterDead;
- (BOOL)conferencingAllowed;
- (BOOL)conferencingBlocked;
- (BOOL)conferencingEnabled;
- (void)dealloc;
- (id)deviceColor;
- (id)deviceIDPrefix;
- (id)deviceInformationString;
- (id)deviceName;
- (int)deviceType;
- (id)deviceTypeIDPrefix;
- (id)enclosureColor;
- (BOOL)faceTimeAvailable;
- (BOOL)faceTimeBlocked;
- (BOOL)faceTimeSupported;
- (BOOL)iMessageAvailable;
- (BOOL)iMessageBlocked;
- (BOOL)iMessageSupported;
- (BOOL)identityServicesSupported;
- (id)init;
- (BOOL)isC2KEquipment;
- (BOOL)isInMultiUserMode;
- (BOOL)isTelephonyDevice;
- (BOOL)madridAvailable;
- (BOOL)madridBlocked;
- (BOOL)madridSupported;
- (BOOL)mmsConfigured;
- (id)model;
- (BOOL)nonWifiAvailableForBundleId:(id)arg1;
- (BOOL)nonWifiCallingAvailable;
- (BOOL)nonWifiFaceTimeAvailable;
- (int)performanceClass;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (BOOL)registrationSupported;
- (BOOL)supportsAppleIDIdentification;
- (BOOL)supportsApplePay;
- (BOOL)supportsBackFacingCamera;
- (BOOL)supportsCellularData;
- (BOOL)supportsFrontFacingCamera;
- (BOOL)supportsHandoff;
- (BOOL)supportsMMS;
- (BOOL)supportsNonWiFiCalling;
- (BOOL)supportsNonWiFiFaceTime;
- (BOOL)supportsRegistrationControl;
- (BOOL)supportsSMS;
- (BOOL)supportsSMSIdentification;
- (BOOL)supportsSimultaneousVoiceAndDataRightNow;
- (BOOL)supportsTethering;
- (BOOL)supportsWLAN;
- (BOOL)supportsWiFi;
- (id)telephoneNumber;
- (id)telephonyCapabilities;
- (id)userAgentString;
- (BOOL)wantsBreakBeforeMake;
- (BOOL)wantsForcedCelluarQueries;
- (BOOL)wifiAllowedForBundleId:(id)arg1;

@end
