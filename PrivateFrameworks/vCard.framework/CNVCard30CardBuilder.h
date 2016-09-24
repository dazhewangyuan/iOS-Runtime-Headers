/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCard30CardBuilder : NSObject {
    unsigned int  _countOfLinesBeforePhoto;
    int  _groupCount;
    <CNVCardLineFactory> * _lineFactory;
    NSMutableArray * _lines;
    <CNVCardPerson> * _person;
    BOOL  _photoHandled;
    id /* block */  _retrofitPhoto;
    NSMutableArray * _unknownProperties;
}

+ (id)builderWithPerson:(id)arg1;

- (void).cxx_destruct;
- (void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3;
- (void)addActivityAlerts;
- (void)addAlternateBirthday;
- (void)addBeginningOfCard;
- (void)addBirthday;
- (void)addCalendarURIs;
- (void)addCardDAVUID;
- (void)addCategories;
- (void)addCompanyMarker;
- (void)addEmailAddresses;
- (void)addEndOfCard;
- (void)addFullName;
- (void)addInstantMessagingHandles:(id)arg1;
- (void)addInstantMessagingInfo;
- (void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3;
- (void)addLineWithName:(id)arg1 value:(id)arg2;
- (void)addNameComponents;
- (void)addNameLines;
- (void)addNameOrderMarker;
- (void)addNote;
- (void)addOrganization;
- (void)addOtherDates;
- (void)addPhoneNumbers;
- (void)addPhonemeData;
- (BOOL)addPhotoReferences;
- (void)addPhotoWithOptions:(id)arg1;
- (void)addPostalAddresses;
- (void)addPreferredApplePersonaIdentifier;
- (void)addPreferredLikenessSource;
- (void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2;
- (void)addRelatedNames;
- (void)addSocialProfiles;
- (void)addUID;
- (void)addURLs;
- (void)addUnknownProperties;
- (void)buildWithSerializer:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (void)preparePhotoLineWithOptions:(id)arg1;
- (void)removeUnknownPropertiesWithTag:(id)arg1;

@end
