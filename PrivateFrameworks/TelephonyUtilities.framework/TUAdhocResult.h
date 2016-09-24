/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAdhocResult : NSObject <TUSearchResult> {
    TUSearchController * _searchController;
    NSString * _value;
}

@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *callerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *handles;
@property (readonly) unsigned int hash;
@property (readonly) NSString *idsCanonicalDestination;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (readonly) NSString *idsUniqueId;
@property (readonly) NSString *isoCountryCode;
@property (readonly) int mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property TUSearchController *searchController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)backingContact;
- (id)backingContactId;
- (id)callerId;
- (id)destinationId;
- (id)displayName;
- (id)handles;
- (id)idsCanonicalDestination;
- (id)idsCanonicalDestinations;
- (id)idsUniqueId;
- (id)initWithString:(id)arg1;
- (id)isoCountryCode;
- (int)mostRecentCallType;
- (BOOL)mostRecentCallWasMissed;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
