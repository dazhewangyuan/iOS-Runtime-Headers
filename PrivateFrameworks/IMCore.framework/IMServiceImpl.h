/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMServiceImpl : IMService {
    NSArray * _abProperties;
    BOOL  _allowsMultipleConnections;
    IMAccount * _bestAccount;
    NSMutableDictionary * _cardMap;
    NSString * _countryCode;
    NSDictionary * _defaultSettings;
    NSArray * _emailDomains;
    BOOL  _handlesChatInvites;
    BOOL  _hasLoadedServiceProperties;
    BOOL  _ignoresNetworkConnectivity;
    NSData * _imageData;
    BOOL  _isPersistent;
    BOOL  _isPlugInService;
    NSString * _localizedName;
    NSString * _localizedShortName;
    NSString * _name;
    NSDictionary * _personToIDMap;
    unsigned int  _screenNameSensitivity;
    NSDictionary * _serviceDefaults;
    NSDictionary * _serviceProps;
    BOOL  _shouldDisableDeactivation;
    BOOL  _shouldInternationalizeNumbers;
    NSArray * _siblingServiceNames;
    BOOL  _supportsAdding;
    BOOL  _supportsAudioMessages;
    BOOL  _supportsAuthorization;
    BOOL  _supportsDatabaseStorage;
    BOOL  _supportsGroupAttachments;
    BOOL  _supportsIDStatusLookup;
    BOOL  _supportsMutatingGroupMembers;
    BOOL  _supportsOfflineTransfers;
    BOOL  _supportsOneSessionForAllAccounts;
    BOOL  _supportsPhoneNumberMapping;
    BOOL  _supportsPresence;
    BOOL  _supportsRegistration;
    BOOL  _supportsSMS;
}

@property (nonatomic, readonly) unsigned int IDSensitivity;
@property (nonatomic, readonly) BOOL _supportsDatabaseStorage;
@property (nonatomic, readonly) BOOL _wantsInternationizedNumbers;
@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly) NSArray *accountIDs;
@property (nonatomic, readonly) NSArray *addressBookProperties;
@property (nonatomic, readonly) NSString *addressBookProperty;
@property (nonatomic, readonly) BOOL allowsMultipleConnections;
@property (nonatomic, readonly) int buddyNotesMaxByteLength;
@property (nonatomic, readonly) NSDictionary *cardMap;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSDictionary *defaultAccountSettings;
@property (nonatomic, readonly) NSArray *emailDomains;
@property (nonatomic, readonly) BOOL handlesChatInvites;
@property (nonatomic, readonly) BOOL ignoresNetworkConnectivity;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) BOOL isPersistent;
@property (nonatomic, readonly) BOOL isPlugInService;
@property (nonatomic, readonly) int maxAttachmentSize;
@property (nonatomic, readonly) int maxChatParticipants;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSDictionary *serviceDefaults;
@property (nonatomic, readonly) NSData *serviceImageData;
@property (nonatomic, retain) NSDictionary *serviceProperties;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) BOOL shouldDisableDeactivation;
@property (nonatomic, readonly) NSArray *siblingServices;
@property (nonatomic, readonly) BOOL supportsAdding;
@property (nonatomic, readonly) BOOL supportsAudioMessages;
@property (nonatomic, readonly) BOOL supportsAuthorization;
@property (nonatomic, readonly) BOOL supportsGroupAttachments;
@property (nonatomic, readonly) BOOL supportsIDStatusLookup;
@property (nonatomic, readonly) BOOL supportsMutatingGroupMembers;
@property (nonatomic, readonly) BOOL supportsOfflineTransfers;
@property (nonatomic, readonly) BOOL supportsOneSessionForAllAccounts;
@property (nonatomic, readonly) BOOL supportsPhoneNumberMapping;
@property (nonatomic, readonly) BOOL supportsPresence;
@property (nonatomic, readonly) BOOL supportsRegistration;

+ (id)activeServices;
+ (id)allServices;
+ (id)allServicesNonBlocking;
+ (id)connectedServices;
+ (id)connectedServicesWithCapability:(unsigned int)arg1;
+ (BOOL)iMessageEnabled;
+ (BOOL)mmsEnabled;
+ (id)operationalServicesWithCapability:(unsigned int)arg1;
+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)servicesWithCapability:(unsigned int)arg1;
+ (void)setServiceClass:(Class)arg1;
+ (BOOL)smsEnabled;
+ (id)supportedCountryCodes;
+ (BOOL)systemSupportsSMSSending;
+ (BOOL)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(int*)arg2;

- (void).cxx_destruct;
- (unsigned int)IDSensitivity;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_dumpCardMap;
- (void)_loadPropertiesIfNeeded;
- (id)_newIDToCardMap;
- (id)_personToIDMap;
- (BOOL)_supportsDatabaseStorage;
- (void)_syncWithRemoteBuddies;
- (BOOL)_wantsInternationizedNumbers;
- (Class)accountClass;
- (id)accountIDs;
- (void)activeAccountsChanged:(id)arg1;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (BOOL)allowsMultipleConnections;
- (int)buddyNotesMaxByteLength;
- (id)canonicalFormOfID:(id)arg1;
- (id)cardMap;
- (void)clearIDToCardMap;
- (int)compareNames:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)defaultAccountSettings;
- (void)defaultsChanged:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)doneSetup;
- (id)emailDomains;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (BOOL)handlesChatInvites;
- (BOOL)ignoresNetworkConnectivity;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int*)arg3;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int*)arg2;
- (id)imABPeopleWithScreenName:(id)arg1 options:(unsigned int)arg2;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)initialSyncPerformed;
- (id)internalName;
- (BOOL)isEnabled;
- (BOOL)isPersistent;
- (BOOL)isPlugInService;
- (id)localizedName;
- (id)localizedShortName;
- (int)maxAttachmentSize;
- (int)maxChatParticipants;
- (id)myScreenNames;
- (id)name;
- (id)normalizedFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)serviceDefaults;
- (id)serviceImageData;
- (id)serviceProperties;
- (void)setCountryCode:(id)arg1;
- (void)setDefaultAccountSettings:(id)arg1;
- (void)setServiceDefaults:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (id)shortName;
- (BOOL)shouldDisableDeactivation;
- (id)siblingServices;
- (unsigned int)status;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (id)subtypeInformationForAccount:(id)arg1;
- (BOOL)supportsAdding;
- (BOOL)supportsAudioMessages;
- (BOOL)supportsAuthorization;
- (BOOL)supportsGroupAttachments;
- (BOOL)supportsIDStatusLookup;
- (BOOL)supportsMutatingGroupMembers;
- (BOOL)supportsOfflineTransfers;
- (BOOL)supportsOneSessionForAllAccounts;
- (BOOL)supportsPhoneNumberMapping;
- (BOOL)supportsPresence;
- (BOOL)supportsRegistration;
- (void)updateIDToCardMapWithNotification:(id)arg1;

@end
